// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1454d5c50 FUN_1454d5c50 body=327 status=ok
// SIG undefined FUN_1454d5c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454d5c50(undefined8 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_res10 [6];
  undefined8 uVar3;
  
  uVar3 = 0x1454d5c5c;
  local_res10[0] = 0;
  uVar2 = FUN_1454d5f60(param_1,local_res10);
  uVar1 = local_res10[0];
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((local_res10[0] & 8) != 0) {
    FUN_144ba24f0(5,0x79,0x78,"crypto\\dh\\dh_check.c",0x51,uVar3);
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_144ba24f0(5,0x79,0x77,"crypto\\dh\\dh_check.c",0x53,uVar3);
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_144ba24f0(5,0x79,0x74,"crypto\\dh\\dh_check.c",0x55,uVar3);
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_144ba24f0(5,0x79,0x73,"crypto\\dh\\dh_check.c",0x57,uVar3);
  }
  if ((uVar1 & 4) != 0) {
    FUN_144ba24f0(5,0x79,0x79,"crypto\\dh\\dh_check.c",0x59);
  }
  if ((uVar1 & 1) != 0) {
    FUN_144ba24f0(5,0x79,0x75,"crypto\\dh\\dh_check.c",0x5b);
  }
  if ((uVar1 & 2) != 0) {
    FUN_144ba24f0(5,0x79,0x76,"crypto\\dh\\dh_check.c",0x5d);
  }
  return (ulonglong)(uVar1 == 0);
}



// FUNCTION 1454d5da0 FUN_1454d5da0 body=179 status=ok
// SIG undefined FUN_1454d5da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454d5da0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint local_res18 [4];
  undefined8 uVar3;
  
  uVar3 = 0x1454d5dac;
  local_res18[0] = 0;
  uVar2 = FUN_1454d6120(param_1,param_2,local_res18);
  uVar1 = local_res18[0];
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if ((local_res18[0] & 1) != 0) {
    FUN_144ba24f0(5,0x7b,0x7c,"crypto\\dh\\dh_check.c",0xab,uVar3);
  }
  if ((uVar1 & 2) != 0) {
    FUN_144ba24f0(5,0x7b,0x7b,"crypto\\dh\\dh_check.c",0xad,uVar3);
  }
  if ((uVar1 & 4) != 0) {
    FUN_144ba24f0(5,0x7b,0x7a,"crypto\\dh\\dh_check.c",0xaf,uVar3);
  }
  return (ulonglong)(uVar1 == 0);
}



// FUNCTION 1454d5e60 FUN_1454d5e60 body=245 status=ok
// SIG undefined FUN_1454d5e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d5e60(longlong param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *param_2 = 0;
  lVar2 = FUN_144eedd20();
  uVar5 = 0;
  if (lVar2 != 0) {
    FUN_144eede20(lVar2);
    lVar3 = FUN_144eede90(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_144ba03a0(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
      }
      iVar1 = FUN_144ba0ba0(*(undefined8 *)(param_1 + 0x10));
      if (((iVar1 != 0) || (iVar1 = FUN_144ba0340(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) ||
         (iVar1 = FUN_144ba0350(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
        *param_2 = *param_2 | 8;
      }
      lVar4 = FUN_144ba06b0(lVar3,*(undefined8 *)(param_1 + 8));
      uVar5 = 0;
      if ((lVar4 != 0) && (iVar1 = FUN_14526b300(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_144ba0c40(*(undefined8 *)(param_1 + 0x10),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        uVar5 = 1;
      }
    }
  }
  FUN_144eedf20(lVar2);
  FUN_144eeddc0(lVar2);
  return uVar5;
}



// FUNCTION 1454d5f60 FUN_1454d5f60 body=439 status=ok
// SIG undefined FUN_1454d5f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d5f60(longlong param_1,uint *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = FUN_1454d5e60();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144eedd20();
  if (lVar3 == 0) goto LAB_1454d60f6;
  FUN_144eede20(lVar3);
  uVar2 = FUN_144eede90(lVar3);
  lVar4 = FUN_144eede90(lVar3);
  if (lVar4 == 0) goto LAB_1454d60f6;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar5 = FUN_144ba03c0();
    iVar1 = FUN_144ba0c40(*(undefined8 *)(param_1 + 0x10),uVar5);
    if ((iVar1 < 1) ||
       (iVar1 = FUN_144ba0c40(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8)),
       -1 < iVar1)) {
LAB_1454d6031:
      *param_2 = *param_2 | 8;
    }
    else {
      iVar1 = FUN_1452a5e00(uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 8),lVar3);
      if (iVar1 == 0) goto LAB_1454d60f6;
      iVar1 = FUN_144ba0350(uVar2);
      if (iVar1 == 0) goto LAB_1454d6031;
    }
    iVar1 = FUN_144eed390(*(undefined8 *)(param_1 + 0x40),0x40,lVar3);
    if (iVar1 < 0) goto LAB_1454d60f6;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x10;
    }
    iVar1 = FUN_144eef830(uVar2,lVar4,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),
                          lVar3);
    uVar7 = uVar6;
    if (iVar1 == 0) goto LAB_1454d60f6;
    iVar1 = FUN_144ba0350(lVar4);
    if (iVar1 == 0) {
      *param_2 = *param_2 | 0x20;
    }
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
       (iVar1 = FUN_144ba0c40(*(longlong *)(param_1 + 0x48),uVar2), iVar1 != 0)) {
      *param_2 = *param_2 | 0x40;
    }
  }
  iVar1 = FUN_144eed390(*(undefined8 *)(param_1 + 8),0x40,lVar3);
  uVar7 = uVar6;
  if (iVar1 < 0) goto LAB_1454d60f6;
  if (iVar1 == 0) {
    *param_2 = *param_2 | 1;
  }
  else if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar1 = FUN_144eeff20(uVar2,*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) goto LAB_1454d60f6;
    iVar1 = FUN_144eed390(uVar2,0x40,lVar3);
    if (iVar1 < 0) goto LAB_1454d60f6;
    if (iVar1 == 0) {
      *param_2 = *param_2 | 2;
    }
  }
  uVar7 = 1;
LAB_1454d60f6:
  FUN_144eedf20(lVar3);
  FUN_144eeddc0(lVar3);
  return uVar7;
}



// FUNCTION 1454d6120 FUN_1454d6120 body=273 status=ok
// SIG undefined FUN_1454d6120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d6120(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  *param_3 = 0;
  lVar2 = FUN_144eedd20();
  uVar6 = 0;
  if (lVar2 != 0) {
    FUN_144eede20(lVar2);
    lVar3 = FUN_144eede90(lVar2);
    if ((lVar3 != 0) && (iVar1 = FUN_144ba0bb0(lVar3,1), uVar6 = uVar5, iVar1 != 0)) {
      iVar1 = FUN_144ba0c40(param_2,lVar3);
      if (iVar1 < 1) {
        *param_3 = *param_3 | 1;
      }
      lVar4 = FUN_144ba06b0(lVar3,*(undefined8 *)(param_1 + 8));
      if ((lVar4 != 0) && (iVar1 = FUN_14526b300(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_144ba0c40(param_2,lVar3);
        if (-1 < iVar1) {
          *param_3 = *param_3 | 2;
        }
        if (*(longlong *)(param_1 + 0x40) != 0) {
          iVar1 = FUN_1452a5e00(lVar3,param_2,*(longlong *)(param_1 + 0x40),
                                *(undefined8 *)(param_1 + 8),lVar2);
          if (iVar1 == 0) goto LAB_1454d620b;
          iVar1 = FUN_144ba0350(lVar3);
          if (iVar1 == 0) {
            *param_3 = *param_3 | 4;
          }
        }
        uVar6 = 1;
      }
    }
  }
LAB_1454d620b:
  FUN_144eedf20(lVar2);
  FUN_144eeddc0(lVar2);
  return uVar6;
}



// FUNCTION 1454d6240 FUN_1454d6240 body=73 status=ok
// SIG undefined FUN_1454d6240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d6240(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_144ba24f0(0x14,0xc9,0x43,"ssl\\ssl_rsa.c",0xe4);
    return 0;
  }
  uVar1 = FUN_1454d7150(*(undefined8 *)(param_1 + 0x488));
  return uVar1;
}



// FUNCTION 1454d6290 FUN_1454d6290 body=172 status=ok
// SIG undefined FUN_1454d6290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d6290(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_144ba24f0(0x14,0xc6,0x43,"ssl\\ssl_rsa.c",0x1f);
    return 0;
  }
  iVar1 = FUN_144ebbef0(param_1,0,param_2,0,1,0x1454d62a0);
  if (iVar1 != 1) {
    FUN_144ba24f0(0x14,0xc6,iVar1,"ssl\\ssl_rsa.c",0x24);
    return 0;
  }
  uVar2 = FUN_1454d6fa0(*(undefined8 *)(param_1 + 0x488),param_2);
  return uVar2;
}



// FUNCTION 1454d6340 FUN_1454d6340 body=463 status=ok
// SIG undefined FUN_1454d6340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d6340(longlong param_1,int param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1454d635a;
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    uVar5 = 0x36c;
    uVar4 = 0x43;
  }
  else if (param_2 == 1) {
    puVar2 = (undefined4 *)FUN_144ea64e0(param_4 + 4,"ssl\\ssl_rsa.c",0x379);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xd0010000;
      memcpy(puVar2 + 1,param_3,param_4);
      uVar4 = FUN_1454d6340(param_1,2,puVar2,param_4 + 4);
      FUN_144ea6530(puVar2,"ssl\\ssl_rsa.c",900);
      return uVar4;
    }
    uVar5 = 0x37b;
    uVar4 = 0x41;
  }
  else {
    iVar1 = FUN_1454d7770(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      uVar5 = 0x389;
      uVar4 = 0x184;
    }
    else if (**(longlong **)(param_1 + 0x138) == 0) {
      uVar5 = 0x38d;
      uVar4 = 0x44;
    }
    else {
      lVar3 = FUN_144ea6570(*(undefined8 *)(**(longlong **)(param_1 + 0x138) + 0x18),param_4,
                            "ssl\\ssl_rsa.c",0x391);
      if (lVar3 == 0) {
        uVar5 = 0x393;
        uVar4 = 0x41;
      }
      else {
        *(longlong *)(**(longlong **)(param_1 + 0x138) + 0x18) = lVar3;
        memcpy(*(void **)(**(longlong **)(param_1 + 0x138) + 0x18),param_3,param_4);
        *(size_t *)(**(longlong **)(param_1 + 0x138) + 0x20) = param_4;
        iVar1 = FUN_1454d7770(param_2,param_3,param_4,param_1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar5 = 0x3a0;
        uVar4 = 0x184;
      }
    }
  }
  FUN_144ba24f0(0x14,0x21f,uVar4,"ssl\\ssl_rsa.c",uVar5,uVar6);
  return 0;
}



// FUNCTION 1454d6510 FUN_1454d6510 body=1147 status=ok
// SIG undefined FUN_1454d6510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d6510(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_a8 [2];
  void *local_a0;
  char *local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  char local_70 [24];
  char local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454d652f;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar11 = 0;
  local_88 = 0;
  local_a0 = (void *)0x0;
  lVar13 = 0;
  local_a8[0] = 0;
  local_98 = (char *)0x0;
  local_90 = 0;
  builtin_strncpy(local_70,"SERVERINFOV2 FOR ",0x12);
  builtin_strncpy(local_58,"SERVERINFO FOR ",0x10);
  local_78 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3bd);
    uVar5 = 0x43;
  }
  else {
    uVar5 = FUN_144ec7470();
    lVar13 = FUN_144b9e650(uVar5);
    if (lVar13 == 0) {
      local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3c3);
      uVar5 = 7;
    }
    else {
      iVar2 = FUN_144b9efc0(lVar13,0x6c,3,param_2);
      if (iVar2 < 1) {
        local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3c7);
        uVar5 = 2;
      }
      else {
        local_b8 = local_a8;
        local_80 = 0;
        iVar2 = FUN_144ee8c30(lVar13,&local_98,&local_90,&local_a0);
        uVar12 = uVar11;
        if (iVar2 != 0) {
          do {
            uVar4 = 0;
            cVar1 = *local_98;
            uVar14 = uVar11;
            uVar8 = uVar4;
            pcVar6 = local_98;
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar8;
            }
            pcVar6 = local_58;
            uVar14 = uVar11;
            uVar3 = uVar4;
            cVar1 = local_58[0];
            while ((cVar1 != '\0' && (uVar3 = (uint)uVar14, uVar3 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar3 = uVar3 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar3;
            }
            if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
              local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3dd);
              uVar5 = 0x188;
              goto LAB_1454d6907;
            }
            pcVar6 = local_58;
            uVar14 = uVar11;
            uVar8 = uVar4;
            cVar1 = local_58[0];
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar8;
            }
            iVar2 = strncmp(local_98,local_58,(ulonglong)(uVar8 & 0x7fffffff));
            if (iVar2 == 0) {
              iVar9 = 1;
              iVar2 = 1;
              if ((local_a8[0] < 4) ||
                 ((uint)*(byte *)((longlong)local_a0 + 2) * 0x100 +
                  (uint)*(byte *)((longlong)local_a0 + 3) != local_a8[0] + -4)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3f7);
                uVar5 = 0x186;
                goto LAB_1454d6907;
              }
            }
            else {
              cVar1 = *local_98;
              uVar14 = uVar11;
              uVar8 = uVar4;
              pcVar6 = local_98;
              while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar8 = uVar8 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar8;
              }
              pcVar6 = local_70;
              uVar14 = uVar11;
              uVar3 = uVar4;
              cVar1 = local_70[0];
              while ((cVar1 != '\0' && (uVar3 = (uint)uVar14, uVar3 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar3 = uVar3 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar3;
              }
              if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3e5);
                uVar5 = 0x188;
                goto LAB_1454d6907;
              }
              pcVar6 = local_70;
              uVar14 = uVar11;
              cVar1 = local_70[0];
              while ((cVar1 != '\0' && (uVar4 = (uint)uVar14, uVar4 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar4 = uVar4 + 1;
                cVar1 = *pcVar6;
                uVar14 = (ulonglong)uVar4;
              }
              iVar2 = strncmp(local_98,local_70,(ulonglong)(uVar4 & 0x7fffffff));
              if (iVar2 != 0) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3ea);
                uVar5 = 0x187;
                goto LAB_1454d6907;
              }
              iVar9 = 2;
              iVar2 = 2;
              if ((local_a8[0] < 8) ||
                 ((uint)*(byte *)((longlong)local_a0 + 6) * 0x100 +
                  (uint)*(byte *)((longlong)local_a0 + 7) != local_a8[0] + -8)) {
                local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3ff);
                uVar5 = 0x186;
                goto LAB_1454d6907;
              }
            }
            uVar14 = uVar11;
            if (iVar2 == 1) {
              uVar14 = 4;
            }
            uVar15 = (longlong)local_a8[0] + uVar14 + uVar12;
            lVar7 = FUN_144ea6570(local_88,uVar15,"ssl\\ssl_rsa.c",0x405);
            if (lVar7 == 0) {
              local_b8 = (int *)CONCAT44(local_b8._4_4_,0x407);
              uVar5 = 0x41;
              goto LAB_1454d6907;
            }
            if (iVar9 == 1) {
              *(undefined4 *)(lVar7 + uVar12) = 0xd0010000;
            }
            local_88 = lVar7;
            memcpy((void *)(uVar14 + (longlong)(lVar7 + uVar12)),local_a0,(longlong)local_a8[0]);
            FUN_144ea6530(local_98,"ssl\\ssl_rsa.c",0x40f);
            local_98 = (char *)0x0;
            FUN_144ea6530(local_90,"ssl\\ssl_rsa.c",0x411);
            local_90 = 0;
            FUN_144ea6530(local_a0,"ssl\\ssl_rsa.c",0x413);
            local_b8 = local_a8;
            lVar10 = local_80 + 1;
            local_a0 = (void *)0x0;
            local_80 = lVar10;
            iVar2 = FUN_144ee8c30(lVar13,&local_98,&local_90,&local_a0);
            uVar12 = uVar15;
          } while (iVar2 != 0);
          if (lVar10 != 0) {
            FUN_1454d6340(local_78,2,lVar7,uVar15);
            goto LAB_1454d691d;
          }
        }
        local_b8 = (int *)CONCAT44(local_b8._4_4_,0x3d6);
        uVar5 = 0x185;
      }
    }
  }
LAB_1454d6907:
  FUN_144ba24f0(0x14,0x151,uVar5,"ssl\\ssl_rsa.c");
LAB_1454d691d:
  FUN_144ea6530(local_98,"ssl\\ssl_rsa.c",0x41b);
  FUN_144ea6530(local_90,"ssl\\ssl_rsa.c",0x41c);
  FUN_144ea6530(local_a0,"ssl\\ssl_rsa.c",0x41d);
  FUN_144ea6530(local_88,"ssl\\ssl_rsa.c",0x41e);
  FUN_144b9e7b0(lVar13);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1454d69b0 FUN_1454d69b0 body=296 status=ok
// SIG undefined FUN_1454d69b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d69b0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1454d69d0;
  uVar2 = 0;
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0xf3;
    uVar6 = 7;
  }
  else {
    iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0xf8;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = FUN_144eea6a0(lVar4,0,*(undefined8 *)(param_1 + 0x16e8),
                              *(undefined8 *)(param_1 + 0x16f0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x104;
          uVar6 = 0x7c;
          goto LAB_1454d6a9c;
        }
        uVar6 = 0xd;
        lVar5 = FUN_144bb5b20(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = FUN_1454d6240(param_1,lVar5);
        FUN_144ba6e60(lVar5);
        goto LAB_1454d6ab2;
      }
      uVar7 = 0x108;
    }
  }
LAB_1454d6a9c:
  FUN_144ba24f0(0x14,0xcb,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_1454d6ab2:
  FUN_144b9e7b0(lVar4);
  return uVar2;
}



// FUNCTION 1454d6ae0 FUN_1454d6ae0 body=296 status=ok
// SIG undefined FUN_1454d6ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d6ae0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x1454d6b00;
  uVar2 = 0;
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0x204;
    uVar6 = 7;
  }
  else {
    iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x209;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = FUN_144eea6a0(lVar4,0,*(undefined8 *)(param_1 + 0xa8),
                              *(undefined8 *)(param_1 + 0xb0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x215;
          uVar6 = 0x7c;
          goto LAB_1454d6bcc;
        }
        uVar6 = 0xd;
        lVar5 = FUN_144bb5b20(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = FUN_1454d6d80(param_1,lVar5);
        FUN_144ba6e60(lVar5);
        goto LAB_1454d6be2;
      }
      uVar7 = 0x219;
    }
  }
LAB_1454d6bcc:
  FUN_144ba24f0(0x14,0xb0,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_1454d6be2:
  FUN_144b9e7b0(lVar4);
  return uVar2;
}



// FUNCTION 1454d6c10 FUN_1454d6c10 body=299 status=ok
// SIG undefined FUN_1454d6c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454d6c10(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x1454d6c2e;
  uVar7 = 0;
  uVar5 = 0;
  uVar3 = FUN_144ec7470();
  lVar4 = FUN_144b9e650(uVar3);
  if (lVar4 == 0) {
    uVar8 = 0x16e;
    uVar6 = 7;
    uVar5 = uVar7;
  }
  else {
    iVar1 = FUN_144b9efc0(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar8 = 0x173;
      uVar6 = 2;
    }
    else {
      if (param_3 == 2) {
        uVar6 = 0xd;
        uVar5 = FUN_144bb5aa0(lVar4,0);
      }
      else {
        if (param_3 != 1) {
          uVar8 = 0x17e;
          uVar6 = 0x7c;
          goto LAB_1454d6cf9;
        }
        uVar6 = 9;
        uVar5 = FUN_144bac680(lVar4,0,*(undefined8 *)(param_1 + 0xa8),
                              *(undefined8 *)(param_1 + 0xb0));
      }
      if (uVar5 != 0) {
        uVar2 = FUN_1454d6e60(param_1,uVar5);
        uVar7 = (ulonglong)uVar2;
        goto LAB_1454d6d0f;
      }
      uVar8 = 0x183;
    }
  }
LAB_1454d6cf9:
  FUN_144ba24f0(0x14,0xad,uVar6,"ssl\\ssl_rsa.c",uVar8,uVar9);
LAB_1454d6d0f:
  FUN_144b47250(uVar5);
  FUN_144b9e7b0(lVar4);
  return uVar7;
}



// FUNCTION 1454d6d40 FUN_1454d6d40 body=27 status=ok
// SIG undefined FUN_1454d6d40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d6d40(undefined8 param_1,undefined8 param_2)

{
  FUN_1454d72a0(param_1,0,param_2);
  return;
}



// FUNCTION 1454d6d60 FUN_1454d6d60 body=30 status=ok
// SIG undefined FUN_1454d6d60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d6d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1454d72a0(0,param_1,param_2);
  return;
}



// FUNCTION 1454d6d80 FUN_1454d6d80 body=71 status=ok
// SIG undefined FUN_1454d6d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d6d80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_144ba24f0(0x14,0xae,0x43,"ssl\\ssl_rsa.c",0x1f6);
    return 0;
  }
  uVar1 = FUN_1454d7150(*(undefined8 *)(param_1 + 0x138));
  return uVar1;
}



// FUNCTION 1454d6dd0 FUN_1454d6dd0 body=130 status=ok
// SIG undefined FUN_1454d6dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d6dd0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x1454d6de0;
  local_res18[0] = param_3;
  lVar2 = FUN_144efdb30(param_1,0,local_res18);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xaf,0xd,"ssl\\ssl_rsa.c",0x22c,uVar3);
    return 0;
  }
  uVar1 = FUN_1454d7150(*(undefined8 *)(param_2 + 0x138),lVar2);
  FUN_144ba6e60(lVar2);
  return uVar1;
}



// FUNCTION 1454d6e60 FUN_1454d6e60 body=173 status=ok
// SIG undefined FUN_1454d6e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d6e60(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    FUN_144ba24f0(0x14,0xab,0x43,"ssl\\ssl_rsa.c",0x128);
    return 0;
  }
  iVar1 = FUN_144ebbef0(0,param_1,param_2,0,1,0x1454d6e70);
  if (iVar1 != 1) {
    FUN_144ba24f0(0x14,0xab,iVar1,"ssl\\ssl_rsa.c",0x12d);
    return 0;
  }
  uVar2 = FUN_1454d6fa0(*(undefined8 *)(param_1 + 0x138),param_2);
  return uVar2;
}



// FUNCTION 1454d6f10 FUN_1454d6f10 body=129 status=ok
// SIG undefined FUN_1454d6f10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454d6f10(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x1454d6f25;
  local_res18[0] = param_3;
  lVar2 = FUN_144bb5d50(0,local_res18,param_2);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xac,0xd,"ssl\\ssl_rsa.c",0x195,uVar3);
    return 0;
  }
  uVar1 = FUN_1454d6e60(param_1,lVar2);
  FUN_144b47250(lVar2);
  return uVar1;
}



// FUNCTION 1454d6fa0 FUN_1454d6fa0 body=424 status=ok
// SIG undefined FUN_1454d6fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d6fa0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res18 [2];
  undefined8 uVar5;
  
  uVar5 = 0x1454d6fb5;
  lVar2 = FUN_144bb4f60(param_2);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xbf,0x10c,"ssl\\ssl_rsa.c",0x13a,uVar5);
    return 0;
  }
  lVar3 = FUN_144b9e120(lVar2,local_res18);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x14,0xbf,0xf7,"ssl\\ssl_rsa.c",0x13f,uVar5);
    return 0;
  }
  if (local_res18[0] == 3) {
    uVar4 = FUN_144ba6cd0(lVar2);
    iVar1 = FUN_144ed3360(uVar4);
    if (iVar1 == 0) {
      FUN_144ba24f0(0x14,0xbf,0x13e,"ssl\\ssl_rsa.c",0x144,uVar5);
      return 0;
    }
  }
  if (param_1[local_res18[0] * 5 + 5] != 0) {
    FUN_144ba6ec0(lVar2);
    FUN_144ba26f0();
    iVar1 = FUN_144bb4fc0(param_2,param_1[local_res18[0] * 5 + 5]);
    if (iVar1 == 0) {
      FUN_144ba6e60(param_1[local_res18[0] * 5 + 5]);
      param_1[local_res18[0] * 5 + 5] = 0;
      FUN_144ba26f0();
    }
  }
  FUN_144b47250(param_1[local_res18[0] * 5 + 4]);
  FUN_144bb6050(param_2);
  param_1[local_res18[0] * 5 + 4] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}



// FUNCTION 1454d7150 FUN_1454d7150 body=335 status=ok
// SIG undefined FUN_1454d7150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d7150(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x1454d7160;
  lVar2 = FUN_144b9e120(param_2,local_res18);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x14,0xc1,0xf7,"ssl\\ssl_rsa.c",0x85,uVar3);
    return 0;
  }
  if (param_1[local_res18[0] * 5 + 4] != 0) {
    lVar2 = FUN_144bb4f60();
    if (lVar2 == 0) {
      FUN_144ba24f0(0x14,0xc1,0x41,"ssl\\ssl_rsa.c",0x8d,uVar3);
      return 0;
    }
    FUN_144ba6ec0(lVar2,param_2);
    FUN_144ba26f0();
    iVar1 = FUN_144bb4fc0(param_1[local_res18[0] * 5 + 4],param_2);
    if (iVar1 == 0) {
      FUN_144b47250(param_1[local_res18[0] * 5 + 4]);
      param_1[local_res18[0] * 5 + 4] = 0;
      return 0;
    }
  }
  FUN_144ba6e60(param_1[local_res18[0] * 5 + 5]);
  FUN_144ba6e40(param_2);
  param_1[local_res18[0] * 5 + 5] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}



// FUNCTION 1454d72a0 FUN_1454d72a0 body=556 status=ok
// SIG undefined FUN_1454d72a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1454d72a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x1454d72c2;
  iVar2 = 0;
  lVar6 = 0;
  FUN_144ba26f0();
  if (param_1 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x16e8);
    uVar8 = *(undefined8 *)(param_2 + 0x16f0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
  }
  uVar4 = FUN_144ec7470();
  lVar5 = FUN_144b9e650(uVar4);
  if (lVar5 == 0) {
    FUN_144ba24f0(0x14,0xdc,7,"ssl\\ssl_rsa.c",0x24f,uVar10);
  }
  else {
    iVar1 = FUN_144b9efc0(lVar5,0x6c,3,param_3);
    if (iVar1 < 1) {
      FUN_144ba24f0(0x14,0xdc,2,"ssl\\ssl_rsa.c",0x254,uVar10);
    }
    else {
      lVar6 = FUN_14526c4e0(lVar5,0,uVar9,uVar8);
      if (lVar6 == 0) {
        FUN_144ba24f0(0x14,0xdc,9,"ssl\\ssl_rsa.c",0x25b);
      }
      else {
        if (param_1 == 0) {
          iVar2 = FUN_1454d6290(param_2,lVar6);
        }
        else {
          iVar2 = FUN_1454d6e60(param_1);
        }
        iVar1 = FUN_144ba2690();
        if (iVar1 == 0) {
          if (iVar2 == 0) goto LAB_1454d749d;
          if (param_1 == 0) {
            iVar1 = FUN_144b99870(param_2,0x58,0,0);
          }
          else {
            iVar1 = FUN_144b99c10(param_1);
          }
          if (iVar1 != 0) {
            lVar7 = FUN_144bac680(lVar5,0,uVar9,uVar8);
            while (lVar7 != 0) {
              if (param_1 == 0) {
                iVar1 = FUN_144b99870(param_2,0x59,0,lVar7);
              }
              else {
                iVar1 = FUN_144b99c10(param_1);
              }
              if (iVar1 == 0) {
                FUN_144b47250(lVar7);
                goto LAB_1454d749b;
              }
              lVar7 = FUN_144bac680(lVar5,0,uVar9,uVar8);
            }
            uVar3 = FUN_144ba26c0();
            if (((uVar3 & 0xff000000) == 0x9000000) && ((uVar3 & 0xfff) == 0x6c)) {
              FUN_144ba26f0();
              goto LAB_1454d749d;
            }
          }
        }
LAB_1454d749b:
        iVar2 = 0;
      }
    }
  }
LAB_1454d749d:
  FUN_144b47250(lVar6);
  FUN_144b9e7b0(lVar5);
  return iVar2;
}



// FUNCTION 1454d74d0 FUN_1454d74d0 body=268 status=ok
// SIG undefined FUN_1454d74d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454d74d0(longlong param_1,ulonglong param_2,uint param_3,longlong *param_4,ulonglong *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_2 < 0x8000000000000000)) {
    while ((3 < param_2 && (1 < param_2 - 4))) {
      puVar1 = (undefined1 *)(param_1 + 4);
      puVar2 = (undefined1 *)(param_1 + 5);
      if (param_2 - 6 < 2) {
        return 0xffffffff;
      }
      lVar4 = param_1 + 8;
      uVar3 = (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7));
      if (param_2 - 8 < uVar3) {
        return 0xffffffff;
      }
      param_2 = (param_2 - 8) - uVar3;
      param_1 = lVar4 + uVar3;
      if (CONCAT11(*puVar1,*puVar2) == param_3) {
        *param_4 = lVar4;
        *param_5 = uVar3;
        return 1;
      }
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1454d7620 FUN_1454d7620 body=187 status=ok
// SIG undefined FUN_1454d7620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454d7620(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,longlong param_7,undefined4 *param_8)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (((param_3 >> 0xc & 1) == 0) || (param_7 == 0)) {
    iVar1 = FUN_144b9b8f0(param_1,&local_10,&local_18);
    if (iVar1 != 0) {
      iVar1 = FUN_1454d74d0(local_10,local_18,param_2,param_4,param_5);
      if (iVar1 == -1) {
        *param_8 = 0x50;
        return 0xffffffff;
      }
      return (ulonglong)(iVar1 != 0);
    }
  }
  return 0;
}



// FUNCTION 1454d76e0 FUN_1454d76e0 body=143 status=ok
// SIG undefined FUN_1454d76e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454d76e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar1 = FUN_144b9b8f0(param_1,&local_10,&local_18);
  if (iVar1 != 0) {
    iVar1 = FUN_1454d74d0(local_10,local_18,param_2,param_3,param_4);
    if (iVar1 == -1) {
      *param_5 = 0x50;
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (ulonglong)(iVar1 != 0);
    }
  }
  return uVar2;
}



// FUNCTION 1454d7770 FUN_1454d7770 body=451 status=ok
// SIG undefined FUN_1454d7770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d7770(int param_1,undefined1 *param_2,ulonglong param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if ((((param_2 == (undefined1 *)0x0) || (param_3 == 0)) || (1 < param_1 - 1U)) ||
     (0x7fffffffffffffff < param_3)) {
    return 0;
  }
  while( true ) {
    iVar6 = 0;
    if (param_1 == 2) {
      if (param_3 < 4) {
        return 0;
      }
      puVar1 = param_2 + 1;
      uVar4 = *param_2;
      puVar2 = param_2 + 2;
      puVar3 = param_2 + 3;
      param_2 = param_2 + 4;
      iVar6 = CONCAT31(CONCAT21(CONCAT11(uVar4,*puVar1),*puVar2),*puVar3);
      param_3 = param_3 - 4;
    }
    if (param_3 < 2) {
      return 0;
    }
    uVar4 = *param_2;
    puVar1 = param_2 + 1;
    if (param_3 - 2 < 2) {
      return 0;
    }
    uVar5 = (ulonglong)CONCAT11(param_2[2],param_2[3]);
    if (param_3 - 4 < uVar5) break;
    param_2 = param_2 + uVar5 + 4;
    param_3 = (param_3 - 4) - uVar5;
    if (param_4 != 0) {
      if ((param_1 == 1) || (iVar6 == 0x1d0)) {
        iVar6 = FUN_144eaeff0(param_4,CONCAT11(uVar4,*puVar1),FUN_1454d76e0,0,0,&LAB_1454d7600,0);
      }
      else {
        iVar6 = FUN_144eaf050(param_4,CONCAT11(uVar4,*puVar1),iVar6,FUN_1454d7620,0,0,&LAB_1454d75e0
                              ,0);
      }
      if (iVar6 == 0) {
        return 0;
      }
    }
    if (param_3 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1454d7940 FUN_1454d7940 body=60 status=ok
// SIG undefined FUN_1454d7940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d7940(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_144ba3d20();
  iVar1 = FUN_144ba3cb0(uVar2);
  if ((iVar1 != 4) && (iVar1 != 0x40)) {
    if (3 < iVar1 - 0x2a0U) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1454d7980 FUN_1454d7980 body=2472 status=ok
// SIG undefined FUN_1454d7980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d7980(undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
                  void *param_5,longlong param_6,ulonglong param_7,void *param_8,ulonglong param_9,
                  char param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  void *pvVar8;
  undefined1 uVar9;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong _Size;
  byte bVar21;
  size_t sVar22;
  longlong lVar23;
  ulonglong uVar24;
  size_t _Size_00;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auStack_408 [32];
  char local_3e8;
  code *local_3e0;
  size_t local_3d8;
  longlong local_3d0;
  code *local_3c8;
  ulonglong local_3c0;
  undefined8 *local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  uint local_3a0 [2];
  void *local_398;
  ulonglong local_390;
  size_t local_388;
  void *local_380;
  ulonglong local_378;
  ulonglong local_370;
  ulonglong local_368;
  ulonglong local_360;
  ulonglong local_358;
  undefined1 *local_350;
  longlong local_348;
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  ulonglong *local_328;
  undefined1 local_318 [216];
  undefined1 auStack_240 [24];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8 [16];
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_15b [115];
  uint local_e8 [32];
  ulonglong local_68;
  undefined1 uVar10;
  undefined1 uVar11;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_408;
  lVar23 = 0x28;
  sVar22 = 8;
  local_398 = param_5;
  _Size = 0x40;
  local_380 = param_8;
  local_388 = 0x28;
  local_3d8 = 8;
  local_3e8 = '\x01';
  local_3b8 = param_4;
  local_338 = param_1;
  local_330 = param_2;
  local_328 = param_3;
  if (0xfffff < param_7) goto LAB_1454d8260;
  uVar13 = FUN_144ba3d20();
  iVar12 = FUN_144ba3cb0(uVar13);
  if (iVar12 < 0x2a2) {
    if (iVar12 == 0x2a1) {
      iVar12 = FUN_144edb5b0(local_318);
      if (iVar12 < 1) goto LAB_1454d8260;
      uVar26 = 0x30;
      sVar22 = 0x10;
      local_3c8 = (code *)&LAB_1454d8530;
      local_3e0 = FUN_144edc120;
      local_3c0 = 0x30;
      local_3d8 = 0x10;
      _Size = 0x80;
    }
    else if (iVar12 == 4) {
      iVar12 = FUN_14525f250(local_318);
      if (iVar12 < 1) goto LAB_1454d8260;
      uVar26 = 0x10;
      local_3e8 = '\0';
      lVar23 = 0x30;
      local_3c0 = 0x10;
      local_388 = 0x30;
      local_3c8 = (code *)&LAB_1454d8340;
      local_3e0 = FUN_14525f540;
    }
    else if (iVar12 == 0x40) {
      iVar12 = FUN_144edb280(local_318);
      if (iVar12 < 1) goto LAB_1454d8260;
      uVar26 = 0x14;
      local_3c8 = (code *)&LAB_1454d83c0;
      local_3c0 = 0x14;
      local_3e0 = FUN_144edb590;
    }
    else {
      if (iVar12 != 0x2a0) goto LAB_1454d7b45;
      iVar12 = FUN_144baee60(local_318);
      if (iVar12 < 1) goto LAB_1454d8260;
      uVar26 = 0x20;
      local_3c8 = FUN_1454d8450;
      local_3c0 = 0x20;
      local_3e0 = FUN_144baf320;
    }
  }
  else if (iVar12 == 0x2a2) {
    iVar12 = FUN_144edb680(local_318);
    if (iVar12 < 1) goto LAB_1454d8260;
    sVar22 = 0x10;
    local_3c0 = 0x40;
    uVar26 = 0x40;
    local_3d8 = 0x10;
    local_3c8 = (code *)&LAB_1454d8530;
    _Size = 0x80;
    local_3e0 = FUN_144edc120;
  }
  else {
    if (iVar12 != 0x2a3) {
LAB_1454d7b45:
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = 0;
      }
      goto LAB_1454d8260;
    }
    iVar12 = FUN_144baedb0(local_318);
    if (iVar12 < 1) goto LAB_1454d8260;
    uVar26 = 0x1c;
    local_3c8 = FUN_1454d8450;
    local_3c0 = 0x1c;
    local_3e0 = FUN_144baf320;
  }
  uVar20 = 0xd;
  if (param_10 == '\0') {
    local_3d0 = (_Size + 0xff + uVar26) / _Size + 1;
  }
  else {
    local_3d0 = 2;
    uVar20 = param_9 + 0xb + lVar23;
  }
  uVar15 = 0;
  local_3b0 = 0;
  uVar24 = param_6 + (uVar20 - uVar26);
  uVar14 = ((param_7 - 1) + (uVar20 - uVar26) + sVar22 + _Size) / _Size;
  local_378 = uVar24 / _Size;
  local_3a8 = uVar24 % _Size;
  local_370 = (uVar24 + sVar22) / _Size;
  uVar19 = uVar15;
  if ((ulonglong)(param_10 != '\0') + local_3d0 < uVar14) {
    local_3b0 = uVar14 - local_3d0;
    uVar19 = local_3b0 * _Size;
  }
  iVar12 = (int)uVar24 * 8;
  if (param_10 == '\0') {
    iVar12 = iVar12 + (int)_Size * 8;
    memset(local_1e8,0,_Size);
    if (0x80 < param_9) goto LAB_1454d8260;
    memcpy(local_1e8,local_380,param_9);
    do {
      *(ulonglong *)((longlong)local_1e8 + uVar15) =
           *(ulonglong *)((longlong)local_1e8 + uVar15) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 8) =
           *(ulonglong *)((longlong)local_1e8 + uVar15 + 8) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x10) =
           *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x10) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x18) =
           *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x18) ^ 0x3636363636363636;
      uVar15 = uVar15 + 0x20;
    } while (uVar15 < _Size);
    (*local_3e0)(local_318);
  }
  uVar9 = (undefined1)((uint)iVar12 >> 8);
  uVar10 = (undefined1)((uint)iVar12 >> 0x10);
  uVar11 = (undefined1)((uint)iVar12 >> 0x18);
  if (local_3e8 == '\0') {
    memset(auStack_240 + 8,0,sVar22);
    auStack_240[sVar22] = (char)iVar12;
    auStack_240[sVar22 + 3] = uVar11;
    auStack_240[sVar22 + 2] = uVar10;
    auStack_240[sVar22 + 1] = uVar9;
  }
  else {
    memset(auStack_240 + 8,0,sVar22 - 4);
    auStack_240[sVar22 + 7] = (char)iVar12;
    auStack_240[sVar22 + 4] = uVar11;
    auStack_240[sVar22 + 5] = uVar10;
    auStack_240[sVar22 + 6] = uVar9;
  }
  pvVar8 = local_398;
  if (uVar19 != 0) {
    if (param_10 == '\0') {
      local_160 = *(undefined4 *)(local_3b8 + 1);
      local_168 = *local_3b8;
      local_15c = *(undefined1 *)((longlong)local_3b8 + 0xc);
      memcpy(local_15b,local_398,_Size - 0xd);
      (*local_3e0)(local_318);
      pcVar7 = local_3e0;
      if (1 < uVar19 / _Size) {
        lVar23 = uVar19 / _Size - 1;
        lVar25 = (longlong)pvVar8 + -0xd;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar7)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          sVar22 = local_3d8;
        } while (lVar23 != 0);
      }
    }
    else {
      if (uVar20 <= _Size) goto LAB_1454d8260;
      _Size_00 = uVar20 - _Size;
      local_390 = _Size_00;
      (*local_3e0)(local_318,local_3b8);
      memcpy(&local_168,(void *)((longlong)local_3b8 + _Size),_Size_00);
      pvVar8 = local_398;
      memcpy((void *)((longlong)&local_168 + _Size_00),local_398,_Size - _Size_00);
      (*local_3e0)(local_318);
      pcVar7 = local_3e0;
      if (1 < uVar19 / _Size - 1) {
        lVar25 = (longlong)pvVar8 - local_390;
        lVar23 = uVar19 / _Size - 2;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar7)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          sVar22 = local_3d8;
        } while (lVar23 != 0);
      }
    }
  }
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_340 = local_3d0 + local_3b0;
  if (local_3b0 <= local_340) {
    local_390 = local_3a8 >> 0x3f;
    local_368 = local_3a8 + 1;
    local_360 = local_368 >> 0x3f;
    local_358 = _Size - sVar22;
    local_350 = auStack_240 + (local_3a8 - _Size) + sVar22 + 8;
    local_348 = (longlong)local_e8 + local_3a8;
    local_3a8 = -local_3a8;
    do {
      uVar26 = 0;
      bVar2 = (char)((byte)((local_3b0 ^ local_378) - 1 >> 0x38) &
                    ~(byte)((local_3b0 ^ local_378) >> 0x38)) >> 7;
      bVar3 = (char)((byte)((local_3b0 ^ local_370) - 1 >> 0x38) &
                    ~(byte)((local_3b0 ^ local_370) >> 0x38)) >> 7;
      uVar27 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3));
      do {
        bVar21 = 0;
        if (uVar19 < uVar20) {
          bVar21 = *(byte *)(uVar19 + (longlong)local_3b8);
        }
        else if (uVar19 < param_7 + uVar20) {
          bVar21 = *(byte *)((longlong)local_398 + (uVar19 - uVar20));
        }
        lVar23 = local_3a8 + uVar26;
        uVar19 = uVar19 + 1;
        bVar18 = (byte)(uVar26 >> 0x3f);
        bVar1 = (((byte)((ulonglong)lVar23 >> 0x3f) ^ (byte)local_390 | (byte)local_390 ^ bVar18) ^
                bVar18) - 1 & bVar2;
        uVar16 = (uint)bVar1;
        uVar17 = ~uVar16;
        bVar21 = (bVar1 & 0x80 | (byte)uVar17 & bVar21) &
                 ~((((byte)(uVar26 - local_368 >> 0x3f) ^ (byte)local_360 | (byte)local_360 ^ bVar18
                    ) ^ bVar18) - 1 & bVar2) & (~bVar3 | bVar2);
        if (local_358 <= uVar26) {
          uVar16 = (uint)bVar3;
          uVar17 = ~uVar16;
          bVar21 = bVar21 & (byte)uVar17 | local_350[lVar23] & bVar3;
        }
        local_3d0 = CONCAT44(local_3d0._4_4_,uVar17);
        local_3d8 = CONCAT44(local_3d8._4_4_,uVar16);
        uVar26 = uVar26 + 1;
        *(byte *)(lVar23 + local_348) = bVar21;
      } while (uVar26 < _Size);
      (*local_3e0)(local_318,local_e8);
      (*local_3c8)(local_318,local_e8);
      uVar26 = 0;
      if (0x1f < local_3c0) {
        do {
          uVar16 = *(uint *)((longlong)&local_220 + uVar26);
          uVar17 = *(uint *)((longlong)&local_220 + uVar26 + 4);
          uVar4 = *(uint *)((longlong)local_e8 + uVar26 + 4);
          uVar5 = *(uint *)((longlong)local_e8 + uVar26 + 8);
          uVar6 = *(uint *)((longlong)local_e8 + uVar26 + 0xc);
          *(uint *)((longlong)&local_228 + uVar26) =
               *(uint *)((longlong)local_e8 + uVar26) & uVar27 |
               *(uint *)((longlong)&local_228 + uVar26);
          *(uint *)((longlong)&local_228 + uVar26 + 4) =
               uVar4 & uVar27 | *(uint *)((longlong)&local_228 + uVar26 + 4);
          *(uint *)((longlong)&local_220 + uVar26) = uVar5 & uVar27 | uVar16;
          *(uint *)((longlong)&local_220 + uVar26 + 4) = uVar6 & uVar27 | uVar17;
          uVar16 = *(uint *)((longlong)&local_210 + uVar26);
          uVar17 = *(uint *)((longlong)&local_210 + uVar26 + 4);
          uVar4 = *(uint *)((longlong)local_e8 + uVar26 + 0x14);
          uVar5 = *(uint *)((longlong)local_e8 + uVar26 + 0x18);
          uVar6 = *(uint *)((longlong)local_e8 + uVar26 + 0x1c);
          *(uint *)((longlong)&local_218 + uVar26) =
               *(uint *)((longlong)local_e8 + uVar26 + 0x10) & uVar27 |
               *(uint *)((longlong)&local_218 + uVar26);
          *(uint *)((longlong)&local_218 + uVar26 + 4) =
               uVar4 & uVar27 | *(uint *)((longlong)&local_218 + uVar26 + 4);
          *(uint *)((longlong)&local_210 + uVar26) = uVar5 & uVar27 | uVar16;
          *(uint *)((longlong)&local_210 + uVar26 + 4) = uVar6 & uVar27 | uVar17;
          uVar26 = uVar26 + 0x20;
        } while (uVar26 < (local_3c0 & 0xffffffffffffffe0));
      }
      for (; uVar26 < local_3c0; uVar26 = uVar26 + 1) {
        *(byte *)((longlong)&local_228 + uVar26) =
             *(byte *)((longlong)&local_228 + uVar26) |
             *(byte *)((longlong)local_e8 + uVar26) & bVar3;
      }
      local_3b0 = local_3b0 + 1;
      uVar26 = local_3c0;
    } while (local_3b0 <= local_340);
  }
  uVar20 = 0;
  lVar23 = FUN_144ba5700();
  if (lVar23 != 0) {
    uVar13 = FUN_144ba3d20(local_338);
    iVar12 = FUN_144ba5a20(lVar23,uVar13,0);
    sVar22 = local_388;
    if (0 < iVar12) {
      if (param_10 == '\0') {
        do {
          *(ulonglong *)((longlong)local_1e8 + uVar20) =
               *(ulonglong *)((longlong)local_1e8 + uVar20) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 8) =
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 8) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x10) =
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x10) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x18) =
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x18) ^ 0x6a6a6a6a6a6a6a6a;
          uVar20 = uVar20 + 0x20;
        } while (uVar20 < _Size);
        iVar12 = FUN_144ba5c70(lVar23,local_1e8,_Size);
        if (0 < iVar12) {
          iVar12 = FUN_144ba5c70(lVar23,&local_228,uVar26);
joined_r0x0001454d8240:
          if (0 < iVar12) {
            iVar12 = FUN_144ba5e90(lVar23,local_330,local_3a0);
            if ((iVar12 != 0) && (local_328 != (ulonglong *)0x0)) {
              *local_328 = (ulonglong)local_3a0[0];
            }
            FUN_144ba5800(lVar23);
            goto LAB_1454d8260;
          }
        }
      }
      else {
        memset(local_1e8,0x5c,local_388);
        iVar12 = FUN_144ba5c70(lVar23,local_380,param_9);
        if ((0 < iVar12) && (iVar12 = FUN_144ba5c70(lVar23,local_1e8,sVar22), 0 < iVar12)) {
          iVar12 = FUN_144ba5c70(lVar23,&local_228,uVar26);
          goto joined_r0x0001454d8240;
        }
      }
    }
  }
  FUN_144ba5800(lVar23);
LAB_1454d8260:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_408);
}



// FUNCTION 1454d8450 FUN_1454d8450 body=223 status=ok
// SIG undefined FUN_1454d8450(void)

void FUN_1454d8450(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
  param_2[0x13] = param_1[0x10];
  param_2[0x14] = param_1[0x17];
  param_2[0x15] = param_1[0x16];
  param_2[0x16] = param_1[0x15];
  param_2[0x17] = param_1[0x14];
  param_2[0x18] = param_1[0x1b];
  param_2[0x19] = param_1[0x1a];
  param_2[0x1a] = param_1[0x19];
  param_2[0x1b] = param_1[0x18];
  param_2[0x1c] = param_1[0x1f];
  param_2[0x1d] = param_1[0x1e];
  param_2[0x1e] = param_1[0x1d];
  param_2[0x1f] = param_1[0x1c];
  return;
}



// FUNCTION 1454d8590 FUN_1454d8590 body=42 status=ok
// SIG undefined FUN_1454d8590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d8590(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454d85ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1454d85c0();
  return;
}



// FUNCTION 1454d85c0 FUN_1454d85c0 body=463 status=ok
// SIG undefined FUN_1454d85c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454d85c0(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar8 = 0x1454d85e4;
  lVar2 = FUN_144eedd20();
  if (lVar2 != 0) {
    FUN_144eede20(lVar2);
    uVar3 = FUN_144eede90(lVar2);
    lVar4 = FUN_144eede90(lVar2);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar5 = FUN_144ba0570();
        *(longlong *)(param_1 + 8) = lVar5;
        if (lVar5 == 0) goto LAB_1454d873c;
      }
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar5 = FUN_144ba0570();
        *(longlong *)(param_1 + 0x10) = lVar5;
        if (lVar5 == 0) goto LAB_1454d873c;
      }
      if (param_3 < 2) {
        uVar3 = CONCAT44(uVar7,0x54);
        FUN_144ba24f0(5,0x6a,0x65,"crypto\\dh\\dh_gen.c",uVar3);
        uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      else if (param_3 == 2) {
        iVar1 = FUN_144ba0bb0(uVar3,0x18);
        if (iVar1 != 0) {
          iVar1 = FUN_144ba0bb0(lVar4,0xb);
          goto joined_r0x0001454d86f3;
        }
      }
      else if (param_3 == 5) {
        iVar1 = FUN_144ba0bb0(uVar3,0x3c);
        if (iVar1 != 0) {
          iVar1 = FUN_144ba0bb0(lVar4,0x17);
joined_r0x0001454d86f3:
          if (iVar1 != 0) {
            uVar6 = 1;
            uVar8 = param_4;
            iVar1 = FUN_144eed080(*(undefined8 *)(param_1 + 8),param_2,1,uVar3,lVar4,param_4);
            uVar7 = (undefined4)((ulonglong)lVar4 >> 0x20);
            if (((iVar1 != 0) && (iVar1 = FUN_144eed020(param_4,3,0), iVar1 != 0)) &&
               (iVar1 = FUN_144ba0bb0(*(undefined8 *)(param_1 + 0x10),(longlong)param_3), iVar1 != 0
               )) goto LAB_1454d875e;
          }
        }
      }
      else {
        iVar1 = FUN_144ba0bb0(uVar3,0xc);
        if (iVar1 != 0) {
          iVar1 = FUN_144ba0bb0(lVar4,0xb);
          goto joined_r0x0001454d86f3;
        }
      }
    }
  }
LAB_1454d873c:
  FUN_144ba24f0(5,0x6a,3,"crypto\\dh\\dh_gen.c",CONCAT44(uVar7,0x79),uVar8);
  uVar6 = 0;
LAB_1454d875e:
  FUN_144eedf20(lVar2);
  FUN_144eeddc0(lVar2);
  return uVar6;
}



// FUNCTION 1454d8790 FUN_1454d8790 body=120 status=ok
// SIG undefined FUN_1454d8790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454d8790(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_144ed3d30();
  if (lVar1 != 0) {
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcaf70);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcaf88);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = FUN_144ba0e20(&PTR_DAT_149dcafa0);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    FUN_144ed3d50(lVar1);
  }
  return 0;
}



// FUNCTION 1454d8810 FUN_1454d8810 body=120 status=ok
// SIG undefined FUN_1454d8810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454d8810(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_144ed3d30();
  if (lVar1 != 0) {
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcafb8);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcafd0);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = FUN_144ba0e20(&PTR_DAT_149dcafe8);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    FUN_144ed3d50(lVar1);
  }
  return 0;
}



// FUNCTION 1454d8890 FUN_1454d8890 body=120 status=ok
// SIG undefined FUN_1454d8890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454d8890(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_144ed3d30();
  if (lVar1 != 0) {
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcb000);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = FUN_144ba0e20(&PTR_DAT_149dcb018);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = FUN_144ba0e20(&PTR_DAT_149dcb030);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (((*(longlong *)(lVar1 + 8) != 0) && (lVar3 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) {
      return lVar1;
    }
    FUN_144ed3d50(lVar1);
  }
  return 0;
}



// FUNCTION 1454d8910 FUN_1454d8910 body=318 status=ok
// SIG undefined FUN_1454d8910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454d8910(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0x466) {
    lVar1 = FUN_144ed3d30();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0xe1;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_149dcb048;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_149dcb0c0;
      return lVar1;
    }
  }
  else if (param_1 == 0x467) {
    lVar1 = FUN_144ed3d30();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x113;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_149dcb060;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_149dcb0c0;
      return lVar1;
    }
  }
  else if (param_1 == 0x468) {
    lVar1 = FUN_144ed3d30();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x145;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_149dcb078;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_149dcb0c0;
      return lVar1;
    }
  }
  else if (param_1 == 0x469) {
    lVar1 = FUN_144ed3d30();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0x177;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_149dcb090;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_149dcb0c0;
      return lVar1;
    }
  }
  else if (param_1 == 0x46a) {
    lVar1 = FUN_144ed3d30();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 400;
      *(undefined ***)(lVar1 + 8) = &PTR_DAT_149dcb0a8;
      *(undefined ***)(lVar1 + 0x10) = &PTR_DAT_149dcb0c0;
      return lVar1;
    }
  }
  else {
    FUN_144ba24f0(5,0x68,0x72,"crypto\\dh\\dh_rfc7919.c",0x2a);
  }
  return 0;
}



// FUNCTION 1454d8a50 FUN_1454d8a50 body=490 status=ok
// SIG undefined FUN_1454d8a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d8a50(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = 0;
  local_b0 = param_4;
  local_a8 = param_3;
  if ((param_4 < 0x40000001) && (lVar2 = FUN_144ba5700(), lVar2 != 0)) {
    iVar1 = FUN_144ba3cd0(param_8);
    uVar4 = (ulonglong)iVar1;
    local_d0 = param_7;
    local_d8 = param_6;
    local_c8 = FUN_1454d8c50(&local_c0,&local_b8,param_5,param_2);
    if (local_c8 != 0) {
      iVar3 = 1;
      iVar1 = FUN_144ba5a20(lVar2,param_8,0);
      if (iVar1 != 0) {
        while (iVar1 = FUN_144ba5c70(lVar2,local_a8,local_b0), iVar1 != 0) {
          local_b8[3] = (char)iVar3;
          local_b8[2] = (char)((uint)iVar3 >> 8);
          local_b8[1] = (char)((uint)iVar3 >> 0x10);
          *local_b8 = (char)((uint)iVar3 >> 0x18);
          iVar1 = FUN_144ba5c70(lVar2,local_c0,(longlong)local_c8);
          if (iVar1 == 0) break;
          if (param_2 < uVar4) {
            iVar1 = FUN_144ba5e90(lVar2,local_98,0);
            if (iVar1 != 0) {
              memcpy(param_1,local_98,param_2);
              FUN_14259f0c0(local_98,uVar4);
            }
            break;
          }
          iVar1 = FUN_144ba5e90(lVar2,param_1,0);
          if ((iVar1 == 0) || (param_2 = param_2 - uVar4, param_2 == 0)) break;
          param_1 = (void *)((longlong)param_1 + uVar4);
          iVar3 = iVar3 + 1;
          iVar1 = FUN_144ba5a20(lVar2,param_8,0);
          if (iVar1 == 0) break;
        }
      }
    }
    FUN_144ea6530(local_c0,"crypto\\dh\\dh_kdf.c",0x92);
    FUN_144ba5800(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1454d8c50 FUN_1454d8c50 body=564 status=ok
// SIG undefined FUN_1454d8c50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1454d8c50(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                 longlong param_5,ulonglong param_6)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  int local_50 [2];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 *local_20;
  
  if ((0x40000000 < param_6) || (0x40000000 < param_4)) {
    return 0;
  }
  local_30 = &local_68;
  local_20 = local_38;
  piVar6 = (int *)0x0;
  local_60 = &DAT_14c745038;
  local_68 = 4;
  local_58 = 0;
  local_64 = 4;
  local_38[0] = 4;
  if (param_5 != 0) {
    local_40 = 0;
    piVar6 = local_50;
    local_50[1] = 4;
    local_48 = param_5;
    local_50[0] = (int)param_6;
  }
  local_28 = param_3;
  iVar3 = FUN_1454ec900(param_1,&local_28,piVar6);
  if (0 < iVar3) {
    lVar1 = *param_1;
    local_90 = lVar1;
    cVar2 = FUN_144f03ea0(&local_90,local_78,&param_6,&local_b8,iVar3);
    if (((-1 < cVar2) && ((int)param_6 == 0x10)) && (local_b8 == 0)) {
      iVar5 = (int)local_90;
      local_88 = local_90;
      iVar4 = ((int)lVar1 - iVar5) + iVar3;
      cVar2 = FUN_144f03ea0(&local_88,local_74,&local_b4,&local_b0,iVar4);
      if (((cVar2 < '\0') || (local_b4 != 0x10)) || (local_b0 != 0)) {
        return 0;
      }
      iVar7 = (int)local_88;
      local_98 = local_88;
      iVar4 = iVar4 + (iVar5 - iVar7);
      cVar2 = FUN_144f03ea0(&local_98,&local_a4,&local_ac,&local_a8,iVar4);
      if (((-1 < cVar2) && (local_ac == 6)) && (local_a8 == 0)) {
        local_98 = local_98 + local_a4;
        local_80 = local_98;
        cVar2 = FUN_144f03ea0(&local_80,local_70,&local_a0,&local_9c,iVar4 + (iVar7 - (int)local_98)
                             );
        lVar1 = local_80;
        if ((((-1 < cVar2) && (local_a0 == 4)) && (local_9c == 0)) &&
           (iVar4 = FUN_14259f120(local_80,&DAT_14c745038,4), iVar4 == 0)) {
          *param_2 = lVar1;
          return iVar3;
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1454d8e90 FUN_1454d8e90 body=2087 status=ok
// SIG undefined FUN_1454d8e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d8e90(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  void *param_5,ulonglong param_6,void *param_7,int *param_8,undefined4 *param_9,
                  longlong param_10)

{
  char *pcVar1;
  byte *pbVar2;
  ulonglong uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  size_t _Size;
  int iVar17;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  void *local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  int *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  ulonglong local_d0 [3];
  char acStack_b1 [33];
  undefined1 local_90 [32];
  ulonglong local_70 [6];
  
  local_70[4] = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d8 = param_7;
  param_3 = param_3 >> 3;
  local_e0 = param_9;
  local_15c = 0;
  local_160 = 0;
  local_168 = 0;
  iVar6 = (int)param_3;
  local_120 = param_5;
  local_e8 = param_8;
  local_140 = param_10;
  local_100 = 2;
  local_158 = param_4;
  local_f0 = param_1;
  if (((iVar6 - 0x14U & 0xfffffff3) == 0) && (iVar6 != 0x18)) {
    if (param_4 == 0) {
      if (iVar6 == 0x14) {
        param_4 = FUN_144bab020();
        local_158 = param_4;
      }
      else if (iVar6 == 0x1c) {
        param_4 = FUN_144bab030();
        local_158 = param_4;
      }
      else {
        param_4 = FUN_144bab040();
        local_158 = param_4;
      }
    }
    else {
      uVar5 = FUN_144ba3cd0(param_4);
      param_3 = (ulonglong)uVar5;
    }
    if (param_2 < 0x200) {
      param_2 = 0x200;
    }
    local_118 = param_2 + 0x3f & 0xffffffffffffffc0;
    uVar5 = (uint)param_3;
    if (param_5 != (void *)0x0) {
      uVar9 = (ulonglong)(int)uVar5;
      if (param_6 < uVar9) {
        local_178 = CONCAT44(local_178._4_4_,0x55);
        FUN_144ba24f0(10,0x7d,0x6e,"crypto\\dsa\\dsa_gen.c");
        goto LAB_1454d8fcf;
      }
      if (param_6 != uVar9) {
        param_6 = uVar9;
      }
      memcpy(local_90,param_5,param_6);
    }
    local_128 = FUN_144ece690();
    lVar10 = local_168;
    if ((local_128 != 0) && (lVar10 = FUN_144eedd20(), local_168 = lVar10, lVar10 != 0)) {
      FUN_144eede20(lVar10);
      uVar11 = FUN_144eede90(lVar10);
      local_130 = FUN_144eede90(lVar10);
      local_110 = FUN_144eede90(lVar10);
      local_150 = FUN_144eede90(lVar10);
      local_148 = FUN_144eede90(lVar10);
      local_f8 = FUN_144eede90(lVar10);
      local_138 = FUN_144eede90(lVar10);
      lVar12 = FUN_144eede90(lVar10);
      local_108 = lVar12;
      if (lVar12 != 0) {
        _Size = (size_t)(int)uVar5;
        uVar13 = FUN_144ba03c0();
        iVar6 = FUN_144eefdb0(lVar12,uVar13,(int)local_118 + -1);
        if (iVar6 != 0) {
LAB_1454d90d0:
          do {
            iVar6 = FUN_144eed020(param_10,0,local_160);
            local_160 = local_160 + 1;
            if (iVar6 == 0) break;
            if (local_120 == (void *)0x0) {
              iVar6 = FUN_144bac850(local_90,param_3 & 0xffffffff);
              if (iVar6 < 1) break;
            }
            else {
              local_120 = (void *)0x0;
            }
            memcpy(acStack_b1 + 1,local_90,_Size);
            memcpy(local_70,local_90,_Size);
            sVar4 = _Size;
            do {
              if ((longlong)(sVar4 - 1) < 0) break;
              pcVar1 = acStack_b1 + sVar4;
              *pcVar1 = *pcVar1 + '\x01';
              sVar4 = sVar4 - 1;
            } while (*pcVar1 == '\0');
            local_170 = 0;
            local_178 = param_4;
            iVar6 = FUN_144ba5d40(local_90,_Size,local_d0,0);
            if (iVar6 == 0) break;
            local_170 = 0;
            local_178 = param_4;
            iVar6 = FUN_144ba5d40(acStack_b1 + 1,_Size,local_70,0);
            if (iVar6 == 0) break;
            lVar12 = 0;
            if ((0 < (int)uVar5) && (0x1f < uVar5)) {
              uVar16 = uVar5 & 0x8000001f;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
              }
              do {
                uVar9 = *(ulonglong *)((longlong)local_70 + lVar12 + 8);
                *(ulonglong *)((longlong)local_d0 + lVar12) =
                     *(ulonglong *)((longlong)local_70 + lVar12) ^
                     *(ulonglong *)((longlong)local_d0 + lVar12);
                *(ulonglong *)((longlong)local_d0 + lVar12 + 8) =
                     uVar9 ^ *(ulonglong *)((longlong)local_d0 + lVar12 + 8);
                uVar9 = *(ulonglong *)(acStack_b1 + lVar12 + -7);
                uVar3 = *(ulonglong *)((longlong)local_70 + lVar12 + 0x18);
                *(ulonglong *)((longlong)local_d0 + lVar12 + 0x10) =
                     *(ulonglong *)((longlong)local_70 + lVar12 + 0x10) ^
                     *(ulonglong *)((longlong)local_d0 + lVar12 + 0x10);
                *(ulonglong *)(acStack_b1 + lVar12 + -7) = uVar3 ^ uVar9;
                lVar12 = lVar12 + 0x20;
              } while (lVar12 < (int)(uVar5 - uVar16));
            }
            for (; lVar12 < (longlong)_Size; lVar12 = lVar12 + 1) {
              *(byte *)((longlong)local_d0 + lVar12) =
                   *(byte *)((longlong)local_d0 + lVar12) ^ *(byte *)((longlong)local_70 + lVar12);
            }
            local_d0[0]._0_1_ = (byte)local_d0[0] | 0x80;
            pbVar2 = (byte *)((longlong)&local_d8 + _Size + 7);
            *pbVar2 = *pbVar2 | 1;
            lVar12 = FUN_144ba0740(local_d0,param_3 & 0xffffffff,local_150);
            if (lVar12 == 0) break;
            local_178 = param_10;
            iVar6 = FUN_144eed3b0(local_150,0x40,lVar10);
            if (0 < iVar6) {
              iVar6 = FUN_144eed020(param_10,2);
              if ((iVar6 == 0) || (iVar6 = FUN_144eed020(param_10,3), iVar6 == 0)) break;
              uVar9 = local_118 - 1;
              iVar6 = 0;
              uVar13 = local_110;
              do {
                if ((iVar6 != 0) &&
                   (iVar7 = FUN_144eed020(local_140,0,iVar6), lVar10 = local_168, iVar7 == 0))
                goto LAB_1454d95be;
                FUN_144ba0bb0(uVar13,0);
                iVar7 = 0;
                iVar17 = (int)(uVar9 / 0xa0);
                sVar4 = _Size;
                if (-1 < iVar17) {
joined_r0x0001454d92f9:
                  do {
                    if (-1 < (longlong)(sVar4 - 1)) {
                      pcVar1 = acStack_b1 + sVar4;
                      *pcVar1 = *pcVar1 + '\x01';
                      sVar4 = sVar4 - 1;
                      if (*pcVar1 == '\0') goto joined_r0x0001454d92f9;
                    }
                    local_170 = 0;
                    local_178 = local_158;
                    iVar8 = FUN_144ba5d40(acStack_b1 + 1,_Size,local_d0,0);
                    lVar10 = local_168;
                    if ((((iVar8 == 0) ||
                         (lVar12 = FUN_144ba0740(local_d0,param_3 & 0xffffffff,uVar11),
                         lVar10 = local_168, lVar12 == 0)) ||
                        (iVar8 = FUN_144eefdb0(uVar11,uVar11,uVar5 * 8 * iVar7), lVar10 = local_168,
                        iVar8 == 0)) ||
                       (iVar8 = FUN_144eee4f0(local_110,local_110,uVar11), lVar10 = local_168,
                       iVar8 == 0)) goto LAB_1454d95be;
                    iVar7 = iVar7 + 1;
                    sVar4 = _Size;
                  } while (iVar7 <= iVar17);
                }
                uVar13 = local_110;
                iVar7 = FUN_144ba0d90(local_110,(int)local_118 + -1);
                lVar10 = local_168;
                if (((iVar7 == 0) ||
                    (lVar12 = FUN_144ba06b0(local_148,uVar13), lVar10 = local_168, lVar12 == 0)) ||
                   ((iVar7 = FUN_144eee4f0(local_148,local_148,local_108), lVar10 = local_168,
                    iVar7 == 0 ||
                    (iVar7 = FUN_144eefe10(uVar11,local_150), lVar10 = local_168, iVar7 == 0))))
                goto LAB_1454d95be;
                local_178 = local_168;
                iVar7 = FUN_144eef830(0,local_f8,local_148);
                lVar10 = local_168;
                if (iVar7 == 0) goto LAB_1454d95be;
                uVar14 = FUN_144ba03c0();
                iVar7 = FUN_144eee270(uVar11,local_f8,uVar14);
                lVar10 = local_168;
                if ((iVar7 == 0) ||
                   (iVar7 = FUN_144eee270(local_138,local_148,uVar11), lVar10 = local_168,
                   iVar7 == 0)) goto LAB_1454d95be;
                iVar7 = FUN_144ba0c40(local_138);
                if (-1 < iVar7) {
                  local_178 = local_140;
                  iVar7 = FUN_144eed3b0(local_138,0x40,local_168);
                  lVar12 = local_140;
                  if (0 < iVar7) {
                    iVar7 = FUN_144eed020(local_140,2,1);
                    lVar10 = local_168;
                    if (iVar7 == 0) goto LAB_1454d95be;
                    uVar14 = FUN_144ba03c0();
                    lVar15 = local_108;
                    uVar13 = local_138;
                    iVar7 = FUN_144eee270(local_108,local_138,uVar14);
                    lVar10 = local_168;
                    if (iVar7 == 0) goto LAB_1454d95be;
                    local_178 = local_168;
                    iVar7 = FUN_144eef830(uVar11,0,lVar15,local_150);
                    if (((iVar7 == 0) || (iVar7 = FUN_144ba0bb0(lVar15,2), iVar7 == 0)) ||
                       (iVar7 = FUN_144ece810(local_128,uVar13,lVar10), iVar7 == 0))
                    goto LAB_1454d95be;
                    local_170 = local_128;
                    local_178 = lVar10;
                    iVar7 = FUN_1452a5f00(local_130,lVar15,uVar11,uVar13);
                    goto joined_r0x0001454d9563;
                  }
                  lVar10 = local_168;
                  if (iVar7 != 0) goto LAB_1454d95be;
                }
                iVar6 = iVar6 + 1;
                param_4 = local_158;
                lVar10 = local_168;
                param_10 = local_140;
              } while (iVar6 < 0x1000);
              goto LAB_1454d90d0;
            }
          } while (iVar6 == 0);
        }
      }
    }
LAB_1454d95be:
    FUN_144eedf20(lVar10);
    FUN_144eeddc0(lVar10);
    FUN_144ece7b0(local_128);
  }
LAB_1454d8fcf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70[4] ^ (ulonglong)auStack_198);
joined_r0x0001454d9563:
  if (iVar7 == 0) goto LAB_1454d95be;
  iVar7 = FUN_144ba0350(local_130);
  if (iVar7 == 0) {
    iVar7 = FUN_144eed020(lVar12,3,1);
    lVar12 = local_f0;
    if (iVar7 != 0) {
      local_15c = 1;
      FUN_144ba0cd0(*(undefined8 *)(local_f0 + 8));
      FUN_144ba0cd0(*(undefined8 *)(lVar12 + 0x10));
      FUN_144ba0cd0(*(undefined8 *)(lVar12 + 0x18));
      uVar11 = FUN_144ba0e20(uVar13);
      *(undefined8 *)(lVar12 + 8) = uVar11;
      uVar11 = FUN_144ba0e20(local_150);
      *(undefined8 *)(lVar12 + 0x10) = uVar11;
      lVar15 = FUN_144ba0e20(local_130);
      *(longlong *)(lVar12 + 0x18) = lVar15;
      if (((*(longlong *)(lVar12 + 8) == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) || (lVar15 == 0)
         ) {
        local_15c = 0;
      }
      else {
        if (local_e8 != (int *)0x0) {
          *local_e8 = iVar6;
        }
        if (local_e0 != (undefined4 *)0x0) {
          *local_e0 = (int)local_100;
        }
        if (local_d8 != (void *)0x0) {
          memcpy(local_d8,local_90,_Size);
        }
      }
    }
    goto LAB_1454d95be;
  }
  uVar14 = FUN_144ba03c0();
  iVar7 = FUN_144eee4f0(lVar15,lVar15,uVar14);
  if (iVar7 == 0) goto LAB_1454d95be;
  local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
  local_170 = local_128;
  local_178 = lVar10;
  iVar7 = FUN_1452a5f00(local_130,lVar15,uVar11,uVar13);
  goto joined_r0x0001454d9563;
}



// FUNCTION 1454d96d0 FUN_1454d96d0 body=2864 status=ok
// SIG undefined FUN_1454d96d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454d96d0(longlong param_1,ulonglong param_2,ulonglong param_3,void *param_4,void *param_5,
                  ulonglong param_6,int param_7,void *param_8,int *param_9,undefined4 *param_10,
                  void *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  byte *pbVar17;
  ulonglong uVar18;
  void *_Dst;
  void *pvVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_198 [32];
  void *local_178;
  void *local_170;
  undefined4 local_168;
  void *local_160;
  void *local_158;
  longlong local_150;
  int local_148;
  uint local_144;
  void *local_140;
  ulonglong local_138;
  void *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  void *local_110;
  void *local_108;
  longlong local_100;
  int local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  void *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  int *local_a8;
  undefined4 *local_a0;
  byte local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1454d96e7;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_108 = param_5;
  local_d8 = param_8;
  local_a0 = param_10;
  local_140 = param_11;
  pvVar4 = (void *)0x0;
  _Dst = (void *)0x0;
  iVar20 = 0;
  uVar22 = param_3 >> 3;
  local_110 = (void *)0x0;
  local_148 = 0;
  local_138 = param_6;
  local_a8 = param_9;
  local_168 = 0xffffffff;
  local_130 = param_4;
  local_f0 = param_2;
  local_e8 = param_1;
  local_b0 = uVar22;
  local_120 = FUN_144ba5700();
  local_118 = 2;
  pvVar6 = pvVar4;
  pvVar19 = pvVar4;
  if (local_120 != 0) {
    if (param_3 < param_2) {
      if (param_4 == (void *)0x0) {
        if (param_3 == 0xa0) {
          param_4 = (void *)FUN_144bab020();
          local_130 = param_4;
        }
        else if (param_3 == 0xe0) {
          param_4 = (void *)FUN_144bab030();
          local_130 = param_4;
        }
        else {
          param_4 = (void *)FUN_144bab040();
          local_130 = param_4;
        }
      }
      local_144 = FUN_144ba3cd0(param_4);
      uVar18 = (ulonglong)(int)local_144;
      if (((*(longlong *)(local_e8 + 8) == 0) || (*(longlong *)(local_e8 + 0x10) == 0)) ||
         (pvVar16 = local_108, -1 < param_7)) {
        if (param_6 == 0) {
          param_6 = uVar18;
          local_138 = uVar18;
        }
        _Dst = (void *)FUN_144ea64e0(param_6,"crypto\\dsa\\dsa_gen.c",0x15e);
        pvVar5 = local_d8;
        if (local_d8 == (void *)0x0) {
          pvVar5 = (void *)FUN_144ea64e0(param_6,"crypto\\dsa\\dsa_gen.c",0x163);
        }
        pvVar16 = local_108;
        pvVar19 = _Dst;
        local_110 = pvVar5;
        if ((_Dst == (void *)0x0) || (pvVar5 == (void *)0x0)) goto LAB_1454d97eb;
        if (local_108 != (void *)0x0) {
          memcpy(_Dst,local_108,param_6);
        }
      }
      pvVar6 = (void *)FUN_144eedd20();
      pvVar19 = _Dst;
      local_158 = pvVar6;
      if (pvVar6 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_160 = (void *)FUN_144ece690();
        pvVar4 = local_160;
        if (local_160 != (void *)0x0) {
          FUN_144eede20(pvVar6);
          uVar7 = FUN_144eede90(pvVar6);
          local_e0 = FUN_144eede90(pvVar6);
          uVar8 = FUN_144eede90(pvVar6);
          local_c8 = uVar8;
          local_b8 = FUN_144eede90(local_158);
          local_c0 = FUN_144eede90(local_158);
          local_150 = FUN_144eede90(local_158);
          pvVar4 = local_160;
          pvVar6 = local_158;
          if (local_150 != 0) {
            local_100 = *(longlong *)(local_e8 + 8);
            if ((local_100 == 0) || (local_128 = *(longlong *)(local_e8 + 0x10), local_128 == 0)) {
              local_100 = FUN_144eede90(local_158);
              local_128 = FUN_144eede90(local_158);
              pvVar4 = local_160;
              pvVar6 = local_158;
              if (local_128 != 0) {
                iVar20 = (int)local_f0 + -1;
                local_f8 = iVar20;
                uVar9 = FUN_144ba03c0();
                iVar20 = FUN_144eefdb0(local_150,uVar9,iVar20);
                pvVar4 = local_160;
                pvVar6 = local_158;
                if (iVar20 != 0) {
                  local_d0 = (longlong)(int)uVar22;
                  pvVar5 = local_130;
                  do {
                    while( true ) {
                      iVar20 = FUN_144eed020(local_140,0,local_148);
                      local_148 = local_148 + 1;
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      if ((iVar20 == 0) ||
                         ((pvVar16 == (void *)0x0 &&
                          (iVar20 = FUN_144bac850(_Dst,param_6 & 0xffffffff), pvVar4 = local_160,
                          pvVar6 = local_158, iVar20 < 1)))) goto LAB_1454d97eb;
                      local_170 = (void *)0x0;
                      local_178 = pvVar5;
                      iVar20 = FUN_144ba5d40(_Dst,param_6,local_98,0);
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      if (iVar20 == 0) goto LAB_1454d97eb;
                      pbVar17 = local_98;
                      iVar20 = (int)uVar22;
                      iVar1 = (int)uVar18;
                      if (iVar20 < iVar1) {
                        pbVar17 = pbVar17 + (iVar1 - local_d0);
                      }
                      if (iVar1 < iVar20) {
                        memset(local_98 + iVar1,0,(longlong)(iVar20 - iVar1));
                      }
                      *pbVar17 = *pbVar17 | 0x80;
                      pbVar17[local_d0 + -1] = pbVar17[local_d0 + -1] | 1;
                      lVar13 = FUN_144ba0740(pbVar17,uVar22 & 0xffffffff,local_128);
                      pvVar16 = local_108;
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      if (lVar13 == 0) goto LAB_1454d97eb;
                      local_178 = local_140;
                      iVar20 = FUN_144eed3b0(local_128);
                      if (iVar20 < 1) break;
                      if (local_d8 != (void *)0x0) {
                        memcpy(local_d8,_Dst,param_6);
                      }
                      pvVar16 = local_140;
                      iVar20 = FUN_144eed020(local_140,2);
                      pvVar4 = local_160;
                      pvVar6 = local_158;
                      if ((iVar20 == 0) ||
                         (iVar20 = FUN_144eed020(pvVar16), pvVar4 = local_160, pvVar6 = local_158,
                         iVar20 == 0)) goto LAB_1454d97eb;
                      iVar20 = 0;
                      uVar22 = local_f0 - 1;
                      do {
                        if ((iVar20 != 0) &&
                           (iVar2 = FUN_144eed020(pvVar16,0,iVar20), pvVar4 = local_160,
                           pvVar6 = local_158, iVar2 == 0)) goto LAB_1454d97eb;
                        FUN_144ba0bb0(uVar8,0);
                        iVar2 = 0;
                        iVar21 = (int)(uVar22 / (ulonglong)(longlong)(iVar1 * 8));
                        if (-1 < iVar21) {
                          iVar15 = 0;
                          lVar13 = (longlong)((int)local_138 + -1);
                          do {
                            if (-1 < lVar13) {
                              pcVar10 = (char *)(lVar13 + (longlong)_Dst);
                              do {
                                *pcVar10 = *pcVar10 + '\x01';
                                if (*pcVar10 != '\0') break;
                                pcVar10 = pcVar10 + -1;
                              } while (-1 < (longlong)pcVar10 - (longlong)_Dst);
                            }
                            local_170 = (void *)0x0;
                            local_178 = local_130;
                            iVar3 = FUN_144ba5d40(_Dst,local_138,local_98,0);
                            pvVar4 = local_160;
                            pvVar6 = local_158;
                            if ((((iVar3 == 0) ||
                                 (lVar12 = FUN_144ba0740(local_98,local_144,uVar7),
                                 pvVar4 = local_160, pvVar6 = local_158, lVar12 == 0)) ||
                                (iVar3 = FUN_144eefdb0(uVar7,uVar7,iVar15), pvVar4 = local_160,
                                pvVar6 = local_158, iVar3 == 0)) ||
                               (iVar3 = FUN_144eee4f0(local_c8,local_c8,uVar7), pvVar4 = local_160,
                               pvVar6 = local_158, iVar3 == 0)) goto LAB_1454d97eb;
                            iVar2 = iVar2 + 1;
                            iVar15 = iVar15 + iVar1 * 8;
                            uVar8 = local_c8;
                          } while (iVar2 <= iVar21);
                        }
                        iVar2 = FUN_144ba0d90(uVar8,local_f8);
                        uVar9 = local_b8;
                        pvVar4 = local_160;
                        pvVar6 = local_158;
                        if (((iVar2 == 0) ||
                            (lVar13 = FUN_144ba06b0(local_b8,uVar8), pvVar4 = local_160,
                            pvVar6 = local_158, lVar13 == 0)) ||
                           ((iVar2 = FUN_144eee4f0(uVar9,uVar9,local_150), pvVar4 = local_160,
                            pvVar6 = local_158, iVar2 == 0 ||
                            (iVar2 = FUN_144eefe10(uVar7,local_128), pvVar6 = local_158,
                            pvVar4 = local_160, iVar2 == 0)))) goto LAB_1454d97eb;
                        local_178 = local_158;
                        iVar2 = FUN_144eef830(0,local_c0,uVar9);
                        pvVar4 = local_160;
                        if (iVar2 == 0) goto LAB_1454d97eb;
                        uVar11 = FUN_144ba03c0();
                        iVar2 = FUN_144eee270(uVar7,local_c0,uVar11);
                        lVar13 = local_100;
                        pvVar4 = local_160;
                        if ((iVar2 == 0) ||
                           (iVar2 = FUN_144eee270(local_100,uVar9,uVar7), pvVar4 = local_160,
                           iVar2 == 0)) goto LAB_1454d97eb;
                        iVar2 = FUN_144ba0c40(lVar13);
                        pvVar16 = local_140;
                        if (-1 < iVar2) {
                          local_178 = local_140;
                          iVar2 = FUN_144eed3b0(local_100,0x40,pvVar6);
                          if (0 < iVar2) {
                            iVar1 = FUN_144eed020(pvVar16,2,1);
                            pvVar4 = local_160;
                            if (iVar1 == 0) goto LAB_1454d97eb;
                            uVar18 = (ulonglong)local_144;
                            param_6 = local_138;
                            goto LAB_1454d9a43;
                          }
                          pvVar4 = local_160;
                          if (iVar2 != 0) goto LAB_1454d97eb;
                        }
                        iVar20 = iVar20 + 1;
                      } while (iVar20 < (int)local_f0 * 4);
                      if (local_108 != (void *)0x0) {
                        local_178 = (void *)CONCAT44(local_178._4_4_,0x20d);
                        FUN_144ba24f0(10,0x7e,0x70,"crypto\\dsa\\dsa_gen.c");
                        pvVar4 = local_160;
                        goto LAB_1454d97eb;
                      }
                      uVar18 = (ulonglong)local_144;
                      pvVar16 = local_108;
                      pvVar5 = local_130;
                      uVar22 = local_b0;
                      param_6 = local_138;
                    }
                    pvVar4 = local_160;
                    pvVar6 = local_158;
                    if (iVar20 != 0) goto LAB_1454d97eb;
                  } while (pvVar16 == (void *)0x0);
                  local_178 = (void *)CONCAT44(local_178._4_4_,0x1b4);
                  FUN_144ba24f0(10,0x7e,0x71,"crypto\\dsa\\dsa_gen.c");
                  pvVar4 = local_160;
                  pvVar6 = local_158;
                }
              }
            }
            else {
              pvVar16 = local_140;
              if (-1 < param_7) {
                memcpy(local_110,_Dst,param_6);
                pvVar16 = local_140;
              }
LAB_1454d9a43:
              uVar8 = FUN_144ba03c0();
              lVar13 = local_100;
              iVar1 = FUN_144eee270(local_150,local_100,uVar8);
              pvVar6 = local_158;
              pvVar4 = local_160;
              if (iVar1 != 0) {
                local_178 = local_158;
                iVar1 = FUN_144eef830(uVar7,0,local_150,local_128);
                pvVar4 = local_160;
                if (iVar1 != 0) {
                  if (param_7 < 0) {
                    iVar1 = FUN_144ba0bb0(local_150,2);
                    pvVar4 = local_160;
                    if (iVar1 == 0) goto LAB_1454d97eb;
                  }
                  else {
                    local_118 = CONCAT44(local_118._4_4_,1);
                  }
                  iVar1 = FUN_144ece810(local_160,lVar13,pvVar6);
                  pvVar4 = local_160;
                  if (iVar1 != 0) {
                    do {
                      if (-1 < param_7) {
                        local_98[0] = (byte)param_7;
                        local_98[1] = (byte)(local_118 >> 8);
                        local_98[2] = (byte)local_118;
                        iVar1 = FUN_144ba5a20(local_120,local_130,0);
                        pvVar4 = local_160;
                        if ((((iVar1 == 0) ||
                             (iVar1 = FUN_144ba5c70(local_120,local_110,param_6), pvVar4 = local_160
                             , iVar1 == 0)) ||
                            (iVar1 = FUN_144ba5c70(local_120,"ggencrypto\\dsa\\dsa_gen.c",4),
                            pvVar4 = local_160, iVar1 == 0)) ||
                           (((iVar1 = FUN_144ba5c70(local_120,local_98,3), pvVar4 = local_160,
                             iVar1 == 0 ||
                             (iVar1 = FUN_144ba5ca0(local_120,local_98,0), pvVar4 = local_160,
                             iVar1 == 0)) ||
                            (lVar12 = FUN_144ba0740(local_98,uVar18 & 0xffffffff,local_150),
                            pvVar4 = local_160, lVar12 == 0)))) break;
                      }
                      do {
                        local_170 = local_160;
                        local_178 = pvVar6;
                        iVar1 = FUN_1452a5f00(local_e0,local_150,uVar7,lVar13);
                        pvVar4 = local_160;
                        if (iVar1 == 0) goto LAB_1454d97eb;
                        iVar1 = FUN_144ba0350(local_e0);
                        if (iVar1 == 0) {
                          iVar1 = FUN_144eed020(pvVar16,3,1);
                          lVar12 = local_e8;
                          pvVar4 = local_160;
                          if (iVar1 != 0) {
                            if (lVar13 != *(longlong *)(local_e8 + 8)) {
                              FUN_144ba0cd0();
                              uVar8 = FUN_144ba0e20(lVar13);
                              *(undefined8 *)(lVar12 + 8) = uVar8;
                            }
                            lVar13 = local_128;
                            if (local_128 != *(longlong *)(lVar12 + 0x10)) {
                              FUN_144ba0cd0();
                              uVar8 = FUN_144ba0e20(lVar13);
                              *(undefined8 *)(lVar12 + 0x10) = uVar8;
                            }
                            FUN_144ba0cd0(*(undefined8 *)(lVar12 + 0x18));
                            lVar13 = FUN_144ba0e20(local_e0);
                            *(longlong *)(lVar12 + 0x18) = lVar13;
                            pvVar4 = local_160;
                            if (((*(longlong *)(lVar12 + 8) != 0) &&
                                (*(longlong *)(lVar12 + 0x10) != 0)) && (lVar13 != 0)) {
                              if (local_a8 != (int *)0x0) {
                                *local_a8 = iVar20;
                              }
                              if (local_a0 != (undefined4 *)0x0) {
                                *local_a0 = (int)local_118;
                              }
                            }
                          }
                          goto LAB_1454d97eb;
                        }
                        if (param_7 < 0) {
                          FUN_144ba03c0();
                          iVar1 = FUN_144eee4f0(local_150);
                          pvVar4 = local_160;
                          if (iVar1 == 0) goto LAB_1454d97eb;
                        }
                        uVar14 = (int)local_118 + 1;
                        local_118 = (ulonglong)uVar14;
                      } while (param_7 < 0);
                      pvVar4 = local_160;
                      if (0xffff < uVar14) break;
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_178 = (void *)CONCAT44(local_178._4_4_,0x14b);
      FUN_144ba24f0(10,0x7e,0x70,"crypto\\dsa\\dsa_gen.c");
      pvVar19 = _Dst;
    }
  }
LAB_1454d97eb:
  FUN_144ea6530(pvVar19,"crypto\\dsa\\dsa_gen.c",0x25e);
  if (local_d8 != local_110) {
    FUN_144ea6530(local_110,"crypto\\dsa\\dsa_gen.c",0x260);
  }
  FUN_144eedf20(pvVar6);
  FUN_144eeddc0(pvVar6);
  FUN_144ece7b0(pvVar4);
  FUN_144ba5800(local_120);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_198);
}



// FUNCTION 1454da220 FUN_1454da220 body=42 status=ok
// SIG undefined FUN_1454da220(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454da220(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x50) + 0x58);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454da23e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_1454da250();
  return;
}



// FUNCTION 1454da250 FUN_1454da250 body=294 status=ok
// SIG undefined FUN_1454da250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454da250(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar2 = FUN_144eedd20();
  lVar3 = lVar6;
  lVar4 = lVar6;
  lVar7 = lVar6;
  if ((lVar2 != 0) &&
     ((lVar3 = *(longlong *)(param_1 + 0x28), lVar4 = 0, lVar3 != 0 ||
      (lVar3 = FUN_144ba05d0(), lVar3 != 0)))) {
    do {
      iVar1 = FUN_1452983f0(lVar3,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) goto LAB_1454da33b;
      iVar1 = FUN_144ba0340(lVar3);
    } while (iVar1 != 0);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (((lVar4 != 0) || (lVar4 = FUN_144ba0570(), lVar7 = 0, lVar4 != 0)) &&
       (lVar5 = FUN_144ba0570(), lVar7 = lVar6, lVar5 != 0)) {
      FUN_144ba0240(lVar5,lVar3,4);
      iVar1 = FUN_1452a5e00(lVar4,*(undefined8 *)(param_1 + 0x18),lVar5,*(undefined8 *)(param_1 + 8)
                            ,lVar2);
      if (iVar1 == 0) {
        FUN_144ba0cd0(lVar5);
      }
      else {
        FUN_144ba0cd0(lVar5);
        *(longlong *)(param_1 + 0x28) = lVar3;
        lVar7 = 1;
        *(longlong *)(param_1 + 0x20) = lVar4;
      }
    }
  }
LAB_1454da33b:
  if (lVar4 != *(longlong *)(param_1 + 0x20)) {
    FUN_144ba0cd0(lVar4);
  }
  if (lVar3 != *(longlong *)(param_1 + 0x28)) {
    FUN_144ba0cd0(lVar3);
  }
  FUN_144eeddc0(lVar2);
  return lVar7;
}



// FUNCTION 1454da380 FUN_1454da380 body=78 status=ok
// SIG undefined FUN_1454da380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454da380(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000028;
  
  if (*(code **)(*in_stack_00000028 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454da3a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000028 + 0x60))();
    return uVar1;
  }
  FUN_144ba24f0(0x10,0xfb,0x98,"crypto\\ec\\ecdsa_sign.c",0x19);
  return 0;
}



// FUNCTION 1454da3d0 FUN_1454da3d0 body=112 status=ok
// SIG undefined FUN_1454da3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454da3d0(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x50) != (code *)0x0) {
    uVar1 = (**(code **)(*in_stack_00000030 + 0x50))();
    return uVar1;
  }
  FUN_144ba24f0(0x10,0xfe,0x98,"crypto\\ec\\ecdsa_sign.c",0x29);
  return 0;
}



// FUNCTION 1454da440 FUN_1454da440 body=74 status=ok
// SIG undefined FUN_1454da440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454da440(void)

{
  undefined8 uVar1;
  longlong *in_R9;
  
  if (*(code **)(*in_R9 + 0x70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454da45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_R9 + 0x70))();
    return uVar1;
  }
  FUN_144ba24f0(0x10,0xfc,0x98,"crypto\\ec\\ecdsa_vrf.c",0x19);
  return 0xffffffff;
}



// FUNCTION 1454da490 FUN_1454da490 body=79 status=ok
// SIG undefined FUN_1454da490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454da490(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000030;
  
  if (*(code **)(*in_stack_00000030 + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001454da4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*in_stack_00000030 + 0x68))();
    return uVar1;
  }
  FUN_144ba24f0(0x10,0xfd,0x98,"crypto\\ec\\ecdsa_vrf.c",0x29);
  return 0xffffffff;
}



// FUNCTION 1454da4e0 FUN_1454da4e0 body=490 status=ok
// SIG undefined FUN_1454da4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454da4e0(void *param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_5;
  local_b4 = 0;
  local_b0 = param_3;
  if ((((param_6 < 0x40000001) && (param_2 < 0x40000001)) && (param_4 < 0x40000001)) &&
     (lVar3 = FUN_144ba5700(), lVar3 != 0)) {
    iVar1 = FUN_144ba3cd0(param_7);
    uVar4 = (ulonglong)iVar1;
    iVar1 = 1;
    iVar2 = FUN_144ba5a20(lVar3,param_7,0);
    while (iVar2 != 0) {
      local_b6 = (undefined1)((uint)iVar1 >> 8);
      local_b5 = (undefined1)iVar1;
      local_b7 = (undefined1)((uint)iVar1 >> 0x10);
      local_b8 = (undefined1)((uint)iVar1 >> 0x18);
      iVar2 = FUN_144ba5c70(lVar3,local_b0,param_4);
      if (((iVar2 == 0) || (iVar2 = FUN_144ba5c70(lVar3,&local_b8,4), iVar2 == 0)) ||
         (iVar2 = FUN_144ba5c70(lVar3,local_a8,param_6), iVar2 == 0)) break;
      if (param_2 < uVar4) {
        iVar1 = FUN_144ba5e90(lVar3,local_98,0);
        if (iVar1 != 0) {
          memcpy(param_1,local_98,param_2);
          FUN_14259f0c0(local_98,uVar4);
LAB_1454da6ab:
          local_b4 = 1;
        }
        break;
      }
      iVar2 = FUN_144ba5e90(lVar3,param_1,0);
      if (iVar2 == 0) break;
      param_2 = param_2 - uVar4;
      if (param_2 == 0) goto LAB_1454da6ab;
      param_1 = (void *)((longlong)param_1 + uVar4);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_144ba5a20(lVar3,param_7,0);
    }
    FUN_144ba5800(lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1454da6e0 FUN_1454da6e0 body=1031 status=ok
// SIG undefined FUN_1454da6e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454da6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  short sVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1454da707;
  uVar4 = FUN_144ed31a0(param_5);
  lVar12 = 0;
  lVar10 = 0;
  local_68[0] = 0;
  lVar5 = FUN_144ba5700();
  lVar6 = FUN_144eedd20();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar4 = 0x2f;
LAB_1454daa86:
    uVar13 = 0x41;
    lVar10 = lVar12;
  }
  else {
    local_58 = FUN_144eede90(lVar6);
    uVar7 = FUN_144eede90(lVar6);
    local_60 = FUN_144eede90(lVar6);
    local_48 = FUN_144eede90(lVar6);
    local_50 = FUN_144eede90(lVar6);
    local_38 = FUN_144eede90(lVar6);
    local_40 = FUN_144eede90(lVar6);
    if (local_40 == 0) {
      uVar4 = 0x3c;
      goto LAB_1454daa86;
    }
    iVar2 = FUN_144ba5e50(lVar5,param_2);
    if (iVar2 == 0) {
      uVar4 = 0x41;
      uVar13 = 6;
      lVar10 = lVar12;
    }
    else if (param_4 < 0x1fff) {
      sVar11 = (short)param_4 << 3;
      local_68[0] = (undefined1)((ushort)sVar11 >> 8);
      iVar2 = FUN_144ba5c70(lVar5,local_68,1);
      if (iVar2 == 0) {
        uVar4 = 0x51;
        uVar13 = 6;
        lVar10 = lVar12;
      }
      else {
        local_68[0] = (undefined1)sVar11;
        iVar2 = FUN_144ba5c70(lVar5,local_68,1);
        if (iVar2 == 0) {
          uVar4 = 0x56;
          uVar13 = 6;
        }
        else {
          if (param_4 != 0) {
            iVar2 = FUN_144ba5c70(lVar5,param_3,param_4);
            if (iVar2 == 0) {
              uVar4 = 0x5b;
              uVar13 = 6;
              goto LAB_1454daa8c;
            }
          }
          uVar8 = local_58;
          uVar9 = local_60;
          iVar2 = FUN_144efc390(uVar4,local_58,uVar7,local_60,lVar6);
          if (iVar2 == 0) {
            uVar4 = 0x60;
            uVar13 = 0x10;
          }
          else {
            iVar2 = FUN_144ba03d0(uVar8);
            iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
            lVar12 = (longlong)iVar2;
            lVar10 = FUN_144ea6670(lVar12,"crypto\\sm2\\sm2_sign.c",0x65);
            if (lVar10 == 0) {
              uVar4 = 0x67;
              lVar12 = lVar10;
              goto LAB_1454daa86;
            }
            iVar3 = FUN_144ba09d0(uVar7,lVar10,iVar2);
            if (-1 < iVar3) {
              iVar3 = FUN_144ba5c70(lVar5,lVar10,lVar12);
              if (iVar3 != 0) {
                iVar3 = FUN_144ba09d0(uVar9,lVar10,iVar2);
                if (-1 < iVar3) {
                  iVar3 = FUN_144ba5c70(lVar5,lVar10,lVar12);
                  if (iVar3 != 0) {
                    uVar8 = FUN_144efc0f0(uVar4);
                    uVar9 = local_48;
                    uVar7 = local_50;
                    iVar3 = FUN_144efcb20(uVar4,uVar8,local_48,local_50,lVar6);
                    if (iVar3 != 0) {
                      iVar3 = FUN_144ba09d0(uVar9,lVar10,iVar2);
                      if (-1 < iVar3) {
                        iVar3 = FUN_144ba5c70(lVar5,lVar10,lVar12);
                        if (iVar3 != 0) {
                          iVar3 = FUN_144ba09d0(uVar7,lVar10,iVar2);
                          if (-1 < iVar3) {
                            iVar3 = FUN_144ba5c70(lVar5,lVar10,lVar12);
                            if (iVar3 != 0) {
                              uVar9 = FUN_144ed3230(param_5);
                              uVar7 = local_38;
                              lVar1 = local_40;
                              iVar3 = FUN_144efcb20(uVar4,uVar9,local_38,local_40,lVar6);
                              if (iVar3 != 0) {
                                iVar3 = FUN_144ba09d0(uVar7,lVar10,iVar2);
                                if (-1 < iVar3) {
                                  iVar3 = FUN_144ba5c70(lVar5,lVar10,lVar12);
                                  if (iVar3 != 0) {
                                    iVar2 = FUN_144ba09d0(lVar1,lVar10,iVar2);
                                    if (-1 < iVar2) {
                                      iVar2 = FUN_144ba5c70(lVar5,lVar10,lVar12);
                                      if (iVar2 != 0) {
                                        iVar2 = FUN_144ba5e90(lVar5,param_1,0);
                                        if (iVar2 != 0) {
                                          uVar4 = 1;
                                          goto LAB_1454daaa2;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar4 = 0x7e;
            uVar13 = 0x44;
          }
        }
      }
    }
    else {
      uVar4 = 0x49;
      uVar13 = 0x6f;
      lVar10 = lVar12;
    }
  }
LAB_1454daa8c:
  FUN_144ba24f0(0x35,0x71,uVar13,"crypto\\sm2\\sm2_sign.c",uVar4);
  uVar4 = 0;
LAB_1454daaa2:
  FUN_144ea6530(lVar10,"crypto\\sm2\\sm2_sign.c",0x85);
  FUN_144eeddc0(lVar6);
  FUN_144ba5800(lVar5);
  return uVar4;
}



// FUNCTION 1454daaf0 FUN_1454daaf0 body=206 status=ok
// SIG undefined FUN_1454daaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454daaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18;
  undefined8 uVar5;
  
  uVar5 = 0x1454dab10;
  uVar3 = 0;
  uVar4 = 0xffffffff;
  local_res18 = param_3;
  lVar2 = FUN_144ba0740(param_1,param_2,0);
  if (lVar2 == 0) {
    FUN_144ba24f0(0x35,0x69,3,"crypto\\sm2\\sm2_sign.c",0x1a3,uVar5);
    uVar4 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1454dad10(param_5,lVar2);
    iVar1 = FUN_144ee6d60(uVar3,&local_res18);
    if (iVar1 < 0) {
      FUN_144ba24f0(0x35,0x69,0x44,"crypto\\sm2\\sm2_sign.c",0x1ab,uVar5);
    }
    else {
      *param_4 = iVar1;
      uVar4 = 1;
    }
  }
  FUN_144ee6d10(uVar3);
  FUN_144ba0cd0(lVar2);
  return uVar4;
}



// FUNCTION 1454dabc0 FUN_1454dabc0 body=332 status=ok
// SIG undefined FUN_1454dabc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1454dabc0(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_res18;
  undefined4 uVar6;
  void *local_28;
  void *local_20;
  
  lVar4 = 0;
  local_res18 = 0;
  local_28 = (void *)0x0;
  uVar2 = 0xffffffff;
  local_20 = param_3;
  local_res18 = FUN_144ee6cb0();
  if (local_res18 == 0) {
    uVar6 = 0x1c4;
    uVar5 = 0x41;
  }
  else {
    lVar3 = FUN_144ee6d80(&local_res18,&local_20,param_4);
    if (lVar3 == 0) {
      uVar6 = 0x1c8;
    }
    else {
      iVar1 = FUN_144ee6d60(local_res18,&local_28);
      if (iVar1 == param_4) {
        iVar1 = memcmp(param_3,local_28,(longlong)iVar1);
        if (iVar1 == 0) {
          lVar4 = FUN_144ba0740(param_1,param_2,0);
          if (lVar4 != 0) {
            uVar2 = FUN_1454db020(param_5,local_res18,lVar4);
            goto LAB_1454dacc8;
          }
          uVar6 = 0x1d4;
          uVar5 = 3;
          goto LAB_1454dacb4;
        }
      }
      uVar6 = 0x1ce;
    }
    uVar5 = 0x68;
  }
LAB_1454dacb4:
  FUN_144ba24f0(0x35,0x6c,uVar5,"crypto\\sm2\\sm2_sign.c",uVar6);
LAB_1454dacc8:
  FUN_144ea6530(local_28,"crypto\\sm2\\sm2_sign.c",0x1db);
  FUN_144ba0cd0(lVar4);
  FUN_144ee6d10(local_res18);
  return uVar2;
}



// FUNCTION 1454dad10 FUN_1454dad10 body=775 status=ok
// SIG undefined FUN_1454dad10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454dad10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar2 = FUN_144ed3220();
  uVar3 = FUN_144ed31a0(param_1);
  uVar4 = FUN_144efc150(uVar3);
  lVar14 = 0;
  lVar13 = 0;
  lVar11 = 0;
  lVar12 = 0;
  lVar5 = FUN_144efc690(uVar3);
  lVar6 = FUN_144eedd20();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    uVar2 = 0xcb;
LAB_1454dafbd:
    uVar3 = 0x41;
  }
  else {
    FUN_144eede20(lVar6);
    uVar7 = FUN_144eede90(lVar6);
    uVar8 = FUN_144eede90(lVar6);
    uVar9 = FUN_144eede90(lVar6);
    lVar10 = FUN_144eede90(lVar6);
    if (lVar10 == 0) {
      uVar2 = 0xd5;
      lVar11 = lVar14;
      lVar12 = lVar14;
      lVar13 = lVar14;
      goto LAB_1454dafbd;
    }
    lVar11 = FUN_144ba0570();
    lVar12 = FUN_144ba0570();
    if ((lVar11 == 0) || (lVar12 == 0)) {
      uVar2 = 0xe1;
      lVar13 = lVar14;
      goto LAB_1454dafbd;
    }
    do {
      do {
        iVar1 = FUN_1452983f0(uVar7,uVar4);
        if (iVar1 == 0) {
          uVar2 = 0xe7;
          uVar3 = 0x44;
          goto LAB_1454dafc3;
        }
        iVar1 = FUN_144efd2c0(uVar3,lVar5,uVar7,0,0,lVar6);
        if (iVar1 == 0) {
LAB_1454daf8b:
          uVar2 = 0xef;
          uVar3 = 0x44;
          lVar13 = lVar14;
          goto LAB_1454dafc3;
        }
        iVar1 = FUN_144efcb20(uVar3,lVar5,uVar9,0,lVar6);
        if (iVar1 == 0) goto LAB_1454daf8b;
        iVar1 = FUN_1452a5660(lVar11,param_2,uVar9,uVar4,lVar6);
        if (iVar1 == 0) goto LAB_1454daf8b;
        iVar1 = FUN_144ba0340(lVar11);
      } while (iVar1 != 0);
      iVar1 = FUN_144eee4f0(uVar8,lVar11,uVar7);
      if (iVar1 == 0) {
        uVar2 = 0xf8;
        uVar3 = 0x44;
        lVar13 = lVar14;
        goto LAB_1454dafc3;
      }
      iVar1 = FUN_144ba0c40(uVar8,uVar4);
    } while (iVar1 == 0);
    uVar8 = FUN_144ba03c0();
    iVar1 = FUN_144eee4f0(lVar12,uVar2,uVar8);
    if ((iVar1 != 0) && (iVar1 = FUN_144efd320(uVar3,lVar12,lVar12,lVar6), iVar1 != 0)) {
      iVar1 = FUN_1452a57a0(lVar10,uVar2,lVar11,uVar4,lVar6);
      if ((iVar1 != 0) && (iVar1 = FUN_144eee270(lVar10,uVar7,lVar10), iVar1 != 0)) {
        iVar1 = FUN_1452a57a0(lVar12,lVar12,lVar10,uVar4,lVar6);
        if (iVar1 != 0) {
          lVar13 = FUN_144ee6cb0();
          if (lVar13 != 0) {
            FUN_144ee6dc0(lVar13,lVar11,lVar12);
            goto LAB_1454dafe7;
          }
          uVar2 = 0x10a;
          goto LAB_1454dafbd;
        }
      }
    }
    uVar2 = 0x104;
    uVar3 = 3;
    lVar13 = lVar14;
  }
LAB_1454dafc3:
  FUN_144ba24f0(0x35,0x6a,uVar3,"crypto\\sm2\\sm2_sign.c",uVar2);
  FUN_144ba0cd0(lVar11);
  FUN_144ba0cd0(lVar12);
LAB_1454dafe7:
  FUN_144eeddc0(lVar6);
  FUN_144efc7a0(lVar5);
  return lVar13;
}



// FUNCTION 1454db020 FUN_1454db020 body=616 status=ok
// SIG undefined FUN_1454db020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454db020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454db044;
  uVar10 = 0;
  uVar2 = FUN_144ed31a0();
  uVar3 = FUN_144efc150(uVar2);
  local_48 = 0;
  local_res20 = 0;
  lVar4 = FUN_144eedd20();
  lVar5 = FUN_144efc690(uVar2);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    uVar2 = 0x12e;
LAB_1454db243:
    uVar9 = 0x41;
  }
  else {
    FUN_144eede20(lVar4);
    uVar6 = FUN_144eede90(lVar4);
    lVar7 = FUN_144eede90(lVar4);
    if (lVar7 == 0) {
      uVar2 = 0x136;
      goto LAB_1454db243;
    }
    FUN_144ee6da0(param_2,&local_48,&local_res20);
    uVar8 = FUN_144ba03c0();
    iVar1 = FUN_144ba0c40(local_48,uVar8);
    if (iVar1 < 0) {
LAB_1454db22b:
      uVar2 = 0x14a;
      uVar9 = 0x65;
    }
    else {
      uVar8 = FUN_144ba03c0();
      iVar1 = FUN_144ba0c40(local_res20,uVar8);
      if (iVar1 < 0) goto LAB_1454db22b;
      iVar1 = FUN_144ba0c40(uVar3,local_48);
      if (iVar1 < 1) goto LAB_1454db22b;
      iVar1 = FUN_144ba0c40(uVar3,local_res20);
      if (iVar1 < 1) goto LAB_1454db22b;
      iVar1 = FUN_1452a5660(uVar6,local_48,local_res20,uVar3,lVar4);
      if (iVar1 == 0) {
        uVar2 = 0x14f;
        uVar9 = 3;
      }
      else {
        iVar1 = FUN_144ba0340(uVar6);
        if (iVar1 == 0) {
          uVar8 = FUN_144ed3230(param_1);
          iVar1 = FUN_144efd2c0(uVar2,lVar5,local_res20,uVar8,uVar6,lVar4);
          if (iVar1 != 0) {
            iVar1 = FUN_144efcb20(uVar2,lVar5,lVar7,0,lVar4);
            if (iVar1 != 0) {
              iVar1 = FUN_1452a5660(uVar6,param_3,lVar7,uVar3,lVar4);
              if (iVar1 != 0) {
                iVar1 = FUN_144ba0c40(local_48,uVar6);
                if (iVar1 == 0) {
                  uVar10 = 1;
                }
                goto LAB_1454db25d;
              }
              uVar2 = 0x15f;
              uVar9 = 3;
              goto LAB_1454db249;
            }
          }
          uVar2 = 0x15a;
          uVar9 = 0x10;
        }
        else {
          uVar2 = 0x154;
          uVar9 = 0x65;
        }
      }
    }
  }
LAB_1454db249:
  FUN_144ba24f0(0x35,0x6b,uVar9,"crypto\\sm2\\sm2_sign.c",uVar2);
LAB_1454db25d:
  FUN_144efc7a0(lVar5);
  FUN_144eeddc0(lVar4);
  return uVar10;
}



// FUNCTION 1454db290 FUN_1454db290 body=189 status=ok
// SIG undefined FUN_1454db290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454db290(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = FUN_144ed31a0();
  lVar5 = FUN_1454dc150(uVar4);
  iVar1 = FUN_144ba3cd0(param_2);
  if ((lVar5 == 0) || (iVar1 < 0)) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_144f041d0(0,(int)lVar5 + 1,2);
    iVar3 = FUN_144f041d0(0,param_3,4);
    iVar1 = FUN_144f041d0(0,iVar1,4);
    iVar1 = FUN_144f041d0(1,(longlong)(iVar1 + iVar2 * 2 + iVar3),0x10);
    uVar4 = 1;
    *param_4 = (longlong)iVar1;
  }
  return uVar4;
}



// FUNCTION 1454db350 FUN_1454db350 body=127 status=ok
// SIG undefined FUN_1454db350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454db350(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x1454db360;
  local_res8[0] = param_1;
  lVar1 = FUN_144eff7f0(0,local_res8,param_2,&DAT_149d8c190);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x35,0x68,0x68,"crypto\\sm2\\sm2_crypt.c",0x47,uVar2);
    return 0;
  }
  *param_3 = (longlong)**(int **)(lVar1 + 0x18);
  FUN_144eff330(lVar1,&DAT_149d8c190);
  return 1;
}



// FUNCTION 1454db3d0 FUN_1454db3d0 body=1736 status=ok
// SIG undefined FUN_1454db3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
FUN_1454db3d0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulonglong *param_4,
             void *param_5,size_t *param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  byte *pbVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff28;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong *puVar19;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uStack_40 = 0x1454db3f4;
  puVar19 = (ulonglong *)0x0;
  puVar18 = (ulonglong *)0x0;
  lVar6 = FUN_144ba5700();
  uVar7 = FUN_144ed31a0(param_1);
  local_58 = FUN_144efc150(uVar7);
  local_50 = FUN_144ed3230(param_1);
  local_a0 = 0;
  puVar17 = (ulonglong *)0x0;
  local_98 = 0;
  local_a8 = 0;
  iVar4 = FUN_144ba3cd0(param_2);
  local_60 = 0;
  local_68 = 0;
  if ((lVar6 == 0) || (iVar4 < 1)) {
    uVar7 = CONCAT44(uVar20,0x84);
LAB_1454db9dd:
    uVar20 = 0x44;
    puVar9 = puVar19;
  }
  else {
    uVar8 = FUN_1454dc150(uVar7);
    if (uVar8 == 0) {
      uVar7 = CONCAT44(uVar20,0x8a);
      goto LAB_1454db9dd;
    }
    local_a0 = FUN_144efc690(uVar7);
    local_98 = FUN_144efc690(uVar7);
    puVar9 = (ulonglong *)FUN_144eedd20();
    if (((local_a0 == 0) || (local_98 == 0)) || (puVar9 == (ulonglong *)0x0)) {
      uVar7 = CONCAT44(uVar20,0x92);
      uVar20 = 0x41;
    }
    else {
      FUN_144eede20(puVar9);
      uVar10 = FUN_144eede90(puVar9);
      uVar11 = FUN_144eede90(puVar9);
      local_48 = FUN_144eede90(puVar9);
      uVar12 = FUN_144eede90(puVar9);
      lVar13 = FUN_144eede90(puVar9);
      if (lVar13 != 0) {
        local_a8 = FUN_144ea6670(uVar8 * 2,"crypto\\sm2\\sm2_crypt.c",0xa2);
        puVar14 = (ulonglong *)FUN_144ea6670((longlong)iVar4,"crypto\\sm2\\sm2_crypt.c",0xa3);
        if ((local_a8 == 0) || (puVar14 == (ulonglong *)0x0)) {
          uVar7 = CONCAT44(uVar20,0xa6);
          puVar17 = puVar19;
LAB_1454db9a4:
          uVar20 = 0x41;
LAB_1454db9aa:
          FUN_144ba24f0(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar7);
          puVar18 = puVar19;
          goto LAB_1454db9fa;
        }
        memset(param_5,0,*param_6);
        iVar5 = FUN_1452983f0(uVar10,local_58);
        if (iVar5 == 0) {
          uVar7 = CONCAT44(uVar20,0xad);
LAB_1454db5b7:
          FUN_144ba24f0(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar7);
          puVar18 = puVar19;
        }
        else {
          uVar20 = 0;
          iVar5 = FUN_144efd2c0(uVar7,local_a0,uVar10,0,0,puVar9);
          if (iVar5 != 0) {
            puVar15 = puVar9;
            iVar5 = FUN_144efcb20(uVar7,local_a0,uVar11,uVar12,puVar9);
            uVar20 = (undefined4)((ulonglong)puVar15 >> 0x20);
            if (iVar5 != 0) {
              iVar5 = FUN_144efd2c0(uVar7,local_98,0,local_50,uVar10,puVar9);
              uVar3 = local_48;
              uVar20 = (undefined4)((ulonglong)uVar10 >> 0x20);
              if (iVar5 != 0) {
                puVar15 = puVar9;
                iVar5 = FUN_144efcb20(uVar7,local_98,local_48,lVar13,puVar9);
                uVar20 = (undefined4)((ulonglong)puVar15 >> 0x20);
                if (iVar5 != 0) {
                  iVar5 = FUN_144ba09d0(uVar3,local_a8,uVar8 & 0xffffffff);
                  if (-1 < iVar5) {
                    iVar5 = FUN_144ba09d0(lVar13,uVar8 + local_a8,uVar8 & 0xffffffff);
                    if (-1 < iVar5) {
                      puVar17 = (ulonglong *)FUN_144ea6670(param_4,"crypto\\sm2\\sm2_crypt.c",0xbf);
                      if (puVar17 == (ulonglong *)0x0) {
                        uVar7 = CONCAT44(uVar20,0xc1);
                        goto LAB_1454db9a4;
                      }
                      uVar20 = 0;
                      iVar5 = FUN_1454da4e0(puVar17,param_4,local_a8,uVar8 * 2,0,0,param_2);
                      if (iVar5 != 0) {
                        if (param_4 != (ulonglong *)0x0) {
                          if ((&DAT_0000001f < param_4) &&
                             ((param_3 + -1 + (longlong)param_4 < puVar17 ||
                              ((undefined1 *)((longlong)param_4 + -1) + (longlong)puVar17 < param_3)
                              ))) {
                            puVar15 = puVar17;
                            do {
                              puVar19 = puVar19 + 4;
                              puVar1 = (ulonglong *)
                                       (((longlong)param_3 - (longlong)puVar17) + (longlong)puVar15)
                              ;
                              uVar2 = puVar1[1];
                              *puVar15 = *puVar1 ^ *puVar15;
                              puVar15[1] = uVar2 ^ puVar15[1];
                              puVar1 = (ulonglong *)
                                       (((longlong)param_3 - (longlong)puVar17) + -0x10 +
                                       (longlong)(puVar15 + 4));
                              uVar2 = puVar1[1];
                              puVar15[2] = *puVar1 ^ puVar15[2];
                              puVar15[3] = uVar2 ^ puVar15[3];
                              puVar15 = puVar15 + 4;
                            } while (puVar19 !=
                                     (ulonglong *)
                                     ((longlong)param_4 - (ulonglong)((uint)param_4 & 0x1f)));
                          }
                          if (puVar19 != param_4) {
                            pbVar16 = (byte *)((longlong)puVar19 + (longlong)puVar17);
                            lVar13 = (longlong)param_4 - (longlong)puVar19;
                            do {
                              *pbVar16 = *pbVar16 ^ pbVar16[(longlong)param_3 - (longlong)puVar17];
                              pbVar16 = pbVar16 + 1;
                              lVar13 = lVar13 + -1;
                            } while (lVar13 != 0);
                          }
                        }
                        iVar5 = FUN_144ba5e50(lVar6,param_2);
                        if ((((iVar5 == 0) ||
                             (iVar5 = FUN_144ba5c70(lVar6,local_a8,uVar8), iVar5 == 0)) ||
                            (iVar5 = FUN_144ba5c70(lVar6,param_3,param_4), iVar5 == 0)) ||
                           ((iVar5 = FUN_144ba5c70(lVar6,uVar8 + local_a8,uVar8), iVar5 == 0 ||
                            (iVar5 = FUN_144ba5e90(lVar6,puVar14,0), iVar5 == 0)))) {
                          FUN_144ba24f0(0x35,0x67,6,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xd4)
                                       );
                        }
                        else {
                          local_78 = uVar11;
                          local_70 = uVar12;
                          local_68 = FUN_144efe930();
                          local_60 = FUN_144efe930();
                          if ((local_68 == 0) || (local_60 == 0)) {
                            FUN_144ba24f0(0x35,0x67,0x41,"crypto\\sm2\\sm2_crypt.c",
                                          CONCAT44(uVar20,0xde));
                          }
                          else {
                            iVar4 = FUN_144ef2c50(local_68,puVar14,iVar4);
                            if ((iVar4 == 0) ||
                               (iVar4 = FUN_144ef2c50(local_60,puVar17,
                                                      (ulonglong)param_4 & 0xffffffff), iVar4 == 0))
                            {
                              uVar7 = CONCAT44(uVar20,0xe3);
                            }
                            else {
                              iVar4 = FUN_144f01520(&local_78,&param_5,&DAT_149d8c190);
                              if (-1 < iVar4) {
                                puVar18 = (ulonglong *)&DAT_00000001;
                                *param_6 = (longlong)iVar4;
                                goto LAB_1454db9fa;
                              }
                              uVar7 = CONCAT44(uVar20,0xea);
                            }
                            FUN_144ba24f0(0x35,0x67,0x44,"crypto\\sm2\\sm2_crypt.c",uVar7);
                          }
                        }
                        goto LAB_1454db9fa;
                      }
                      uVar7 = CONCAT44(uVar20,200);
                      uVar20 = 6;
                      goto LAB_1454db9aa;
                    }
                  }
                  uVar7 = CONCAT44(uVar20,0xbb);
                  goto LAB_1454db5b7;
                }
              }
            }
          }
          FUN_144ba24f0(0x35,0x67,0x10,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar20,0xb5));
        }
        goto LAB_1454db9fa;
      }
      uVar7 = CONCAT44(uVar20,0x9e);
      uVar20 = 3;
    }
  }
  FUN_144ba24f0(0x35,0x67,uVar20,"crypto\\sm2\\sm2_crypt.c",uVar7);
  puVar17 = puVar19;
  puVar18 = puVar19;
  puVar14 = puVar19;
LAB_1454db9fa:
  FUN_144efe950(local_60);
  FUN_144efe950(local_68);
  FUN_144ea6530(puVar17,"crypto\\sm2\\sm2_crypt.c",0xf4);
  FUN_144ea6530(local_a8,"crypto\\sm2\\sm2_crypt.c",0xf5);
  FUN_144ea6530(puVar14,"crypto\\sm2\\sm2_crypt.c",0xf6);
  FUN_144ba5800(lVar6);
  FUN_144eeddc0(puVar9);
  FUN_144efc7a0(local_a0);
  FUN_144efc7a0(local_98);
  return puVar18;
}



// FUNCTION 1454dbaa0 FUN_1454dbaa0 body=1704 status=ok
// SIG undefined FUN_1454dbaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong *
FUN_1454dbaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5,size_t *param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  byte *pbVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  undefined4 uVar24;
  undefined8 local_res18;
  undefined8 in_stack_ffffffffffffff58;
  longlong lVar25;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  puVar22 = (ulonglong *)0x0;
  local_70 = 0;
  local_res18 = param_3;
  uVar10 = FUN_144ed31a0();
  local_68 = 0;
  local_78 = 0;
  uVar11 = FUN_1454dc150(uVar10);
  iVar7 = FUN_144ba3cd0(param_2);
  puVar23 = (ulonglong *)0x0;
  puVar19 = puVar22;
  puVar12 = puVar22;
  puVar15 = puVar22;
  puVar16 = puVar22;
  if ((uVar11 != 0) && (puVar12 = (ulonglong *)0x0, 0 < iVar7)) {
    memset(param_5,0xff,*param_6);
    puVar12 = (ulonglong *)FUN_144eff7f0(0,&local_res18,param_4,&DAT_149d8c190);
    if (puVar12 == (ulonglong *)0x0) {
      uVar10 = CONCAT44(uVar24,0x11d);
      uVar24 = 100;
    }
    else if (*(int *)puVar12[2] == iVar7) {
      uVar4 = *(undefined8 *)((int *)puVar12[2] + 2);
      uVar3 = *(uint *)puVar12[3];
      uVar21 = (ulonglong)(int)uVar3;
      puVar5 = *(ulonglong **)((uint *)puVar12[3] + 2);
      if (*param_6 < uVar21) {
        uVar10 = CONCAT44(uVar24,0x12a);
        uVar24 = 0x6b;
      }
      else {
        local_70 = FUN_144eedd20();
        if (local_70 == 0) {
          uVar10 = CONCAT44(uVar24,0x130);
          uVar24 = 0x41;
        }
        else {
          FUN_144eede20(local_70);
          uVar13 = FUN_144eede90(local_70);
          lVar14 = FUN_144eede90(local_70);
          if (lVar14 != 0) {
            puVar15 = (ulonglong *)FUN_144ea6670(uVar21,"crypto\\sm2\\sm2_crypt.c",0x13d);
            local_78 = FUN_144ea6670(uVar11 * 2,"crypto\\sm2\\sm2_crypt.c",0x13e);
            puVar16 = (ulonglong *)FUN_144ea6670((longlong)iVar7,"crypto\\sm2\\sm2_crypt.c",0x13f);
            puVar19 = puVar23;
            if (((puVar15 == (ulonglong *)0x0) || (local_78 == 0)) || (puVar16 == (ulonglong *)0x0))
            {
              uVar10 = CONCAT44(uVar24,0x142);
            }
            else {
              local_68 = FUN_144efc690(uVar10);
              if (local_68 != 0) {
                lVar25 = local_70;
                iVar8 = FUN_144efc9b0(uVar10,local_68,*puVar12,puVar12[1],local_70);
                uVar24 = (undefined4)((ulonglong)lVar25 >> 0x20);
                if (iVar8 != 0) {
                  uVar17 = FUN_144ed3220(param_1);
                  iVar8 = FUN_144efd2c0(uVar10,local_68,0,local_68,uVar17,local_70);
                  uVar24 = (undefined4)((ulonglong)uVar17 >> 0x20);
                  if (iVar8 != 0) {
                    lVar25 = local_70;
                    iVar8 = FUN_144efcb20(uVar10,local_68,uVar13,lVar14,local_70);
                    uVar24 = (undefined4)((ulonglong)lVar25 >> 0x20);
                    if (iVar8 != 0) {
                      iVar8 = FUN_144ba09d0(uVar13,local_78,uVar11 & 0xffffffff);
                      if (-1 < iVar8) {
                        iVar8 = FUN_144ba09d0(lVar14,local_78 + uVar11,uVar11 & 0xffffffff);
                        if (-1 < iVar8) {
                          uVar24 = 0;
                          iVar8 = FUN_1454da4e0(puVar15,uVar21,local_78,uVar11 * 2,0,0,param_2);
                          if (iVar8 != 0) {
                            puVar23 = (ulonglong *)0x0;
                            puVar19 = puVar22;
                            if ((uVar3 != 0) && (puVar19 = puVar23, 0x1f < uVar3)) {
                              lVar14 = (longlong)(int)(uVar3 - 1);
                              if ((((undefined1 *)(lVar14 + (longlong)puVar15) < param_5) ||
                                  (param_5 + lVar14 < puVar15)) &&
                                 (((undefined1 *)(lVar14 + (longlong)puVar5) < param_5 ||
                                  (param_5 + lVar14 < puVar5)))) {
                                uVar9 = uVar3 & 0x8000001f;
                                if ((int)uVar9 < 0) {
                                  uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
                                }
                                puVar23 = puVar15;
                                puVar19 = puVar22;
                                do {
                                  uVar18 = puVar23[1];
                                  puVar19 = (ulonglong *)(ulonglong)((int)puVar19 + 0x20);
                                  puVar2 = (ulonglong *)
                                           (((longlong)puVar5 - (longlong)puVar15) +
                                           (longlong)puVar23);
                                  uVar6 = puVar2[1];
                                  puVar1 = puVar23 + 4;
                                  *(ulonglong *)
                                   (param_5 + (-0x20 - (longlong)puVar15) + (longlong)puVar1) =
                                       *puVar2 ^ *puVar23;
                                  *(ulonglong *)
                                   ((longlong)
                                    (param_5 + (-0x20 - (longlong)puVar15) + (longlong)puVar1) + 8)
                                       = uVar6 ^ uVar18;
                                  puVar2 = (ulonglong *)
                                           (((longlong)puVar5 - (longlong)puVar15) + -0x10 +
                                           (longlong)puVar1);
                                  uVar6 = puVar2[1];
                                  uVar18 = puVar23[3];
                                  *(ulonglong *)
                                   (param_5 + (-0x10 - (longlong)puVar15) + (longlong)puVar1) =
                                       *puVar2 ^ puVar23[2];
                                  *(ulonglong *)
                                   ((longlong)
                                    (param_5 + (-0x10 - (longlong)puVar15) + (longlong)puVar1) + 8)
                                       = uVar6 ^ uVar18;
                                  puVar23 = puVar1;
                                } while ((longlong)puVar1 - (longlong)puVar15 !=
                                         (longlong)(int)(uVar3 - uVar9));
                              }
                            }
                            uVar18 = (ulonglong)(int)puVar19;
                            if (uVar18 != uVar21) {
                              pbVar20 = (byte *)(uVar18 + (longlong)puVar15);
                              lVar14 = uVar21 - uVar18;
                              do {
                                pbVar20[(longlong)param_5 - (longlong)puVar15] =
                                     pbVar20[(longlong)puVar5 - (longlong)puVar15] ^ *pbVar20;
                                pbVar20 = pbVar20 + 1;
                                lVar14 = lVar14 + -1;
                              } while (lVar14 != 0);
                            }
                            puVar19 = (ulonglong *)FUN_144ba5700();
                            if (puVar19 == (ulonglong *)0x0) {
                              FUN_144ba24f0(0x35,0x66,0x41,"crypto\\sm2\\sm2_crypt.c",
                                            CONCAT44(uVar24,0x162));
                            }
                            else {
                              iVar8 = FUN_144ba5e50(puVar19,param_2);
                              if ((((iVar8 == 0) ||
                                   (iVar8 = FUN_144ba5c70(puVar19,local_78,uVar11), iVar8 == 0)) ||
                                  (iVar8 = FUN_144ba5c70(puVar19,param_5,uVar21), iVar8 == 0)) ||
                                 ((iVar8 = FUN_144ba5c70(puVar19,local_78 + uVar11,uVar11),
                                  iVar8 == 0 ||
                                  (iVar8 = FUN_144ba5e90(puVar19,puVar16,0), iVar8 == 0)))) {
                                FUN_144ba24f0(0x35,0x66,6,"crypto\\sm2\\sm2_crypt.c",
                                              CONCAT44(uVar24,0x16b));
                              }
                              else {
                                iVar7 = FUN_14259f120(puVar16,uVar4,(longlong)iVar7);
                                if (iVar7 == 0) {
                                  puVar22 = (ulonglong *)&DAT_00000001;
                                  *param_6 = uVar21;
                                  goto LAB_1454dbb9b;
                                }
                                FUN_144ba24f0(0x35,0x66,0x66,"crypto\\sm2\\sm2_crypt.c",
                                              CONCAT44(uVar24,0x170));
                              }
                            }
                            goto LAB_1454dbb81;
                          }
                        }
                      }
                      FUN_144ba24f0(0x35,0x66,0x44,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar24,0x159)
                                   );
                      goto LAB_1454dbb81;
                    }
                  }
                }
                FUN_144ba24f0(0x35,0x66,0x10,"crypto\\sm2\\sm2_crypt.c",CONCAT44(uVar24,0x151));
                goto LAB_1454dbb81;
              }
              uVar10 = CONCAT44(uVar24,0x148);
            }
            FUN_144ba24f0(0x35,0x66,0x41,"crypto\\sm2\\sm2_crypt.c",uVar10);
            goto LAB_1454dbb81;
          }
          uVar10 = CONCAT44(uVar24,0x139);
          uVar24 = 3;
        }
      }
    }
    else {
      uVar10 = CONCAT44(uVar24,0x122);
      uVar24 = 0x68;
    }
    FUN_144ba24f0(0x35,0x66,uVar24,"crypto\\sm2\\sm2_crypt.c",uVar10);
  }
LAB_1454dbb81:
  memset(param_5,0,*param_6);
LAB_1454dbb9b:
  FUN_144ea6530(puVar15,"crypto\\sm2\\sm2_crypt.c",0x17b);
  FUN_144ea6530(local_78,"crypto\\sm2\\sm2_crypt.c",0x17c);
  FUN_144ea6530(puVar16,"crypto\\sm2\\sm2_crypt.c",0x17d);
  FUN_144efc7a0(local_68);
  FUN_144eeddc0(local_70);
  FUN_144eff330(puVar12,&DAT_149d8c190);
  FUN_144ba5800(puVar19);
  return puVar22;
}



// FUNCTION 1454dc150 FUN_1454dc150 body=182 status=ok
// SIG undefined FUN_1454dc150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454dc150(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1454dc170;
  lVar2 = FUN_144ba0570();
  lVar3 = FUN_144ba0570();
  lVar4 = FUN_144ba0570();
  lVar5 = 0;
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    iVar1 = FUN_144efc390(param_1,lVar2,lVar3,lVar4,0,uVar6);
    lVar5 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_144ba03d0(lVar2);
      lVar5 = (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    }
  }
  FUN_144ba0cd0(lVar2);
  FUN_144ba0cd0(lVar3);
  FUN_144ba0cd0(lVar4);
  return lVar5;
}



// FUNCTION 1454dc210 FUN_1454dc210 body=260 status=ok
// SIG undefined FUN_1454dc210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454dc210(undefined8 param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      if ((uVar2 == (uVar2 / 0xf) * 0xf) &&
         (((uVar2 != 0 && (iVar1 = FUN_144b9ebc0(param_1,&DAT_149dfc0af), iVar1 < 1)) ||
          (iVar1 = FUN_144b9edb0(param_1,param_4,0x80), iVar1 == 0)))) {
        return false;
      }
      pwVar3 = L":Asset";
      if (uVar2 == param_3 - 1) {
        pwVar3 = L"";
      }
      iVar1 = FUN_144ec7640(param_1,"%02x%s",*(undefined1 *)(uVar2 + param_2),pwVar3);
      if (iVar1 < 1) {
        return false;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  iVar1 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
  return 0 < iVar1;
}



// FUNCTION 1454dc320 FUN_1454dc320 body=486 status=ok
// SIG undefined FUN_1454dc320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454dc320(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       int param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  longlong lVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  
  if (param_3 != 0) {
    iVar1 = FUN_144ba0ba0(param_3);
    pcVar6 = "";
    pwVar9 = L"";
    if (iVar1 != 0) {
      pwVar9 = L"-`[Left Bracket";
    }
    uVar2 = FUN_144b9edb0(param_1,param_5,0x80);
    if ((int)uVar2 != 0) {
      iVar1 = FUN_144ba0340(param_3);
      if (iVar1 == 0) {
        iVar1 = FUN_144ba03d0(param_3);
        if (iVar1 + 7 < 0x48) {
          puVar3 = (undefined4 *)FUN_145299350();
          puVar4 = (undefined4 *)FUN_145299350(param_3);
          iVar1 = FUN_144ec7640(param_1,"%s %s%lu (%s0x%lx)\n",param_2,pwVar9,*puVar4,pwVar9,*puVar3
                               );
          uVar2 = (ulonglong)(0 < iVar1);
        }
        else {
          iVar1 = FUN_144ba03d0(param_3);
          lVar7 = (longlong)(((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3) + 1);
          puVar5 = (undefined1 *)FUN_144ea64e0(lVar7,"crypto\\asn1\\t_pkey.c",0x49);
          uVar2 = 0;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
            if ((char)*pwVar9 == '-') {
              pcVar6 = " (Negative)";
            }
            iVar1 = FUN_144ec7640(param_1,"%s%s\n",param_2,pcVar6);
            if (0 < iVar1) {
              iVar1 = FUN_144ba08c0(param_3,puVar5 + 1);
              if ((char)puVar5[1] < '\0') {
                iVar1 = iVar1 + 1;
                puVar8 = puVar5;
              }
              else {
                puVar8 = puVar5 + 1;
              }
              iVar1 = FUN_1454dc210(param_1,puVar8,(longlong)iVar1,param_5 + 4);
              uVar2 = 0;
              if (iVar1 != 0) {
                uVar2 = 1;
              }
            }
          }
          FUN_144ea66f0(puVar5,lVar7,"crypto\\asn1\\t_pkey.c",0x5b);
        }
      }
      else {
        iVar1 = FUN_144ec7640(param_1,"%s 0\n",param_2);
        uVar2 = (ulonglong)(0 < iVar1);
      }
    }
    return uVar2;
  }
  return 1;
}



// FUNCTION 1454dc540 FUN_1454dc540 body=8 status=ok
// SIG undefined FUN_1454dc540(void)

undefined * FUN_1454dc540(void)

{
  return &DAT_149d8c230;
}



// FUNCTION 1454dc550 FUN_1454dc550 body=513 status=ok
// SIG undefined FUN_1454dc550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dc550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_328 [32];
  char local_308 [40];
  undefined1 local_2e0 [40];
  undefined1 local_2b8 [48];
  undefined1 local_288 [224];
  undefined1 local_1a8 [40];
  undefined1 local_180 [40];
  undefined1 local_158 [80];
  byte local_108 [31];
  byte local_e9;
  undefined1 local_e8 [32];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_38;
  
  uStack_38 = 0x1454dc56b;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_144edb680(local_288);
  FUN_144edb710(local_288,param_5,0x20);
  FUN_144edb820(local_108,local_288);
  local_108[0] = local_108[0] & 0xf8;
  local_e9 = local_e9 & 0x3f | 0x40;
  FUN_144edb680(local_288);
  FUN_144edb710(local_288,local_e8,0x20);
  FUN_144edb710(local_288,param_2,param_3);
  FUN_144edb820(local_c8,local_288);
  FUN_1454e2510(local_c8);
  FUN_1454e18a0(local_1a8,local_c8);
  FUN_1454df430(local_308,local_158);
  FUN_1454de570(local_2b8,local_1a8,local_308);
  FUN_1454de570(local_2e0,local_180,local_308);
  FUN_1454de300(param_1,local_2e0);
  FUN_1454de300(local_308,local_2b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_308[0] << 7;
  FUN_144edb680(local_288);
  FUN_144edb710(local_288,param_1,0x20);
  FUN_144edb710(local_288,param_4,0x20);
  FUN_144edb710(local_288,param_2,param_3);
  FUN_144edb820(local_88,local_288);
  FUN_1454e2510(local_88);
  FUN_1454e3340(param_1 + 0x20,local_88,local_108,local_c8);
  FUN_14259f0c0(local_288,0xd8);
  FUN_14259f0c0(local_c8,0x40);
  FUN_14259f0c0(local_108,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_328);
}



// FUNCTION 1454dc770 FUN_1454dc770 body=579 status=ok
// SIG undefined FUN_1454dc770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dc770(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_348 [32];
  char local_328 [40];
  undefined1 local_300 [40];
  undefined1 local_2d8 [48];
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined1 local_208 [40];
  undefined1 local_1e0 [40];
  undefined1 local_1b8 [48];
  undefined1 local_188 [224];
  byte local_a8 [31];
  byte local_89;
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_a8[0] = 0xed;
  local_a8[1] = 0xd3;
  local_a8[2] = 0xf5;
  local_a8[3] = 0x5c;
  local_a8[4] = 0x1a;
  local_a8[5] = 99;
  local_a8[6] = 0x12;
  local_a8[7] = 0x58;
  local_a8[8] = 0xd6;
  local_a8[9] = 0x9c;
  local_a8[10] = 0xf7;
  local_a8[0xb] = 0xa2;
  local_a8[0xc] = 0xde;
  local_a8[0xd] = 0xf9;
  local_a8[0xe] = 0xde;
  local_a8[0xf] = 0x14;
  if (0x10 < *(byte *)(param_3 + 0x3f)) goto LAB_1454dc9a4;
  if (*(byte *)(param_3 + 0x3f) == 0x10) {
    iVar4 = 0xf;
    iVar2 = memcmp((void *)(param_3 + 0x30),&DAT_149d93f30,0xf);
    if (iVar2 != 0) goto LAB_1454dc9a4;
    lVar3 = 0xf;
    do {
      bVar1 = *(byte *)(lVar3 + param_3 + 0x20);
      if (bVar1 < local_a8[lVar3]) break;
      if (bVar1 != local_a8[lVar3]) goto LAB_1454dc9a4;
      iVar4 = iVar4 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
    if (iVar4 < 0) goto LAB_1454dc9a4;
  }
  iVar2 = FUN_1454dfe90(&local_2a8,param_4);
  if (iVar2 == 0) {
    local_2a8 = -local_2a8;
    local_2a4 = -local_2a4;
    local_2a0 = -local_2a0;
    local_29c = -local_29c;
    local_298 = -local_298;
    local_294 = -local_294;
    local_290 = -local_290;
    local_28c = -local_28c;
    local_288 = -local_288;
    local_284 = -local_284;
    local_230 = -local_230;
    local_22c = -local_22c;
    local_228 = -local_228;
    local_224 = -local_224;
    local_220 = -local_220;
    local_21c = -local_21c;
    local_218 = -local_218;
    local_214 = -local_214;
    local_210 = -local_210;
    local_20c = -local_20c;
    FUN_144edb680(local_188);
    FUN_144edb710(local_188,param_3,0x20);
    FUN_144edb710(local_188,param_4,0x20);
    FUN_144edb710(local_188,param_1,param_2);
    FUN_144edb820(local_88,local_188);
    FUN_1454e2510(local_88);
    FUN_1454e1dc0(local_208,local_88,&local_2a8,param_3 + 0x20);
    FUN_1454df430(local_328,local_1b8);
    FUN_1454de570(local_2d8,local_208,local_328);
    FUN_1454de570(local_300,local_1e0,local_328);
    FUN_1454de300(local_a8,local_300);
    FUN_1454de300(local_328,local_2d8);
    local_89 = local_89 ^ local_328[0] << 7;
    FUN_14259f120(local_a8,param_3,0x20);
  }
LAB_1454dc9a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_348);
}



// FUNCTION 1454dc9d0 FUN_1454dc9d0 body=245 status=ok
// SIG undefined FUN_1454dc9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dc9d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_198 [32];
  char local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  undefined1 local_a8 [80];
  byte local_58 [31];
  byte local_39;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454dc9dc;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144edc010(param_2,0x20,local_58);
  local_58[0] = local_58[0] & 0xf8;
  local_39 = local_39 & 0x3f | 0x40;
  FUN_1454e18a0(local_f8,local_58);
  FUN_1454df430(local_178,local_a8);
  FUN_1454de570(local_128,local_f8,local_178);
  FUN_1454de570(local_150,local_d0,local_178);
  FUN_1454de300(param_1,local_150);
  FUN_1454de300(local_178,local_128);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_178[0] << 7;
  FUN_14259f0c0(local_58,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
}



// FUNCTION 1454dcad0 FUN_1454dcad0 body=59 status=ok
// SIG undefined FUN_1454dcad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454dcad0(undefined8 param_1)

{
  int iVar1;
  
  FUN_1454dda00();
  iVar1 = FUN_14259f120(&DAT_149d93ef0,param_1,0x20);
  return iVar1 != 0;
}



// FUNCTION 1454dcb10 FUN_1454dcb10 body=346 status=ok
// SIG undefined FUN_1454dcb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dcb10(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [48];
  undefined1 local_128 [40];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [15];
  byte bStack_19;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454dcb25;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_38 = *param_2 & 0xfffffff8;
  local_28 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
  bStack_19 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
  FUN_1454e18a0(local_128,&local_38);
  local_88 = local_100 + local_d8;
  local_60 = local_d8 - local_100;
  local_84 = local_fc + local_d4;
  local_5c = local_d4 - local_fc;
  local_80 = local_f8 + local_d0;
  local_58 = local_d0 - local_f8;
  local_7c = local_f4 + local_cc;
  local_54 = local_cc - local_f4;
  local_78 = local_f0 + local_c8;
  local_50 = local_c8 - local_f0;
  local_74 = local_ec + local_c4;
  local_4c = local_c4 - local_ec;
  local_70 = local_e8 + local_c0;
  local_48 = local_c0 - local_e8;
  local_6c = local_e4 + local_bc;
  local_44 = local_bc - local_e4;
  local_68 = local_e0 + local_b8;
  local_40 = local_b8 - local_e0;
  local_64 = local_dc + local_b4;
  local_3c = local_b4 - local_dc;
  FUN_1454df430(local_158,&local_60);
  FUN_1454de570(&local_88,&local_88,local_158);
  FUN_1454de300(param_1,&local_88);
  FUN_14259f0c0(&local_38,0x20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_178);
}



// FUNCTION 1454dcc80 FUN_1454dcc80 body=366 status=ok
// SIG undefined FUN_1454dcc80(void)

void FUN_1454dcc80(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = (ulonglong)*(uint5 *)((longlong)param_2 + 0x19) << 8 |
               ((ulonglong)*(ushort *)((longlong)param_2 + 0x1e) & 0x7fff) << 0x30 |
               (ulonglong)*(byte *)(param_2 + 3);
  return;
}



// FUNCTION 1454dcdf0 FUN_1454dcdf0 body=623 status=ok
// SIG undefined FUN_1454dcdf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dcdf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454dce0a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14272ad20(local_38);
  FUN_14272ad20(local_78,local_38);
  FUN_14272ad20(local_78,local_78);
  FUN_14272aba0(local_78,param_2,local_78);
  FUN_14272aba0(local_38,local_38,local_78);
  FUN_14272ad20(local_98,local_38);
  FUN_14272aba0(local_78,local_78,local_98);
  FUN_14272ad20(local_98,local_78);
  lVar1 = 4;
  do {
    FUN_14272ad20(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_78,local_98,local_78);
  FUN_14272ad20(local_98,local_78);
  lVar1 = 9;
  do {
    FUN_14272ad20(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_98,local_98,local_78);
  FUN_14272ad20(local_58,local_98);
  lVar1 = 0x13;
  do {
    FUN_14272ad20(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_98,local_58,local_98);
  lVar1 = 10;
  do {
    FUN_14272ad20(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_78,local_98,local_78);
  FUN_14272ad20(local_98,local_78);
  lVar1 = 0x31;
  do {
    FUN_14272ad20(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_98,local_98,local_78);
  FUN_14272ad20(local_58,local_98);
  lVar1 = 99;
  do {
    FUN_14272ad20(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_98,local_58,local_98);
  lVar1 = 0x32;
  do {
    FUN_14272ad20(local_98,local_98);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(local_78,local_98,local_78);
  lVar1 = 5;
  do {
    FUN_14272ad20(local_78,local_78);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272aba0(param_1,local_78,local_38);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1454dd080 FUN_1454dd080 body=809 status=ok
// SIG undefined FUN_1454dd080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dd080(undefined8 param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [32];
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [32];
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  byte local_48 [16];
  undefined1 local_38 [15];
  byte bStack_29;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454dd097;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  local_48[3] = param_2[3];
  local_48[4] = param_2[4];
  local_48[5] = param_2[5];
  local_48[6] = param_2[6];
  local_48[7] = param_2[7];
  local_48[8] = param_2[8];
  local_48[9] = param_2[9];
  local_48[10] = param_2[10];
  local_48[0xb] = param_2[0xb];
  local_48[0xc] = param_2[0xc];
  local_48[0xd] = param_2[0xd];
  local_48[0xe] = param_2[0xe];
  local_48[0xf] = param_2[0xf];
  local_48[0] = *param_2 & 0xf8;
  local_38 = SUB1615(*(undefined1 (*) [16])(param_2 + 0x10),0);
  bStack_29 = SUB161(*(undefined1 (*) [16])(param_2 + 0x10),0xf) & 0x3f | 0x40;
  FUN_1454dcc80(&local_68,param_3);
  local_108 = 1;
  iVar4 = 0xfe;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_e8 = 1;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar5 = 0;
  do {
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 7;
    }
    uVar3 = local_48[iVar1 >> 3] >> ((byte)iVar4 & 7) & 1;
    uVar2 = -(ulonglong)(uVar5 ^ uVar3);
    local_a8 = (local_108 ^ local_68) & uVar2;
    uStack_a0 = (uStack_100 ^ uStack_60) & uVar2;
    local_108 = local_108 ^ local_a8;
    uStack_100 = uStack_100 ^ uStack_a0;
    local_a8 = local_68 ^ local_a8;
    uStack_a0 = uStack_60 ^ uStack_a0;
    local_98 = (local_f8 ^ local_58) & uVar2;
    uStack_90 = (uStack_f0 ^ uStack_50) & uVar2;
    local_f8 = local_f8 ^ local_98;
    uStack_f0 = uStack_f0 ^ uStack_90;
    local_98 = local_58 ^ local_98;
    uStack_90 = uStack_50 ^ uStack_90;
    uVar6 = (local_128 ^ local_e8) & uVar2;
    uVar7 = (uStack_120 ^ uStack_e0) & uVar2;
    local_128 = local_128 ^ uVar6;
    uStack_120 = uStack_120 ^ uVar7;
    local_e8 = local_e8 ^ uVar6;
    uStack_e0 = uStack_e0 ^ uVar7;
    uVar6 = (local_118 ^ local_d8) & uVar2;
    uVar2 = (uStack_110 ^ uStack_d0) & uVar2;
    local_118 = local_118 ^ uVar6;
    uStack_110 = uStack_110 ^ uVar2;
    local_d8 = local_d8 ^ uVar6;
    uStack_d0 = uStack_d0 ^ uVar2;
    FUN_14272b000(local_88,&local_a8,&local_e8);
    FUN_14272b000(local_c8,&local_108,&local_128);
    FUN_14272af80(&local_108,&local_108,&local_128);
    FUN_14272af80(&local_128,&local_a8,&local_e8);
    FUN_14272aba0(&local_e8,&local_108,local_88);
    FUN_14272aba0(&local_128,&local_128,local_c8);
    FUN_14272ad20(local_88,local_c8);
    FUN_14272ad20(local_c8,&local_108);
    FUN_14272af80(&local_a8,&local_e8,&local_128);
    FUN_14272b000(&local_128,&local_e8,&local_128);
    FUN_14272aba0(&local_108,local_c8,local_88);
    FUN_14272b000(local_c8,local_c8,local_88);
    FUN_14272ad20(&local_128,&local_128);
    FUN_14272af00(&local_e8,local_c8);
    FUN_14272ad20(&local_a8,&local_a8);
    FUN_14272af80(local_88,local_88,&local_e8);
    FUN_14272aba0(&local_e8,&local_68,&local_128);
    FUN_14272aba0(&local_128,local_c8,local_88);
    iVar4 = iVar4 + -1;
    uVar5 = uVar3;
    local_58 = local_98;
    uStack_50 = uStack_90;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
  } while (-1 < iVar4);
  FUN_1454dcdf0(&local_128,&local_128);
  FUN_14272aba0(&local_108,&local_108,&local_128);
  FUN_14272b080(param_1,&local_108);
  FUN_14259f0c0(local_48,0x20);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
}



// FUNCTION 1454dd3c0 FUN_1454dd3c0 body=458 status=ok
// SIG undefined FUN_1454dd3c0(void)

void FUN_1454dd3c0(ulonglong *param_1,uint7 *param_2)

{
  uint7 uVar1;
  uint6 uVar2;
  uint6 uVar3;
  uint7 uVar4;
  uint6 uVar5;
  
  uVar1 = *param_2;
  uVar2 = *(uint6 *)((longlong)param_2 + 0x1a);
  uVar3 = *(uint6 *)((longlong)param_2 + 7);
  uVar4 = *(uint7 *)((longlong)param_2 + 0xd);
  uVar5 = *(uint6 *)((longlong)param_2 + 0x14);
  *param_1 = (ulonglong)uVar1 & 0x7ffffffffffff;
  param_1[1] = ((ulonglong)uVar3 & 0x3fffffffffff) << 5 | (ulonglong)(uVar1 >> 0x33);
  param_1[3] = ((ulonglong)uVar5 & 0xfffffffffff) << 7 | (ulonglong)(uVar4 >> 0x31);
  param_1[2] = ((ulonglong)uVar4 & 0x1ffffffffffff) << 2 | (ulonglong)(uVar3 >> 0x2e);
  param_1[4] = ((ulonglong)uVar2 & 0x7fffffffffff) << 4 | (ulonglong)(uVar5 >> 0x2c);
  return;
}



// FUNCTION 1454dd590 FUN_1454dd590 body=478 status=ok
// SIG undefined FUN_1454dd590(void)

void FUN_1454dd590(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = param_2[2];
  lVar2 = param_2[3];
  lVar3 = param_2[4];
  uVar4 = *param_2 +
          (((((*param_2 + 0x13U >> 0x33) + param_2[1] >> 0x33) + lVar1 >> 0x33) + lVar2 >> 0x33) +
           lVar3 >> 0x33) * 0x13;
  uVar5 = uVar4 & 0x7ffffffffffff;
  uVar4 = param_2[1] + (uVar4 >> 0x33);
  *param_1 = (char)uVar5;
  uVar6 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar1 + (uVar4 >> 0x33);
  uVar7 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar2 + (uVar4 >> 0x33);
  uVar8 = uVar4 & 0x7ffffffffffff;
  uVar4 = lVar3 + (uVar4 >> 0x33) & 0x7ffffffffffff;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  param_1[7] = (char)(uVar6 >> 5);
  param_1[8] = (char)(uVar6 >> 0xd);
  param_1[9] = (char)(uVar6 >> 0x15);
  param_1[10] = (char)(uVar6 >> 0x1d);
  param_1[0xb] = (char)(uVar6 >> 0x25);
  param_1[6] = (byte)(uVar5 >> 0x30) | (char)uVar6 << 3;
  param_1[0xc] = (byte)(uVar6 >> 0x2d) | (char)uVar7 << 6;
  param_1[0xd] = (char)(uVar7 >> 2);
  param_1[0xe] = (char)(uVar7 >> 10);
  param_1[0xf] = (char)(uVar7 >> 0x12);
  param_1[0x10] = (char)(uVar7 >> 0x1a);
  param_1[0x11] = (char)(uVar7 >> 0x22);
  param_1[0x12] = (char)(uVar7 >> 0x2a);
  param_1[0x14] = (char)(uVar8 >> 7);
  param_1[0x15] = (char)(uVar8 >> 0xf);
  param_1[0x16] = (char)(uVar8 >> 0x17);
  param_1[0x17] = (char)(uVar8 >> 0x1f);
  param_1[0x18] = (char)(uVar8 >> 0x27);
  param_1[0x13] = (byte)(uVar7 >> 0x32) | (char)uVar8 * '\x02';
  param_1[0x19] = (byte)(uVar8 >> 0x2f) | (char)uVar4 << 4;
  param_1[0x1a] = (char)(uVar4 >> 4);
  param_1[0x1b] = (char)(uVar4 >> 0xc);
  param_1[0x1c] = (char)(uVar4 >> 0x14);
  param_1[0x1d] = (char)(uVar4 >> 0x1c);
  param_1[0x1e] = (char)(uVar4 >> 0x24);
  param_1[0x1f] = (char)(uVar4 >> 0x2c);
  return;
}



// FUNCTION 1454dd770 FUN_1454dd770 body=623 status=ok
// SIG undefined FUN_1454dd770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dd770(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454dd78a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14272a900(local_40);
  FUN_14272a900(local_90,local_40);
  FUN_14272a900(local_90,local_90);
  FUN_14272a740(local_90,param_2,local_90);
  FUN_14272a740(local_40,local_40,local_90);
  FUN_14272a900(local_b8,local_40);
  FUN_14272a740(local_90,local_90,local_b8);
  FUN_14272a900(local_b8,local_90);
  lVar1 = 4;
  do {
    FUN_14272a900(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_90,local_b8,local_90);
  FUN_14272a900(local_b8,local_90);
  lVar1 = 9;
  do {
    FUN_14272a900(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_b8,local_b8,local_90);
  FUN_14272a900(local_68,local_b8);
  lVar1 = 0x13;
  do {
    FUN_14272a900(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_b8,local_68,local_b8);
  lVar1 = 10;
  do {
    FUN_14272a900(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_90,local_b8,local_90);
  FUN_14272a900(local_b8,local_90);
  lVar1 = 0x31;
  do {
    FUN_14272a900(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_b8,local_b8,local_90);
  FUN_14272a900(local_68,local_b8);
  lVar1 = 99;
  do {
    FUN_14272a900(local_68,local_68);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_b8,local_68,local_b8);
  lVar1 = 0x32;
  do {
    FUN_14272a900(local_b8,local_b8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(local_90,local_b8,local_90);
  lVar1 = 5;
  do {
    FUN_14272a900(local_90,local_90);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14272a740(param_1,local_90,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1454dda00 FUN_1454dda00 body=1563 status=ok
// SIG undefined FUN_1454dda00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dda00(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined8 local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 local_50 [15];
  byte bStack_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar3 = 0;
  local_180 = param_1;
  iVar1 = FUN_14272ab80();
  if (iVar1 == 0) {
    uStack_5c = param_2[1];
    uStack_58 = param_2[2];
    uStack_54 = param_2[3];
    local_60 = *param_2 & 0xfffffff8;
    local_50 = SUB1615(*(undefined1 (*) [16])(param_2 + 4),0);
    bStack_41 = SUB161(*(undefined1 (*) [16])(param_2 + 4),0xf) & 0x3f | 0x40;
    FUN_1454dd3c0(&local_88,param_3);
    local_b0 = 1;
    local_190 = 1;
    local_188 = 0xfffffffffffda;
    iVar1 = 0xfe;
    local_1c8 = 0;
    local_1d0 = 0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    local_90 = uVar3;
    local_a8 = uVar3;
    local_a0 = uVar3;
    local_98 = uVar3;
    while( true ) {
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = iVar1 + 7;
      }
      uVar9 = *(byte *)((longlong)&local_60 + (longlong)(iVar2 >> 3)) >> ((byte)iVar1 & 7) & 1;
      uVar8 = -(uVar9 ^ uVar3);
      uVar3 = (local_88 ^ local_b0) & uVar8;
      local_d8 = local_88 ^ uVar3;
      local_b0 = local_b0 ^ uVar3;
      uVar4 = (local_a8 ^ local_80) & uVar8;
      local_d0 = local_80 ^ uVar4;
      uVar4 = local_a8 ^ uVar4;
      uVar5 = (local_a0 ^ local_78) & uVar8;
      local_c8 = local_78 ^ uVar5;
      uVar5 = local_a0 ^ uVar5;
      uVar6 = (local_98 ^ local_70) & uVar8;
      local_c0 = local_70 ^ uVar6;
      uVar6 = local_98 ^ uVar6;
      uVar7 = (local_90 ^ local_68) & uVar8;
      local_198 = local_68 ^ uVar7;
      uVar7 = local_90 ^ uVar7;
      uVar3 = (local_190 ^ local_1c8) & uVar8;
      local_1c8 = local_1c8 ^ uVar3;
      local_190 = local_190 ^ uVar3;
      uVar3 = (local_1a0 ^ local_1d0) & uVar8;
      local_1d0 = local_1d0 ^ uVar3;
      local_1a0 = local_1a0 ^ uVar3;
      uVar3 = (local_1a8 ^ local_1d8) & uVar8;
      local_1d8 = local_1d8 ^ uVar3;
      local_1a8 = local_1a8 ^ uVar3;
      uVar3 = (local_1b0 ^ local_1e0) & uVar8;
      local_1e0 = local_1e0 ^ uVar3;
      local_1b0 = local_1b0 ^ uVar3;
      uVar8 = (local_1b8 ^ local_1e8) & uVar8;
      local_1e8 = local_1e8 ^ uVar8;
      local_1b8 = local_1b8 ^ uVar8;
      uVar3 = (ulonglong)uVar9;
      local_150 = (local_d8 - local_190) + 0xfffffffffffda;
      local_148 = (local_d0 - local_1a0) + 0xffffffffffffe;
      local_140 = (local_c8 - local_1a8) + 0xffffffffffffe;
      local_138 = (local_c0 - local_1b0) + 0xffffffffffffe;
      local_130 = (local_198 - local_1b8) + 0xffffffffffffe;
      local_100 = (local_b0 - local_1c8) + local_188;
      local_b0 = local_b0 + local_1c8;
      local_a8 = uVar4 + local_1d0;
      local_f8 = (uVar4 - local_1d0) + 0xffffffffffffe;
      local_a0 = uVar5 + local_1d8;
      local_f0 = (uVar5 - local_1d8) + 0xffffffffffffe;
      local_98 = uVar6 + local_1e0;
      local_e8 = (uVar6 - local_1e0) + 0xffffffffffffe;
      local_90 = uVar7 + local_1e8;
      local_e0 = (uVar7 - local_1e8) + 0xffffffffffffe;
      local_178 = local_190 + local_d8;
      local_170 = local_1a0 + local_d0;
      local_168 = local_1a8 + local_c8;
      local_160 = local_1b0 + local_c0;
      local_158 = local_1b8 + local_198;
      local_128 = local_190;
      local_120 = local_1a0;
      local_118 = local_1a8;
      local_110 = local_1b0;
      local_108 = local_1b8;
      local_b8 = local_198;
      FUN_14272a740(&local_128,&local_150,&local_b0);
      FUN_14272a740(&local_178,&local_178,&local_100);
      FUN_14272a900(&local_150,&local_100);
      FUN_14272a900(&local_100,&local_b0);
      local_d8 = local_128 + local_178;
      local_d0 = local_120 + local_170;
      local_c8 = local_118 + local_168;
      local_170 = (local_120 - local_170) + 0xffffffffffffe;
      local_c0 = local_110 + local_160;
      local_b8 = local_108 + local_158;
      local_178 = (local_128 - local_178) + 0xfffffffffffda;
      local_168 = (local_118 - local_168) + 0xffffffffffffe;
      local_160 = (local_110 - local_160) + 0xffffffffffffe;
      local_158 = (local_108 - local_158) + 0xffffffffffffe;
      FUN_14272a740(&local_b0,&local_100,&local_150);
      local_100 = local_100 + (0xfffffffffffda - local_150);
      local_f8 = local_f8 + (0xffffffffffffe - local_148);
      local_f0 = local_f0 + (0xffffffffffffe - local_140);
      local_e8 = local_e8 + (0xffffffffffffe - local_138);
      local_e0 = local_e0 + (0xffffffffffffe - local_130);
      FUN_14272a900(&local_178,&local_178);
      FUN_14272ab00(&local_128,&local_100);
      FUN_14272a900(&local_d8,&local_d8);
      local_150 = local_150 + local_128;
      local_148 = local_148 + local_120;
      local_140 = local_140 + local_118;
      local_138 = local_138 + local_110;
      local_130 = local_130 + local_108;
      FUN_14272a740(&local_128,&local_88,&local_178);
      FUN_14272a740(&local_178,&local_100,&local_150);
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) break;
      local_1e8 = local_158;
      local_190 = local_128;
      local_1e0 = local_160;
      local_1d8 = local_168;
      local_1d0 = local_170;
      local_1c8 = local_178;
      local_1b8 = local_108;
      local_1b0 = local_110;
      local_1a8 = local_118;
      local_1a0 = local_120;
      local_68 = local_b8;
      local_80 = local_d0;
      local_88 = local_d8;
      local_70 = local_c0;
      local_78 = local_c8;
    }
    FUN_1454dd770(&local_178,&local_178);
    FUN_14272a740(&local_b0,&local_b0,&local_178);
    FUN_1454dd590(local_180,&local_b0);
    FUN_14259f0c0(&local_60,0x20);
  }
  else {
    FUN_1454dd080(param_1,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_208);
}



// FUNCTION 1454de030 FUN_1454de030 body=719 status=ok
// SIG undefined FUN_1454de030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454de030(int *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int local_res10;
  int local_res18;
  int local_58;
  
  lVar16 = (ulonglong)(uint3)param_2[1] * 0x40;
  lVar1 = lVar16 + 0x1000000;
  lVar9 = (ulonglong)*(uint3 *)((longlong)param_2 + 10) * 8;
  uVar13 = param_2[4];
  lVar2 = lVar9 + 0x1000000;
  lVar15 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x17) * 0x20;
  lVar10 = ((ulonglong)
            ((*(byte *)((longlong)param_2 + 0x1f) & 0x7f) << 0x10 |
            (uint)*(byte *)((longlong)param_2 + 0x1d)) |
           (ulonglong)*(byte *)((longlong)param_2 + 0x1e) << 8) * 4;
  lVar17 = (ulonglong)*param_2 + (lVar10 + 0x1000000 >> 0x19) * 0x13;
  lVar18 = (ulonglong)*(uint3 *)((longlong)param_2 + 7) * 0x20 + (lVar1 >> 0x19);
  lVar3 = (ulonglong)uVar13 + 0x1000000;
  lVar4 = lVar15 + 0x1000000;
  lVar8 = (lVar2 >> 0x19) + (ulonglong)*(uint3 *)((longlong)param_2 + 0xd) * 4;
  lVar11 = lVar17 + 0x2000000;
  lVar5 = lVar8 + 0x2000000;
  lVar19 = (ulonglong)(uint3)param_2[5] * 0x80 + (lVar3 >> 0x19);
  lVar6 = lVar18 + 0x2000000;
  lVar7 = lVar19 + 0x2000000;
  lVar14 = (ulonglong)*(uint3 *)((longlong)param_2 + 0x1a) * 0x10 + (lVar4 >> 0x19);
  local_res10 = (int)lVar16;
  lVar16 = lVar14 + 0x2000000;
  param_1[1] = ((int)(lVar11 >> 0x1a) - ((uint)lVar1 & 0xfe000000)) + local_res10;
  *param_1 = (int)lVar17 - ((uint)lVar11 & 0xfc000000);
  local_res18 = (int)lVar9;
  param_1[2] = (int)lVar18 - ((uint)lVar6 & 0xfc000000);
  param_1[3] = ((int)(lVar6 >> 0x1a) - ((uint)lVar2 & 0xfe000000)) + local_res18;
  param_1[4] = (int)lVar8 - ((uint)lVar5 & 0xfc000000);
  param_1[6] = (int)lVar19 - ((uint)lVar7 & 0xfc000000);
  iVar12 = (int)lVar10;
  param_1[5] = ((int)(lVar5 >> 0x1a) - ((uint)lVar3 & 0xfe000000)) + uVar13;
  local_58 = (int)lVar15;
  param_1[7] = ((int)(lVar7 >> 0x1a) - ((uint)lVar4 & 0xfe000000)) + local_58;
  param_1[8] = (int)lVar14 - ((uint)lVar16 & 0xfc000000);
  param_1[9] = ((int)(lVar16 >> 0x1a) - (iVar12 + 0x1000000U & 0xfe000000)) + iVar12;
  return;
}



// FUNCTION 1454de300 FUN_1454de300 body=615 status=ok
// SIG undefined FUN_1454de300(void)

void FUN_1454de300(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  iVar3 = param_2[4];
  iVar4 = param_2[5];
  iVar5 = param_2[6];
  iVar6 = param_2[7];
  iVar7 = param_2[8];
  iVar8 = param_2[9];
  uVar13 = *param_2 +
           (((((((((((iVar8 * 0x13 + 0x1000000 >> 0x19) + *param_2 >> 0x1a) + param_2[1] >> 0x19) +
                   iVar1 >> 0x1a) + iVar2 >> 0x19) + iVar3 >> 0x1a) + iVar4 >> 0x19) + iVar5 >> 0x1a
              ) + iVar6 >> 0x19) + iVar7 >> 0x1a) + iVar8 >> 0x19) * 0x13;
  uVar14 = uVar13 & 0x3ffffff;
  uVar13 = param_2[1] + ((int)uVar13 >> 0x1a);
  *param_1 = (char)uVar14;
  uVar15 = uVar13 & 0x1ffffff;
  uVar13 = iVar1 + ((int)uVar13 >> 0x19);
  uVar16 = uVar13 & 0x3ffffff;
  uVar13 = iVar2 + ((int)uVar13 >> 0x1a);
  uVar17 = uVar13 & 0x1ffffff;
  uVar13 = iVar3 + ((int)uVar13 >> 0x19);
  uVar9 = uVar13 & 0x3ffffff;
  uVar13 = iVar4 + ((int)uVar13 >> 0x1a);
  uVar12 = uVar13 & 0x1ffffff;
  uVar13 = iVar5 + ((int)uVar13 >> 0x19);
  uVar11 = uVar13 & 0x3ffffff;
  uVar13 = iVar6 + ((int)uVar13 >> 0x1a);
  uVar10 = uVar13 & 0x1ffffff;
  uVar13 = iVar7 + ((int)uVar13 >> 0x19);
  uVar18 = uVar13 & 0x3ffffff;
  uVar13 = iVar8 + ((int)uVar13 >> 0x1a) & 0x1ffffff;
  param_1[1] = (char)(uVar14 >> 8);
  param_1[2] = (char)(uVar14 >> 0x10);
  param_1[0x10] = (char)uVar12;
  param_1[3] = (byte)(uVar14 >> 0x18) | (char)uVar15 << 2;
  param_1[4] = (char)((int)uVar15 >> 6);
  param_1[5] = (char)((int)uVar15 >> 0xe);
  param_1[7] = (char)((int)uVar16 >> 5);
  param_1[8] = (char)((int)uVar16 >> 0xd);
  param_1[6] = (byte)((int)uVar15 >> 0x16) | (char)uVar16 << 3;
  param_1[9] = (byte)((int)uVar16 >> 0x15) | (char)uVar17 << 5;
  param_1[10] = (char)((int)uVar17 >> 3);
  param_1[0xb] = (char)((int)uVar17 >> 0xb);
  param_1[0xd] = (char)((int)uVar9 >> 2);
  param_1[0xe] = (char)((int)uVar9 >> 10);
  param_1[0x11] = (char)(uVar12 >> 8);
  param_1[0x12] = (char)(uVar12 >> 0x10);
  param_1[0xc] = (byte)((int)uVar17 >> 0x13) | (char)uVar9 << 6;
  param_1[0x14] = (char)((int)uVar11 >> 7);
  param_1[0x15] = (char)((int)uVar11 >> 0xf);
  param_1[0xf] = (char)((int)uVar9 >> 0x12);
  param_1[0x13] = (byte)(uVar12 >> 0x18) | (char)uVar11 * '\x02';
  param_1[0x17] = (char)((int)uVar10 >> 5);
  param_1[0x18] = (char)((int)uVar10 >> 0xd);
  param_1[0x16] = (byte)((int)uVar11 >> 0x17) | (char)uVar10 << 3;
  param_1[0x19] = (byte)((int)uVar10 >> 0x15) | (char)uVar18 << 4;
  param_1[0x1a] = (char)((int)uVar18 >> 4);
  param_1[0x1b] = (char)((int)uVar18 >> 0xc);
  param_1[0x1d] = (char)((int)uVar13 >> 2);
  param_1[0x1f] = (char)((int)uVar13 >> 0x12);
  param_1[0x1c] = (byte)((int)uVar18 >> 0x14) | (char)uVar13 << 6;
  param_1[0x1e] = (char)((int)uVar13 >> 10);
  return;
}



// FUNCTION 1454de570 FUN_1454de570 body=2330 status=ok
// SIG undefined FUN_1454de570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454de570(int *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  int local_58;
  
  lVar29 = (longlong)param_2[9];
  lVar33 = (longlong)param_2[1];
  lVar40 = (longlong)param_2[3];
  lVar37 = (longlong)param_2[5];
  lVar28 = (longlong)param_2[7];
  lVar3 = (longlong)(param_2[9] * 2);
  lVar4 = (longlong)(param_2[1] * 2);
  lVar27 = (longlong)param_3[5];
  lVar30 = (longlong)param_3[3];
  lVar24 = (longlong)param_3[2];
  lVar31 = (longlong)param_3[4];
  lVar32 = (longlong)param_3[1];
  lVar5 = (longlong)(param_3[9] * 0x13);
  lVar6 = (longlong)(param_2[3] * 2);
  lVar7 = (longlong)(param_3[7] * 0x13);
  lVar8 = (longlong)(param_2[5] * 2);
  lVar9 = (longlong)(param_3[5] * 0x13);
  lVar10 = (longlong)(param_2[7] * 2);
  lVar35 = (longlong)(param_3[3] * 0x13);
  lVar19 = (longlong)(param_3[2] * 0x13);
  lVar11 = (longlong)param_2[8];
  lVar12 = (longlong)(param_3[4] * 0x13);
  lVar13 = (longlong)param_2[6];
  lVar14 = (longlong)(param_3[6] * 0x13);
  lVar15 = (longlong)param_2[4];
  lVar16 = (longlong)(param_3[8] * 0x13);
  lVar17 = (longlong)param_2[2];
  lVar21 = (longlong)*param_2;
  lVar18 = (longlong)*param_3;
  lVar39 = (param_3[1] * 0x13) * lVar3 + lVar21 * *param_3 + lVar17 * lVar16 + lVar15 * lVar14 +
           lVar13 * lVar12 + lVar11 * lVar19 + lVar35 * lVar10 + lVar9 * lVar8 + lVar7 * lVar6 +
           lVar5 * lVar4;
  lVar25 = lVar31 * lVar21 + lVar24 * lVar17 + *param_3 * lVar15 + lVar16 * lVar13 + lVar14 * lVar11
           + lVar32 * lVar6 + lVar30 * lVar4 + lVar10 * lVar7 + lVar8 * lVar5 + lVar9 * lVar3;
  uVar20 = lVar25 + 0x2000000;
  lVar34 = lVar33 * *param_3 + lVar40 * lVar16 + lVar32 * lVar21 + lVar37 * lVar14 + lVar28 * lVar12
           + lVar29 * lVar19 + lVar11 * lVar35 + lVar13 * lVar9 + lVar15 * lVar7 + lVar17 * lVar5 +
           (lVar39 + 0x2000000 >> 0x1a);
  lVar41 = lVar33 * lVar31 + lVar40 * lVar24 + lVar27 * lVar21 + lVar37 * *param_3 + lVar28 * lVar16
           + lVar30 * lVar17 + lVar29 * lVar14 + lVar32 * lVar15 + lVar11 * lVar7 + lVar13 * lVar5 +
           ((longlong)uVar20 >> 0x1a);
  lVar38 = (longlong)param_3[6];
  lVar19 = lVar41 + 0x1000000;
  lVar26 = lVar24 * lVar21 + *param_3 * lVar17 + lVar16 * lVar15 + lVar14 * lVar13 + lVar12 * lVar11
           + lVar32 * lVar4 + lVar10 * lVar9 + lVar8 * lVar7 + lVar35 * lVar3 + lVar6 * lVar5 +
           (lVar34 + 0x1000000 >> 0x19);
  lVar35 = lVar26 + 0x2000000;
  lVar22 = lVar38 * lVar21 + lVar31 * lVar17 + lVar24 * lVar15 + *param_3 * lVar13 + lVar27 * lVar4
           + lVar16 * lVar11 + lVar32 * lVar8 + lVar30 * lVar6 + lVar10 * lVar5 + lVar7 * lVar3 +
           (lVar19 >> 0x19);
  lVar1 = lVar22 + 0x2000000;
  lVar23 = (longlong)param_3[7];
  lVar36 = lVar33 * lVar24 + lVar40 * lVar18 + lVar37 * lVar16 + lVar30 * lVar21 + lVar32 * lVar17 +
           lVar28 * lVar14 + lVar29 * lVar12 + lVar11 * lVar9 + lVar13 * lVar7 + lVar15 * lVar5 +
           (lVar35 >> 0x1a);
  lVar7 = lVar36 + 0x1000000;
  lVar12 = lVar21 * lVar23 + lVar38 * lVar33 + lVar40 * lVar31 + lVar37 * lVar24 + lVar27 * lVar17 +
           lVar28 * lVar18 + lVar29 * lVar16 + lVar30 * lVar15 + lVar32 * lVar13 + lVar11 * lVar5 +
           (lVar1 >> 0x1a);
  lVar25 = lVar25 + ((lVar7 >> 0x19) - (uVar20 & 0xfffffffffc000000));
  lVar9 = lVar12 + 0x1000000;
  lVar14 = lVar25 + 0x2000000;
  lVar6 = lVar21 * param_3[8] + lVar4 * lVar23 + lVar38 * lVar17 + lVar31 * lVar15 + lVar24 * lVar13
          + lVar27 * lVar6 + lVar18 * lVar11 + lVar32 * lVar10 + lVar30 * lVar8 + lVar5 * lVar3 +
          (lVar9 >> 0x19);
  lVar3 = lVar6 + 0x2000000;
  lVar8 = param_3[9] * lVar21 + lVar33 * param_3[8] + lVar17 * lVar23 + lVar38 * lVar40 +
          lVar37 * lVar31 + lVar28 * lVar24 + lVar27 * lVar15 + lVar29 * lVar18 + lVar30 * lVar13 +
          lVar32 * lVar11 + (lVar3 >> 0x1a);
  lVar4 = lVar8 + 0x1000000;
  lVar39 = lVar39 + ((lVar4 >> 0x19) * 0x13 - (lVar39 + 0x2000000U & 0xfffffffffc000000));
  lVar5 = lVar39 + 0x2000000;
  *param_1 = (int)lVar39 - ((uint)lVar5 & 0xfc000000);
  iVar2 = (int)lVar34;
  param_1[2] = (int)lVar26 - ((uint)lVar35 & 0xfc000000);
  param_1[1] = ((int)(lVar5 >> 0x1a) - (iVar2 + 0x1000000U & 0xfe000000)) + iVar2;
  local_58 = (int)lVar41;
  param_1[3] = (int)lVar36 - ((uint)lVar7 & 0xfe000000);
  param_1[4] = (int)lVar25 - ((uint)lVar14 & 0xfc000000);
  param_1[5] = ((int)(lVar14 >> 0x1a) - ((uint)lVar19 & 0xfe000000)) + local_58;
  param_1[9] = (int)lVar8 - ((uint)lVar4 & 0xfe000000);
  param_1[6] = (int)lVar22 - ((uint)lVar1 & 0xfc000000);
  param_1[7] = (int)lVar12 - ((uint)lVar9 & 0xfe000000);
  param_1[8] = (int)lVar6 - ((uint)lVar3 & 0xfc000000);
  return;
}



// FUNCTION 1454dee90 FUN_1454dee90 body=1438 status=ok
// SIG undefined FUN_1454dee90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dee90(int *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  int local_68;
  
  iVar2 = param_2[5];
  lVar20 = (longlong)iVar2;
  lVar23 = (longlong)param_2[4];
  iVar3 = *param_2;
  lVar24 = (longlong)param_2[2];
  iVar4 = param_2[9];
  iVar5 = param_2[6];
  lVar17 = (longlong)iVar5;
  iVar6 = param_2[7];
  lVar18 = (longlong)iVar6;
  iVar7 = param_2[1];
  lVar29 = (longlong)param_2[3];
  lVar16 = (longlong)param_2[8];
  lVar13 = (longlong)(iVar5 * 0x13);
  lVar8 = (longlong)(param_2[4] * 2);
  lVar27 = (longlong)(iVar6 * 0x26);
  lVar9 = (longlong)(param_2[3] * 2);
  lVar31 = (longlong)(param_2[8] * 0x13);
  lVar10 = (longlong)(param_2[2] * 2);
  lVar25 = (longlong)(iVar4 * 0x26);
  lVar11 = (longlong)(iVar7 * 2);
  lVar12 = (iVar2 * 0x26) * lVar20 + (longlong)iVar3 * (longlong)iVar3 + lVar11 * lVar25 +
           lVar10 * lVar31 + lVar9 * lVar27 + lVar8 * lVar13;
  lVar21 = (longlong)(iVar2 * 2);
  lVar32 = (longlong)(iVar3 * 2);
  lVar26 = (iVar5 * 2) * lVar31 + lVar24 * lVar24 + lVar23 * lVar32 + lVar21 * lVar25 +
           lVar18 * lVar27 + lVar11 * lVar9;
  uVar22 = lVar26 + 0x2000000;
  lVar33 = iVar7 * lVar32 + lVar24 * lVar25 + lVar23 * lVar27 + lVar21 * lVar13 + lVar31 * lVar9 +
           (lVar12 + 0x2000000 >> 0x1a);
  lVar34 = (longlong)(iVar6 * 2);
  lVar19 = lVar17 * lVar25 + lVar29 * lVar10 + lVar34 * lVar31 + lVar23 * lVar11 + lVar32 * lVar20 +
           ((longlong)uVar22 >> 0x1a);
  lVar15 = lVar24 * lVar32 + iVar7 * lVar11 + lVar17 * lVar13 + lVar21 * lVar27 + lVar25 * lVar9 +
           lVar31 * lVar8 + (lVar33 + 0x1000000 >> 0x19);
  lVar28 = lVar19 + 0x1000000;
  lVar13 = lVar15 + 0x2000000;
  lVar14 = lVar17 * lVar32 + lVar16 * lVar31 + lVar34 * lVar25 + lVar29 * lVar9 + lVar21 * lVar11 +
           lVar23 * lVar10 + (lVar28 >> 0x19);
  lVar1 = lVar14 + 0x2000000;
  lVar31 = lVar29 * lVar32 + lVar24 * lVar11 + lVar23 * lVar25 + lVar17 * lVar27 + lVar21 * lVar31 +
           (lVar13 >> 0x1a);
  lVar29 = lVar31 + 0x1000000;
  lVar30 = lVar16 * lVar25 + lVar32 * lVar18 + lVar17 * lVar11 + lVar23 * lVar9 + lVar10 * lVar20 +
           (lVar1 >> 0x1a);
  lVar26 = lVar26 + ((lVar29 >> 0x19) - (uVar22 & 0xfffffffffc000000));
  lVar24 = lVar30 + 0x1000000;
  lVar27 = lVar26 + 0x2000000;
  lVar23 = lVar16 * lVar32 + iVar4 * lVar25 + lVar23 * lVar23 + lVar34 * lVar11 + lVar17 * lVar10 +
           lVar21 * lVar9 + (lVar24 >> 0x19);
  lVar21 = lVar23 + 0x2000000;
  param_1[7] = (int)lVar30 - ((uint)lVar24 & 0xfe000000);
  lVar8 = iVar4 * lVar32 + lVar16 * lVar11 + lVar17 * lVar9 + lVar18 * lVar10 + lVar8 * lVar20 +
          (lVar21 >> 0x1a);
  param_1[8] = (int)lVar23 - ((uint)lVar21 & 0xfc000000);
  lVar24 = lVar8 + 0x1000000;
  lVar12 = lVar12 + ((lVar24 >> 0x19) * 0x13 - (lVar12 + 0x2000000U & 0xfffffffffc000000));
  lVar21 = lVar12 + 0x2000000;
  *param_1 = (int)lVar12 - ((uint)lVar21 & 0xfc000000);
  iVar2 = (int)lVar33;
  param_1[2] = (int)lVar15 - ((uint)lVar13 & 0xfc000000);
  param_1[1] = ((int)(lVar21 >> 0x1a) - (iVar2 + 0x1000000U & 0xfe000000)) + iVar2;
  param_1[3] = (int)lVar31 - ((uint)lVar29 & 0xfe000000);
  local_68 = (int)lVar19;
  param_1[4] = (int)lVar26 - ((uint)lVar27 & 0xfc000000);
  param_1[5] = ((int)(lVar27 >> 0x1a) - ((uint)lVar28 & 0xfe000000)) + local_68;
  param_1[9] = (int)lVar8 - ((uint)lVar24 & 0xfe000000);
  param_1[6] = (int)lVar14 - ((uint)lVar1 & 0xfc000000);
  return;
}



// FUNCTION 1454df430 FUN_1454df430 body=626 status=ok
// SIG undefined FUN_1454df430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454df430(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined1 local_30 [32];
  undefined8 uStack_10;
  
  uStack_10 = 0x1454df454;
  FUN_1454dee90(local_30);
  FUN_1454dee90(local_80,local_30);
  FUN_1454dee90(local_80,local_80);
  FUN_1454de570(local_80,param_2,local_80);
  FUN_1454de570(local_30,local_30,local_80);
  FUN_1454dee90(local_a8,local_30);
  FUN_1454de570(local_80,local_80,local_a8);
  FUN_1454dee90(local_a8,local_80);
  lVar2 = 4;
  lVar1 = 4;
  do {
    FUN_1454dee90(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_80,local_a8,local_80);
  FUN_1454dee90(local_a8,local_80);
  lVar1 = 9;
  do {
    FUN_1454dee90(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_a8,local_a8,local_80);
  FUN_1454dee90(local_58,local_a8);
  lVar1 = 0x13;
  do {
    FUN_1454dee90(local_58,local_58);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_a8,local_58,local_a8);
  lVar1 = 10;
  do {
    FUN_1454dee90(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_80,local_a8,local_80);
  FUN_1454dee90(local_a8,local_80);
  lVar1 = 0x31;
  lVar3 = 0x31;
  do {
    FUN_1454dee90(local_a8,local_a8);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1454de570(local_a8,local_a8,local_80);
  FUN_1454dee90(local_58,local_a8);
  lVar3 = 99;
  do {
    FUN_1454dee90(local_58,local_58);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_1454de570(local_a8,local_58,local_a8);
  FUN_1454dee90(local_a8,local_a8);
  do {
    FUN_1454dee90(local_a8,local_a8);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_80,local_a8,local_80);
  FUN_1454dee90(local_80,local_80);
  do {
    FUN_1454dee90(local_80,local_80);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1454de570(param_1,local_80,local_30);
  return;
}



// FUNCTION 1454df6b0 FUN_1454df6b0 body=1389 status=ok
// SIG undefined FUN_1454df6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454df6b0(int *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  
  iVar6 = param_2[5];
  lVar21 = (longlong)iVar6;
  iVar7 = param_2[7];
  lVar20 = (longlong)iVar7;
  lVar27 = (longlong)param_2[2];
  iVar8 = param_2[6];
  lVar19 = (longlong)iVar8;
  lVar23 = (longlong)param_2[4];
  iVar9 = param_2[9];
  iVar10 = *param_2;
  lVar32 = (longlong)param_2[3];
  lVar33 = (longlong)param_2[8];
  iVar11 = param_2[1];
  lVar18 = (longlong)(iVar8 * 0x13);
  lVar12 = (longlong)(param_2[4] * 2);
  lVar29 = (longlong)(iVar7 * 0x26);
  lVar13 = (longlong)(param_2[3] * 2);
  lVar30 = (longlong)(param_2[8] * 0x13);
  lVar14 = (longlong)(param_2[2] * 2);
  lVar16 = (longlong)(iVar9 * 0x26);
  lVar15 = (longlong)(iVar11 * 2);
  lVar22 = (longlong)(iVar6 * 2);
  lVar31 = ((iVar6 * 0x26) * lVar21 + (longlong)iVar10 * (longlong)iVar10 + lVar15 * lVar16 +
            lVar14 * lVar30 + lVar13 * lVar29 + lVar12 * lVar18) * 2;
  lVar17 = (longlong)(iVar10 * 2);
  lVar25 = ((iVar8 * 2) * lVar30 + lVar22 * lVar16 + lVar20 * lVar29 + lVar15 * lVar13 +
            lVar27 * lVar27 + lVar23 * lVar17) * 2;
  uVar24 = lVar25 + 0x2000000;
  lVar1 = (lVar31 + 0x2000000 >> 0x1a) +
          (lVar27 * lVar16 + lVar23 * lVar29 + lVar22 * lVar18 + lVar30 * lVar13 + iVar11 * lVar17)
          * 2;
  lVar28 = (longlong)(iVar7 * 2);
  lVar2 = ((longlong)uVar24 >> 0x1a) +
          (lVar19 * lVar16 + lVar32 * lVar14 + lVar28 * lVar30 + lVar23 * lVar15 + lVar17 * lVar21)
          * 2;
  lVar3 = (lVar1 + 0x1000000 >> 0x19) +
          (iVar11 * lVar15 + lVar19 * lVar18 + lVar22 * lVar29 + lVar16 * lVar13 + lVar30 * lVar12 +
          lVar27 * lVar17) * 2;
  lVar5 = lVar3 + 0x2000000;
  lVar4 = (lVar2 + 0x1000000 >> 0x19) +
          (lVar33 * lVar30 + lVar28 * lVar16 + lVar32 * lVar13 + lVar22 * lVar15 + lVar23 * lVar14 +
          lVar19 * lVar17) * 2;
  lVar18 = lVar4 + 0x2000000;
  lVar30 = (lVar5 >> 0x1a) +
           (lVar27 * lVar15 + lVar23 * lVar16 + lVar19 * lVar29 + lVar22 * lVar30 + lVar32 * lVar17)
           * 2;
  lVar27 = lVar30 + 0x1000000;
  lVar32 = (lVar18 >> 0x1a) +
           (lVar17 * lVar20 + lVar19 * lVar15 + lVar23 * lVar13 + lVar14 * lVar21 + lVar33 * lVar16)
           * 2;
  lVar29 = lVar32 + 0x1000000;
  lVar25 = lVar25 + ((lVar27 >> 0x19) - (uVar24 & 0xfffffffffc000000));
  lVar26 = lVar25 + 0x2000000;
  lVar22 = (lVar29 >> 0x19) +
           (lVar28 * lVar15 + lVar19 * lVar14 + lVar22 * lVar13 + lVar33 * lVar17 + iVar9 * lVar16 +
           lVar23 * lVar23) * 2;
  lVar16 = lVar22 + 0x2000000;
  lVar14 = (lVar16 >> 0x1a) +
           (lVar19 * lVar13 + lVar20 * lVar14 + lVar12 * lVar21 + iVar9 * lVar17 + lVar33 * lVar15)
           * 2;
  lVar12 = lVar14 + 0x1000000;
  lVar31 = lVar31 + ((lVar12 >> 0x19) * 0x13 - (lVar31 + 0x2000000U & 0xfffffffffc000000));
  lVar13 = lVar31 + 0x2000000;
  *param_1 = (int)lVar31 - ((uint)lVar13 & 0xfc000000);
  iVar6 = (int)lVar1;
  param_1[1] = ((int)(lVar13 >> 0x1a) - (iVar6 + 0x1000000U & 0xfe000000)) + iVar6;
  param_1[2] = (int)lVar3 - ((uint)lVar5 & 0xfc000000);
  param_1[3] = (int)lVar30 - ((uint)lVar27 & 0xfe000000);
  param_1[6] = (int)lVar4 - ((uint)lVar18 & 0xfc000000);
  param_1[4] = (int)lVar25 - ((uint)lVar26 & 0xfc000000);
  param_1[7] = (int)lVar32 - ((uint)lVar29 & 0xfe000000);
  param_1[8] = (int)lVar22 - ((uint)lVar16 & 0xfc000000);
  iVar6 = (int)lVar2;
  param_1[5] = ((int)(lVar26 >> 0x1a) - (iVar6 + 0x1000000U & 0xfe000000)) + iVar6;
  param_1[9] = (int)lVar14 - ((uint)lVar12 & 0xfe000000);
  return;
}



// FUNCTION 1454dfc20 FUN_1454dfc20 body=619 status=ok
// SIG undefined FUN_1454dfc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dfc20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  undefined8 uStack_10;
  
  uStack_10 = 0x1454dfc44;
  FUN_1454dee90(local_60);
  FUN_1454dee90(local_88,local_60);
  FUN_1454dee90(local_88,local_88);
  FUN_1454de570(local_88,param_2,local_88);
  FUN_1454de570(local_60,local_60,local_88);
  FUN_1454dee90(local_60,local_60);
  FUN_1454de570(local_60,local_88,local_60);
  FUN_1454dee90(local_88,local_60);
  lVar1 = 4;
  do {
    FUN_1454dee90(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_60,local_88,local_60);
  FUN_1454dee90(local_88,local_60);
  lVar1 = 9;
  lVar2 = 9;
  do {
    FUN_1454dee90(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1454de570(local_88,local_88,local_60);
  FUN_1454dee90(local_38,local_88);
  lVar2 = 0x13;
  do {
    FUN_1454dee90(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1454de570(local_88,local_38,local_88);
  FUN_1454dee90(local_88,local_88);
  do {
    FUN_1454dee90(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_60,local_88,local_60);
  FUN_1454dee90(local_88,local_60);
  lVar1 = 0x31;
  lVar2 = 0x31;
  do {
    FUN_1454dee90(local_88,local_88);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1454de570(local_88,local_88,local_60);
  FUN_1454dee90(local_38,local_88);
  lVar2 = 99;
  do {
    FUN_1454dee90(local_38,local_38);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1454de570(local_88,local_38,local_88);
  FUN_1454dee90(local_88,local_88);
  do {
    FUN_1454dee90(local_88,local_88);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_1454de570(local_60,local_88,local_60);
  FUN_1454dee90(local_60,local_60);
  FUN_1454dee90(local_60,local_60);
  FUN_1454de570(param_1,local_60,param_2);
  return;
}



// FUNCTION 1454dfe90 FUN_1454dfe90 body=843 status=ok
// SIG undefined FUN_1454dfe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454dfe90(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [32];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454dfeaf;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1454de030(param_1 + 10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x14] = 1;
  FUN_1454dee90(&local_e8,param_1 + 10);
  FUN_1454de570(&local_c0,&local_e8,&DAT_149d8c288);
  iVar5 = local_e8 - param_1[0x14];
  local_cc = local_cc - param_1[0x1b];
  local_c8 = local_c8 - param_1[0x1c];
  local_a4 = local_a4 + param_1[0x1b];
  local_a0 = local_a0 + param_1[0x1c];
  local_e4 = local_e4 - param_1[0x15];
  local_e0 = local_e0 - param_1[0x16];
  local_dc = local_dc - param_1[0x17];
  local_d8 = local_d8 - param_1[0x18];
  local_d4 = local_d4 - param_1[0x19];
  local_d0 = local_d0 - param_1[0x1a];
  local_c4 = local_c4 - param_1[0x1d];
  local_c0 = local_c0 + param_1[0x14];
  local_bc = local_bc + param_1[0x15];
  local_b8 = local_b8 + param_1[0x16];
  local_b4 = local_b4 + param_1[0x17];
  local_b0 = local_b0 + param_1[0x18];
  local_ac = local_ac + param_1[0x19];
  local_a8 = local_a8 + param_1[0x1a];
  local_9c = local_9c + param_1[0x1d];
  local_e8 = iVar5;
  FUN_1454dee90(&local_98,&local_c0);
  FUN_1454de570(&local_98,&local_98,&local_c0);
  FUN_1454dee90(param_1,&local_98);
  FUN_1454de570(param_1,param_1,&local_c0);
  FUN_1454de570(param_1,param_1,&local_e8);
  FUN_1454dfc20(param_1,param_1);
  FUN_1454de570(param_1,param_1,&local_98);
  FUN_1454de570(param_1,param_1,&local_e8);
  FUN_1454dee90(&local_70,param_1);
  FUN_1454de570(&local_70,&local_70,&local_c0);
  iVar2 = local_dc;
  iVar1 = local_e0;
  iVar4 = local_e4;
  local_98 = local_70 - iVar5;
  local_94 = local_6c - local_e4;
  local_90 = local_68 - local_e0;
  local_8c = local_64 - local_dc;
  local_88 = local_60 - local_d8;
  local_84 = local_5c - local_d4;
  local_80 = local_58 - local_d0;
  local_7c = local_54 - local_cc;
  local_78 = local_50 - local_c8;
  local_74 = local_4c - local_c4;
  FUN_1454de300(&local_c0,&local_98);
  iVar3 = FUN_14259f120(&local_c0,&DAT_149d93f10,0x20);
  if (iVar3 != 0) {
    local_98 = local_70 + iVar5;
    local_94 = local_6c + iVar4;
    local_90 = local_68 + iVar1;
    local_8c = local_64 + iVar2;
    local_88 = local_d8 + local_60;
    local_84 = local_d4 + local_5c;
    local_80 = local_d0 + local_58;
    local_7c = local_cc + local_54;
    local_78 = local_c8 + local_50;
    local_74 = local_c4 + local_4c;
    FUN_1454de300(&local_c0,&local_98);
    iVar4 = FUN_14259f120(&local_c0,&DAT_149d93f10,0x20);
    if (iVar4 != 0) goto LAB_1454e01cf;
    FUN_1454de570(param_1,param_1,&DAT_149d8c2b0);
  }
  FUN_1454de300(&local_c0,param_1);
  if (((byte)local_c0 & 1) != *(byte *)(param_2 + 0x1f) >> 7) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
    param_1[3] = -param_1[3];
    param_1[4] = -param_1[4];
    param_1[5] = -param_1[5];
    param_1[6] = -param_1[6];
    param_1[7] = -param_1[7];
    param_1[8] = -param_1[8];
    param_1[9] = -param_1[9];
  }
  FUN_1454de570(param_1 + 0x1e,param_1,param_1 + 10);
LAB_1454e01cf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 1454e0200 FUN_1454e0200 body=252 status=ok
// SIG undefined FUN_1454e0200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e0200(int *param_1,int *param_2)

{
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  memmove(param_1 + 0x14,param_2 + 0x14,0x28);
  FUN_1454de570(param_1 + 0x1e,param_2 + 0x1e,&DAT_149d8c2d8);
  return;
}



// FUNCTION 1454e0300 FUN_1454e0300 body=681 status=ok
// SIG undefined FUN_1454e0300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e0300(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_a8 [32];
  int *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  FUN_1454dee90();
  FUN_1454dee90(param_1 + 0x14,param_2 + 10);
  FUN_1454df6b0(param_1 + 0x1e,param_2 + 0x14);
  param_1[10] = *param_2 + param_2[10];
  param_1[0xb] = param_2[1] + param_2[0xb];
  param_1[0xc] = param_2[0xc] + param_2[2];
  param_1[0xd] = param_2[0xd] + param_2[3];
  param_1[0xe] = param_2[0xe] + param_2[4];
  param_1[0xf] = param_2[0xf] + param_2[5];
  param_1[0x10] = param_2[0x10] + param_2[6];
  param_1[0x11] = param_2[0x11] + param_2[7];
  param_1[0x12] = param_2[0x12] + param_2[8];
  param_1[0x13] = param_2[0x13] + param_2[9];
  FUN_1454dee90(&local_68,param_1 + 10);
  local_80 = param_1[0x14];
  local_78 = param_1[2];
  iVar1 = param_1[0x18];
  local_6c = *param_1 + local_80;
  iVar2 = param_1[4];
  iVar3 = param_1[3];
  iVar4 = param_1[0x19];
  iVar5 = param_1[0x1a];
  iVar6 = param_1[6];
  param_1[10] = local_6c;
  iVar7 = param_1[5];
  local_74 = param_1[0x16];
  param_1[0xc] = local_74 + local_78;
  local_70 = param_1[0x17];
  local_7c = param_1[0x15];
  param_1[0xb] = local_7c + param_1[1];
  param_1[0xd] = local_70 + iVar3;
  param_1[0xe] = iVar2 + iVar1;
  param_1[0xf] = iVar7 + iVar4;
  iVar8 = local_88[7];
  param_1[0x10] = iVar6 + iVar5;
  iVar9 = param_1[0x1b];
  local_88[0x11] = iVar8 + iVar9;
  local_88[0x12] = local_88[8] + local_88[0x1c];
  local_88[0x13] = local_88[9] + local_88[0x1d];
  local_88[0x14] = local_80 - *local_88;
  local_88[0x15] = local_7c - local_88[1];
  local_88[0x18] = iVar1 - iVar2;
  local_88[0x19] = iVar4 - iVar7;
  local_88[0x1a] = iVar5 - iVar6;
  local_88[0x1b] = iVar9 - iVar8;
  local_88[0x1c] = local_88[0x1c] - local_88[8];
  local_88[0x1d] = local_88[0x1d] - local_88[9];
  local_88[0x16] = local_74 - local_78;
  local_88[0x17] = local_70 - iVar3;
  *local_88 = local_68 - local_6c;
  local_88[1] = local_64 - local_88[0xb];
  local_88[2] = local_60 - local_88[0xc];
  local_88[3] = local_5c - local_88[0xd];
  local_88[4] = local_58 - local_88[0xe];
  local_88[5] = local_54 - local_88[0xf];
  local_88[6] = local_50 - local_88[0x10];
  local_88[7] = local_4c - local_88[0x11];
  local_88[8] = local_48 - local_88[0x12];
  local_88[9] = local_44 - local_88[0x13];
  local_88[0x1e] = local_88[0x1e] - local_88[0x14];
  local_88[0x1f] = local_88[0x1f] - local_88[0x15];
  local_88[0x20] = local_88[0x20] - local_88[0x16];
  local_88[0x21] = local_88[0x21] - local_88[0x17];
  local_88[0x22] = local_88[0x22] - local_88[0x18];
  local_88[0x23] = local_88[0x23] - local_88[0x19];
  local_88[0x24] = local_88[0x24] - local_88[0x1a];
  local_88[0x25] = local_88[0x25] - local_88[0x1b];
  local_88[0x26] = local_88[0x26] - local_88[0x1c];
  local_88[0x27] = local_88[0x27] - local_88[0x1d];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1454e05d0 FUN_1454e05d0 body=973 status=ok
// SIG undefined FUN_1454e05d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e05d0(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_1454de570(param_1 + 0x14,param_1);
  FUN_1454de570(param_1 + 10,param_1 + 10,param_3 + 0x28);
  FUN_1454de570(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar1 = param_2[0x14];
  iVar2 = param_2[0x15];
  iVar3 = param_2[0x16];
  iVar4 = param_2[0x17];
  iVar5 = param_2[0x18];
  iVar6 = param_2[0x19];
  iVar7 = param_2[0x1a];
  iVar8 = param_2[0x1b];
  iVar9 = param_2[0x1c];
  iVar10 = param_2[0x1d];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = param_1[0x1e] + iVar1 * 2;
  param_1[0x15] = param_1[0x1f] + iVar2 * 2;
  param_1[0x16] = param_1[0x20] + iVar3 * 2;
  param_1[0x17] = param_1[0x21] + iVar4 * 2;
  param_1[0x18] = param_1[0x22] + iVar5 * 2;
  param_1[0x19] = param_1[0x23] + iVar6 * 2;
  param_1[0x1a] = param_1[0x24] + iVar7 * 2;
  param_1[0x1b] = param_1[0x25] + iVar8 * 2;
  param_1[0x1c] = param_1[0x26] + iVar9 * 2;
  param_1[0x1d] = param_1[0x27] + iVar10 * 2;
  param_1[0x23] = iVar6 * 2 - param_1[0x23];
  param_1[0x27] = iVar10 * 2 - param_1[0x27];
  param_1[0x1e] = iVar1 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar2 * 2 - param_1[0x1f];
  param_1[0x20] = iVar3 * 2 - param_1[0x20];
  param_1[0x21] = iVar4 * 2 - param_1[0x21];
  param_1[0x22] = iVar5 * 2 - param_1[0x22];
  param_1[0x24] = iVar7 * 2 - param_1[0x24];
  param_1[0x25] = iVar8 * 2 - param_1[0x25];
  param_1[0x26] = iVar9 * 2 - param_1[0x26];
  return;
}



// FUNCTION 1454e09a0 FUN_1454e09a0 body=887 status=ok
// SIG undefined FUN_1454e09a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e09a0(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = *param_2 + param_2[10];
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_1454de570(param_1 + 0x14,param_1,param_3 + 0x28);
  FUN_1454de570(param_1 + 10,param_1 + 10,param_3);
  FUN_1454de570(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar1 = param_2[0x14];
  iVar2 = param_2[0x15];
  iVar3 = param_2[0x16];
  iVar4 = param_2[0x17];
  iVar5 = param_2[0x18];
  iVar6 = param_2[0x19];
  iVar7 = param_2[0x1a];
  iVar8 = param_2[0x1b];
  iVar9 = param_2[0x1c];
  iVar10 = param_2[0x1d];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = iVar1 * 2 - param_1[0x1e];
  param_1[0x15] = iVar2 * 2 - param_1[0x1f];
  param_1[0x16] = iVar3 * 2 - param_1[0x20];
  param_1[0x17] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = iVar5 * 2 - param_1[0x22];
  param_1[0x19] = iVar6 * 2 - param_1[0x23];
  param_1[0x1a] = iVar7 * 2 - param_1[0x24];
  param_1[0x1b] = iVar8 * 2 - param_1[0x25];
  param_1[0x1c] = iVar9 * 2 - param_1[0x26];
  param_1[0x1d] = iVar10 * 2 - param_1[0x27];
  param_1[0x21] = param_1[0x21] + iVar4 * 2;
  param_1[0x1e] = param_1[0x1e] + iVar1 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar2 * 2;
  param_1[0x20] = param_1[0x20] + iVar3 * 2;
  param_1[0x22] = param_1[0x22] + iVar5 * 2;
  param_1[0x23] = param_1[0x23] + iVar6 * 2;
  param_1[0x24] = param_1[0x24] + iVar7 * 2;
  param_1[0x25] = param_1[0x25] + iVar8 * 2;
  param_1[0x26] = param_1[0x26] + iVar9 * 2;
  param_1[0x27] = param_1[0x27] + iVar10 * 2;
  return;
}



// FUNCTION 1454e0d20 FUN_1454e0d20 body=979 status=ok
// SIG undefined FUN_1454e0d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e0d20(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_1454de570(param_1 + 0x14,param_1);
  FUN_1454de570(param_1 + 10,param_1 + 10,param_3 + 0x28);
  FUN_1454de570(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  FUN_1454de570(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  iVar10 = param_1[9];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = param_1[0x1e] + iVar1 * 2;
  param_1[0x15] = param_1[0x1f] + iVar2 * 2;
  param_1[0x16] = param_1[0x20] + iVar3 * 2;
  param_1[0x17] = param_1[0x21] + iVar4 * 2;
  param_1[0x18] = param_1[0x22] + iVar5 * 2;
  param_1[0x19] = param_1[0x23] + iVar6 * 2;
  param_1[0x1a] = param_1[0x24] + iVar7 * 2;
  param_1[0x1b] = param_1[0x25] + iVar8 * 2;
  param_1[0x1c] = param_1[0x26] + iVar9 * 2;
  param_1[0x1d] = param_1[0x27] + iVar10 * 2;
  param_1[0x23] = iVar6 * 2 - param_1[0x23];
  param_1[0x27] = iVar10 * 2 - param_1[0x27];
  param_1[0x1e] = iVar1 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar2 * 2 - param_1[0x1f];
  param_1[0x20] = iVar3 * 2 - param_1[0x20];
  param_1[0x21] = iVar4 * 2 - param_1[0x21];
  param_1[0x22] = iVar5 * 2 - param_1[0x22];
  param_1[0x24] = iVar7 * 2 - param_1[0x24];
  param_1[0x25] = iVar8 * 2 - param_1[0x25];
  param_1[0x26] = iVar9 * 2 - param_1[0x26];
  return;
}



// FUNCTION 1454e1100 FUN_1454e1100 body=893 status=ok
// SIG undefined FUN_1454e1100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e1100(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = param_2[10] + *param_2;
  param_1[1] = param_2[1] + param_2[0xb];
  param_1[2] = param_2[0xc] + param_2[2];
  param_1[3] = param_2[0xd] + param_2[3];
  param_1[4] = param_2[0xe] + param_2[4];
  param_1[5] = param_2[5] + param_2[0xf];
  param_1[6] = param_2[0x10] + param_2[6];
  param_1[7] = param_2[0x11] + param_2[7];
  param_1[8] = param_2[0x12] + param_2[8];
  param_1[9] = param_2[9] + param_2[0x13];
  param_1[10] = param_2[10] - *param_2;
  param_1[0xb] = param_2[0xb] - param_2[1];
  param_1[0xc] = param_2[0xc] - param_2[2];
  param_1[0xd] = param_2[0xd] - param_2[3];
  param_1[0xe] = param_2[0xe] - param_2[4];
  param_1[0xf] = param_2[0xf] - param_2[5];
  param_1[0x10] = param_2[0x10] - param_2[6];
  param_1[0x11] = param_2[0x11] - param_2[7];
  param_1[0x12] = param_2[0x12] - param_2[8];
  param_1[0x13] = param_2[0x13] - param_2[9];
  FUN_1454de570(param_1 + 0x14,param_1,param_3 + 0x28);
  FUN_1454de570(param_1 + 10,param_1 + 10,param_3);
  FUN_1454de570(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  FUN_1454de570(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  iVar9 = param_1[8];
  iVar10 = param_1[9];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  param_1[8] = param_1[0x1c] - param_1[0x12];
  param_1[9] = param_1[0x1d] - param_1[0x13];
  param_1[10] = param_1[10] + param_1[0x14];
  param_1[0xb] = param_1[0xb] + param_1[0x15];
  param_1[0xc] = param_1[0xc] + param_1[0x16];
  param_1[0xd] = param_1[0xd] + param_1[0x17];
  param_1[0xe] = param_1[0xe] + param_1[0x18];
  param_1[0xf] = param_1[0xf] + param_1[0x19];
  param_1[0x10] = param_1[0x10] + param_1[0x1a];
  param_1[0x11] = param_1[0x11] + param_1[0x1b];
  param_1[0x12] = param_1[0x12] + param_1[0x1c];
  param_1[0x13] = param_1[0x13] + param_1[0x1d];
  param_1[0x14] = iVar1 * 2 - param_1[0x1e];
  param_1[0x15] = iVar2 * 2 - param_1[0x1f];
  param_1[0x16] = iVar3 * 2 - param_1[0x20];
  param_1[0x17] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = iVar5 * 2 - param_1[0x22];
  param_1[0x19] = iVar6 * 2 - param_1[0x23];
  param_1[0x1a] = iVar7 * 2 - param_1[0x24];
  param_1[0x1b] = iVar8 * 2 - param_1[0x25];
  param_1[0x1c] = iVar9 * 2 - param_1[0x26];
  param_1[0x1d] = iVar10 * 2 - param_1[0x27];
  param_1[0x21] = param_1[0x21] + iVar4 * 2;
  param_1[0x1e] = param_1[0x1e] + iVar1 * 2;
  param_1[0x1f] = param_1[0x1f] + iVar2 * 2;
  param_1[0x20] = param_1[0x20] + iVar3 * 2;
  param_1[0x22] = param_1[0x22] + iVar5 * 2;
  param_1[0x23] = param_1[0x23] + iVar6 * 2;
  param_1[0x24] = param_1[0x24] + iVar7 * 2;
  param_1[0x25] = param_1[0x25] + iVar8 * 2;
  param_1[0x26] = param_1[0x26] + iVar9 * 2;
  param_1[0x27] = param_1[0x27] + iVar10 * 2;
  return;
}



// FUNCTION 1454e1480 FUN_1454e1480 body=429 status=ok
// SIG undefined FUN_1454e1480(void)

void FUN_1454e1480(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = -(uint)param_3;
  *param_1 = *param_1 ^ (*param_1 ^ *param_2) & uVar1;
  param_1[1] = param_1[1] ^ (param_2[1] ^ param_1[1]) & uVar1;
  param_1[2] = param_1[2] ^ (param_2[2] ^ param_1[2]) & uVar1;
  param_1[3] = param_1[3] ^ (param_2[3] ^ param_1[3]) & uVar1;
  param_1[4] = param_1[4] ^ (param_2[4] ^ param_1[4]) & uVar1;
  param_1[5] = param_1[5] ^ (param_2[5] ^ param_1[5]) & uVar1;
  param_1[6] = param_1[6] ^ (param_2[6] ^ param_1[6]) & uVar1;
  param_1[7] = param_1[7] ^ (param_2[7] ^ param_1[7]) & uVar1;
  param_1[8] = param_1[8] ^ (param_2[8] ^ param_1[8]) & uVar1;
  param_1[9] = param_1[9] ^ (param_2[9] ^ param_1[9]) & uVar1;
  param_1[10] = param_1[10] ^ (param_2[10] ^ param_1[10]) & uVar1;
  param_1[0xb] = param_1[0xb] ^ (param_2[0xb] ^ param_1[0xb]) & uVar1;
  param_1[0xc] = param_1[0xc] ^ (param_2[0xc] ^ param_1[0xc]) & uVar1;
  param_1[0xd] = param_1[0xd] ^ (param_2[0xd] ^ param_1[0xd]) & uVar1;
  param_1[0xe] = param_1[0xe] ^ (param_2[0xe] ^ param_1[0xe]) & uVar1;
  param_1[0xf] = param_1[0xf] ^ (param_2[0xf] ^ param_1[0xf]) & uVar1;
  param_1[0x10] = param_1[0x10] ^ (param_2[0x10] ^ param_1[0x10]) & uVar1;
  param_1[0x11] = param_1[0x11] ^ (param_2[0x11] ^ param_1[0x11]) & uVar1;
  param_1[0x12] = param_1[0x12] ^ (param_2[0x12] ^ param_1[0x12]) & uVar1;
  param_1[0x13] = param_1[0x13] ^ (param_2[0x13] ^ param_1[0x13]) & uVar1;
  param_1[0x14] = param_1[0x14] ^ (param_2[0x14] ^ param_1[0x14]) & uVar1;
  param_1[0x15] = param_1[0x15] ^ (param_2[0x15] ^ param_1[0x15]) & uVar1;
  param_1[0x16] = param_1[0x16] ^ (param_2[0x16] ^ param_1[0x16]) & uVar1;
  param_1[0x17] = param_1[0x17] ^ (param_2[0x17] ^ param_1[0x17]) & uVar1;
  param_1[0x18] = param_1[0x18] ^ (param_2[0x18] ^ param_1[0x18]) & uVar1;
  param_1[0x19] = param_1[0x19] ^ (param_2[0x19] ^ param_1[0x19]) & uVar1;
  param_1[0x1a] = param_1[0x1a] ^ (param_2[0x1a] ^ param_1[0x1a]) & uVar1;
  param_1[0x1b] = param_1[0x1b] ^ (param_2[0x1b] ^ param_1[0x1b]) & uVar1;
  param_1[0x1c] = param_1[0x1c] ^ (param_2[0x1c] ^ param_1[0x1c]) & uVar1;
  param_1[0x1d] = param_1[0x1d] ^ (param_2[0x1d] ^ param_1[0x1d]) & uVar1;
  return;
}



// FUNCTION 1454e1630 FUN_1454e1630 body=597 status=ok
// SIG undefined FUN_1454e1630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e1630(undefined8 *param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e1648;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)param_1 = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  bVar2 = param_3 + ((char)param_3 >> 7 & param_3) * -2;
  lVar3 = (longlong)param_2 * 0x3c0;
  FUN_1454e1480(param_1,&DAT_149d8c330 + lVar3,(bVar2 ^ 1) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c3a8 + lVar3,(bVar2 ^ 2) - 1 >> 0x1f);
  uVar1 = (uint)bVar2;
  FUN_1454e1480(param_1,&DAT_149d8c420 + lVar3,(uVar1 ^ 3) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c498 + lVar3,(uVar1 ^ 4) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c510 + lVar3,(uVar1 ^ 5) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c588 + lVar3,(uVar1 ^ 6) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c600 + lVar3,(bVar2 ^ 7) - 1 >> 0x1f);
  FUN_1454e1480(param_1,&DAT_149d8c678 + lVar3,(bVar2 ^ 8) - 1 >> 0x1f);
  memmove(local_a8,param_1 + 5,0x28);
  memmove(local_80,param_1,0x28);
  local_58 = -*(int *)(param_1 + 10);
  local_54 = -*(int *)((longlong)param_1 + 0x54);
  local_50 = -*(int *)(param_1 + 0xb);
  local_4c = -*(int *)((longlong)param_1 + 0x5c);
  local_48 = -*(int *)(param_1 + 0xc);
  local_44 = -*(int *)((longlong)param_1 + 100);
  local_40 = -*(int *)(param_1 + 0xd);
  local_3c = -*(int *)((longlong)param_1 + 0x6c);
  local_38 = -*(int *)(param_1 + 0xe);
  local_34 = -*(int *)((longlong)param_1 + 0x74);
  FUN_1454e1480(param_1,local_a8,(uint)(int)(char)param_3 >> 0x1f);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1454e18a0 FUN_1454e18a0 body=935 status=ok
// SIG undefined FUN_1454e18a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e18a0(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_238 [32];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [40];
  undefined1 local_1a0 [40];
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [48];
  undefined1 local_f8 [128];
  byte local_78 [63];
  char local_39;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1454e18ca;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  pbVar7 = (byte *)(param_2 + 1);
  lVar9 = 0x10;
  pbVar8 = local_78 + 1;
  do {
    bVar1 = pbVar7[-1];
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 2;
    *pbVar8 = bVar1 >> 4;
    pbVar8[-1] = bVar1 & 0xf;
    pbVar8[1] = bVar2 & 0xf;
    pbVar8[2] = bVar2 >> 4;
    lVar9 = lVar9 + -1;
    pbVar8 = pbVar8 + 4;
  } while (lVar9 != 0);
  cVar3 = '\0';
  uVar5 = 0;
  uVar4 = uVar5;
  do {
    local_78[uVar4] = local_78[uVar4] + cVar3;
    cVar3 = (char)(local_78[uVar4] + 8) >> 4;
    local_78[uVar4] = local_78[uVar4] + cVar3 * -0x10;
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 0x3f);
  local_39 = local_39 + cVar3;
  pbVar7 = local_78 + 1;
  uVar6 = 1;
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
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  do {
    FUN_1454e1630(local_f8,uVar6 >> 1,*pbVar7);
    FUN_1454e05d0(local_218,param_1,local_f8);
    FUN_1454de570(param_1,local_218,local_1a0);
    FUN_1454de570(param_1 + 5,local_1f0,local_1c8);
    FUN_1454de570(param_1 + 10,local_1c8,local_1a0);
    FUN_1454de570(param_1 + 0xf,local_218,local_1f0);
    uVar6 = uVar6 + 2;
    pbVar7 = pbVar7 + 2;
  } while ((int)uVar6 < 0x40);
  memmove(local_178,param_1,0x28);
  memmove(local_150,param_1 + 5,0x28);
  memmove(local_128,param_1 + 10,0x28);
  FUN_1454e0300(local_218,local_178);
  FUN_1454de570(local_178,local_218,local_1a0);
  FUN_1454de570(local_150,local_1f0,local_1c8);
  FUN_1454de570(local_128,local_1c8,local_1a0);
  FUN_1454e0300(local_218,local_178);
  FUN_1454de570(local_178,local_218,local_1a0);
  FUN_1454de570(local_150,local_1f0,local_1c8);
  FUN_1454de570(local_128,local_1c8,local_1a0);
  FUN_1454e0300(local_218,local_178);
  FUN_1454de570(local_178,local_218,local_1a0);
  FUN_1454de570(local_150,local_1f0,local_1c8);
  FUN_1454de570(local_128,local_1c8,local_1a0);
  FUN_1454e0300(local_218,local_178);
  FUN_1454de570(param_1,local_218,local_1a0);
  FUN_1454de570(param_1 + 5,local_1f0,local_1c8);
  FUN_1454de570(param_1 + 10,local_1c8,local_1a0);
  FUN_1454de570(param_1 + 0xf,local_218,local_1f0);
  pbVar7 = local_78;
  do {
    FUN_1454e1630(local_f8,uVar5 >> 1,*pbVar7);
    FUN_1454e05d0(local_218,param_1,local_f8);
    FUN_1454de570(param_1,local_218,local_1a0);
    FUN_1454de570(param_1 + 5,local_1f0,local_1c8);
    FUN_1454de570(param_1 + 10,local_1c8,local_1a0);
    FUN_1454de570(param_1 + 0xf,local_218,local_1f0);
    uVar6 = (int)uVar5 + 2;
    uVar5 = (ulonglong)uVar6;
    pbVar7 = pbVar7 + 2;
  } while ((int)uVar6 < 0x40);
  FUN_14259f0c0(local_78,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_238);
}



// FUNCTION 1454e1c70 FUN_1454e1c70 body=321 status=ok
// SIG undefined FUN_1454e1c70(void)

void FUN_1454e1c70(char *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  lVar9 = 0;
  do {
    bVar4 = (byte)iVar7;
    iVar7 = iVar7 + 1;
    param_1[lVar9] = *(byte *)((lVar9 >> 3) + param_2) >> (bVar4 & 7) & 1;
    lVar9 = lVar9 + 1;
  } while (iVar7 < 0x100);
  iVar7 = 0;
  pcVar10 = param_1;
  do {
    if (*pcVar10 != '\0') {
      iVar8 = iVar5 + 1;
      do {
        if (0xff < iVar8) break;
        lVar9 = (longlong)iVar8;
        cVar1 = param_1[lVar9];
        pcVar3 = param_1 + lVar9;
        if (cVar1 != '\0') {
          cVar2 = *pcVar10;
          bVar4 = (char)iVar7 + (char)iVar8;
          iVar6 = (int)cVar1 << (bVar4 & 0x1f);
          if (cVar2 + iVar6 < 0x10) {
            *pcVar10 = (cVar1 << (bVar4 & 0x1f)) + cVar2;
            *pcVar3 = '\0';
          }
          else {
            if (cVar2 - iVar6 < -0xf) break;
            *pcVar10 = cVar2 - (cVar1 << (bVar4 & 0x1f));
            if (lVar9 < 0x100) {
              iVar6 = iVar8;
              do {
                if (*pcVar3 == '\0') {
                  param_1[iVar6] = '\x01';
                  break;
                }
                *pcVar3 = '\0';
                iVar6 = iVar6 + 1;
                pcVar3 = pcVar3 + 1;
              } while ((longlong)pcVar3 - (longlong)param_1 < 0x100);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar7 + iVar8 < 7);
    }
    iVar5 = iVar5 + 1;
    pcVar10 = pcVar10 + 1;
    iVar7 = iVar7 + -1;
    if (iVar7 < -0xff) {
      return;
    }
  } while( true );
}



// FUNCTION 1454e1dc0 FUN_1454e1dc0 body=1846 status=ok
// SIG undefined FUN_1454e1dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e1dc0(undefined8 *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_938 [32];
  undefined1 local_918 [40];
  undefined1 local_8f0 [40];
  undefined1 local_8c8 [40];
  undefined1 local_8a0 [40];
  undefined1 local_878 [40];
  undefined1 local_850 [40];
  undefined1 local_828 [40];
  undefined1 local_800 [40];
  undefined1 local_7d8 [40];
  undefined1 local_7b0 [40];
  undefined1 local_788 [40];
  undefined1 local_760 [40];
  undefined1 local_738 [160];
  undefined1 local_698 [160];
  undefined1 local_5f8 [160];
  undefined1 local_558 [160];
  undefined1 local_4b8 [160];
  undefined1 local_418 [160];
  undefined1 local_378 [160];
  undefined1 local_2d8 [160];
  char local_238 [252];
  char acStack_13c [256];
  char acStack_3c [4];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1454e1dde;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_938;
  FUN_1454e1c70(local_238);
  FUN_1454e1c70(acStack_13c + 4,param_4);
  FUN_1454e0200(local_738,param_3);
  memmove(local_7d8,param_3,0x28);
  memmove(local_7b0,(void *)((longlong)param_3 + 0x28),0x28);
  memmove(local_788,(void *)((longlong)param_3 + 0x50),0x28);
  FUN_1454e0300(local_918,local_7d8);
  FUN_1454de570(local_7d8,local_918,local_8a0);
  FUN_1454de570(local_7b0,local_8f0,local_8c8);
  FUN_1454de570(local_788,local_8c8,local_8a0);
  FUN_1454de570(local_760,local_918,local_8f0);
  FUN_1454e0d20(local_918,local_7d8,local_738);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_698,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_698);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_5f8,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_5f8);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_558,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_558);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_4b8,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_4b8);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_418,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_418);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_378,local_878);
  FUN_1454e0d20(local_918,local_7d8,local_378);
  FUN_1454de570(local_878,local_918,local_8a0);
  FUN_1454de570(local_850,local_8f0,local_8c8);
  FUN_1454de570(local_828,local_8c8,local_8a0);
  FUN_1454de570(local_800,local_918,local_8f0);
  FUN_1454e0200(local_2d8,local_878);
  iVar3 = 0xff;
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
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  lVar4 = 0;
  do {
    if ((acStack_13c[lVar4 + 3] != '\0') || (acStack_3c[lVar4 + 3] != '\0')) break;
    if ((acStack_13c[lVar4 + 2] != '\0') || (acStack_3c[lVar4 + 2] != '\0')) {
      iVar3 = iVar3 + -1;
      break;
    }
    if ((acStack_13c[lVar4 + 1] != '\0') || (acStack_3c[lVar4 + 1] != '\0')) {
      iVar3 = iVar3 + -2;
      break;
    }
    if ((acStack_13c[lVar4] != '\0') || (acStack_3c[lVar4] != '\0')) {
      iVar3 = iVar3 + -3;
      break;
    }
    iVar3 = iVar3 + -4;
    lVar1 = lVar4 + 0xfb;
    lVar4 = lVar4 + -4;
  } while (-1 < lVar1);
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      FUN_1454e0300(local_918,param_1);
      cVar2 = local_238[lVar4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          FUN_1454de570(local_878,local_918,local_8a0);
          FUN_1454de570(local_850,local_8f0,local_8c8);
          FUN_1454de570(local_828,local_8c8,local_8a0);
          FUN_1454de570(local_800,local_918,local_8f0);
          FUN_1454e1100(local_918,local_878,local_738 + (longlong)-((int)cVar2 / 2) * 0xa0);
        }
      }
      else {
        FUN_1454de570(local_878,local_918,local_8a0);
        FUN_1454de570(local_850,local_8f0,local_8c8);
        FUN_1454de570(local_828,local_8c8,local_8a0);
        FUN_1454de570(local_800,local_918,local_8f0);
        FUN_1454e0d20(local_918,local_878,local_738 + (longlong)((int)cVar2 / 2) * 0xa0);
      }
      cVar2 = acStack_13c[lVar4 + 4];
      if (cVar2 < '\x01') {
        if (cVar2 < '\0') {
          FUN_1454de570(local_878,local_918,local_8a0);
          FUN_1454de570(local_850,local_8f0,local_8c8);
          FUN_1454de570(local_828,local_8c8,local_8a0);
          FUN_1454de570(local_800,local_918,local_8f0);
          FUN_1454e09a0(local_918,local_878,&DAT_149d93b30 + (longlong)-((int)cVar2 / 2) * 0x78);
        }
      }
      else {
        FUN_1454de570(local_878,local_918,local_8a0);
        FUN_1454de570(local_850,local_8f0,local_8c8);
        FUN_1454de570(local_828,local_8c8,local_8a0);
        FUN_1454de570(local_800,local_918,local_8f0);
        FUN_1454e05d0(local_918,local_878,&DAT_149d93b30 + (longlong)((int)cVar2 / 2) * 0x78);
      }
      FUN_1454de570(param_1,local_918,local_8a0);
      FUN_1454de570(param_1 + 5,local_8f0,local_8c8);
      FUN_1454de570(param_1 + 10,local_8c8,local_8a0);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_938);
}



// FUNCTION 1454e2510 FUN_1454e2510 body=3620 status=ok
// SIG undefined FUN_1454e2510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e2510(byte *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  
  uVar9 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x30) & 0x7fff) << 6 |
          (ulonglong)(param_1[0x2f] >> 2);
  uVar16 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x32) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x31] >> 7);
  uVar6 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x35) & 0x1ffff) << 4 |
          (ulonglong)(param_1[0x34] >> 4);
  uVar13 = (ulonglong)((uint5)*(ushort *)(param_1 + 0x38) & 0x3fff) << 7 |
           (ulonglong)(param_1[0x37] >> 1);
  uVar12 = (ulonglong)((uint6)*(uint3 *)(param_1 + 0x3a) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x39] >> 6);
  uVar3 = (ulonglong)*(uint3 *)(param_1 + 0x3d) << 5 | (ulonglong)(param_1[0x3c] >> 3);
  lVar28 = ((ulonglong)((param_1[0x2c] & 0x1f) << 0x10 | (uint)param_1[0x2a]) |
           (ulonglong)param_1[0x2b] << 8) + uVar3 * -0xa6f7d;
  lVar34 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x25) & 0x7ffff) << 2 |
           (ulonglong)(param_1[0x24] >> 6)) + uVar13 * -0xa6f7d + uVar3 * -0xf39ad +
           uVar12 * 0x215d1;
  lVar32 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x20) & 0x1ffff) << 4 |
           (ulonglong)(param_1[0x1f] >> 4)) + uVar12 * 0x9fb67 + uVar16 * -0xa6f7d +
           uVar13 * -0xf39ad + uVar3 * 0x72d18 + uVar6 * 0x215d1;
  lVar1 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x10) & 0x7ffff) << 2 |
          (ulonglong)(param_1[0xf] >> 6)) + uVar9 * 0xa2c13;
  lVar24 = ((ulonglong)((param_1[0x17] & 0x1f) << 0x10 | (uint)param_1[0x15]) |
           (ulonglong)param_1[0x16] << 8) + uVar9 * 0x9fb67 + uVar16 * 0x72d18 + uVar6 * 0xa2c13;
  uVar5 = lVar1 + 0x100000U >> 0x15;
  lVar25 = lVar24 + 0x100000 >> 0x15;
  lVar30 = ((ulonglong)((uint5)*(ushort *)(param_1 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_1[0x1a] >> 2)) + uVar6 * 0x9fb67 + uVar16 * -0xf39ad + uVar13 * 0x72d18
           + uVar12 * 0xa2c13 + uVar9 * 0x215d1;
  lVar20 = uVar16 * 0xa2c13 +
           uVar9 * 0x72d18 + uVar5 +
           ((ulonglong)*(ushort *)(param_1 + 0x13) << 5 | (ulonglong)(param_1[0x12] >> 3));
  lVar21 = uVar13 * 0xa2c13 +
           uVar6 * 0x72d18 + lVar25 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_1[0x17] >> 5)) + uVar16 * 0x9fb67 + uVar9 * -0xf39ad;
  lVar22 = lVar30 + 0x100000 >> 0x15;
  lVar17 = uVar16 * 0x215d1 +
           uVar3 * 0xa2c13 + lVar22 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x1d) & 0xfffff) * 2 |
           (ulonglong)(param_1[0x1c] >> 7)) + uVar13 * 0x9fb67 + uVar9 * -0xa6f7d + uVar6 * -0xf39ad
           + uVar12 * 0x72d18;
  lVar18 = lVar32 + 0x100000 >> 0x15;
  lVar14 = lVar34 + 0x100000 >> 0x15;
  lVar35 = lVar21 + 0x100000 >> 0x15;
  lVar10 = uVar13 * 0x215d1 +
           lVar18 + ((ulonglong)((uint5)*(ushort *)(param_1 + 0x23) & 0x3fff) << 7 |
                    (ulonglong)(param_1[0x22] >> 1)) + uVar3 * 0x9fb67 + uVar6 * -0xa6f7d +
                    uVar12 * -0xf39ad;
  lVar4 = lVar28 + 0x100000 >> 0x15;
  lVar29 = lVar17 + 0x100000 >> 0x15;
  uVar6 = lVar20 + 0x100000U >> 0x15;
  lVar31 = uVar3 * 0x215d1 +
           lVar14 + ((ulonglong)*(ushort *)(param_1 + 0x28) << 5 | (ulonglong)(param_1[0x27] >> 3))
                    + uVar12 * -0xa6f7d;
  lVar2 = lVar10 + 0x100000 >> 0x15;
  lVar7 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0x2d) & 0x3ffff) << 3 |
          (ulonglong)(param_1[0x2c] >> 5)) + lVar4;
  lVar32 = lVar32 + lVar29 + lVar18 * -0x200000;
  lVar34 = lVar34 + lVar2 + lVar14 * -0x200000;
  lVar10 = lVar10 + lVar2 * -0x200000;
  lVar2 = lVar31 + 0x100000 >> 0x15;
  lVar28 = lVar28 + lVar2 + lVar4 * -0x200000;
  lVar31 = lVar31 + lVar2 * -0x200000;
  lVar30 = lVar30 + lVar22 * -0x200000 + lVar7 * -0xa6f7d + lVar35;
  lVar24 = lVar24 + lVar7 * -0xf39ad + lVar31 * -0xa6f7d + lVar28 * 0x215d1 + lVar25 * -0x200000 +
                    uVar6;
  lVar1 = lVar1 + lVar28 * 0x9fb67 + lVar10 * -0xa6f7d + lVar31 * -0xf39ad + lVar7 * 0x72d18 +
                  lVar34 * 0x215d1 + uVar5 * -0x200000;
  lVar2 = ((ulonglong)((param_1[2] & 0x1f) << 0x10 | (uint)*param_1) | (ulonglong)param_1[1] << 8) +
          lVar32 * 0xa2c13;
  lVar14 = ((ulonglong)((uint5)*(ushort *)(param_1 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_1[5] >> 2)) + lVar32 * 0x9fb67 + lVar10 * 0x72d18 + lVar34 * 0xa2c13;
  lVar19 = ((ulonglong)((uint6)*(uint3 *)(param_1 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_1[10] >> 4)) + lVar34 * 0x9fb67 + lVar10 * -0xf39ad + lVar31 * 0x72d18
           + lVar28 * 0xa2c13 + lVar32 * 0x215d1;
  lVar33 = lVar2 + 0x100000 >> 0x15;
  lVar8 = lVar14 + 0x100000 >> 0x15;
  lVar25 = lVar10 * 0xa2c13 +
           lVar32 * 0x72d18 + lVar33 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_1[2] >> 5));
  lVar11 = lVar19 + 0x100000 >> 0x15;
  lVar18 = lVar31 * 0xa2c13 +
           lVar34 * 0x72d18 + lVar8 +
           ((ulonglong)((uint6)*(uint3 *)(param_1 + 8) & 0xfffff) * 2 | (ulonglong)(param_1[7] >> 7)
           ) + lVar10 * 0x9fb67 + lVar32 * -0xf39ad;
  lVar15 = lVar1 + 0x100000 >> 0x15;
  lVar10 = lVar10 * 0x215d1 +
           lVar7 * 0xa2c13 + lVar11 +
           ((ulonglong)((uint5)*(ushort *)(param_1 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_1[0xd] >> 1)) + lVar31 * 0x9fb67 + lVar32 * -0xa6f7d +
           lVar34 * -0xf39ad + lVar28 * 0x72d18;
  lVar22 = lVar24 + 0x100000 >> 0x15;
  lVar20 = lVar20 + lVar7 * 0x9fb67 + lVar34 * -0xa6f7d + lVar28 * -0xf39ad + lVar31 * 0x215d1 +
                    uVar6 * -0x200000 + lVar15;
  lVar34 = lVar25 + 0x100000 >> 0x15;
  lVar26 = lVar10 + 0x100000 >> 0x15;
  lVar21 = lVar21 + lVar7 * 0x215d1 + lVar28 * -0xa6f7d + lVar35 * -0x200000 + lVar22;
  lVar4 = lVar30 + 0x100000 >> 0x15;
  lVar17 = lVar17 + lVar4 + lVar29 * -0x200000;
  lVar29 = lVar21 + 0x100000 >> 0x15;
  lVar32 = lVar17 + 0x100000 >> 0x15;
  lVar35 = lVar20 + 0x100000 >> 0x15;
  lVar31 = lVar18 + 0x100000 >> 0x15;
  lVar2 = lVar2 + lVar32 * 0xa2c13 + lVar33 * -0x200000;
  lVar7 = lVar2 >> 0x15;
  lVar25 = lVar25 + lVar32 * 0x72d18 + lVar34 * -0x200000 + lVar7;
  lVar28 = lVar25 >> 0x15;
  lVar8 = lVar14 + lVar32 * 0x9fb67 + lVar8 * -0x200000 + lVar34 + lVar28;
  lVar33 = lVar8 >> 0x15;
  lVar18 = lVar18 + lVar31 * -0x200000 + lVar32 * -0xf39ad + lVar33;
  lVar23 = lVar18 >> 0x15;
  lVar19 = lVar19 + lVar32 * 0x215d1 + lVar11 * -0x200000 + lVar31 + lVar23;
  lVar31 = lVar19 >> 0x15;
  lVar10 = lVar10 + lVar32 * -0xa6f7d + lVar26 * -0x200000 + lVar31;
  lVar27 = lVar10 >> 0x15;
  lVar34 = lVar1 + lVar26 + lVar15 * -0x200000 + lVar27;
  lVar11 = lVar34 >> 0x15;
  lVar20 = lVar20 + lVar11 + lVar35 * -0x200000;
  lVar15 = lVar20 >> 0x15;
  lVar24 = lVar24 + lVar35 + lVar22 * -0x200000 + lVar15;
  lVar22 = lVar24 >> 0x15;
  lVar21 = lVar21 + lVar22 + lVar29 * -0x200000;
  lVar14 = lVar21 >> 0x15;
  lVar30 = lVar30 + lVar29 + lVar4 * -0x200000 + lVar14;
  lVar29 = lVar30 >> 0x15;
  lVar17 = lVar17 + lVar29 + lVar32 * -0x200000;
  lVar4 = lVar17 >> 0x15;
  lVar2 = lVar2 + lVar4 * 0xa2c13 + lVar7 * -0x200000;
  lVar1 = lVar2 >> 0x15;
  lVar25 = lVar25 + lVar4 * 0x72d18 + lVar28 * -0x200000 + lVar1;
  lVar2 = lVar2 + lVar1 * -0x200000;
  lVar1 = lVar25 >> 0x15;
  lVar8 = lVar8 + lVar4 * 0x9fb67 + lVar33 * -0x200000 + lVar1;
  lVar25 = lVar25 + lVar1 * -0x200000;
  lVar1 = lVar8 >> 0x15;
  lVar18 = lVar18 + lVar23 * -0x200000 + lVar4 * -0xf39ad + lVar1;
  lVar8 = lVar8 + lVar1 * -0x200000;
  lVar1 = lVar18 >> 0x15;
  lVar19 = lVar19 + lVar4 * 0x215d1 + lVar31 * -0x200000 + lVar1;
  lVar18 = lVar18 + lVar1 * -0x200000;
  lVar1 = lVar19 >> 0x15;
  lVar10 = lVar10 + lVar4 * -0xa6f7d + lVar27 * -0x200000 + lVar1;
  lVar19 = lVar19 + lVar1 * -0x200000;
  lVar1 = lVar10 >> 0x15;
  lVar10 = lVar10 + lVar1 * -0x200000;
  lVar34 = lVar34 + lVar1 + lVar11 * -0x200000;
  lVar1 = lVar34 >> 0x15;
  lVar34 = lVar34 + lVar1 * -0x200000;
  lVar20 = lVar20 + lVar1 + lVar15 * -0x200000;
  lVar1 = lVar20 >> 0x15;
  lVar24 = lVar24 + lVar1 + lVar22 * -0x200000;
  lVar20 = lVar20 + lVar1 * -0x200000;
  lVar1 = lVar24 >> 0x15;
  lVar21 = lVar21 + lVar1 + lVar14 * -0x200000;
  lVar24 = lVar24 + lVar1 * -0x200000;
  lVar1 = lVar21 >> 0x15;
  lVar30 = lVar30 + lVar1 + lVar29 * -0x200000;
  lVar21 = lVar21 + lVar1 * -0x200000;
  lVar1 = lVar30 >> 0x15;
  lVar17 = lVar17 + lVar1 + lVar4 * -0x200000;
  lVar30 = lVar30 + lVar1 * -0x200000;
  param_1[1] = (byte)((ulonglong)lVar2 >> 8);
  *param_1 = (byte)lVar2;
  param_1[2] = (char)lVar25 << 5 | (byte)((ulonglong)lVar2 >> 0x10);
  param_1[3] = (byte)(lVar25 >> 3);
  param_1[4] = (byte)(lVar25 >> 0xb);
  param_1[6] = (byte)(lVar8 >> 6);
  param_1[5] = (byte)(lVar25 >> 0x13) | (char)lVar8 << 2;
  param_1[7] = (char)lVar18 << 7 | (byte)(lVar8 >> 0xe);
  param_1[8] = (byte)(lVar18 >> 1);
  param_1[9] = (byte)(lVar18 >> 9);
  param_1[0xb] = (byte)(lVar19 >> 4);
  param_1[0xc] = (byte)(lVar19 >> 0xc);
  param_1[10] = (byte)(lVar18 >> 0x11) | (char)lVar19 << 4;
  param_1[0xd] = (byte)(lVar19 >> 0x14) | (char)lVar10 * '\x02';
  param_1[0xe] = (byte)(lVar10 >> 7);
  param_1[0xf] = (char)lVar34 << 6 | (byte)(lVar10 >> 0xf);
  param_1[0x10] = (byte)(lVar34 >> 2);
  param_1[0x11] = (byte)(lVar34 >> 10);
  param_1[0x15] = (byte)lVar24;
  param_1[0x13] = (byte)(lVar20 >> 5);
  param_1[0x16] = (byte)((ulonglong)lVar24 >> 8);
  param_1[0x17] = (char)lVar21 << 5 | (byte)((ulonglong)lVar24 >> 0x10);
  param_1[0x18] = (byte)(lVar21 >> 3);
  param_1[0x19] = (byte)(lVar21 >> 0xb);
  param_1[0x12] = (byte)(lVar34 >> 0x12) | (char)lVar20 << 3;
  param_1[0x14] = (byte)(lVar20 >> 0xd);
  param_1[0x1b] = (byte)(lVar30 >> 6);
  param_1[0x1a] = (byte)(lVar21 >> 0x13) | (char)lVar30 << 2;
  param_1[0x1c] = (char)lVar17 << 7 | (byte)(lVar30 >> 0xe);
  param_1[0x1d] = (byte)(lVar17 >> 1);
  param_1[0x1f] = (byte)(lVar17 >> 0x11);
  param_1[0x1e] = (byte)(lVar17 >> 9);
  return;
}



// FUNCTION 1454e3340 FUN_1454e3340 body=7372 status=ok
// SIG undefined FUN_1454e3340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e3340(undefined1 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  ulonglong uVar63;
  longlong lVar64;
  longlong lVar65;
  
  uVar4 = (ulonglong)((param_2[2] & 0x1f) << 0x10 | (uint)*param_2) | (ulonglong)param_2[1] << 8;
  uVar5 = (ulonglong)((uint6)*(uint3 *)(param_2 + 3) & 0x3ffff) << 3 | (ulonglong)(param_2[2] >> 5);
  uVar6 = (ulonglong)((uint5)*(ushort *)(param_2 + 6) & 0x7fff) << 6 | (ulonglong)(param_2[5] >> 2);
  uVar7 = (ulonglong)((uint6)*(uint3 *)(param_2 + 8) & 0xfffff) * 2 | (ulonglong)(param_2[7] >> 7);
  uVar8 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0xb) & 0x1ffff) << 4 |
          (ulonglong)(param_2[10] >> 4);
  uVar9 = (ulonglong)((uint5)*(ushort *)(param_2 + 0xe) & 0x3fff) << 7 |
          (ulonglong)(param_2[0xd] >> 1);
  uVar10 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_2[0xf] >> 6);
  uVar11 = (ulonglong)*(ushort *)(param_2 + 0x13) << 5 | (ulonglong)(param_2[0x12] >> 3);
  uVar12 = (ulonglong)((param_2[0x17] & 0x1f) << 0x10 | (uint)param_2[0x15]) |
           (ulonglong)param_2[0x16] << 8;
  uVar13 = (ulonglong)((uint6)*(uint3 *)(param_2 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_2[0x17] >> 5);
  uVar14 = (ulonglong)((uint5)*(ushort *)(param_2 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_2[0x1a] >> 2);
  uVar53 = (ulonglong)*(uint3 *)(param_2 + 0x1d) * 2 | (ulonglong)(param_2[0x1c] >> 7);
  uVar41 = (ulonglong)((param_3[2] & 0x1f) << 0x10 | (uint)*param_3) | (ulonglong)param_3[1] << 8;
  uVar55 = (ulonglong)((uint6)*(uint3 *)(param_3 + 3) & 0x3ffff) << 3 | (ulonglong)(param_3[2] >> 5)
  ;
  uVar17 = (ulonglong)((uint5)*(ushort *)(param_3 + 6) & 0x7fff) << 6 | (ulonglong)(param_3[5] >> 2)
  ;
  uVar38 = (ulonglong)((uint6)*(uint3 *)(param_3 + 8) & 0xfffff) * 2 | (ulonglong)(param_3[7] >> 7);
  uVar49 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_3[10] >> 4);
  uVar33 = (ulonglong)((uint5)*(ushort *)(param_3 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_3[0xd] >> 1);
  uVar15 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_3[0xf] >> 6);
  uVar61 = (ulonglong)*(ushort *)(param_3 + 0x13) << 5 | (ulonglong)(param_3[0x12] >> 3);
  uVar59 = (ulonglong)((param_3[0x17] & 0x1f) << 0x10 | (uint)param_3[0x15]) |
           (ulonglong)param_3[0x16] << 8;
  uVar63 = (ulonglong)((uint6)*(uint3 *)(param_3 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_3[0x17] >> 5);
  uVar58 = (ulonglong)((uint5)*(ushort *)(param_3 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_3[0x1a] >> 2);
  uVar31 = (ulonglong)*(uint3 *)(param_3 + 0x1d) * 2 | (ulonglong)(param_3[0x1c] >> 7);
  lVar43 = (((ulonglong)param_4[2] & 0x1f) << 0x10 | (ulonglong)*param_4 |
           (ulonglong)param_4[1] << 8) + uVar41 * uVar4;
  lVar36 = ((ulonglong)((uint5)*(ushort *)(param_4 + 6) & 0x7fff) << 6 |
           (ulonglong)(param_4[5] >> 2)) + uVar41 * uVar6 + uVar55 * uVar5 + uVar17 * uVar4;
  lVar37 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0xb) & 0x1ffff) << 4 |
           (ulonglong)(param_4[10] >> 4)) + uVar41 * uVar8 + uVar55 * uVar7 + uVar17 * uVar6 +
           uVar38 * uVar5 + uVar49 * uVar4;
  lVar44 = ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x10) & 0x7ffff) << 2 |
           (ulonglong)(param_4[0xf] >> 6)) + uVar41 * uVar10 + uVar55 * uVar9 + uVar17 * uVar8 +
           uVar38 * uVar7 + uVar49 * uVar6 + uVar33 * uVar5 + uVar15 * uVar4;
  lVar57 = (((ulonglong)param_4[0x17] & 0x1f) << 0x10 | (ulonglong)param_4[0x15] |
           (ulonglong)param_4[0x16] << 8) + uVar41 * uVar12 + uVar55 * uVar11 + uVar17 * uVar10 +
           uVar38 * uVar9 + uVar49 * uVar8 + uVar33 * uVar7 + uVar15 * uVar6 + uVar61 * uVar5 +
           uVar59 * uVar4;
  lVar45 = ((ulonglong)((uint5)*(ushort *)(param_4 + 0x1b) & 0x7fff) << 6 |
           (ulonglong)(param_4[0x1a] >> 2)) + uVar41 * uVar14 + uVar55 * uVar13 + uVar17 * uVar12 +
           uVar38 * uVar11 + uVar49 * uVar10 + uVar33 * uVar9 + uVar15 * uVar8 + uVar61 * uVar7 +
           uVar59 * uVar6 + uVar63 * uVar5 + uVar58 * uVar4;
  lVar46 = uVar55 * uVar53 + uVar17 * uVar14 + uVar38 * uVar13 + uVar49 * uVar12 + uVar33 * uVar11 +
           uVar15 * uVar10 + uVar61 * uVar9 + uVar59 * uVar8 + uVar63 * uVar7 + uVar58 * uVar6 +
           uVar31 * uVar5;
  lVar18 = uVar38 * uVar53 + uVar49 * uVar14 + uVar33 * uVar13 + uVar15 * uVar12 + uVar61 * uVar11 +
           uVar59 * uVar10 + uVar63 * uVar9 + uVar58 * uVar8 + uVar31 * uVar7;
  lVar19 = uVar33 * uVar53 + uVar15 * uVar14 + uVar61 * uVar13 + uVar59 * uVar12 + uVar63 * uVar11 +
           uVar58 * uVar10 + uVar31 * uVar9;
  lVar20 = lVar43 + 0x100000 >> 0x15;
  lVar50 = uVar61 * uVar53 + uVar59 * uVar14 + uVar63 * uVar13 + uVar58 * uVar12 + uVar31 * uVar11;
  lVar54 = uVar63 * uVar53 + uVar58 * uVar14 + uVar31 * uVar13;
  lVar21 = uVar55 * uVar4 +
           uVar41 * uVar5 + lVar20 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 3) & 0x3ffff) << 3 |
           (ulonglong)(param_4[2] >> 5));
  uVar22 = lVar36 + 0x100000U >> 0x15;
  lVar23 = uVar38 * uVar4 +
           uVar17 * uVar5 + uVar22 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 8) & 0xfffff) * 2 | (ulonglong)(param_4[7] >> 7)
           ) + uVar41 * uVar7 + uVar55 * uVar6;
  lVar24 = lVar37 + 0x100000 >> 0x15;
  lVar25 = uVar33 * uVar4 +
           uVar49 * uVar5 + lVar24 +
           ((ulonglong)((uint5)*(ushort *)(param_4 + 0xe) & 0x3fff) << 7 |
           (ulonglong)(param_4[0xd] >> 1)) + uVar41 * uVar9 + uVar55 * uVar8 + uVar17 * uVar7 +
           uVar38 * uVar6;
  lVar26 = lVar44 + 0x100000 >> 0x15;
  lVar27 = uVar61 * uVar4 +
           uVar15 * uVar5 + lVar26 +
           ((ulonglong)*(ushort *)(param_4 + 0x13) << 5 | (ulonglong)(param_4[0x12] >> 3)) +
           uVar41 * uVar11 + uVar55 * uVar10 + uVar17 * uVar9 + uVar38 * uVar8 + uVar49 * uVar7 +
           uVar33 * uVar6;
  lVar28 = lVar57 + 0x100000 >> 0x15;
  lVar29 = uVar63 * uVar4 +
           uVar59 * uVar5 + lVar28 +
           ((ulonglong)((uint6)*(uint3 *)(param_4 + 0x18) & 0x3ffff) << 3 |
           (ulonglong)(param_4[0x17] >> 5)) + uVar41 * uVar13 + uVar55 * uVar12 + uVar17 * uVar11 +
           uVar38 * uVar10 + uVar49 * uVar9 + uVar33 * uVar8 + uVar15 * uVar7 + uVar61 * uVar6;
  lVar60 = lVar45 + 0x100000 >> 0x15;
  lVar42 = lVar46 + 0x100000 >> 0x15;
  lVar47 = uVar31 * uVar4 +
           uVar58 * uVar5 + lVar60 +
           ((ulonglong)*(uint3 *)(param_4 + 0x1d) * 2 | (ulonglong)(param_4[0x1c] >> 7)) +
           uVar41 * uVar53 + uVar55 * uVar14 + uVar17 * uVar13 + uVar38 * uVar12 + uVar49 * uVar11 +
           uVar33 * uVar10 + uVar15 * uVar9 + uVar61 * uVar8 + uVar59 * uVar7 + uVar63 * uVar6;
  lVar39 = uVar31 * uVar6 +
           uVar58 * uVar7 + lVar42 +
           uVar17 * uVar53 + uVar38 * uVar14 + uVar49 * uVar13 + uVar33 * uVar12 + uVar15 * uVar11 +
           uVar61 * uVar10 + uVar59 * uVar9 + uVar63 * uVar8;
  lVar56 = lVar18 + 0x100000 >> 0x15;
  lVar34 = uVar31 * uVar8 +
           uVar58 * uVar9 + lVar56 +
           uVar49 * uVar53 + uVar33 * uVar14 + uVar15 * uVar13 + uVar61 * uVar12 + uVar59 * uVar11 +
           uVar63 * uVar10;
  lVar48 = lVar19 + 0x100000 >> 0x15;
  lVar64 = uVar31 * uVar10 +
           uVar58 * uVar11 + lVar48 +
           uVar15 * uVar53 + uVar61 * uVar14 + uVar59 * uVar13 + uVar63 * uVar12;
  lVar16 = lVar50 + 0x100000 >> 0x15;
  lVar62 = uVar31 * uVar12 + uVar58 * uVar13 + lVar16 + uVar59 * uVar53 + uVar63 * uVar14;
  lVar30 = lVar54 + 0x100000 >> 0x15;
  lVar51 = uVar31 * uVar14 + lVar30 + uVar58 * uVar53;
  uVar4 = uVar31 * uVar53 + 0x100000 >> 0x15;
  lVar1 = lVar21 + 0x100000 >> 0x15;
  lVar2 = lVar23 + 0x100000 >> 0x15;
  lVar3 = lVar25 + 0x100000 >> 0x15;
  lVar65 = lVar64 + 0x100000 >> 0x15;
  lVar35 = lVar34 + 0x100000 >> 0x15;
  lVar50 = lVar50 + lVar65 + lVar16 * -0x200000;
  lVar16 = lVar62 + 0x100000 >> 0x15;
  lVar40 = lVar39 + 0x100000 >> 0x15;
  lVar54 = lVar54 + lVar16 + lVar30 * -0x200000;
  lVar62 = lVar62 + lVar16 * -0x200000;
  lVar30 = lVar51 + 0x100000 >> 0x15;
  lVar32 = lVar47 + 0x100000 >> 0x15;
  lVar52 = lVar27 + 0x100000 >> 0x15;
  lVar16 = uVar31 * uVar53 + lVar30 + uVar4 * -0x200000;
  lVar51 = lVar51 + lVar30 * -0x200000;
  lVar30 = lVar29 + 0x100000 >> 0x15;
  lVar19 = lVar19 + uVar4 * -0xa6f7d + lVar48 * -0x200000 + lVar35;
  lVar18 = lVar18 + uVar4 * -0xf39ad + lVar51 * -0xa6f7d + lVar16 * 0x215d1 + lVar56 * -0x200000 +
                    lVar40;
  lVar46 = lVar46 + lVar16 * 0x9fb67 +
                    lVar54 * 0x215d1 + uVar4 * 0x72d18 + lVar62 * -0xa6f7d + lVar51 * -0xf39ad +
                    lVar42 * -0x200000 + lVar32;
  lVar44 = lVar44 + lVar50 * 0xa2c13 + lVar26 * -0x200000 + lVar3;
  lVar26 = lVar44 + 0x100000 >> 0x15;
  lVar57 = lVar57 + lVar50 * 0x9fb67 +
                    lVar52 + lVar62 * 0x72d18 + lVar54 * 0xa2c13 + lVar28 * -0x200000;
  lVar48 = lVar57 + 0x100000 >> 0x15;
  lVar45 = lVar45 + lVar54 * 0x9fb67 +
                    lVar50 * 0x215d1 + lVar51 * 0x72d18 + lVar62 * -0xf39ad + lVar16 * 0xa2c13 +
                    lVar60 * -0x200000 + lVar30;
  lVar27 = lVar27 + lVar50 * 0x72d18 + lVar62 * 0xa2c13 + lVar52 * -0x200000 + lVar26;
  lVar28 = lVar46 + 0x100000 >> 0x15;
  lVar42 = lVar45 + 0x100000 >> 0x15;
  lVar29 = lVar29 + lVar62 * 0x9fb67 +
                    lVar51 * 0xa2c13 + lVar54 * 0x72d18 + lVar50 * -0xf39ad + lVar30 * -0x200000 +
                    lVar48;
  lVar47 = lVar47 + lVar51 * 0x9fb67 +
                    lVar62 * 0x215d1 +
                    uVar4 * 0xa2c13 + lVar50 * -0xa6f7d + lVar54 * -0xf39ad + lVar16 * 0x72d18 +
                    lVar32 * -0x200000 + lVar42;
  lVar39 = lVar39 + uVar4 * 0x9fb67 +
                    lVar51 * 0x215d1 + lVar16 * -0xf39ad + lVar54 * -0xa6f7d + lVar40 * -0x200000 +
                    lVar28;
  lVar54 = lVar18 + 0x100000 >> 0x15;
  lVar30 = lVar47 + 0x100000 >> 0x15;
  lVar51 = lVar27 + 0x100000 >> 0x15;
  lVar34 = lVar34 + uVar4 * 0x215d1 + lVar16 * -0xa6f7d + lVar35 * -0x200000 + lVar54;
  lVar50 = lVar39 + 0x100000 >> 0x15;
  lVar16 = lVar19 + 0x100000 >> 0x15;
  lVar64 = lVar64 + lVar16 + lVar65 * -0x200000;
  lVar32 = lVar29 + 0x100000 >> 0x15;
  lVar46 = lVar46 + lVar30 + lVar28 * -0x200000;
  lVar18 = lVar18 + lVar50 + lVar54 * -0x200000;
  lVar39 = lVar39 + lVar50 * -0x200000;
  lVar50 = lVar34 + 0x100000 >> 0x15;
  lVar34 = lVar34 + lVar50 * -0x200000;
  lVar19 = lVar19 + lVar50 + lVar16 * -0x200000;
  lVar45 = lVar45 + lVar42 * -0x200000 + lVar64 * -0xa6f7d + lVar32;
  lVar57 = lVar57 + lVar64 * -0xf39ad + lVar34 * -0xa6f7d + lVar19 * 0x215d1 + lVar48 * -0x200000 +
                    lVar51;
  lVar26 = lVar19 * 0x9fb67 + lVar44 +
           lVar34 * -0xf39ad + lVar39 * -0xa6f7d + lVar64 * 0x72d18 + lVar18 * 0x215d1 +
           lVar26 * -0x200000;
  lVar43 = lVar43 + lVar46 * 0xa2c13 + lVar20 * -0x200000;
  lVar36 = lVar36 + lVar46 * 0x9fb67 +
                    lVar1 + lVar39 * 0x72d18 + lVar18 * 0xa2c13 + uVar22 * -0x200000;
  lVar16 = lVar43 + 0x100000 >> 0x15;
  lVar37 = lVar37 + lVar18 * 0x9fb67 +
                    lVar2 + lVar34 * 0x72d18 + lVar39 * -0xf39ad + lVar19 * 0xa2c13 +
                            lVar46 * 0x215d1 + lVar24 * -0x200000;
  lVar28 = lVar36 + 0x100000 >> 0x15;
  lVar21 = lVar21 + lVar46 * 0x72d18 + lVar39 * 0xa2c13 + lVar1 * -0x200000 + lVar16;
  lVar1 = lVar37 + 0x100000 >> 0x15;
  lVar23 = lVar23 + lVar39 * 0x9fb67 +
                    lVar34 * 0xa2c13 + lVar18 * 0x72d18 + lVar46 * -0xf39ad + lVar2 * -0x200000 +
                    lVar28;
  lVar20 = lVar26 + 0x100000 >> 0x15;
  lVar25 = lVar25 + lVar34 * 0x9fb67 +
                    lVar1 + lVar18 * -0xf39ad + lVar46 * -0xa6f7d + lVar19 * 0x72d18 +
                            lVar64 * 0xa2c13 + lVar39 * 0x215d1 + lVar3 * -0x200000;
  lVar24 = lVar21 + 0x100000 >> 0x15;
  lVar27 = lVar27 + lVar64 * 0x9fb67 +
                    lVar34 * 0x215d1 + lVar19 * -0xf39ad + lVar18 * -0xa6f7d + lVar51 * -0x200000 +
                    lVar20;
  lVar18 = lVar23 + 0x100000 >> 0x15;
  lVar50 = lVar57 + 0x100000 >> 0x15;
  lVar51 = lVar25 + 0x100000 >> 0x15;
  lVar29 = lVar29 + lVar64 * 0x215d1 + lVar19 * -0xa6f7d + lVar32 * -0x200000 + lVar50;
  lVar54 = lVar45 + 0x100000 >> 0x15;
  lVar47 = lVar47 + lVar54 + lVar30 * -0x200000;
  lVar3 = lVar27 + 0x100000 >> 0x15;
  lVar46 = lVar29 + 0x100000 >> 0x15;
  lVar2 = lVar47 + 0x100000 >> 0x15;
  lVar43 = lVar43 + lVar2 * 0xa2c13 + lVar16 * -0x200000;
  lVar16 = lVar43 >> 0x15;
  lVar21 = lVar21 + lVar2 * 0x72d18 + lVar24 * -0x200000 + lVar16;
  lVar19 = lVar21 >> 0x15;
  lVar36 = lVar36 + lVar2 * 0x9fb67 + lVar28 * -0x200000 + lVar24 + lVar19;
  lVar24 = lVar36 >> 0x15;
  lVar23 = lVar23 + lVar18 * -0x200000 + lVar2 * -0xf39ad + lVar24;
  lVar28 = lVar23 >> 0x15;
  lVar18 = lVar37 + lVar2 * 0x215d1 + lVar1 * -0x200000 + lVar18 + lVar28;
  lVar1 = lVar18 >> 0x15;
  lVar25 = lVar25 + lVar2 * -0xa6f7d + lVar51 * -0x200000 + lVar1;
  lVar30 = lVar25 >> 0x15;
  lVar20 = lVar26 + lVar51 + lVar20 * -0x200000 + lVar30;
  lVar37 = lVar20 >> 0x15;
  lVar27 = lVar27 + lVar37 + lVar3 * -0x200000;
  lVar51 = lVar27 >> 0x15;
  lVar50 = lVar57 + lVar3 + lVar50 * -0x200000 + lVar51;
  lVar3 = lVar50 >> 0x15;
  lVar29 = lVar29 + lVar3 + lVar46 * -0x200000;
  lVar57 = lVar29 >> 0x15;
  lVar54 = lVar45 + lVar46 + lVar54 * -0x200000 + lVar57;
  lVar45 = lVar54 >> 0x15;
  lVar47 = lVar47 + lVar45 + lVar2 * -0x200000;
  lVar46 = lVar47 >> 0x15;
  lVar43 = lVar43 + lVar46 * 0xa2c13 + lVar16 * -0x200000;
  lVar16 = lVar43 >> 0x15;
  lVar21 = lVar21 + lVar46 * 0x72d18 + lVar19 * -0x200000 + lVar16;
  lVar43 = lVar43 + lVar16 * -0x200000;
  lVar16 = lVar21 >> 0x15;
  lVar36 = lVar36 + lVar46 * 0x9fb67 + lVar24 * -0x200000 + lVar16;
  lVar21 = lVar21 + lVar16 * -0x200000;
  lVar16 = lVar36 >> 0x15;
  lVar23 = lVar23 + lVar28 * -0x200000 + lVar46 * -0xf39ad + lVar16;
  lVar36 = lVar36 + lVar16 * -0x200000;
  lVar16 = lVar23 >> 0x15;
  lVar18 = lVar18 + lVar46 * 0x215d1 + lVar1 * -0x200000 + lVar16;
  lVar23 = lVar23 + lVar16 * -0x200000;
  lVar16 = lVar18 >> 0x15;
  lVar25 = lVar25 + lVar46 * -0xa6f7d + lVar30 * -0x200000 + lVar16;
  lVar18 = lVar18 + lVar16 * -0x200000;
  lVar16 = lVar25 >> 0x15;
  lVar20 = lVar20 + lVar16 + lVar37 * -0x200000;
  lVar25 = lVar25 + lVar16 * -0x200000;
  lVar16 = lVar20 >> 0x15;
  lVar20 = lVar20 + lVar16 * -0x200000;
  lVar27 = lVar27 + lVar16 + lVar51 * -0x200000;
  lVar16 = lVar27 >> 0x15;
  lVar50 = lVar50 + lVar16 + lVar3 * -0x200000;
  lVar27 = lVar27 + lVar16 * -0x200000;
  lVar16 = lVar50 >> 0x15;
  lVar29 = lVar29 + lVar16 + lVar57 * -0x200000;
  lVar50 = lVar50 + lVar16 * -0x200000;
  lVar16 = lVar29 >> 0x15;
  lVar54 = lVar54 + lVar16 + lVar45 * -0x200000;
  lVar29 = lVar29 + lVar16 * -0x200000;
  lVar16 = lVar54 >> 0x15;
  lVar47 = lVar47 + lVar16 + lVar46 * -0x200000;
  lVar54 = lVar54 + lVar16 * -0x200000;
  param_1[1] = (char)((ulonglong)lVar43 >> 8);
  *param_1 = (char)lVar43;
  param_1[2] = (char)lVar21 << 5 | (byte)((ulonglong)lVar43 >> 0x10);
  param_1[3] = (char)(lVar21 >> 3);
  param_1[4] = (char)(lVar21 >> 0xb);
  param_1[6] = (char)(lVar36 >> 6);
  param_1[5] = (byte)(lVar21 >> 0x13) | (char)lVar36 << 2;
  param_1[7] = (char)lVar23 << 7 | (byte)(lVar36 >> 0xe);
  param_1[8] = (char)(lVar23 >> 1);
  param_1[9] = (char)(lVar23 >> 9);
  param_1[0xb] = (char)(lVar18 >> 4);
  param_1[10] = (byte)(lVar23 >> 0x11) | (char)lVar18 << 4;
  param_1[0xc] = (char)(lVar18 >> 0xc);
  param_1[0x15] = (char)lVar50;
  param_1[0xd] = (byte)(lVar18 >> 0x14) | (char)lVar25 * '\x02';
  param_1[0xe] = (char)(lVar25 >> 7);
  param_1[0xf] = (char)lVar20 << 6 | (byte)(lVar25 >> 0xf);
  param_1[0x10] = (char)(lVar20 >> 2);
  param_1[0x11] = (char)(lVar20 >> 10);
  param_1[0x13] = (char)(lVar27 >> 5);
  param_1[0x16] = (char)((ulonglong)lVar50 >> 8);
  param_1[0x17] = (char)lVar29 << 5 | (byte)((ulonglong)lVar50 >> 0x10);
  param_1[0x18] = (char)(lVar29 >> 3);
  param_1[0x19] = (char)(lVar29 >> 0xb);
  param_1[0x12] = (byte)(lVar20 >> 0x12) | (char)lVar27 << 3;
  param_1[0x14] = (char)(lVar27 >> 0xd);
  param_1[0x1b] = (char)(lVar54 >> 6);
  param_1[0x1a] = (byte)(lVar29 >> 0x13) | (char)lVar54 << 2;
  param_1[0x1c] = (char)lVar47 << 7 | (byte)(lVar54 >> 0xe);
  param_1[0x1d] = (char)(lVar47 >> 1);
  param_1[0x1f] = (char)(lVar47 >> 0x11);
  param_1[0x1e] = (char)(lVar47 >> 9);
  return;
}



// FUNCTION 1454e5010 FUN_1454e5010 body=149 status=ok
// SIG undefined FUN_1454e5010(void)

void FUN_1454e5010(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + piVar10[-4];
      piVar3[1] = iVar7 + iVar4;
      piVar3[2] = iVar8 + iVar5;
      piVar3[3] = iVar9 + iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + *piVar10;
      piVar3[1] = iVar4 + iVar7;
      piVar3[2] = iVar5 + iVar8;
      piVar3[3] = iVar6 + iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) + *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 1454e50b0 FUN_1454e50b0 body=149 status=ok
// SIG undefined FUN_1454e50b0(void)

void FUN_1454e50b0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - piVar10[-4];
      piVar3[1] = iVar7 - iVar4;
      piVar3[2] = iVar8 - iVar5;
      piVar3[3] = iVar9 - iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - *piVar10;
      piVar3[1] = iVar4 - iVar7;
      piVar3[2] = iVar5 - iVar8;
      piVar3[3] = iVar6 - iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) - *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 1454e5150 FUN_1454e5150 body=158 status=ok
// SIG undefined FUN_1454e5150(void)

void FUN_1454e5150(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2 * 0xfffffff;
  uVar1 = param_2 * 0xffffffe;
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 8;
    *param_1 = (~-(uint)(uVar3 == 8) & uVar2 | -(uint)(uVar3 == 8) & uVar1) + *param_1;
    param_1[1] = (~-(uint)(uVar3 == 7) & uVar2 | -(uint)(uVar3 == 7) & uVar1) + param_1[1];
    param_1[2] = (~-(uint)(uVar3 == 6) & uVar2 | -(uint)(uVar3 == 6) & uVar1) + param_1[2];
    param_1[3] = (~-(uint)(uVar3 == 5) & uVar2 | -(uint)(uVar3 == 5) & uVar1) + param_1[3];
    param_1[4] = (~-(uint)(uVar3 == 4) & uVar2 | -(uint)(uVar3 == 4) & uVar1) + param_1[4];
    param_1[5] = (~-(uint)(uVar3 == 3) & uVar2 | -(uint)(uVar3 == 3) & uVar1) + param_1[5];
    param_1[6] = (~-(uint)(uVar3 == 2) & uVar2 | -(uint)(uVar3 == 2) & uVar1) + param_1[6];
    param_1[7] = (~-(uint)(uVar3 == 1) & uVar2 | -(uint)(uVar3 == 1) & uVar1) + param_1[7];
    param_1 = param_1 + 8;
    uVar3 = uVar4;
  } while (uVar4 < 0x10);
  return;
}



// FUNCTION 1454e51f0 FUN_1454e51f0 body=201 status=ok
// SIG undefined FUN_1454e51f0(void)

void FUN_1454e51f0(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_1[0xf];
  param_1[8] = param_1[8] + (uVar1 >> 0x1c);
  puVar2 = param_1 + 0xd;
  uVar3 = 0xd;
  do {
    puVar2[2] = (param_1[uVar3 + 1] >> 0x1c) + (puVar2[2] & 0xfffffff);
    puVar2[1] = (param_1[uVar3] >> 0x1c) + (puVar2[1] & 0xfffffff);
    *puVar2 = (param_1[uVar3 - 1] >> 0x1c) + (*puVar2 & 0xfffffff);
    puVar2[-1] = (param_1[uVar3 - 2] >> 0x1c) + (puVar2[-1] & 0xfffffff);
    puVar2[-2] = (param_1[uVar3 - 3] >> 0x1c) + (puVar2[-2] & 0xfffffff);
    bVar4 = uVar3 != 3;
    puVar2 = puVar2 + -5;
    uVar3 = uVar3 - 5;
  } while (bVar4);
  *param_1 = (*param_1 & 0xfffffff) + (uVar1 >> 0x1c);
  return;
}



// FUNCTION 1454e52c0 FUN_1454e52c0 body=135 status=ok
// SIG undefined FUN_1454e52c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e52c0(uint *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  uint local_58 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454e52d0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1455d7600(local_58,&DAT_149d93f80,param_1);
  local_68 = ~param_2;
  lVar2 = 0x10;
  puVar1 = param_1;
  do {
    *puVar1 = *(uint *)((longlong)local_58 + (-4 - (longlong)param_1) + (longlong)(puVar1 + 1)) &
              param_2 | local_68 & *puVar1;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (lVar2 != 0);
  local_64 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_88);
}



// FUNCTION 1454e5360 FUN_1454e5360 body=209 status=ok
// SIG undefined FUN_1454e5360(void)

void FUN_1454e5360(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_2 <= param_1 + 0xf) && (param_1 <= param_2 + 0xf)) {
    lVar8 = 0x10;
    puVar7 = param_2;
    do {
      uVar4 = *(uint *)((longlong)puVar7 + ((longlong)param_1 - (longlong)param_2));
      uVar6 = (uVar4 ^ *puVar7) & param_3;
      *(uint *)((longlong)puVar7 + ((longlong)param_1 - (longlong)param_2)) = uVar4 ^ uVar6;
      *puVar7 = *puVar7 ^ uVar6;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
    return;
  }
  lVar8 = 2;
  puVar7 = param_2 + 4;
  do {
    puVar2 = (uint *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    puVar1 = puVar7 + 8;
    uVar9 = (*puVar2 ^ puVar7[-4]) & param_3;
    uVar10 = (uVar4 ^ puVar7[-3]) & param_3;
    uVar11 = (uVar6 ^ puVar7[-2]) & param_3;
    uVar12 = (uVar5 ^ puVar7[-1]) & param_3;
    puVar3 = (uint *)((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)puVar1);
    *puVar3 = uVar9 ^ *puVar2;
    puVar3[1] = uVar10 ^ uVar4;
    puVar3[2] = uVar11 ^ uVar6;
    puVar3[3] = uVar12 ^ uVar5;
    puVar7[-4] = uVar9 ^ puVar7[-4];
    puVar7[-3] = uVar10 ^ puVar7[-3];
    puVar7[-2] = uVar11 ^ puVar7[-2];
    puVar7[-1] = uVar12 ^ puVar7[-1];
    puVar2 = (uint *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)puVar1);
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    uVar9 = (*puVar7 ^ *puVar2) & param_3;
    uVar10 = (puVar7[1] ^ uVar4) & param_3;
    uVar11 = (puVar7[2] ^ uVar6) & param_3;
    uVar12 = (puVar7[3] ^ uVar5) & param_3;
    puVar3 = (uint *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)puVar1);
    *puVar3 = uVar9 ^ *puVar2;
    puVar3[1] = uVar10 ^ uVar4;
    puVar3[2] = uVar11 ^ uVar6;
    puVar3[3] = uVar12 ^ uVar5;
    *puVar7 = uVar9 ^ *puVar7;
    puVar7[1] = uVar10 ^ puVar7[1];
    puVar7[2] = uVar11 ^ puVar7[2];
    puVar7[3] = uVar12 ^ puVar7[3];
    lVar8 = lVar8 + -1;
    puVar7 = puVar1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 1454e5440 FUN_1454e5440 body=108 status=ok
// SIG undefined FUN_1454e5440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e5440(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454e5450;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1455d7e10(local_58,param_1 + 0x40,param_2);
  FUN_1455d7e10(local_98,param_2 + 0x40,param_1);
  FUN_1455d79c0(local_58,local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1454e54c0 FUN_1454e54c0 body=2419 status=ok
// SIG undefined FUN_1454e54c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e54c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int aiStack_2e8 [8];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  int local_288 [4];
  int local_278 [12];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  int local_208 [4];
  int local_1f8 [16];
  int aiStack_1b8 [12];
  int local_188 [16];
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)aiStack_2e8;
  uVar22 = 0;
  FUN_1455d7d10(&local_148,param_2,1,0);
  uVar25 = 0x1bf;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_248 = local_148;
  uStack_240 = uStack_140;
  local_238 = local_138;
  uStack_230 = uStack_130;
  local_228 = local_128;
  uStack_220 = uStack_120;
  local_218 = local_118;
  uStack_210 = uStack_110;
  local_288[0] = 1;
  local_288[1] = 0;
  local_288[2] = 0;
  local_288[3] = 0;
  local_278[0] = 0;
  local_278[1] = 0;
  local_278[2] = 0;
  local_278[3] = 0;
  local_278[4] = 0;
  local_278[5] = 0;
  local_278[6] = 0;
  local_278[7] = 0;
  local_278[8] = 0;
  local_278[9] = 0;
  local_278[10] = 0;
  local_278[0xb] = 0;
  local_208[0] = 1;
  local_208[1] = 0;
  local_208[2] = 0;
  local_208[3] = 0;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
  local_1f8[4] = 0;
  local_1f8[5] = 0;
  local_1f8[6] = 0;
  local_1f8[7] = 0;
  local_1f8[8] = 0;
  local_1f8[9] = 0;
  local_1f8[10] = 0;
  local_1f8[0xb] = 0;
  uVar14 = uVar22;
  do {
    bVar19 = *(byte *)((ulonglong)(uVar25 >> 3) + param_3);
    if (uVar25 >> 3 == 0) {
      bVar19 = bVar19 & 0xfc;
    }
    else if (uVar25 == 0x1bf) {
      bVar19 = 0xff;
    }
    uVar24 = -(bVar19 >> ((byte)uVar25 & 7) & 1);
    uVar23 = (uint)uVar14 ^ uVar24;
    auVar27._4_4_ = uVar23;
    auVar27._0_4_ = uVar23;
    auVar27._8_4_ = uVar23;
    auVar27._12_4_ = uVar23;
    uVar14 = uVar22;
    do {
      auVar26 = (*(undefined1 (*) [16])((longlong)local_288 + uVar14) ^
                *(undefined1 (*) [16])((longlong)&local_248 + uVar14)) & auVar27;
      *(undefined1 (*) [16])((longlong)&local_248 + uVar14) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)&local_248 + uVar14);
      *(undefined1 (*) [16])((longlong)local_288 + uVar14) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)local_288 + uVar14);
      auVar26 = (*(undefined1 (*) [16])((longlong)local_278 + uVar14) ^
                *(undefined1 (*) [16])((longlong)&local_238 + uVar14)) & auVar27;
      *(undefined1 (*) [16])((longlong)local_278 + uVar14) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)local_278 + uVar14);
      *(undefined1 (*) [16])((longlong)&local_238 + uVar14) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)&local_238 + uVar14);
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar22;
    } while (uVar14 < 0x40);
    do {
      auVar26 = (*(undefined1 (*) [16])((longlong)&local_2c8 + uVar15) ^
                *(undefined1 (*) [16])((longlong)local_208 + uVar15)) & auVar27;
      *(undefined1 (*) [16])((longlong)local_208 + uVar15) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)local_208 + uVar15);
      *(undefined1 (*) [16])((longlong)&local_2c8 + uVar15) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)&local_2c8 + uVar15);
      auVar26 = (*(undefined1 (*) [16])((longlong)&local_2b8 + uVar15) ^
                *(undefined1 (*) [16])((longlong)local_1f8 + uVar15)) & auVar27;
      *(undefined1 (*) [16])((longlong)&local_2b8 + uVar15) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar15);
      *(undefined1 (*) [16])((longlong)local_1f8 + uVar15) =
           auVar26 ^ *(undefined1 (*) [16])((longlong)local_1f8 + uVar15);
      uVar15 = uVar15 + 0x20;
    } while (uVar15 < 0x40);
    uVar14 = (ulonglong)uVar24;
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)local_288 + uVar15 + 4);
      iVar1 = *(int *)((longlong)local_288 + uVar15 + 8);
      iVar2 = *(int *)((longlong)local_288 + uVar15 + 0xc);
      iVar3 = *(int *)((longlong)&local_2c8 + uVar15 + 4);
      iVar4 = *(int *)((longlong)&uStack_2c0 + uVar15);
      iVar5 = *(int *)((longlong)&uStack_2c0 + uVar15 + 4);
      iVar6 = *(int *)((longlong)&local_2b8 + uVar15);
      iVar7 = *(int *)((longlong)&local_2b8 + uVar15 + 4);
      iVar8 = *(int *)((longlong)&uStack_2b0 + uVar15);
      iVar9 = *(int *)((longlong)&uStack_2b0 + uVar15 + 4);
      iVar10 = *(int *)((longlong)local_278 + uVar15);
      iVar11 = *(int *)((longlong)local_278 + uVar15 + 4);
      iVar12 = *(int *)((longlong)local_278 + uVar15 + 8);
      iVar13 = *(int *)((longlong)local_278 + uVar15 + 0xc);
      *(int *)((longlong)local_1f8 + uVar15 + 0x30) =
           *(int *)((longlong)&local_2c8 + uVar15) + *(int *)((longlong)local_288 + uVar15);
      *(int *)((longlong)local_1f8 + uVar15 + 0x34) = iVar3 + iVar20;
      *(int *)((longlong)local_1f8 + uVar15 + 0x38) = iVar4 + iVar1;
      *(int *)((longlong)local_1f8 + uVar15 + 0x3c) = iVar5 + iVar2;
      *(int *)((longlong)aiStack_1b8 + uVar15) = iVar6 + iVar10;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 4) = iVar7 + iVar11;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 8) = iVar8 + iVar12;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 0xc) = iVar9 + iVar13;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)&local_2c8 + uVar15 + 4);
      iVar1 = *(int *)((longlong)&uStack_2c0 + uVar15);
      iVar2 = *(int *)((longlong)&uStack_2c0 + uVar15 + 4);
      iVar3 = *(int *)((longlong)local_288 + uVar15 + 4);
      iVar4 = *(int *)((longlong)local_288 + uVar15 + 8);
      iVar5 = *(int *)((longlong)local_288 + uVar15 + 0xc);
      iVar6 = *(int *)((longlong)local_278 + uVar15);
      iVar7 = *(int *)((longlong)local_278 + uVar15 + 4);
      iVar8 = *(int *)((longlong)local_278 + uVar15 + 8);
      iVar9 = *(int *)((longlong)local_278 + uVar15 + 0xc);
      iVar10 = *(int *)((longlong)&local_2b8 + uVar15);
      iVar11 = *(int *)((longlong)&local_2b8 + uVar15 + 4);
      iVar12 = *(int *)((longlong)&uStack_2b0 + uVar15);
      iVar13 = *(int *)((longlong)&uStack_2b0 + uVar15 + 4);
      *(int *)((longlong)local_188 + uVar15) =
           *(int *)((longlong)local_288 + uVar15) - *(int *)((longlong)&local_2c8 + uVar15);
      *(int *)((longlong)local_188 + uVar15 + 4) = iVar3 - iVar20;
      *(int *)((longlong)local_188 + uVar15 + 8) = iVar4 - iVar1;
      *(int *)((longlong)local_188 + uVar15 + 0xc) = iVar5 - iVar2;
      *(int *)((longlong)local_188 + uVar15 + 0x10) = iVar6 - iVar10;
      *(int *)((longlong)local_188 + uVar15 + 0x14) = iVar7 - iVar11;
      *(int *)((longlong)local_188 + uVar15 + 0x18) = iVar8 - iVar12;
      *(int *)((longlong)local_188 + uVar15 + 0x1c) = iVar9 - iVar13;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    piVar18 = local_188;
    uVar15 = uVar22;
    do {
      iVar20 = (int)uVar15;
      uVar15 = (ulonglong)(iVar20 + 8U);
      *piVar18 = (~-(uint)(iVar20 == 8) & 0x1ffffffe | -(uint)(iVar20 == 8) & 0x1ffffffc) + *piVar18
      ;
      piVar18[1] = (~-(uint)(iVar20 == 7) & 0x1ffffffe | -(uint)(iVar20 == 7) & 0x1ffffffc) +
                   piVar18[1];
      piVar18[2] = (~-(uint)(iVar20 == 6) & 0x1ffffffe | -(uint)(iVar20 == 6) & 0x1ffffffc) +
                   piVar18[2];
      piVar18[3] = (~-(uint)(iVar20 == 5) & 0x1ffffffe | -(uint)(iVar20 == 5) & 0x1ffffffc) +
                   piVar18[3];
      auVar27 = *(undefined1 (*) [16])(piVar18 + 4);
      piVar18[4] = (~-(uint)(iVar20 == 4) & 0x1ffffffe | -(uint)(iVar20 == 4) & 0x1ffffffc) +
                   auVar27._0_4_;
      piVar18[5] = (~-(uint)(iVar20 == 3) & 0x1ffffffe | -(uint)(iVar20 == 3) & 0x1ffffffc) +
                   auVar27._4_4_;
      piVar18[6] = (~-(uint)(iVar20 == 2) & 0x1ffffffe | -(uint)(iVar20 == 2) & 0x1ffffffc) +
                   auVar27._8_4_;
      piVar18[7] = (~-(uint)(iVar20 == 1) & 0x1ffffffe | -(uint)(iVar20 == 1) & 0x1ffffffc) +
                   auVar27._12_4_;
      piVar18 = piVar18 + 8;
    } while (iVar20 + 8U < 0x10);
    FUN_1454e51f0(local_188);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)local_208 + uVar15 + 4);
      iVar1 = *(int *)((longlong)local_208 + uVar15 + 8);
      iVar2 = *(int *)((longlong)local_208 + uVar15 + 0xc);
      iVar3 = *(int *)((longlong)&local_248 + uVar15 + 4);
      iVar4 = *(int *)((longlong)&uStack_240 + uVar15);
      iVar5 = *(int *)((longlong)&uStack_240 + uVar15 + 4);
      iVar6 = *(int *)((longlong)&local_238 + uVar15);
      iVar7 = *(int *)((longlong)&local_238 + uVar15 + 4);
      iVar8 = *(int *)((longlong)&uStack_230 + uVar15);
      iVar9 = *(int *)((longlong)&uStack_230 + uVar15 + 4);
      iVar10 = *(int *)((longlong)local_1f8 + uVar15);
      iVar11 = *(int *)((longlong)local_1f8 + uVar15 + 4);
      iVar12 = *(int *)((longlong)local_1f8 + uVar15 + 8);
      iVar13 = *(int *)((longlong)local_1f8 + uVar15 + 0xc);
      *(int *)((longlong)&local_2c8 + uVar15) =
           *(int *)((longlong)&local_248 + uVar15) - *(int *)((longlong)local_208 + uVar15);
      *(int *)((longlong)&local_2c8 + uVar15 + 4) = iVar3 - iVar20;
      *(int *)((longlong)&uStack_2c0 + uVar15) = iVar4 - iVar1;
      *(int *)((longlong)&uStack_2c0 + uVar15 + 4) = iVar5 - iVar2;
      *(int *)((longlong)&local_2b8 + uVar15) = iVar6 - iVar10;
      *(int *)((longlong)&local_2b8 + uVar15 + 4) = iVar7 - iVar11;
      *(int *)((longlong)&uStack_2b0 + uVar15) = iVar8 - iVar12;
      *(int *)((longlong)&uStack_2b0 + uVar15 + 4) = iVar9 - iVar13;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
      uVar21 = uVar22;
      piVar18 = aiStack_2e8;
    } while (lVar16 != 0);
    do {
      piVar17 = piVar18 + 8;
      iVar20 = (int)uVar21;
      *piVar17 = (-(uint)(iVar20 == 8) & 0x1ffffffc | ~-(uint)(iVar20 == 8) & 0x1ffffffe) + *piVar17
      ;
      piVar18[9] = (-(uint)(iVar20 == 7) & 0x1ffffffc | ~-(uint)(iVar20 == 7) & 0x1ffffffe) +
                   piVar18[9];
      piVar18[10] = (-(uint)(iVar20 == 6) & 0x1ffffffc | ~-(uint)(iVar20 == 6) & 0x1ffffffe) +
                    piVar18[10];
      piVar18[0xb] = (-(uint)(iVar20 == 5) & 0x1ffffffc | ~-(uint)(iVar20 == 5) & 0x1ffffffe) +
                     piVar18[0xb];
      auVar27 = *(undefined1 (*) [16])(piVar18 + 0xc);
      piVar18[0xc] = (-(uint)(iVar20 == 4) & 0x1ffffffc | ~-(uint)(iVar20 == 4) & 0x1ffffffe) +
                     auVar27._0_4_;
      piVar18[0xd] = (-(uint)(iVar20 == 3) & 0x1ffffffc | ~-(uint)(iVar20 == 3) & 0x1ffffffe) +
                     auVar27._4_4_;
      piVar18[0xe] = (-(uint)(iVar20 == 2) & 0x1ffffffc | ~-(uint)(iVar20 == 2) & 0x1ffffffe) +
                     auVar27._8_4_;
      piVar18[0xf] = (-(uint)(iVar20 == 1) & 0x1ffffffc | ~-(uint)(iVar20 == 1) & 0x1ffffffe) +
                     auVar27._12_4_;
      uVar21 = (ulonglong)(iVar20 + 8U);
      piVar18 = piVar17;
    } while (iVar20 + 8U < 0x10);
    FUN_1454e51f0(&local_2c8);
    FUN_1455d7e10(local_288,local_1f8 + 0xc,&local_2c8);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)&local_248 + uVar15 + 4);
      iVar1 = *(int *)((longlong)&uStack_240 + uVar15);
      iVar2 = *(int *)((longlong)&uStack_240 + uVar15 + 4);
      iVar3 = *(int *)((longlong)local_208 + uVar15 + 4);
      iVar4 = *(int *)((longlong)local_208 + uVar15 + 8);
      iVar5 = *(int *)((longlong)local_208 + uVar15 + 0xc);
      iVar6 = *(int *)((longlong)local_1f8 + uVar15);
      iVar7 = *(int *)((longlong)local_1f8 + uVar15 + 4);
      iVar8 = *(int *)((longlong)local_1f8 + uVar15 + 8);
      iVar9 = *(int *)((longlong)local_1f8 + uVar15 + 0xc);
      auVar27 = *(undefined1 (*) [16])((longlong)&local_238 + uVar15);
      *(int *)((longlong)&local_2c8 + uVar15) =
           *(int *)((longlong)local_208 + uVar15) + *(int *)((longlong)&local_248 + uVar15);
      *(int *)((longlong)&local_2c8 + uVar15 + 4) = iVar3 + iVar20;
      *(int *)((longlong)&uStack_2c0 + uVar15) = iVar4 + iVar1;
      *(int *)((longlong)&uStack_2c0 + uVar15 + 4) = iVar5 + iVar2;
      *(int *)((longlong)&local_2b8 + uVar15) = iVar6 + auVar27._0_4_;
      *(int *)((longlong)&local_2b8 + uVar15 + 4) = iVar7 + auVar27._4_4_;
      *(int *)((longlong)&uStack_2b0 + uVar15) = iVar8 + auVar27._8_4_;
      *(int *)((longlong)&uStack_2b0 + uVar15 + 4) = iVar9 + auVar27._12_4_;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    FUN_1455d7e10(&local_248,local_188,&local_2c8);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)&local_248 + uVar15 + 4);
      iVar1 = *(int *)((longlong)&uStack_240 + uVar15);
      iVar2 = *(int *)((longlong)&uStack_240 + uVar15 + 4);
      iVar3 = *(int *)((longlong)local_288 + uVar15 + 4);
      iVar4 = *(int *)((longlong)local_288 + uVar15 + 8);
      iVar5 = *(int *)((longlong)local_288 + uVar15 + 0xc);
      iVar6 = *(int *)((longlong)local_278 + uVar15);
      iVar7 = *(int *)((longlong)local_278 + uVar15 + 4);
      iVar8 = *(int *)((longlong)local_278 + uVar15 + 8);
      iVar9 = *(int *)((longlong)local_278 + uVar15 + 0xc);
      iVar10 = *(int *)((longlong)&local_238 + uVar15);
      iVar11 = *(int *)((longlong)&local_238 + uVar15 + 4);
      iVar12 = *(int *)((longlong)&uStack_230 + uVar15);
      iVar13 = *(int *)((longlong)&uStack_230 + uVar15 + 4);
      *(int *)((longlong)local_208 + uVar15) =
           *(int *)((longlong)local_288 + uVar15) - *(int *)((longlong)&local_248 + uVar15);
      *(int *)((longlong)local_208 + uVar15 + 4) = iVar3 - iVar20;
      *(int *)((longlong)local_208 + uVar15 + 8) = iVar4 - iVar1;
      *(int *)((longlong)local_208 + uVar15 + 0xc) = iVar5 - iVar2;
      *(int *)((longlong)local_1f8 + uVar15) = iVar6 - iVar10;
      *(int *)((longlong)local_1f8 + uVar15 + 4) = iVar7 - iVar11;
      *(int *)((longlong)local_1f8 + uVar15 + 8) = iVar8 - iVar12;
      *(int *)((longlong)local_1f8 + uVar15 + 0xc) = iVar9 - iVar13;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    piVar18 = local_208;
    uVar15 = uVar22;
    do {
      iVar20 = (int)uVar15;
      uVar15 = (ulonglong)(iVar20 + 8U);
      *piVar18 = (~-(uint)(iVar20 == 8) & 0x1ffffffe | -(uint)(iVar20 == 8) & 0x1ffffffc) + *piVar18
      ;
      piVar18[1] = (~-(uint)(iVar20 == 7) & 0x1ffffffe | -(uint)(iVar20 == 7) & 0x1ffffffc) +
                   piVar18[1];
      piVar18[2] = (~-(uint)(iVar20 == 6) & 0x1ffffffe | -(uint)(iVar20 == 6) & 0x1ffffffc) +
                   piVar18[2];
      piVar18[3] = (~-(uint)(iVar20 == 5) & 0x1ffffffe | -(uint)(iVar20 == 5) & 0x1ffffffc) +
                   piVar18[3];
      auVar27 = *(undefined1 (*) [16])(piVar18 + 4);
      piVar18[4] = (~-(uint)(iVar20 == 4) & 0x1ffffffe | -(uint)(iVar20 == 4) & 0x1ffffffc) +
                   auVar27._0_4_;
      piVar18[5] = (~-(uint)(iVar20 == 3) & 0x1ffffffe | -(uint)(iVar20 == 3) & 0x1ffffffc) +
                   auVar27._4_4_;
      piVar18[6] = (~-(uint)(iVar20 == 2) & 0x1ffffffe | -(uint)(iVar20 == 2) & 0x1ffffffc) +
                   auVar27._8_4_;
      piVar18[7] = (~-(uint)(iVar20 == 1) & 0x1ffffffe | -(uint)(iVar20 == 1) & 0x1ffffffc) +
                   auVar27._12_4_;
      piVar18 = piVar18 + 8;
    } while (iVar20 + 8U < 0x10);
    FUN_1454e51f0(local_208);
    FUN_1455d82c0(&local_2c8,local_208);
    FUN_1455d7e10(local_208,&local_148,&local_2c8);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)local_288 + uVar15 + 4);
      iVar1 = *(int *)((longlong)local_288 + uVar15 + 8);
      iVar2 = *(int *)((longlong)local_288 + uVar15 + 0xc);
      iVar3 = *(int *)((longlong)&local_248 + uVar15 + 4);
      iVar4 = *(int *)((longlong)&uStack_240 + uVar15);
      iVar5 = *(int *)((longlong)&uStack_240 + uVar15 + 4);
      iVar6 = *(int *)((longlong)&local_238 + uVar15);
      iVar7 = *(int *)((longlong)&local_238 + uVar15 + 4);
      iVar8 = *(int *)((longlong)&uStack_230 + uVar15);
      iVar9 = *(int *)((longlong)&uStack_230 + uVar15 + 4);
      auVar27 = *(undefined1 (*) [16])((longlong)local_278 + uVar15);
      *(int *)((longlong)&local_2c8 + uVar15) =
           *(int *)((longlong)&local_248 + uVar15) + *(int *)((longlong)local_288 + uVar15);
      *(int *)((longlong)&local_2c8 + uVar15 + 4) = iVar3 + iVar20;
      *(int *)((longlong)&uStack_2c0 + uVar15) = iVar4 + iVar1;
      *(int *)((longlong)&uStack_2c0 + uVar15 + 4) = iVar5 + iVar2;
      *(int *)((longlong)&local_2b8 + uVar15) = iVar6 + auVar27._0_4_;
      *(int *)((longlong)&local_2b8 + uVar15 + 4) = iVar7 + auVar27._4_4_;
      *(int *)((longlong)&uStack_2b0 + uVar15) = iVar8 + auVar27._8_4_;
      *(int *)((longlong)&uStack_2b0 + uVar15 + 4) = iVar9 + auVar27._12_4_;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    FUN_1455d82c0(&local_248,&local_2c8);
    FUN_1455d82c0(&local_2c8,local_1f8 + 0xc);
    FUN_1455d82c0(local_1f8 + 0xc,local_188);
    FUN_1455d7e10(local_288,&local_2c8,local_1f8 + 0xc);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)local_1f8 + uVar15 + 0x34);
      iVar1 = *(int *)((longlong)local_1f8 + uVar15 + 0x38);
      iVar2 = *(int *)((longlong)local_1f8 + uVar15 + 0x3c);
      iVar3 = *(int *)((longlong)&local_2c8 + uVar15 + 4);
      iVar4 = *(int *)((longlong)&uStack_2c0 + uVar15);
      iVar5 = *(int *)((longlong)&uStack_2c0 + uVar15 + 4);
      iVar6 = *(int *)((longlong)&local_2b8 + uVar15);
      iVar7 = *(int *)((longlong)&local_2b8 + uVar15 + 4);
      iVar8 = *(int *)((longlong)&uStack_2b0 + uVar15);
      iVar9 = *(int *)((longlong)&uStack_2b0 + uVar15 + 4);
      iVar10 = *(int *)((longlong)aiStack_1b8 + uVar15);
      iVar11 = *(int *)((longlong)aiStack_1b8 + uVar15 + 4);
      iVar12 = *(int *)((longlong)aiStack_1b8 + uVar15 + 8);
      iVar13 = *(int *)((longlong)aiStack_1b8 + uVar15 + 0xc);
      *(int *)((longlong)local_188 + uVar15) =
           *(int *)((longlong)&local_2c8 + uVar15) - *(int *)((longlong)local_1f8 + uVar15 + 0x30);
      *(int *)((longlong)local_188 + uVar15 + 4) = iVar3 - iVar20;
      *(int *)((longlong)local_188 + uVar15 + 8) = iVar4 - iVar1;
      *(int *)((longlong)local_188 + uVar15 + 0xc) = iVar5 - iVar2;
      *(int *)((longlong)local_188 + uVar15 + 0x10) = iVar6 - iVar10;
      *(int *)((longlong)local_188 + uVar15 + 0x14) = iVar7 - iVar11;
      *(int *)((longlong)local_188 + uVar15 + 0x18) = iVar8 - iVar12;
      *(int *)((longlong)local_188 + uVar15 + 0x1c) = iVar9 - iVar13;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    piVar18 = local_188;
    uVar15 = uVar22;
    do {
      iVar20 = (int)uVar15;
      uVar15 = (ulonglong)(iVar20 + 8U);
      *piVar18 = (~-(uint)(iVar20 == 8) & 0x1ffffffe | -(uint)(iVar20 == 8) & 0x1ffffffc) + *piVar18
      ;
      piVar18[1] = (~-(uint)(iVar20 == 7) & 0x1ffffffe | -(uint)(iVar20 == 7) & 0x1ffffffc) +
                   piVar18[1];
      piVar18[2] = (~-(uint)(iVar20 == 6) & 0x1ffffffe | -(uint)(iVar20 == 6) & 0x1ffffffc) +
                   piVar18[2];
      piVar18[3] = (~-(uint)(iVar20 == 5) & 0x1ffffffe | -(uint)(iVar20 == 5) & 0x1ffffffc) +
                   piVar18[3];
      auVar27 = *(undefined1 (*) [16])(piVar18 + 4);
      piVar18[4] = (~-(uint)(iVar20 == 4) & 0x1ffffffe | -(uint)(iVar20 == 4) & 0x1ffffffc) +
                   auVar27._0_4_;
      piVar18[5] = (~-(uint)(iVar20 == 3) & 0x1ffffffe | -(uint)(iVar20 == 3) & 0x1ffffffc) +
                   auVar27._4_4_;
      piVar18[6] = (~-(uint)(iVar20 == 2) & 0x1ffffffe | -(uint)(iVar20 == 2) & 0x1ffffffc) +
                   auVar27._8_4_;
      piVar18[7] = (~-(uint)(iVar20 == 1) & 0x1ffffffe | -(uint)(iVar20 == 1) & 0x1ffffffc) +
                   auVar27._12_4_;
      piVar18 = piVar18 + 8;
    } while (iVar20 + 8U < 0x10);
    FUN_1454e51f0(local_188);
    FUN_1455d80d0(local_1f8 + 0xc,local_188,0x98a9);
    lVar16 = 2;
    uVar15 = uVar22;
    do {
      iVar20 = *(int *)((longlong)&local_2c8 + uVar15 + 4);
      iVar1 = *(int *)((longlong)&uStack_2c0 + uVar15);
      iVar2 = *(int *)((longlong)&uStack_2c0 + uVar15 + 4);
      *(int *)((longlong)local_1f8 + uVar15 + 0x30) =
           *(int *)((longlong)&local_2c8 + uVar15) + *(int *)((longlong)local_1f8 + uVar15 + 0x30);
      *(int *)((longlong)local_1f8 + uVar15 + 0x34) =
           iVar20 + *(int *)((longlong)local_1f8 + uVar15 + 0x34);
      *(int *)((longlong)local_1f8 + uVar15 + 0x38) =
           iVar1 + *(int *)((longlong)local_1f8 + uVar15 + 0x38);
      *(int *)((longlong)local_1f8 + uVar15 + 0x3c) =
           iVar2 + *(int *)((longlong)local_1f8 + uVar15 + 0x3c);
      auVar27 = *(undefined1 (*) [16])((longlong)aiStack_1b8 + uVar15);
      iVar20 = *(int *)((longlong)&local_2b8 + uVar15 + 4);
      iVar1 = *(int *)((longlong)&uStack_2b0 + uVar15);
      iVar2 = *(int *)((longlong)&uStack_2b0 + uVar15 + 4);
      *(int *)((longlong)aiStack_1b8 + uVar15) =
           *(int *)((longlong)&local_2b8 + uVar15) + auVar27._0_4_;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 4) = iVar20 + auVar27._4_4_;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 8) = iVar1 + auVar27._8_4_;
      *(int *)((longlong)aiStack_1b8 + uVar15 + 0xc) = iVar2 + auVar27._12_4_;
      lVar16 = lVar16 + -1;
      uVar15 = uVar15 + 0x20;
    } while (lVar16 != 0);
    FUN_1455d7e10(&local_2c8,local_188,local_1f8 + 0xc);
    uVar25 = uVar25 - 1;
  } while (-1 < (int)uVar25);
  auVar26._4_4_ = uVar24;
  auVar26._0_4_ = uVar24;
  auVar26._8_4_ = uVar24;
  auVar26._12_4_ = uVar24;
  uVar14 = uVar22;
  do {
    auVar27 = (*(undefined1 (*) [16])((longlong)local_288 + uVar14) ^
              *(undefined1 (*) [16])((longlong)&local_248 + uVar14)) & auVar26;
    *(undefined1 (*) [16])((longlong)&local_248 + uVar14) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)&local_248 + uVar14);
    *(undefined1 (*) [16])((longlong)local_288 + uVar14) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)local_288 + uVar14);
    auVar27 = (*(undefined1 (*) [16])((longlong)local_278 + uVar14) ^
              *(undefined1 (*) [16])((longlong)&local_238 + uVar14)) & auVar26;
    *(undefined1 (*) [16])((longlong)local_278 + uVar14) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)local_278 + uVar14);
    *(undefined1 (*) [16])((longlong)&local_238 + uVar14) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)&local_238 + uVar14);
    uVar14 = uVar14 + 0x20;
  } while (uVar14 < 0x40);
  do {
    auVar27 = (*(undefined1 (*) [16])((longlong)&local_2c8 + uVar22) ^
              *(undefined1 (*) [16])((longlong)local_208 + uVar22)) & auVar26;
    *(undefined1 (*) [16])((longlong)local_208 + uVar22) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)local_208 + uVar22);
    *(undefined1 (*) [16])((longlong)&local_2c8 + uVar22) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)&local_2c8 + uVar22);
    auVar27 = (*(undefined1 (*) [16])((longlong)&local_2b8 + uVar22) ^
              *(undefined1 (*) [16])((longlong)local_1f8 + uVar22)) & auVar26;
    *(undefined1 (*) [16])((longlong)&local_2b8 + uVar22) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar22);
    *(undefined1 (*) [16])((longlong)local_1f8 + uVar22) =
         auVar27 ^ *(undefined1 (*) [16])((longlong)local_1f8 + uVar22);
    uVar22 = uVar22 + 0x20;
  } while (uVar22 < 0x40);
  FUN_1455d82c0(local_c8,&local_2c8);
  FUN_1455d7630(&local_108,local_c8);
  FUN_1455d82c0(local_c8,&local_108);
  FUN_1455d7e10(&local_108,local_c8,&local_2c8);
  local_2c8 = local_108;
  uStack_2c0 = uStack_100;
  local_2b8 = local_f8;
  uStack_2b0 = uStack_f0;
  local_2a8 = local_e8;
  uStack_2a0 = uStack_e0;
  local_298 = local_d8;
  uStack_290 = uStack_d0;
  FUN_1455d7e10(&local_148,local_288,&local_2c8);
  FUN_1455d7c60(param_1,&local_148,1);
  FUN_1455d79c0(&local_148,&DAT_149d93f80);
  FUN_14259f0c0(&local_148,0x40);
  FUN_14259f0c0(local_288,0x40);
  FUN_14259f0c0(&local_2c8,0x40);
  FUN_14259f0c0(&local_248,0x40);
  FUN_14259f0c0(local_208,0x40);
  FUN_14259f0c0(local_1f8 + 0xc,0x40);
  FUN_14259f0c0(local_188,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88 ^ (ulonglong)aiStack_2e8);
}



// FUNCTION 1454e5e70 FUN_1454e5e70 body=329 status=ok
// SIG undefined FUN_1454e5e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e5e70(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [64];
  undefined8 local_118 [8];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454e5e88;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar14 = 2;
  puVar13 = local_118;
  do {
    uVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    *puVar13 = *param_2;
    puVar13[1] = uVar9;
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    puVar13[2] = uVar10;
    puVar13[3] = uVar11;
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar13[4] = uVar9;
    puVar13[5] = uVar12;
    uVar9 = param_2[8];
    uVar12 = param_2[9];
    puVar13[6] = uVar10;
    puVar13[7] = uVar11;
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    puVar13[8] = uVar9;
    puVar13[9] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar13[10] = uVar10;
    puVar13[0xb] = uVar11;
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar13 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar13 + 100) = uVar2;
    *(undefined4 *)(puVar13 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar4;
    *(undefined4 *)(puVar13 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar13 + 0x74) = uVar6;
    *(undefined4 *)(puVar13 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar8;
    lVar14 = lVar14 + -1;
    puVar13 = puVar13 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar14 != 0);
  FUN_1455d82c0(local_158,local_118);
  FUN_1455d7630(&local_198,local_158);
  FUN_1455d82c0(local_158,&local_198);
  FUN_1455d7e10(&local_198,local_158,local_118);
  local_58 = local_198;
  uStack_50 = uStack_190;
  local_48 = local_188;
  uStack_40 = uStack_180;
  local_38 = local_178;
  uStack_34 = uStack_174;
  uStack_30 = uStack_170;
  uStack_2c = uStack_16c;
  local_28 = local_168;
  uStack_24 = uStack_164;
  uStack_20 = uStack_160;
  uStack_1c = uStack_15c;
  FUN_1455d7e10(local_98,&local_58,local_d8);
  FUN_1455d82c0(local_d8,local_98);
  FUN_1455d7c60(param_1,local_d8,1);
  FUN_14259f0c0(local_118,0x100);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1454e5fd0 FUN_1454e5fd0 body=232 status=ok
// SIG undefined FUN_1454e5fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e5fd0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [64];
  undefined1 local_148 [256];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uStack_30 = *(undefined8 *)(param_2 + 6);
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(ulonglong *)(param_2 + 0xc) | 0x8000000000000000;
  local_48 = *param_2 & 0xfffffffc;
  FUN_1455d83c0(local_188,&local_48,0x38);
  uVar1 = 1;
  do {
    FUN_1455d8850(local_188,local_188);
    uVar1 = uVar1 * 2;
  } while (uVar1 < 2);
  FUN_1454e60d0(local_148,PTR_DAT_14c7469d0,local_188);
  FUN_1454e5e70(param_1,local_148);
  FUN_14259f0c0(local_148,0x100);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1454e60d0 FUN_1454e60d0 body=803 status=ok
// SIG undefined FUN_1454e60d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e60d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_1a8 [32];
  uint local_188;
  uint local_184;
  uint local_180 [14];
  byte local_148 [128];
  uint local_c8 [16];
  uint local_88 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454e60ef;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1455d86a0(local_180,param_3);
  FUN_1455d8850(local_180);
  iVar7 = 0x12;
  do {
    iVar11 = iVar7;
    if (iVar11 != 0x12) {
      FUN_1454e6ce0(param_1);
    }
    uVar12 = 0;
    do {
      uVar6 = 0;
      iVar7 = uVar12 * 0x5a + iVar11;
      uVar8 = iVar7 - 1;
      if (uVar8 < 0x1be) {
        uVar6 = local_180[uVar8 >> 5] >> ((byte)uVar8 & 0x1f) & 1;
      }
      uVar8 = iVar7 + 0x11;
      if (uVar8 < 0x1be) {
        uVar6 = uVar6 | (local_180[uVar8 >> 5] >> ((byte)uVar8 & 0x1f) & 1) * 2;
      }
      uVar8 = iVar7 + 0x23;
      if (uVar8 < 0x1be) {
        uVar6 = uVar6 | (local_180[uVar8 >> 5] >> ((byte)uVar8 & 0x1f) & 1) << 2;
      }
      uVar8 = iVar7 + 0x35;
      if (uVar8 < 0x1be) {
        uVar6 = uVar6 | (local_180[uVar8 >> 5] >> ((byte)uVar8 & 0x1f) & 1) << 3;
      }
      uVar8 = iVar7 + 0x47;
      if (uVar8 < 0x1be) {
        uVar6 = uVar6 | (local_180[uVar8 >> 5] >> ((byte)uVar8 & 0x1f) & 1) << 4;
      }
      uVar8 = ((int)uVar6 >> 4) - 1;
      lVar5 = (longlong)(int)((uVar8 ^ uVar6) & 0xf);
      pbVar4 = (byte *)((ulonglong)(uVar12 << 4) * 0xc0 + param_2);
      memset(local_148,0,0xc0);
      lVar10 = 0x10;
      lVar9 = lVar5;
      do {
        lVar9 = lVar9 + -1;
        bVar2 = (char)(~(byte)((ulonglong)lVar5 >> 0x38) & (byte)((ulonglong)lVar9 >> 0x38)) >> 7;
        uVar3 = 0;
        local_184 = (uint)bVar2;
        local_188 = ~(uint)bVar2;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          local_148[uVar3] = local_148[uVar3] | bVar2 & bVar1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc0);
        lVar5 = lVar5 + -1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      FUN_1454e5360(local_148,local_148 + 0x40,uVar8);
      FUN_1455d7600(local_88,&DAT_149d93f80);
      uVar3 = 0;
      local_184 = ~uVar8;
      do {
        *(uint *)((longlong)local_c8 + uVar3) =
             *(uint *)((longlong)local_88 + uVar3) & uVar8 |
             local_184 & *(uint *)((longlong)local_c8 + uVar3);
        uVar3 = uVar3 + 4;
      } while (uVar3 < 0x40);
      local_188 = uVar8;
      if ((iVar11 == 0x12) && (uVar12 == 0)) {
        FUN_1455d75d0(param_1 + 0x40,local_148 + 0x40,local_148);
        FUN_1455d7600(param_1,local_148 + 0x40,local_148);
        FUN_1455d7e10(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0x80) = 1;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      else {
        FUN_1454e7300(param_1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 5);
    iVar7 = iVar11 + -1;
  } while (iVar11 + -1 != 0);
  FUN_14259f0c0(local_148,0xc0);
  FUN_14259f0c0(local_180,iVar11 + 0x37);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1454e6410 FUN_1454e6410 body=742 status=ok
// SIG undefined FUN_1454e6410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e6410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_e68 [32];
  int local_e48;
  int local_e44 [155];
  int local_bd8;
  int local_bd4 [227];
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e68;
  FUN_1454e7e50(&local_e48,param_2,5);
  FUN_1454e7e50(&local_bd8,param_4,3);
  uVar11 = 0;
  uVar9 = 0;
  FUN_1454e8000(local_848,param_3,3);
  if (local_bd8 < 0) {
    lVar7 = 2;
    puVar6 = (undefined8 *)&DAT_149d94000;
    do {
      uVar10 = puVar6[1];
      *param_1 = *puVar6;
      param_1[1] = uVar10;
      uVar10 = puVar6[3];
      param_1[2] = puVar6[2];
      param_1[3] = uVar10;
      uVar10 = puVar6[5];
      param_1[4] = puVar6[4];
      param_1[5] = uVar10;
      uVar10 = puVar6[7];
      param_1[6] = puVar6[6];
      param_1[7] = uVar10;
      uVar10 = puVar6[9];
      param_1[8] = puVar6[8];
      param_1[9] = uVar10;
      uVar10 = puVar6[0xb];
      param_1[10] = puVar6[10];
      param_1[0xb] = uVar10;
      uVar3 = *(undefined4 *)((longlong)puVar6 + 100);
      uVar4 = *(undefined4 *)(puVar6 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar6 + 0x6c);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
      *(undefined4 *)((longlong)param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0xd) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
      uVar10 = puVar6[0xf];
      param_1[0xe] = puVar6[0xe];
      param_1[0xf] = uVar10;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 0x10;
      param_1 = param_1 + 0x10;
    } while (lVar7 != 0);
  }
  else {
    if (local_e48 < local_bd8) {
      FUN_1454e7190(param_1,local_848 + ((longlong)local_bd4[0] >> 1) * 0x100);
      uVar9 = 1;
    }
    else if (local_bd8 == local_e48) {
      FUN_1454e7190(param_1,local_848 + ((longlong)local_bd4[0] >> 1) * 0x100);
      FUN_1454e7300(param_1,PTR_DAT_14c7469d8 + ((longlong)local_e44[0] >> 1) * 0xc0,local_bd8);
      uVar9 = 1;
      uVar11 = 1;
    }
    else {
      FUN_1454e7250(param_1,PTR_DAT_14c7469d8 + ((longlong)local_e44[0] >> 1) * 0xc0);
      uVar11 = 1;
      local_bd8 = local_e48;
    }
    iVar8 = local_bd8 + -1;
    if (-1 < iVar8) {
      piVar12 = local_e44 + (ulonglong)uVar11 * 2;
      piVar13 = local_bd4 + (ulonglong)uVar9 * 2;
      do {
        iVar1 = piVar13[-1];
        iVar2 = piVar12[-1];
        if (((iVar8 == 0) || (iVar8 == iVar1)) || (iVar8 == iVar2)) {
          uVar10 = 0;
        }
        else {
          uVar10 = 1;
        }
        FUN_1454e6ce0(param_1,param_1,uVar10);
        if (iVar8 == iVar1) {
          iVar1 = *piVar13;
          if (iVar1 < 1) {
            FUN_1454e7db0(param_1,local_848 + ((longlong)-iVar1 >> 1) * 0x100);
          }
          else {
            FUN_1454e7d10(param_1,local_848 + ((longlong)iVar1 >> 1) * 0x100);
          }
          piVar13 = piVar13 + 2;
        }
        if (iVar8 == iVar2) {
          iVar1 = *piVar12;
          if (iVar1 < 1) {
            FUN_1454e77e0(param_1,PTR_DAT_14c7469d8 + ((longlong)-iVar1 >> 1) * 0xc0);
          }
          else {
            FUN_1454e7300(param_1,PTR_DAT_14c7469d8 + ((longlong)iVar1 >> 1) * 0xc0);
          }
          piVar12 = piVar12 + 2;
        }
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    FUN_14259f0c0(&local_bd8,0x390);
    FUN_14259f0c0(&local_e48,0x268);
    FUN_14259f0c0(local_848,0x800);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e68);
}



// FUNCTION 1454e6710 FUN_1454e6710 body=27 status=ok
// SIG undefined FUN_1454e6710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e6710(undefined8 param_1)

{
  FUN_14259f0c0(param_1,0x100);
  return;
}



// FUNCTION 1454e6730 FUN_1454e6730 body=652 status=ok
// SIG undefined FUN_1454e6730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e6730(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [64];
  undefined1 local_1d8 [64];
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined8 local_118 [8];
  undefined1 local_d8 [64];
  undefined1 local_98 [128];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454e6748;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar15 = 2;
  puVar14 = local_118;
  do {
    uVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    *puVar14 = *param_2;
    puVar14[1] = uVar9;
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    puVar14[2] = uVar10;
    puVar14[3] = uVar11;
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar14[4] = uVar9;
    puVar14[5] = uVar12;
    uVar9 = param_2[8];
    uVar12 = param_2[9];
    puVar14[6] = uVar10;
    puVar14[7] = uVar11;
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    puVar14[8] = uVar9;
    puVar14[9] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar14[10] = uVar10;
    puVar14[0xb] = uVar11;
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar14 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar14 + 100) = uVar2;
    *(undefined4 *)(puVar14 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
    *(undefined4 *)(puVar14 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x74) = uVar6;
    *(undefined4 *)(puVar14 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar8;
    lVar15 = lVar15 + -1;
    puVar14 = puVar14 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar15 != 0);
  FUN_1455d82c0(local_218,local_118);
  FUN_1455d82c0(local_1d8,local_d8);
  FUN_1455d75d0(&local_258,local_218,local_1d8);
  FUN_1455d75d0(&local_298,local_d8,local_118);
  FUN_1455d82c0(local_198,&local_298);
  FUN_1455d7600(local_198,local_198,&local_258);
  FUN_1455d7600(&local_298,local_1d8,local_218);
  FUN_1455d82c0(local_218,local_98);
  FUN_1455d75d0(local_1d8,local_218,local_218);
  FUN_1455d7600(local_1d8,local_1d8,&local_298);
  FUN_1455d7e10(local_218,local_1d8,local_198);
  FUN_1455d7e10(local_198,&local_298,&local_258);
  FUN_1455d7e10(&local_298,&local_258,local_1d8);
  FUN_14259f0c0(&local_258,0x40);
  FUN_1455d82c0(local_158,&local_298);
  FUN_1455d7630(&local_258,local_158);
  FUN_1455d82c0(local_158,&local_258);
  FUN_1455d7e10(&local_258,local_158,&local_298);
  local_298 = local_258;
  uStack_290 = uStack_250;
  local_288 = local_248;
  uStack_280 = uStack_240;
  local_278 = local_238;
  uStack_274 = uStack_234;
  uStack_270 = uStack_230;
  uStack_26c = uStack_22c;
  local_268 = local_228;
  uStack_264 = uStack_224;
  uStack_260 = uStack_220;
  uStack_25c = uStack_21c;
  FUN_1455d7e10(local_1d8,local_218,&local_298);
  FUN_1455d7e10(local_218,local_198,&local_298);
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1455d7c60(param_1,local_218,1);
  bVar13 = FUN_1455d7b60(local_1d8);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar13 & 0x80;
  FUN_14259f0c0(local_218,0x40);
  FUN_14259f0c0(local_198,0x40);
  FUN_14259f0c0(&local_298,0x40);
  FUN_14259f0c0(local_1d8,0x40);
  FUN_14259f0c0(local_118,0x100);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_2b8);
}



// FUNCTION 1454e69d0 FUN_1454e69d0 body=664 status=ok
// SIG undefined FUN_1454e69d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e69d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454e69ef;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_50 = *(byte *)(param_2 + 7) & 0x7f;
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(byte *)(param_2 + 7) & 0x80;
  local_58 = param_2[6];
  FUN_1455d7d10(param_1 + 0x40,&local_88,1);
  FUN_1455d82c0(param_1,param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  FUN_1455d7600(puVar1,&DAT_149d93fc0,param_1);
  lVar2 = param_1 + 0xc0;
  FUN_1455d80d0(lVar2,param_1,0x98a9);
  FUN_1455d7600(lVar2,&DAT_149d93f80,lVar2);
  FUN_1455d7600(lVar2,&DAT_149d93fc0,lVar2);
  FUN_1455d7e10(param_1,puVar1,lVar2);
  FUN_1455d7630(lVar2,param_1);
  FUN_1455d7e10(param_1,lVar2,puVar1);
  uVar3 = FUN_1455d7b60(param_1);
  FUN_1454e52c0(param_1,0xffffffffU - ((int)(uVar4 - 1 & ~uVar4) >> 0x1f) ^ uVar3);
  *puVar1 = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  FUN_1455d82c0(local_c8,param_1);
  FUN_1455d82c0(local_188,param_1 + 0x40);
  FUN_1455d75d0(local_108,local_c8,local_188);
  FUN_1455d75d0(lVar2,param_1 + 0x40,param_1);
  FUN_1455d82c0(local_148,lVar2);
  FUN_1455d7600(local_148,local_148,local_108);
  FUN_1455d7600(lVar2,local_188,local_c8);
  FUN_1455d82c0(param_1,puVar1);
  FUN_1455d75d0(puVar1,param_1,param_1);
  FUN_1455d7600(local_188,puVar1,local_108);
  FUN_1455d7e10(param_1,local_188,local_148);
  FUN_1455d7e10(puVar1,lVar2,local_188);
  FUN_1455d7e10(param_1 + 0x40,lVar2,local_108);
  FUN_1455d7e10(lVar2,local_148,local_108);
  FUN_14259f0c0(local_188,0x40);
  FUN_14259f0c0(local_148,0x40);
  FUN_14259f0c0(local_c8,0x40);
  FUN_14259f0c0(local_108,0x40);
  FUN_14259f0c0(&local_88,0x39);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1454e6c90 FUN_1454e6c90 body=42 status=ok
// SIG undefined FUN_1454e6c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454e6c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1454e54c0(param_1,param_3,param_2,param_4,0x1454e6c9a);
  return iVar1 == -1;
}



// FUNCTION 1454e6cc0 FUN_1454e6cc0 body=22 status=ok
// SIG undefined FUN_1454e6cc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e6cc0(void)

{
  FUN_1454e5fd0();
  return;
}



// FUNCTION 1454e6ce0 FUN_1454e6ce0 body=991 status=ok
// SIG undefined FUN_1454e6ce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1454e6ce0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int aiStack_1f8 [22];
  undefined *puStack_1a0;
  undefined1 auStack_198 [32];
  int local_178 [15];
  undefined1 local_13c [20];
  int local_128 [16];
  int local_e8 [4];
  undefined1 auStack_d8 [44];
  undefined1 local_ac [20];
  int local_98 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puStack_1a0 = (undefined *)0x1454e6d34;
  FUN_1455d82c0(local_e8);
  puStack_1a0 = (undefined *)0x1454e6d42;
  FUN_1455d82c0(local_178,param_2 + 0x40);
  uVar15 = 0;
  lVar12 = 2;
  uVar11 = uVar15;
  do {
    iVar14 = *(int *)((longlong)local_e8 + uVar11 + 4);
    iVar2 = *(int *)((longlong)local_e8 + uVar11 + 8);
    iVar3 = *(int *)(auStack_d8 + (uVar11 - 4));
    iVar4 = *(int *)((longlong)local_178 + uVar11 + 4);
    iVar5 = *(int *)((longlong)local_178 + uVar11 + 8);
    iVar6 = *(int *)((longlong)local_178 + uVar11 + 0xc);
    iVar7 = *(int *)((longlong)local_178 + uVar11 + 0x10);
    iVar8 = *(int *)((longlong)local_178 + uVar11 + 0x14);
    iVar9 = *(int *)((longlong)local_178 + uVar11 + 0x18);
    iVar10 = *(int *)((longlong)local_178 + uVar11 + 0x1c);
    auVar18 = *(undefined1 (*) [16])(auStack_d8 + uVar11);
    *(int *)((longlong)local_98 + uVar11) =
         *(int *)((longlong)local_178 + uVar11) + *(int *)((longlong)local_e8 + uVar11);
    *(int *)((longlong)local_98 + uVar11 + 4) = iVar4 + iVar14;
    *(int *)((longlong)local_98 + uVar11 + 8) = iVar5 + iVar2;
    *(int *)((longlong)local_98 + uVar11 + 0xc) = iVar6 + iVar3;
    *(int *)((longlong)local_98 + uVar11 + 0x10) = iVar7 + auVar18._0_4_;
    *(int *)((longlong)local_98 + uVar11 + 0x14) = iVar8 + auVar18._4_4_;
    *(int *)((longlong)local_98 + uVar11 + 0x18) = iVar9 + auVar18._8_4_;
    *(int *)((longlong)local_98 + uVar11 + 0x1c) = iVar10 + auVar18._12_4_;
    lVar12 = lVar12 + -1;
    uVar11 = uVar11 + 0x20;
  } while (lVar12 != 0);
  puVar1 = (undefined1 *)(param_1 + 0xc0);
  puStack_1a0 = (undefined *)0x1454e6d9c;
  FUN_1454e5010(puVar1,param_2 + 0x40,param_2);
  puStack_1a0 = (undefined *)0x1454e6da9;
  FUN_1455d82c0(local_128,puVar1);
  lVar12 = 2;
  uVar11 = uVar15;
  do {
    iVar14 = *(int *)((longlong)local_98 + uVar11 + 4);
    iVar2 = *(int *)((longlong)local_98 + uVar11 + 8);
    iVar3 = *(int *)((longlong)local_98 + uVar11 + 0xc);
    iVar4 = *(int *)((longlong)local_98 + uVar11 + 0x10);
    iVar5 = *(int *)((longlong)local_98 + uVar11 + 0x14);
    iVar6 = *(int *)((longlong)local_98 + uVar11 + 0x18);
    iVar7 = *(int *)((longlong)local_98 + uVar11 + 0x1c);
    *(int *)((longlong)local_128 + uVar11) =
         *(int *)((longlong)local_128 + uVar11) - *(int *)((longlong)local_98 + uVar11);
    *(int *)((longlong)local_128 + uVar11 + 4) = *(int *)((longlong)local_128 + uVar11 + 4) - iVar14
    ;
    *(int *)((longlong)local_128 + uVar11 + 8) = *(int *)((longlong)local_128 + uVar11 + 8) - iVar2;
    *(int *)((longlong)local_128 + uVar11 + 0xc) =
         *(int *)((longlong)local_128 + uVar11 + 0xc) - iVar3;
    *(int *)((longlong)local_128 + uVar11 + 0x10) =
         *(int *)((longlong)local_128 + uVar11 + 0x10) - iVar4;
    *(int *)((longlong)local_128 + uVar11 + 0x14) =
         *(int *)((longlong)local_128 + uVar11 + 0x14) - iVar5;
    *(int *)((longlong)local_128 + uVar11 + 0x18) =
         *(int *)((longlong)local_128 + uVar11 + 0x18) - iVar6;
    *(int *)((longlong)local_128 + uVar11 + 0x1c) =
         *(int *)((longlong)local_128 + uVar11 + 0x1c) - iVar7;
    lVar12 = lVar12 + -1;
    uVar11 = uVar11 + 0x20;
  } while (lVar12 != 0);
  piVar13 = local_128;
  uVar11 = uVar15;
  do {
    iVar14 = (int)uVar11;
    auVar18._0_4_ = -(uint)(iVar14 == 8);
    auVar18._4_4_ = -(uint)(iVar14 == 7);
    auVar18._8_4_ = -(uint)(iVar14 == 6);
    auVar18._12_4_ = -(uint)(iVar14 == 5);
    uVar11 = (ulonglong)(iVar14 + 8U);
    auVar18 = ~auVar18 & _DAT_149d94130 | _DAT_149d94120 & auVar18;
    auVar19._0_4_ = -(uint)(iVar14 == 4);
    auVar19._4_4_ = -(uint)(iVar14 == 3);
    auVar19._8_4_ = -(uint)(iVar14 == 2);
    auVar19._12_4_ = -(uint)(iVar14 == 1);
    *piVar13 = auVar18._0_4_ + *piVar13;
    piVar13[1] = auVar18._4_4_ + piVar13[1];
    piVar13[2] = auVar18._8_4_ + piVar13[2];
    piVar13[3] = auVar18._12_4_ + piVar13[3];
    auVar19 = ~auVar19 & _DAT_149d94130 | _DAT_149d94120 & auVar19;
    auVar18 = *(undefined1 (*) [16])(piVar13 + 4);
    piVar13[4] = auVar19._0_4_ + auVar18._0_4_;
    piVar13[5] = auVar19._4_4_ + auVar18._4_4_;
    piVar13[6] = auVar19._8_4_ + auVar18._8_4_;
    piVar13[7] = auVar19._12_4_ + auVar18._12_4_;
    piVar13 = piVar13 + 8;
  } while (iVar14 + 8U < 0x10);
  puStack_1a0 = (undefined *)0x1454e6e9f;
  FUN_1454e51f0(local_128);
  if (((local_ac < puVar1) || ((int *)(param_1 + 0xfcU) < local_e8)) &&
     ((local_13c < puVar1 || ((int *)(param_1 + 0xfcU) < local_178)))) {
    lVar12 = 2;
    uVar11 = uVar15;
    do {
      iVar14 = *(int *)((longlong)local_e8 + uVar11 + 4);
      iVar2 = *(int *)((longlong)local_e8 + uVar11 + 8);
      iVar3 = *(int *)(auStack_d8 + (uVar11 - 4));
      iVar4 = *(int *)((longlong)local_178 + uVar11 + 4);
      iVar5 = *(int *)((longlong)local_178 + uVar11 + 8);
      iVar6 = *(int *)((longlong)local_178 + uVar11 + 0xc);
      iVar7 = *(int *)((longlong)local_178 + uVar11 + 0x10);
      iVar8 = *(int *)((longlong)local_178 + uVar11 + 0x14);
      iVar9 = *(int *)((longlong)local_178 + uVar11 + 0x18);
      iVar10 = *(int *)((longlong)local_178 + uVar11 + 0x1c);
      auVar18 = *(undefined1 (*) [16])(auStack_d8 + uVar11);
      piVar13 = (int *)(puVar1 + uVar11);
      *piVar13 = *(int *)((longlong)local_178 + uVar11) - *(int *)((longlong)local_e8 + uVar11);
      piVar13[1] = iVar4 - iVar14;
      piVar13[2] = iVar5 - iVar2;
      piVar13[3] = iVar6 - iVar3;
      piVar13 = (int *)(param_1 + 0xb0 + uVar11 + 0x20);
      *piVar13 = iVar7 - auVar18._0_4_;
      piVar13[1] = iVar8 - auVar18._4_4_;
      piVar13[2] = iVar9 - auVar18._8_4_;
      piVar13[3] = iVar10 - auVar18._12_4_;
      lVar12 = lVar12 + -1;
      uVar11 = uVar11 + 0x20;
    } while (lVar12 != 0);
  }
  else {
    lVar12 = 0x10;
    uVar11 = uVar15;
    do {
      *(int *)(puVar1 + uVar11) =
           *(int *)((longlong)local_178 + uVar11) - *(int *)((longlong)local_e8 + uVar11);
      uVar11 = uVar11 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puStack_1a0 = (undefined *)0x1454e6f33;
  FUN_1454e5150(puVar1,2);
  puStack_1a0 = (undefined *)0x1454e6f3b;
  FUN_1454e51f0(puVar1);
  puStack_1a0 = (undefined *)0x1454e6f4a;
  FUN_1455d82c0(param_1,param_2 + 0x80);
  puStack_1a0 = (undefined *)0x1454e6f5c;
  FUN_1454e5010(param_1 + 0x80,param_1,param_1);
  lVar12 = 4;
  piVar13 = (int *)(param_1 + 0x80);
  do {
    *(int *)(((longlong)aiStack_1f8 - param_1) + (longlong)piVar13) = *piVar13 - piVar13[0x10];
    *(int *)((longlong)aiStack_1f8 + (4 - param_1) + (longlong)piVar13) = piVar13[1] - piVar13[0x11]
    ;
    *(int *)((longlong)aiStack_1f8 + (8 - param_1) + (longlong)piVar13) = piVar13[2] - piVar13[0x12]
    ;
    *(int *)((longlong)aiStack_1f8 + (0xc - param_1) + (longlong)piVar13) =
         piVar13[3] - piVar13[0x13];
    piVar13 = piVar13 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  piVar13 = local_178;
  do {
    iVar14 = (int)uVar15;
    auVar16._0_4_ = -(uint)(iVar14 == 8);
    auVar16._4_4_ = -(uint)(iVar14 == 7);
    auVar16._8_4_ = -(uint)(iVar14 == 6);
    auVar16._12_4_ = -(uint)(iVar14 == 5);
    uVar15 = (ulonglong)(iVar14 + 8U);
    auVar18 = _DAT_149d94140 & auVar16 | ~auVar16 & _DAT_149d94150;
    auVar17._0_4_ = -(uint)(iVar14 == 4);
    auVar17._4_4_ = -(uint)(iVar14 == 3);
    auVar17._8_4_ = -(uint)(iVar14 == 2);
    auVar17._12_4_ = -(uint)(iVar14 == 1);
    *piVar13 = auVar18._0_4_ + *piVar13;
    piVar13[1] = auVar18._4_4_ + piVar13[1];
    piVar13[2] = auVar18._8_4_ + piVar13[2];
    piVar13[3] = auVar18._12_4_ + piVar13[3];
    auVar19 = _DAT_149d94140 & auVar17 | ~auVar17 & _DAT_149d94150;
    auVar18 = *(undefined1 (*) [16])(piVar13 + 4);
    piVar13[4] = auVar19._0_4_ + auVar18._0_4_;
    piVar13[5] = auVar19._4_4_ + auVar18._4_4_;
    piVar13[6] = auVar19._8_4_ + auVar18._8_4_;
    piVar13[7] = auVar19._12_4_ + auVar18._12_4_;
    piVar13 = piVar13 + 8;
  } while (iVar14 + 8U < 0x10);
  puStack_1a0 = (undefined *)0x1454e7067;
  FUN_1454e51f0(local_178);
  puStack_1a0 = (undefined *)0x1454e7079;
  FUN_1455d7e10(param_1,local_178,local_128);
  puStack_1a0 = (undefined *)0x1454e708d;
  FUN_1455d7e10(param_1 + 0x80,puVar1,local_178);
  puStack_1a0 = (undefined *)0x1454e709d;
  FUN_1455d7e10(param_1 + 0x40,puVar1,local_98);
  if (param_3 == 0) {
    puStack_1a0 = (undefined *)0x1454e70b3;
    FUN_1455d7e10(puVar1,local_128,local_98);
  }
                    /* WARNING: Subroutine does not return */
  puStack_1a0 = &UNK_1454e70bf;
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_198);
}



// FUNCTION 1454e70f0 FUN_1454e70f0 body=146 status=ok
// SIG undefined FUN_1454e70f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e70f0(longlong param_1,longlong param_2)

{
  FUN_1455d7600(param_1,param_2 + 0x40,param_2);
  FUN_1455d75d0(param_1 + 0x40,param_2,param_2 + 0x40);
  FUN_1455d80d0(param_1 + 0x80,param_2 + 0xc0,0x13154);
  FUN_1455d7600(param_1 + 0x80,&DAT_149d93f80,param_1 + 0x80);
  FUN_1455d75d0(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}



// FUNCTION 1454e7190 FUN_1454e7190 body=168 status=ok
// SIG undefined FUN_1454e7190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e7190(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e71a2;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1455d75d0(local_68,param_2 + 0x40,param_2);
  FUN_1455d7600(param_1 + 0x40,param_2 + 0x40,param_2);
  FUN_1455d7e10(param_1 + 0xc0,param_1 + 0x40,local_68);
  FUN_1455d7e10(param_1,param_2 + 0xc0,param_1 + 0x40);
  FUN_1455d7e10(param_1 + 0x40,param_2 + 0xc0,local_68);
  FUN_1455d82c0(param_1 + 0x80,param_2 + 0xc0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 1454e7250 FUN_1454e7250 body=162 status=ok
// SIG undefined FUN_1454e7250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e7250(longlong param_1,longlong param_2)

{
  FUN_1455d75d0(param_1 + 0x40,param_2 + 0x40,param_2);
  FUN_1455d7600(param_1,param_2 + 0x40,param_2);
  FUN_1455d7e10(param_1 + 0xc0,param_1 + 0x40,param_1);
  *(undefined8 *)(param_1 + 0x80) = 1;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 1454e7300 FUN_1454e7300 body=1192 status=ok
// SIG undefined FUN_1454e7300(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e7300(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_190;
  int iStack_18c;
  undefined8 local_188;
  longlong local_180;
  undefined1 *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  int local_148 [15];
  int iStack_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_fc [52];
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar17 = (longlong)&local_188 - param_1;
  lVar18 = (longlong)&local_188 + (4 - param_1);
  lVar4 = -param_1;
  piVar9 = (int *)(param_1 + 0x44);
  lVar16 = 4;
  lVar15 = (longlong)&local_180 - param_1;
  lVar13 = 4;
  piVar10 = piVar9;
  local_170 = lVar15;
  local_168 = param_1;
  local_160 = lVar17;
  local_158 = lVar18;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar10) = piVar10[-1] - piVar10[-0x11];
    *(int *)(lVar17 + (longlong)piVar10) = *piVar10 - piVar10[-0x10];
    *(int *)(lVar18 + (longlong)piVar10) = piVar10[1] - piVar10[-0xf];
    *(int *)(lVar15 + (longlong)piVar10) = piVar10[2] - piVar10[-0xe];
    piVar10 = piVar10 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  piVar10 = local_148;
  uVar12 = 0;
  do {
    uVar11 = uVar12 + 8;
    *piVar10 = (~-(uint)(uVar12 == 8) & 0x1ffffffe | -(uint)(uVar12 == 8) & 0x1ffffffc) + *piVar10;
    piVar10[1] = (~-(uint)(uVar12 == 7) & 0x1ffffffe | -(uint)(uVar12 == 7) & 0x1ffffffc) +
                 piVar10[1];
    piVar10[2] = (~-(uint)(uVar12 == 6) & 0x1ffffffe | -(uint)(uVar12 == 6) & 0x1ffffffc) +
                 piVar10[2];
    piVar10[3] = (~-(uint)(uVar12 == 5) & 0x1ffffffe | -(uint)(uVar12 == 5) & 0x1ffffffc) +
                 piVar10[3];
    auVar1 = *(undefined1 (*) [16])(piVar10 + 4);
    piVar10[4] = (~-(uint)(uVar12 == 4) & 0x1ffffffe | -(uint)(uVar12 == 4) & 0x1ffffffc) +
                 auVar1._0_4_;
    piVar10[5] = (~-(uint)(uVar12 == 3) & 0x1ffffffe | -(uint)(uVar12 == 3) & 0x1ffffffc) +
                 auVar1._4_4_;
    piVar10[6] = (~-(uint)(uVar12 == 2) & 0x1ffffffe | -(uint)(uVar12 == 2) & 0x1ffffffc) +
                 auVar1._8_4_;
    piVar10[7] = (~-(uint)(uVar12 == 1) & 0x1ffffffe | -(uint)(uVar12 == 1) & 0x1ffffffc) +
                 auVar1._12_4_;
    piVar10 = piVar10 + 8;
    uVar12 = uVar11;
  } while (uVar11 < 0x10);
  local_198 = param_2;
  local_190 = param_3;
  FUN_1454e51f0(local_148);
  FUN_1455d7e10(&local_108,local_198,local_148);
  lVar13 = 4;
  piVar10 = piVar9;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar10) = piVar10[-0x11] + piVar10[-1];
    *(int *)(lVar17 + (longlong)piVar10) = piVar10[-0x10] + *piVar10;
    *(int *)(lVar18 + (longlong)piVar10) = piVar10[-0xf] + piVar10[1];
    *(int *)(lVar15 + (longlong)piVar10) = piVar10[-0xe] + piVar10[2];
    piVar10 = piVar10 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  local_150 = param_1 + 0x40;
  FUN_1455d7e10(local_150,local_198 + 0x40,local_148);
  FUN_1455d7e10(param_1,local_198 + 0x80,param_1 + 0xc0);
  lVar8 = local_158;
  lVar7 = local_160;
  lVar6 = local_168;
  lVar5 = local_170;
  lVar13 = -param_1;
  local_198 = (longlong)&local_108 + lVar13;
  lVar15 = -param_1;
  local_188 = (longlong)&local_104 + lVar15;
  lVar17 = -param_1;
  local_180 = (longlong)&local_100 + lVar17;
  lVar18 = -param_1;
  local_178 = local_fc + lVar18;
  lVar14 = 4;
  piVar10 = piVar9;
  do {
    *(int *)(((longlong)&iStack_10c - param_1) + (longlong)piVar10) =
         *(int *)((longlong)&local_150 + lVar13 + 4 + (longlong)piVar10) + piVar10[-1];
    *(int *)(((longlong)&local_108 - param_1) + (longlong)piVar10) =
         *(int *)((longlong)local_148 + lVar15 + (longlong)piVar10) + *piVar10;
    *(int *)(((longlong)&local_104 - param_1) + (longlong)piVar10) =
         *(int *)((longlong)local_148 + lVar17 + 4 + (longlong)piVar10) + piVar10[1];
    *(int *)(((longlong)&local_100 - param_1) + (longlong)piVar10) =
         *(int *)((longlong)local_148 + lVar18 + 8 + (longlong)piVar10) + piVar10[2];
    piVar10 = piVar10 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar14 = 4;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar9) =
         piVar9[-1] - *(int *)((longlong)&local_150 + lVar13 + 4 + (longlong)piVar9);
    *(int *)(lVar7 + (longlong)piVar9) =
         *piVar9 - *(int *)((longlong)local_148 + lVar15 + (longlong)piVar9);
    *(int *)(lVar8 + (longlong)piVar9) =
         piVar9[1] - *(int *)((longlong)local_148 + lVar17 + 4 + (longlong)piVar9);
    *(int *)(lVar5 + (longlong)piVar9) =
         piVar9[2] - *(int *)((longlong)local_148 + lVar18 + 8 + (longlong)piVar9);
    piVar9 = piVar9 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  piVar9 = local_148;
  uVar12 = 0;
  do {
    uVar11 = uVar12 + 8;
    *piVar9 = (-(uint)(uVar12 == 8) & 0x1ffffffc | ~-(uint)(uVar12 == 8) & 0x1ffffffe) + *piVar9;
    piVar9[1] = (-(uint)(uVar12 == 7) & 0x1ffffffc | ~-(uint)(uVar12 == 7) & 0x1ffffffe) + piVar9[1]
    ;
    piVar9[2] = (-(uint)(uVar12 == 6) & 0x1ffffffc | ~-(uint)(uVar12 == 6) & 0x1ffffffe) + piVar9[2]
    ;
    piVar9[3] = (-(uint)(uVar12 == 5) & 0x1ffffffc | ~-(uint)(uVar12 == 5) & 0x1ffffffe) + piVar9[3]
    ;
    auVar1 = *(undefined1 (*) [16])(piVar9 + 4);
    piVar9[4] = (-(uint)(uVar12 == 4) & 0x1ffffffc | ~-(uint)(uVar12 == 4) & 0x1ffffffe) +
                auVar1._0_4_;
    piVar9[5] = (-(uint)(uVar12 == 3) & 0x1ffffffc | ~-(uint)(uVar12 == 3) & 0x1ffffffe) +
                auVar1._4_4_;
    piVar9[6] = (-(uint)(uVar12 == 2) & 0x1ffffffc | ~-(uint)(uVar12 == 2) & 0x1ffffffe) +
                auVar1._8_4_;
    piVar9[7] = (-(uint)(uVar12 == 1) & 0x1ffffffc | ~-(uint)(uVar12 == 1) & 0x1ffffffe) +
                auVar1._12_4_;
    piVar9 = piVar9 + 8;
    uVar12 = uVar11;
  } while (uVar11 < 0x10);
  FUN_1454e51f0(local_148);
  local_170 = lVar6 + 0x80;
  FUN_1454e50b0(lVar6 + 0x40,local_170,lVar6);
  FUN_1454e5150(lVar6 + 0x40,2);
  FUN_1454e51f0(lVar6 + 0x40);
  lVar4 = local_150;
  piVar9 = (int *)(lVar6 + 0x84);
  do {
    iVar2 = piVar9[-0x1e];
    iVar3 = piVar9[2];
    *(int *)(local_198 + -0x84 + (longlong)piVar9) = piVar9[-0x21] + piVar9[-1];
    *(int *)(local_188 + -0x84 + (longlong)piVar9) = piVar9[-0x20] + *piVar9;
    *(int *)(local_180 + -0x84 + (longlong)piVar9) = piVar9[-0x1f] + piVar9[1];
    piVar9 = piVar9 + 4;
    *(int *)(local_178 + -0x94 + (longlong)piVar9) = iVar2 + iVar3;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FUN_1455d7e10(local_170,&local_108,local_150);
  lVar13 = local_168;
  FUN_1455d7e10(local_168,lVar4,local_148);
  FUN_1455d7e10(lVar4,&local_108,local_c8);
  if (local_190 == 0) {
    FUN_1455d7e10(lVar13 + 0xc0,local_148,local_c8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1454e77e0 FUN_1454e77e0 body=1272 status=ok
// SIG undefined FUN_1454e77e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_1454e77e0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_190;
  int iStack_18c;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  int aiStack_14c [16];
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int aiStack_fc [13];
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar8 = (longlong)&local_188 - param_1;
  lVar10 = (longlong)&local_188 + (4 - param_1);
  lVar2 = -param_1;
  piVar4 = (int *)(param_1 + 0x44);
  lVar11 = (longlong)&local_180 - param_1;
  lVar9 = 4;
  lVar7 = 4;
  piVar3 = piVar4;
  local_170 = lVar8;
  local_168 = lVar10;
  local_160 = lVar11;
  local_158 = param_1;
  do {
    *(int *)((longlong)piVar3 + (longlong)&iStack_18c + lVar2) = piVar3[-1] - piVar3[-0x11];
    *(int *)((longlong)piVar3 + lVar8) = *piVar3 - piVar3[-0x10];
    *(int *)((longlong)piVar3 + lVar10) = piVar3[1] - piVar3[-0xf];
    *(int *)((longlong)piVar3 + lVar11) = piVar3[2] - piVar3[-0xe];
    piVar3 = piVar3 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  piVar3 = aiStack_14c + 1;
  uVar6 = 0;
  do {
    uVar5 = uVar6 + 8;
    *piVar3 = (~-(uint)(uVar6 == 8) & 0x1ffffffe | -(uint)(uVar6 == 8) & 0x1ffffffc) + *piVar3;
    piVar3[1] = (~-(uint)(uVar6 == 7) & 0x1ffffffe | -(uint)(uVar6 == 7) & 0x1ffffffc) + piVar3[1];
    piVar3[2] = (~-(uint)(uVar6 == 6) & 0x1ffffffe | -(uint)(uVar6 == 6) & 0x1ffffffc) + piVar3[2];
    piVar3[3] = (~-(uint)(uVar6 == 5) & 0x1ffffffe | -(uint)(uVar6 == 5) & 0x1ffffffc) + piVar3[3];
    auVar1 = *(undefined1 (*) [16])(piVar3 + 4);
    piVar3[4] = (~-(uint)(uVar6 == 4) & 0x1ffffffe | -(uint)(uVar6 == 4) & 0x1ffffffc) +
                auVar1._0_4_;
    piVar3[5] = (~-(uint)(uVar6 == 3) & 0x1ffffffe | -(uint)(uVar6 == 3) & 0x1ffffffc) +
                auVar1._4_4_;
    piVar3[6] = (~-(uint)(uVar6 == 2) & 0x1ffffffe | -(uint)(uVar6 == 2) & 0x1ffffffc) +
                auVar1._8_4_;
    piVar3[7] = (~-(uint)(uVar6 == 1) & 0x1ffffffe | -(uint)(uVar6 == 1) & 0x1ffffffc) +
                auVar1._12_4_;
    piVar3 = piVar3 + 8;
    uVar6 = uVar5;
  } while (uVar5 < 0x10);
  local_198 = param_2;
  local_190 = param_3;
  FUN_1454e51f0(aiStack_14c + 1);
  FUN_1455d7e10(&local_108,local_198 + 0x40,aiStack_14c + 1);
  lVar7 = 4;
  piVar3 = piVar4;
  do {
    *(int *)((longlong)piVar3 + (longlong)&iStack_18c + lVar2) = piVar3[-0x11] + piVar3[-1];
    *(int *)((longlong)piVar3 + lVar8) = piVar3[-0x10] + *piVar3;
    *(int *)((longlong)piVar3 + lVar10) = piVar3[-0xf] + piVar3[1];
    *(int *)((longlong)piVar3 + lVar11) = piVar3[-0xe] + piVar3[2];
    piVar3 = piVar3 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_1455d7e10(param_1 + 0x40,local_198,aiStack_14c + 1);
  FUN_1455d7e10(param_1,local_198 + 0x80,param_1 + 0xc0);
  lVar7 = local_158;
  local_198 = (longlong)&local_108 + -param_1;
  local_188 = (longlong)&iStack_104 - param_1;
  local_180 = (longlong)aiStack_fc + (-4 - param_1);
  local_178 = (longlong)aiStack_fc - param_1;
  lVar8 = 4;
  piVar3 = piVar4;
  do {
    *(int *)((longlong)piVar3 + ((longlong)&iStack_10c - param_1)) =
         *(int *)((longlong)piVar3 + local_198 + -0x44) + piVar3[-1];
    *(int *)((longlong)piVar3 + ((longlong)&local_108 - param_1)) =
         *(int *)((longlong)piVar3 + local_188 + -0x44) + *piVar3;
    *(int *)((longlong)piVar3 + ((longlong)&iStack_104 - param_1)) =
         *(int *)((longlong)piVar3 + local_180 + -0x44) + piVar3[1];
    *(int *)((longlong)piVar3 + (longlong)aiStack_fc + (-4 - param_1)) =
         *(int *)((longlong)piVar3 + local_178 + -0x44) + piVar3[2];
    piVar3 = piVar3 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = 4;
  do {
    *(int *)((longlong)piVar4 + (longlong)&iStack_18c + lVar2) =
         piVar4[-1] - *(int *)((longlong)aiStack_14c + -param_1 + (longlong)piVar4);
    *(int *)((longlong)piVar4 + local_170) =
         *piVar4 - *(int *)((longlong)piVar4 + local_188 + -0x44);
    *(int *)((longlong)piVar4 + local_168) =
         piVar4[1] - *(int *)((longlong)piVar4 + local_180 + -0x44);
    *(int *)((longlong)piVar4 + local_160) =
         piVar4[2] - *(int *)((longlong)piVar4 + local_178 + -0x44);
    piVar4 = piVar4 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  piVar4 = aiStack_14c + 1;
  uVar6 = 0;
  do {
    uVar5 = uVar6 + 8;
    *piVar4 = (~-(uint)(uVar6 == 8) & 0x1ffffffe | -(uint)(uVar6 == 8) & 0x1ffffffc) + *piVar4;
    piVar4[1] = (~-(uint)(uVar6 == 7) & 0x1ffffffe | -(uint)(uVar6 == 7) & 0x1ffffffc) + piVar4[1];
    piVar4[2] = (~-(uint)(uVar6 == 6) & 0x1ffffffe | -(uint)(uVar6 == 6) & 0x1ffffffc) + piVar4[2];
    piVar4[3] = (~-(uint)(uVar6 == 5) & 0x1ffffffe | -(uint)(uVar6 == 5) & 0x1ffffffc) + piVar4[3];
    auVar1 = *(undefined1 (*) [16])(piVar4 + 4);
    piVar4[4] = (~-(uint)(uVar6 == 4) & 0x1ffffffe | -(uint)(uVar6 == 4) & 0x1ffffffc) +
                auVar1._0_4_;
    piVar4[5] = (~-(uint)(uVar6 == 3) & 0x1ffffffe | -(uint)(uVar6 == 3) & 0x1ffffffc) +
                auVar1._4_4_;
    piVar4[6] = (~-(uint)(uVar6 == 2) & 0x1ffffffe | -(uint)(uVar6 == 2) & 0x1ffffffc) +
                auVar1._8_4_;
    piVar4[7] = (~-(uint)(uVar6 == 1) & 0x1ffffffe | -(uint)(uVar6 == 1) & 0x1ffffffc) +
                auVar1._12_4_;
    piVar4 = piVar4 + 8;
    uVar6 = uVar5;
  } while (uVar5 < 0x10);
  FUN_1454e51f0(aiStack_14c + 1);
  FUN_1454e5010(lVar7 + 0x40,lVar7 + 0x80,lVar7);
  piVar4 = (int *)(lVar7 + 0x84);
  do {
    *(int *)(local_198 + -0x84 + (longlong)piVar4) = piVar4[-1] - piVar4[-0x21];
    *(int *)(local_188 + -0x84 + (longlong)piVar4) = *piVar4 - piVar4[-0x20];
    *(int *)(local_180 + -0x84 + (longlong)piVar4) = piVar4[1] - piVar4[-0x1f];
    *(int *)(local_178 + -0x84 + (longlong)piVar4) = piVar4[2] - piVar4[-0x1e];
    piVar4 = piVar4 + 4;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  piVar4 = &local_108;
  uVar6 = 0;
  do {
    uVar5 = uVar6 + 8;
    *piVar4 = (~-(uint)(uVar6 == 8) & 0x1ffffffe | -(uint)(uVar6 == 8) & 0x1ffffffc) + *piVar4;
    piVar4[1] = (~-(uint)(uVar6 == 7) & 0x1ffffffe | -(uint)(uVar6 == 7) & 0x1ffffffc) + piVar4[1];
    piVar4[2] = (~-(uint)(uVar6 == 6) & 0x1ffffffe | -(uint)(uVar6 == 6) & 0x1ffffffc) + piVar4[2];
    piVar4[3] = (~-(uint)(uVar6 == 5) & 0x1ffffffe | -(uint)(uVar6 == 5) & 0x1ffffffc) + piVar4[3];
    auVar1 = *(undefined1 (*) [16])(piVar4 + 4);
    piVar4[4] = (~-(uint)(uVar6 == 4) & 0x1ffffffe | -(uint)(uVar6 == 4) & 0x1ffffffc) +
                auVar1._0_4_;
    piVar4[5] = (~-(uint)(uVar6 == 3) & 0x1ffffffe | -(uint)(uVar6 == 3) & 0x1ffffffc) +
                auVar1._4_4_;
    piVar4[6] = (~-(uint)(uVar6 == 2) & 0x1ffffffe | -(uint)(uVar6 == 2) & 0x1ffffffc) +
                auVar1._8_4_;
    piVar4[7] = (~-(uint)(uVar6 == 1) & 0x1ffffffe | -(uint)(uVar6 == 1) & 0x1ffffffc) +
                auVar1._12_4_;
    piVar4 = piVar4 + 8;
    uVar6 = uVar5;
  } while (uVar5 < 0x10);
  FUN_1454e51f0(&local_108);
  FUN_1455d7e10(lVar7 + 0x80,&local_108,lVar7 + 0x40);
  FUN_1455d7e10(lVar7,lVar7 + 0x40,aiStack_14c + 1);
  FUN_1455d7e10(lVar7 + 0x40,&local_108,local_c8);
  if (local_190 == 0) {
    FUN_1455d7e10(lVar7 + 0xc0,aiStack_14c + 1,local_c8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_88 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1454e7d10 FUN_1454e7d10 body=144 status=ok
// SIG undefined FUN_1454e7d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e7d10(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e7d22;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1455d7e10(&local_68,param_1 + 0x80,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  FUN_1454e7300(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 1454e7db0 FUN_1454e7db0 body=144 status=ok
// SIG undefined FUN_1454e7db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e7db0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e7dc2;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1455d7e10(&local_68,param_1 + 0x80,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  FUN_1454e77e0(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 1454e7e50 FUN_1454e7e50 body=431 status=ok
// SIG undefined FUN_1454e7e50(void)

int FUN_1454e7e50(undefined8 *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  
  uVar14 = 0;
  uVar13 = (ulonglong)*param_2;
  uVar15 = 1;
  bVar4 = (byte)(param_3 + 1U);
  iVar16 = 0;
  iVar2 = (int)(0x1be / (ulonglong)(param_3 + 1U));
  iVar11 = iVar2 + 1;
  lVar17 = (longlong)iVar11;
  *(undefined4 *)(param_1 + (iVar2 + 2)) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + (longlong)(iVar2 + 2) * 8 + 4) = 0;
  do {
    if (uVar15 < 0x1c) {
      uVar13 = uVar13 + ((*(uint *)(param_2 + (ulonglong)(uVar15 >> 1) * 2) >>
                         (sbyte)((uVar15 & 1) << 4)) << 0x10);
    }
    if ((short)uVar13 != 0) {
      bVar1 = bVar4 & 0x1f;
      uVar10 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      do {
        uVar7 = (uint)uVar13;
        if (uVar7 == 0) {
          iVar12 = 0x20;
        }
        else {
          uVar8 = uVar13 & 0xffffffff;
          bVar18 = (uVar13 & 0xffff) != 0;
          if (bVar18) {
            uVar8 = (ulonglong)(uVar7 << 0x10);
          }
          iVar3 = 0xf;
          if (!bVar18) {
            iVar3 = 0x1f;
          }
          if ((uVar8 & 0xffffff) != 0) {
            uVar8 = (ulonglong)(uint)((int)uVar8 << 8);
            iVar3 = iVar3 + -8;
          }
          if ((uVar8 & 0xfffffff) != 0) {
            uVar8 = (ulonglong)(uint)((int)uVar8 << 4);
            iVar3 = iVar3 + -4;
          }
          uVar5 = (int)uVar8 * 4;
          if (uVar5 != 0) {
            uVar8 = (ulonglong)uVar5;
            iVar3 = iVar3 + -2;
          }
          iVar12 = iVar3 + -1;
          if ((uVar8 & 0x7fffffff) == 0) {
            iVar12 = iVar3;
          }
        }
        uVar7 = uVar7 >> ((byte)iVar12 & 0x1f);
        uVar6 = uVar7 & (1 << (bVar4 & 0x1f)) - 1U;
        uVar5 = uVar6 - uVar10;
        if ((uVar10 & uVar7) == 0) {
          uVar5 = uVar6;
        }
        iVar11 = iVar11 + -1;
        *(uint *)((longlong)param_1 + lVar17 * 8 + 4) = uVar5;
        uVar13 = uVar13 - (longlong)(int)((1 << ((byte)iVar12 & 0x1f)) * uVar5);
        *(int *)(param_1 + lVar17) = iVar16 + iVar12;
        lVar17 = lVar17 + -1;
      } while ((short)uVar13 != 0);
    }
    uVar13 = uVar13 >> 0x10;
    uVar15 = uVar15 + 1;
    iVar16 = iVar16 + 0x10;
  } while (uVar15 < 0x1e);
  uVar15 = (iVar2 + 3) - (iVar11 + 1);
  puVar9 = param_1;
  if (uVar15 != 0) {
    do {
      uVar10 = uVar14 + iVar11 + 1;
      uVar14 = uVar14 + 1;
      *puVar9 = param_1[uVar10];
      puVar9 = puVar9 + 1;
    } while (uVar14 < uVar15);
  }
  return uVar15 - 1;
}



// FUNCTION 1454e8000 FUN_1454e8000 body=648 status=ok
// SIG undefined FUN_1454e8000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e8000(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e801b;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1454e70f0();
  if (param_3 != 0) {
    FUN_1454e6ce0(local_228,param_2,0);
    FUN_1455d7600(local_128,local_1e8,local_228);
    FUN_1455d75d0(local_e8,local_228,local_1e8);
    FUN_1455d80d0(local_a8,local_168,0x13154);
    FUN_1455d7600(local_a8,&DAT_149d93f80,local_a8);
    FUN_1455d75d0(local_68,&local_1a8,&local_1a8);
    FUN_1455d7e10(&local_268,&local_1a8,param_1 + 0xc0);
    local_1a8 = local_268;
    uStack_1a0 = uStack_260;
    local_198 = local_258;
    uStack_190 = uStack_250;
    local_188 = local_248;
    uStack_184 = uStack_244;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    local_178 = local_238;
    uStack_174 = uStack_234;
    uStack_170 = uStack_230;
    uStack_16c = uStack_22c;
    FUN_1454e7300(local_228,param_1,0);
    FUN_1455d7600(param_1 + 0x100,local_1e8,local_228);
    FUN_1455d75d0(param_1 + 0x140,local_228,local_1e8);
    FUN_1455d80d0(param_1 + 0x180,local_168,0x13154);
    FUN_1455d7600(param_1 + 0x180,&DAT_149d93f80,param_1 + 0x180);
    FUN_1455d75d0(param_1 + 0x1c0,&local_1a8,&local_1a8);
    iVar1 = 1 << ((byte)param_3 & 0x1f);
    if (2 < iVar1) {
      param_1 = param_1 + 0x280;
      uVar2 = (ulonglong)(iVar1 - 2);
      do {
        FUN_1455d7e10(&local_268,&local_1a8,local_68);
        local_1a8 = local_268;
        uStack_1a0 = uStack_260;
        local_198 = local_258;
        uStack_190 = uStack_250;
        local_188 = local_248;
        uStack_184 = uStack_244;
        uStack_180 = uStack_240;
        uStack_17c = uStack_23c;
        local_178 = local_238;
        uStack_174 = uStack_234;
        uStack_170 = uStack_230;
        uStack_16c = uStack_22c;
        FUN_1454e7300(local_228,local_128,0);
        FUN_1455d7600(param_1 + -0x80,local_1e8,local_228);
        FUN_1455d75d0(param_1 + -0x40,local_228,local_1e8);
        FUN_1455d80d0(param_1,local_168,0x13154);
        FUN_1455d7600(param_1,&DAT_149d93f80,param_1);
        FUN_1455d75d0(param_1 + 0x40,&local_1a8,&local_1a8);
        param_1 = param_1 + 0x100;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_14259f0c0(local_228,0x100);
    FUN_14259f0c0(local_128,0x100);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_288);
}



// FUNCTION 1454e82a0 FUN_1454e82a0 body=80 status=ok
// SIG undefined FUN_1454e82a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454e82a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  
  iVar1 = FUN_1454e84e0(param_1,param_5,param_4,param_2,param_3,0,param_6,param_7,0x1454e82aa);
  return iVar1 == -1;
}



// FUNCTION 1454e82f0 FUN_1454e82f0 body=75 status=ok
// SIG undefined FUN_1454e82f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454e82f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_1454e88e0(param_3,param_4,param_1,param_2,0,param_5,param_6);
  return iVar1 == -1;
}



// FUNCTION 1454e8340 FUN_1454e8340 body=33 status=ok
// SIG undefined FUN_1454e8340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454e8340(void)

{
  int iVar1;
  
  iVar1 = FUN_1454e8370();
  return iVar1 == -1;
}



// FUNCTION 1454e8370 FUN_1454e8370 body=334 status=ok
// SIG undefined FUN_1454e8370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e8370(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [64];
  undefined1 local_158 [256];
  byte local_58 [55];
  byte local_21;
  undefined1 local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454e8385;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = FUN_144ba5700();
  if (lVar2 != 0) {
    uVar3 = FUN_14529da60();
    iVar1 = FUN_144ba5a20(lVar2,uVar3,0);
    if (((iVar1 == 0) || (iVar1 = FUN_144ba5c70(lVar2,param_2,0x39), iVar1 == 0)) ||
       (iVar1 = FUN_144ba5ed0(lVar2,local_58,0x39), iVar1 == 0)) {
      FUN_144ba5800(lVar2);
    }
    else {
      FUN_144ba5800(lVar2);
      local_58[0] = local_58[0] & 0xfc;
      local_21 = local_21 | 0x80;
      local_20 = 0;
      FUN_1455d83c0(local_198,local_58,0x39);
      uVar4 = 1;
      do {
        FUN_1455d8850(local_198,local_198);
        uVar4 = uVar4 * 2;
      } while (uVar4 < 4);
      FUN_1454e60d0(local_158,PTR_DAT_14c7469d0,local_198);
      FUN_1454e6730(param_1,local_158);
      FUN_1455d8940(local_198);
      FUN_1454e6710(local_158);
      FUN_14259f0c0(local_58,0x39);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 1454e84e0 FUN_1454e84e0 body=994 status=ok
// SIG undefined FUN_1454e84e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e84e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined1 local_300 [56];
  undefined1 local_2c8 [56];
  undefined1 local_290 [56];
  undefined1 local_258 [64];
  undefined1 local_218 [256];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  byte local_d8 [55];
  byte local_a1;
  undefined1 local_a0;
  undefined1 local_9f [71];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_318 = param_7;
  local_310 = param_3;
  local_308 = param_1;
  lVar4 = FUN_144ba5700();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (lVar4 == 0) goto LAB_1454e88b3;
  lVar5 = FUN_144ba5700();
  if (lVar5 != 0) {
    uVar6 = FUN_14529da60();
    iVar3 = FUN_144ba5a20(lVar5,uVar6,0);
    if (iVar3 != 0) {
      iVar3 = FUN_144ba5c70(lVar5,param_2,0x39);
      if (iVar3 != 0) {
        iVar3 = FUN_144ba5ed0(lVar5,local_d8,0x72);
        if (iVar3 != 0) {
          FUN_144ba5800(lVar5);
          local_d8[0] = local_d8[0] & 0xfc;
          local_a1 = local_a1 | 0x80;
          local_a0 = 0;
          FUN_1455d83c0(local_258,local_d8,0x39);
          local_328 = param_8;
          iVar3 = FUN_1454e8b10(lVar4,param_6,0,param_7);
          if (iVar3 != 0) {
            iVar3 = FUN_144ba5c70(lVar4,local_9f,0x39);
            if (iVar3 != 0) {
              iVar3 = FUN_144ba5c70(lVar4,param_4,param_5);
              if (iVar3 != 0) {
                FUN_14259f0c0(local_d8,0x72);
                iVar3 = FUN_144ba5ed0(lVar4,local_d8,0x72);
                if (iVar3 != 0) {
                  FUN_1455d83c0(local_290,local_d8,0x72);
                  FUN_14259f0c0(local_d8,0x72);
                  FUN_1455d8850(local_2c8,local_290);
                  uVar1 = 2;
                  do {
                    FUN_1455d8850(local_2c8,local_2c8);
                    uVar1 = uVar1 * 2;
                  } while (uVar1 < 4);
                  FUN_1454e60d0(local_218,PTR_DAT_14c7469d0,local_2c8);
                  FUN_1454e6730(&local_118,local_218);
                  FUN_1454e6710(local_218);
                  FUN_1455d8940(local_2c8);
                  local_328 = param_8;
                  iVar3 = FUN_1454e8b10(lVar4,param_6,0,local_318);
                  if (iVar3 != 0) {
                    iVar3 = FUN_144ba5c70(lVar4,&local_118,0x39);
                    if (iVar3 != 0) {
                      iVar3 = FUN_144ba5c70(lVar4,local_310,0x39);
                      if (iVar3 != 0) {
                        iVar3 = FUN_144ba5c70(lVar4,param_4,param_5);
                        if (iVar3 != 0) {
                          iVar3 = FUN_144ba5ed0(lVar4,local_d8,0x72);
                          if (iVar3 != 0) {
                            FUN_1455d83c0(local_300,local_d8,0x72);
                            FUN_14259f0c0(local_d8,0x72);
                            FUN_1455d8820(local_300,local_300,local_258);
                            FUN_1455d86a0(local_300,local_300,local_290);
                            puVar2 = local_308;
                            FUN_14259f0c0(local_308,0x72);
                            *puVar2 = local_118;
                            puVar2[1] = uStack_110;
                            puVar2[2] = local_108;
                            puVar2[3] = uStack_100;
                            *(undefined4 *)(puVar2 + 4) = (undefined4)local_f8;
                            *(undefined4 *)((longlong)puVar2 + 0x24) = local_f8._4_4_;
                            *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_f0;
                            *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_f0._4_4_;
                            puVar2[6] = local_e8;
                            *(undefined1 *)(puVar2 + 7) = local_e0;
                            FUN_1455d8630((longlong)puVar2 + 0x39,local_300);
                            FUN_1455d8940(local_258);
                            FUN_1455d8940(local_290);
                            FUN_1455d8940(local_300);
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_1454e8898;
              }
            }
          }
          FUN_14259f0c0(local_d8,0x72);
          goto LAB_1454e8898;
        }
      }
    }
    FUN_144ba5800(lVar5);
  }
LAB_1454e8898:
  FUN_144ba5800(lVar4);
LAB_1454e88b3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_348);
}



// FUNCTION 1454e88e0 FUN_1454e88e0 body=539 status=ok
// SIG undefined FUN_1454e88e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e88e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,byte param_7)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  undefined1 local_338 [56];
  undefined1 local_300 [56];
  undefined1 local_2c8 [256];
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar4 = 0x38;
  lVar3 = 0x38;
  do {
    bVar1 = (&DAT_149d94160)[lVar3];
    bVar2 = *(byte *)(param_1 + lVar3 + 0x39);
    if (bVar2 >= bVar1 && bVar2 != bVar1) goto LAB_1454e8aeb;
    if (bVar2 < bVar1) break;
    iVar4 = iVar4 + -1;
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  if (((-1 < iVar4) && (iVar4 = FUN_1454e69d0(local_2c8,param_2), iVar4 == -1)) &&
     (iVar4 = FUN_1454e69d0(local_1c8,param_1), iVar4 == -1)) {
    lVar3 = FUN_144ba5700();
    if (lVar3 != 0) {
      local_348 = (ulonglong)param_7;
      iVar4 = FUN_1454e8b10(lVar3,param_5,0,param_6);
      if (((iVar4 != 0) && (iVar4 = FUN_144ba5c70(lVar3,param_1,0x39), iVar4 != 0)) &&
         ((iVar4 = FUN_144ba5c70(lVar3,param_2,0x39), iVar4 != 0 &&
          ((iVar4 = FUN_144ba5c70(lVar3,param_3,param_4), iVar4 != 0 &&
           (iVar4 = FUN_144ba5ed0(lVar3,local_c8,0x72), iVar4 != 0)))))) {
        FUN_144ba5800(lVar3);
        FUN_1455d83c0(local_338,local_c8,0x72);
        FUN_14259f0c0(local_c8,0x72);
        FUN_1455d8780(local_338,&DAT_149dcc438,local_338);
        FUN_1455d83c0(local_300,param_1 + 0x39,0x39);
        FUN_1454e6410(local_2c8,local_300,local_2c8,local_338);
        FUN_1454e5440(local_2c8,local_1c8);
        goto LAB_1454e8aeb;
      }
    }
    FUN_144ba5800(lVar3);
  }
LAB_1454e8aeb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_368);
}



// FUNCTION 1454e8b10 FUN_1454e8b10 body=232 status=ok
// SIG undefined FUN_1454e8b10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e8b10(undefined8 param_1,char param_2,char param_3,undefined8 param_4,ulonglong param_5
                  )

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  char local_28;
  undefined1 local_27;
  char local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  builtin_strncpy(local_20,"SigEd448",9);
  if (param_5 < 0x100) {
    local_27 = (undefined1)param_5;
    local_28 = ((param_2 != '\0') + '\x01') - (param_3 == '\0');
    uVar3 = FUN_14529da60();
    iVar2 = FUN_144ba5a20(param_1,uVar3);
    if (iVar2 != 0) {
      lVar4 = -1;
      do {
        lVar1 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (local_20[lVar1] != '\0');
      iVar2 = FUN_144ba5c70(param_1,local_20);
      if ((iVar2 != 0) && (iVar2 = FUN_144ba5c70(param_1,&local_28,2), iVar2 != 0)) {
        FUN_144ba5c70(param_1,param_4,param_5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1454e8c10 FUN_1454e8c10 body=310 status=ok
// SIG undefined FUN_1454e8c10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454e8c10(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454e8c1f;
  local_34 = 4;
  local_38 = param_3;
  local_30 = param_2;
  iVar2 = FUN_144efe990(&local_38,0);
  iVar3 = FUN_144bae400(param_6);
  if (iVar2 <= iVar3 + -0xb) {
    lVar4 = FUN_144ea64e0(iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x25);
    if (lVar4 == 0) {
      FUN_144ba24f0(4,0x76,0x41,"crypto\\rsa\\rsa_saos.c",0x27);
      bVar1 = false;
    }
    else {
      local_res10 = lVar4;
      FUN_144efe990(&local_38,&local_res10);
      iVar2 = FUN_144bae450(iVar2,lVar4,param_4,param_6,1);
      bVar1 = 0 < iVar2;
      if (bVar1) {
        *param_5 = iVar2;
      }
      FUN_144ea66f0(lVar4,iVar3 + 1,"crypto\\rsa\\rsa_saos.c",0x32);
    }
    return bVar1;
  }
  FUN_144ba24f0(4,0x76,0x70,"crypto\\rsa\\rsa_saos.c",0x22);
  return false;
}



// FUNCTION 1454e8d50 FUN_1454e8d50 body=1017 status=ok
// SIG undefined FUN_1454e8d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e8d50(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  byte *param_5,int param_6)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar15;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  byte bVar21;
  size_t _Size;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_c8;
  int local_c0;
  byte *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  ulonglong *puVar14;
  ulonglong *puVar16;
  
  uStack_48 = 0x1454e8d67;
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar16 = (ulonglong *)0x0;
  uVar15 = 0;
  local_b0 = param_3;
  local_a8 = param_2;
  local_c8 = FUN_144ba5700();
  lVar19 = local_c8;
  puVar8 = (ulonglong *)0x0;
  if (local_c8 == 0) goto LAB_1454e9119;
  if (param_4 == 0) {
    param_4 = param_3;
  }
  iVar5 = FUN_144ba3cd0(param_3);
  lVar19 = local_c8;
  puVar8 = puVar16;
  local_c0 = iVar5;
  if (iVar5 < 0) goto LAB_1454e9119;
  iVar7 = iVar5;
  if ((param_6 == -1) || (iVar7 = param_6, -4 < param_6)) {
    cVar4 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
    bVar21 = cVar4 - 1U & 7;
    iVar6 = FUN_144bae400(param_1);
    if ((*param_5 & (byte)(0xff << bVar21)) != 0) {
      local_d8 = CONCAT44(local_d8._4_4_,0x46);
      FUN_144ba24f0(4,0x7e,0x85,"crypto\\rsa\\rsa_pss.c");
      lVar19 = local_c8;
      goto LAB_1454e9119;
    }
    if (bVar21 == 0) {
      param_5 = param_5 + 1;
      iVar6 = iVar6 + -1;
    }
    if (iVar6 < iVar5 + 2) {
      local_d8 = CONCAT44(local_d8._4_4_,0x4e);
LAB_1454e8e7d:
      uVar20 = 0x6d;
    }
    else {
      iVar5 = iVar6 - iVar5;
      if (iVar7 == -3) {
        iVar7 = iVar5 + -2;
      }
      else if (iVar5 + -2 < iVar7) {
        local_d8 = CONCAT44(local_d8._4_4_,0x54);
        goto LAB_1454e8e7d;
      }
      if (param_5[iVar6 + -1] == 0xbc) {
        uVar17 = iVar5 - 1;
        lVar18 = (longlong)(int)uVar17;
        local_b8 = param_5 + lVar18;
        puVar8 = (ulonglong *)FUN_144ea64e0(lVar18,"crypto\\rsa\\rsa_pss.c",0x5d);
        if (puVar8 == (ulonglong *)0x0) {
          local_d8 = CONCAT44(local_d8._4_4_,0x5f);
          uVar20 = 0x41;
        }
        else {
          _Size = (size_t)local_c0;
          local_d8 = param_4;
          iVar6 = FUN_1452a9030(puVar8,uVar17,local_b8,local_c0);
          lVar19 = local_c8;
          if (iVar6 < 0) goto LAB_1454e9119;
          uVar13 = uVar15;
          if (((0 < (int)uVar17) && (0x1f < uVar17)) &&
             ((param_5 + (iVar5 + -2) < puVar8 ||
              ((byte *)((longlong)(iVar5 + -2) + (longlong)puVar8) < param_5)))) {
            uVar11 = uVar17 & 0x8000001f;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
            }
            puVar10 = puVar8;
            puVar14 = puVar16;
            do {
              uVar13 = (int)puVar14 + 0x20;
              puVar14 = (ulonglong *)(ulonglong)uVar13;
              puVar2 = (ulonglong *)(((longlong)param_5 - (longlong)puVar8) + (longlong)puVar10);
              uVar3 = puVar2[1];
              puVar1 = puVar10 + 4;
              *puVar10 = *puVar2 ^ *puVar10;
              puVar10[1] = uVar3 ^ puVar10[1];
              puVar2 = (ulonglong *)
                       (((longlong)param_5 - (longlong)puVar8) + -0x10 + (longlong)puVar1);
              uVar3 = puVar2[1];
              puVar10[2] = *puVar2 ^ puVar10[2];
              puVar10[3] = uVar3 ^ puVar10[3];
              puVar10 = puVar1;
            } while ((longlong)puVar1 - (longlong)puVar8 < (longlong)(int)(uVar17 - uVar11));
          }
          lVar9 = (longlong)(int)uVar13;
          if (lVar9 < lVar18) {
            pbVar12 = (byte *)(lVar9 + (longlong)puVar8);
            lVar18 = lVar18 - lVar9;
            do {
              *pbVar12 = *pbVar12 ^ pbVar12[(longlong)param_5 - (longlong)puVar8];
              pbVar12 = pbVar12 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          if (bVar21 != 0) {
            *(byte *)puVar8 = (byte)*puVar8 & (byte)(0xff >> (8 - bVar21 & 0x1f));
          }
          if ((byte)*puVar8 == 0) {
            puVar10 = puVar8;
            do {
              uVar15 = (uint)puVar16;
              if (iVar5 + -2 <= (int)uVar15) break;
              puVar10 = (ulonglong *)((longlong)puVar10 + 1);
              uVar15 = uVar15 + 1;
              puVar16 = (ulonglong *)(ulonglong)uVar15;
            } while (*(byte *)puVar10 == 0);
          }
          iVar5 = uVar15 + 1;
          if (*(byte *)((longlong)(int)uVar15 + (longlong)puVar8) == 1) {
            if ((iVar7 == -2) || (uVar17 - iVar5 == iVar7)) {
              iVar7 = FUN_144ba5a20(local_c8,local_b0,0);
              if ((((iVar7 != 0) &&
                   ((iVar7 = FUN_144ba5c70(lVar19,&DAT_149d94248,8), iVar7 != 0 &&
                    (iVar7 = FUN_144ba5c70(lVar19,local_a8,_Size), iVar7 != 0)))) &&
                  ((uVar17 - iVar5 == 0 ||
                   (iVar5 = FUN_144ba5c70(lVar19,(byte *)((longlong)iVar5 + (longlong)puVar8),
                                          (longlong)(int)(uVar17 - iVar5)), iVar5 != 0)))) &&
                 ((iVar5 = FUN_144ba5ca0(lVar19,local_98,0), iVar5 != 0 &&
                  (iVar5 = memcmp(local_98,local_b8,_Size), iVar5 != 0)))) {
                local_d8 = CONCAT44(local_d8._4_4_,0x7c);
                FUN_144ba24f0(4,0x7e,0x68,"crypto\\rsa\\rsa_pss.c");
              }
              goto LAB_1454e9119;
            }
            local_d8 = CONCAT44(local_d8._4_4_,0x6e);
            goto LAB_1454e8e40;
          }
          local_d8 = CONCAT44(local_d8._4_4_,0x6a);
          uVar20 = 0x87;
        }
      }
      else {
        local_d8 = CONCAT44(local_d8._4_4_,0x58);
        uVar20 = 0x86;
        puVar8 = (ulonglong *)0x0;
      }
    }
    FUN_144ba24f0(4,0x7e,uVar20,"crypto\\rsa\\rsa_pss.c");
    lVar19 = local_c8;
  }
  else {
    local_d8 = CONCAT44(local_d8._4_4_,0x3f);
LAB_1454e8e40:
    FUN_144ba24f0(4,0x7e,0x88,"crypto\\rsa\\rsa_pss.c");
    lVar19 = local_c8;
  }
LAB_1454e9119:
  FUN_144ea6530(puVar8,"crypto\\rsa\\rsa_pss.c",0x83);
  FUN_144ba5800(lVar19);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1454e9160 FUN_1454e9160 body=876 status=ok
// SIG undefined FUN_1454e9160(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_1454e9160(longlong param_1,byte *param_2,undefined8 param_3,longlong param_4,
                    longlong param_5,uint param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar14;
  byte bVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 uVar19;
  longlong local_48;
  byte *pbVar13;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  pbVar13 = (byte *)0x0;
  uVar11 = 0;
  pbVar12 = (byte *)0x0;
  local_48 = 0;
  lVar18 = param_4;
  if (param_5 != 0) {
    lVar18 = param_5;
  }
  uVar4 = FUN_144ba3cd0(param_4);
  pbVar14 = pbVar13;
  pbVar7 = pbVar13;
  if ((int)uVar4 < 0) goto LAB_1454e9490;
  uVar10 = uVar4;
  if (param_6 != 0xffffffff) {
    if (param_6 == 0xfffffffe) {
      uVar10 = 0xfffffffd;
    }
    else {
      uVar10 = param_6;
      if ((int)param_6 < -3) {
        FUN_144ba24f0(4,0x98,0x88,"crypto\\rsa\\rsa_pss.c",CONCAT44(uVar17,0xae));
        pbVar14 = pbVar12;
        pbVar7 = (byte *)0x0;
        goto LAB_1454e9490;
      }
    }
  }
  cVar3 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
  bVar15 = cVar3 - 1U & 7;
  iVar5 = FUN_144bae400(param_1);
  if (bVar15 == 0) {
    *param_2 = 0;
    param_2 = param_2 + 1;
    iVar5 = iVar5 + -1;
  }
  param_6 = uVar10;
  if (iVar5 < (int)(uVar4 + 2)) {
    uVar19 = CONCAT44(uVar17,0xba);
LAB_1454e9211:
    uVar17 = 0x6e;
LAB_1454e9217:
    FUN_144ba24f0(4,0x98,uVar17,"crypto\\rsa\\rsa_pss.c",uVar19);
  }
  else {
    iVar16 = iVar5 - uVar4;
    if (uVar10 == 0xfffffffd) {
      param_6 = iVar16 - 2;
    }
    else if (iVar16 + -2 < (int)uVar10) {
      uVar19 = CONCAT44(uVar17,0xc1);
      goto LAB_1454e9211;
    }
    if (0 < (int)param_6) {
      pbVar7 = (byte *)FUN_144ea64e0((longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xc5);
      if (pbVar7 == (byte *)0x0) {
        uVar19 = CONCAT44(uVar17,200);
        uVar17 = 0x41;
        goto LAB_1454e9217;
      }
      iVar6 = FUN_144bac850(pbVar7,param_6);
      if (iVar6 < 1) goto LAB_1454e9490;
    }
    local_48 = FUN_144ba5700();
    pbVar14 = pbVar12;
    if (((((local_48 != 0) && (iVar6 = FUN_144ba5a20(local_48,param_4,0), iVar6 != 0)) &&
         (iVar6 = FUN_144ba5c70(local_48,&DAT_149d94248,8), iVar6 != 0)) &&
        (iVar6 = FUN_144ba5c70(local_48,param_3,(longlong)(int)uVar4), iVar6 != 0)) &&
       (((param_6 == 0 ||
         (iVar6 = FUN_144ba5c70(local_48,pbVar7,(longlong)(int)param_6), iVar6 != 0)) &&
        ((iVar6 = FUN_144ba5ca0(local_48,param_2 + (iVar16 + -1),0), iVar6 != 0 &&
         (iVar6 = FUN_1452a9030(param_2,iVar16 + -1,param_2 + (iVar16 + -1),uVar4,lVar18),
         iVar6 == 0)))))) {
      pbVar12 = param_2 + (int)((iVar16 - param_6) + -2);
      *pbVar12 = *pbVar12 ^ 1;
      puVar9 = (ulonglong *)(pbVar12 + 1);
      if (0 < (int)param_6) {
        if ((0x1f < param_6) &&
           ((pbVar7 + (int)(param_6 - 1) < puVar9 ||
            ((byte *)((longlong)(int)(param_6 - 1) + (longlong)puVar9) < pbVar7)))) {
          uVar4 = param_6 & 0x8000001f;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
          }
          puVar8 = (ulonglong *)(pbVar7 + 0x10);
          do {
            uVar11 = (int)pbVar13 + 0x20;
            pbVar13 = (byte *)(ulonglong)uVar11;
            uVar2 = puVar8[-1];
            puVar1 = puVar8 + 4;
            *puVar9 = puVar8[-2] ^ *puVar9;
            puVar9[1] = uVar2 ^ puVar9[1];
            uVar2 = puVar8[1];
            puVar9[2] = puVar9[2] ^ *puVar8;
            puVar9[3] = puVar9[3] ^ uVar2;
            puVar9 = puVar9 + 4;
            puVar8 = puVar1;
          } while ((longlong)((-0x10 - (longlong)pbVar7) + (longlong)puVar1) <
                   (longlong)(int)(param_6 - uVar4));
        }
        for (lVar18 = (longlong)(int)uVar11; lVar18 < (int)param_6; lVar18 = lVar18 + 1) {
          *(byte *)puVar9 = (byte)*puVar9 ^ pbVar7[lVar18];
          puVar9 = (ulonglong *)((longlong)puVar9 + 1);
        }
      }
      if (bVar15 != 0) {
        *param_2 = *param_2 & (byte)(0xff >> (8 - bVar15 & 0x1f));
      }
      param_2[iVar5 + -1] = 0xbc;
      pbVar14 = &DAT_00000001;
    }
  }
LAB_1454e9490:
  FUN_144ba5800(local_48);
  FUN_144ea66f0(pbVar7,(longlong)(int)param_6,"crypto\\rsa\\rsa_pss.c",0xf7);
  return pbVar14;
}



// FUNCTION 1454e94d0 FUN_1454e94d0 body=876 status=ok
// SIG undefined FUN_1454e94d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1454e94d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
             longlong param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 local_68;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_68 = 0;
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_5 < 2) {
    return 0;
  }
  if ((param_5 & param_5 - 1) != 0) {
    return 0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar3,0) < param_7) {
    uVar7 = CONCAT44(uVar14,0xae);
LAB_1454e9544:
    FUN_144ba24f0(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  if ((param_6 << 4 < 0x40) && ((ulonglong)(1L << ((byte)(param_6 << 4) & 0x3f)) <= param_5)) {
    uVar7 = CONCAT44(uVar14,0xb9);
    goto LAB_1454e9544;
  }
  uVar9 = param_6 * param_7 * 0x80;
  if (0x7fffffff < uVar9) {
    uVar7 = CONCAT44(uVar14,0xcb);
LAB_1454e95f7:
    FUN_144ba24f0(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff)) / auVar4,0) < param_5 + 2) {
    uVar7 = CONCAT44(uVar14,0xd5);
    goto LAB_1454e95f7;
  }
  uVar10 = (param_5 + 2) * param_6 * 0x80;
  if (~uVar10 < uVar9) {
    uVar7 = CONCAT44(uVar14,0xdc);
    goto LAB_1454e95f7;
  }
  uVar10 = uVar10 + uVar9;
  uVar8 = 0x2000000;
  if (param_8 != 0) {
    uVar8 = param_8;
  }
  if (uVar8 < uVar10) {
    FUN_144ba24f0(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xe8));
    return 0;
  }
  if (param_9 == 0) {
    return 1;
  }
  lVar6 = FUN_144ea64e0(uVar10,"crypto\\evp\\pbe_scrypt.c",0xf0);
  if (lVar6 == 0) {
    FUN_144ba24f0(6,0xb5,0x41,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xf2));
    return 0;
  }
  lVar1 = lVar6 + uVar9;
  uVar7 = FUN_144bab040();
  uVar12 = CONCAT44(uVar14,1);
  iVar5 = FUN_14529a7a0(param_1,param_2,param_3,param_4,uVar12,uVar7,(int)uVar9,lVar6);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (iVar5 != 0) {
    if (param_7 != 0) {
      lVar2 = param_6 * 0x80 + lVar1;
      lVar11 = lVar6;
      do {
        lVar13 = lVar2;
        FUN_1454e9cb0(lVar11,param_6,param_5,lVar1,lVar2,param_6 * 0x100 + lVar1);
        uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
        lVar11 = lVar11 + param_6 * 0x80;
        param_7 = param_7 - 1;
      } while (param_7 != 0);
    }
    uVar7 = FUN_144bab040();
    uVar12 = CONCAT44(uVar14,1);
    iVar5 = FUN_14529a7a0(param_1,param_2,lVar6,uVar9 & 0xffffffff,uVar12,uVar7,param_10,param_9);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (iVar5 != 0) {
      local_68 = 1;
      goto LAB_1454e97f6;
    }
  }
  FUN_144ba24f0(6,0xb5,0xb5,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0x105));
LAB_1454e97f6:
  FUN_144ea66f0(lVar6,uVar10,"crypto\\evp\\pbe_scrypt.c",0x107);
  return local_68;
}



// FUNCTION 1454e9840 FUN_1454e9840 body=1105 status=ok
// SIG undefined FUN_1454e9840(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e9840(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  longlong local_108;
  ulonglong *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  uint local_d8 [11];
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined1 auStack_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = 0;
  local_98 = param_2[param_3 * 0x10 + -8];
  uStack_90 = (param_2 + param_3 * 0x10 + -8)[1];
  local_88 = param_2[param_3 * 0x10 + -6];
  uStack_80 = (param_2 + param_3 * 0x10 + -6)[1];
  local_e0 = param_3 * 2;
  local_78 = param_2[param_3 * 0x10 + -4];
  uStack_70 = (param_2 + param_3 * 0x10 + -4)[1];
  local_68 = param_2[param_3 * 0x10 + -2];
  auStack_60._0_8_ = (param_2 + param_3 * 0x10 + -2)[1];
  local_f0 = param_3;
  local_e8 = param_1;
  if (local_e0 != 0) {
    do {
      uVar12 = 0;
      if (((uint *)((longlong)param_2 + 0x3cU) < &local_98) || (auStack_60 + 4 < param_2)) {
        do {
          uVar9 = param_2[1];
          *(ulonglong *)((longlong)&local_98 + uVar12 * 4) =
               *param_2 ^ *(ulonglong *)((longlong)&local_98 + uVar12 * 4);
          *(ulonglong *)((longlong)&uStack_90 + uVar12 * 4) =
               uVar9 ^ *(ulonglong *)((longlong)&uStack_90 + uVar12 * 4);
          puVar2 = param_2 + 2;
          uVar9 = param_2[3];
          param_2 = param_2 + 4;
          *(ulonglong *)((longlong)&local_88 + uVar12 * 4) =
               *puVar2 ^ *(ulonglong *)((longlong)&local_88 + uVar12 * 4);
          *(ulonglong *)((longlong)&uStack_80 + uVar12 * 4) =
               uVar9 ^ *(ulonglong *)((longlong)&uStack_80 + uVar12 * 4);
          uVar12 = uVar12 + 8;
        } while (uVar12 < 0x10);
      }
      else {
        do {
          uVar9 = *param_2;
          param_2 = (ulonglong *)((longlong)param_2 + 4);
          puVar1 = (uint *)((longlong)&local_98 + uVar12 * 4);
          *puVar1 = *puVar1 ^ (uint)uVar9;
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x10);
      }
      local_d8[2] = (uint)uStack_90;
      local_d8[7] = (uint)(uStack_80 >> 0x20);
      local_d8[6] = (uint)uStack_80;
      local_d8[5] = (uint)(local_88 >> 0x20);
      local_d8[4] = (uint)local_88;
      uStack_ac = (uint)(uStack_70 >> 0x20);
      local_d8[10] = (uint)uStack_70;
      local_d8[9] = (uint)(local_78 >> 0x20);
      local_d8[8] = (uint)local_78;
      uStack_9c = SUB84(auStack_60._0_8_,4);
      uStack_a0 = (uint)auStack_60._0_8_;
      uStack_a4 = (uint)(local_68 >> 0x20);
      uVar12 = local_68 & 0xffffffff;
      local_114 = local_d8[2];
      local_d8[1] = (uint)(local_98 >> 0x20);
      local_118 = local_d8[1];
      local_d8[0] = (uint)local_98;
      local_d8[3] = (uint)(uStack_90 >> 0x20);
      local_110 = local_d8[0];
      local_108 = 4;
      do {
        uVar10 = local_110 + (uint)uVar12;
        local_d8[4] = local_d8[4] ^ (uVar10 * 0x80 | uVar10 >> 0x19);
        local_d8[8] = local_d8[8] ^
                      ((local_110 + local_d8[4]) * 0x200 | local_110 + local_d8[4] >> 0x17);
        local_10c = (uint)uVar12 ^
                    ((local_d8[8] + local_d8[4]) * 0x2000 | local_d8[8] + local_d8[4] >> 0x13);
        local_110 = local_110 ^
                    (local_d8[8] + local_10c >> 0xe | (local_d8[8] + local_10c) * 0x40000);
        local_d8[9] = local_d8[9] ^
                      ((local_118 + local_d8[5]) * 0x80 | local_118 + local_d8[5] >> 0x19);
        uStack_a4 = uStack_a4 ^
                    ((local_d8[9] + local_d8[5]) * 0x200 | local_d8[9] + local_d8[5] >> 0x17);
        local_118 = local_118 ^
                    ((uStack_a4 + local_d8[9]) * 0x2000 | uStack_a4 + local_d8[9] >> 0x13);
        uVar10 = local_118 + uStack_a4;
        local_d8[5] = local_d8[5] ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        uStack_a0 = uStack_a0 ^
                    ((local_d8[6] + local_d8[10]) * 0x80 | local_d8[6] + local_d8[10] >> 0x19);
        local_114 = local_114 ^
                    ((uStack_a0 + local_d8[10]) * 0x200 | uStack_a0 + local_d8[10] >> 0x17);
        local_d8[6] = local_d8[6] ^
                      ((local_114 + uStack_a0) * 0x2000 | local_114 + uStack_a0 >> 0x13);
        uVar10 = local_114 + local_d8[6];
        local_d8[10] = local_d8[10] ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        local_d8[3] = local_d8[3] ^ ((uStack_ac + uStack_9c) * 0x80 | uStack_ac + uStack_9c >> 0x19)
        ;
        local_d8[7] = local_d8[7] ^
                      ((local_d8[3] + uStack_9c) * 0x200 | local_d8[3] + uStack_9c >> 0x17);
        uStack_ac = uStack_ac ^
                    ((local_d8[7] + local_d8[3]) * 0x2000 | local_d8[7] + local_d8[3] >> 0x13);
        uVar10 = local_d8[7] + uStack_ac;
        uStack_9c = uStack_9c ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        local_118 = local_118 ^ ((local_d8[3] + local_110) * 0x80 | local_d8[3] + local_110 >> 0x19)
        ;
        local_114 = local_114 ^ ((local_118 + local_110) * 0x200 | local_118 + local_110 >> 0x17);
        local_d8[3] = local_d8[3] ^
                      ((local_114 + local_118) * 0x2000 | local_114 + local_118 >> 0x13);
        local_110 = local_110 ^
                    (local_114 + local_d8[3] >> 0xe | (local_114 + local_d8[3]) * 0x40000);
        local_d8[6] = local_d8[6] ^
                      ((local_d8[5] + local_d8[4]) * 0x80 | local_d8[5] + local_d8[4] >> 0x19);
        local_d8[1] = local_118;
        local_d8[0] = local_110;
        local_d8[7] = local_d8[7] ^
                      ((local_d8[6] + local_d8[5]) * 0x200 | local_d8[6] + local_d8[5] >> 0x17);
        local_d8[4] = local_d8[4] ^
                      ((local_d8[7] + local_d8[6]) * 0x2000 | local_d8[7] + local_d8[6] >> 0x13);
        local_d8[5] = local_d8[5] ^
                      (local_d8[7] + local_d8[4] >> 0xe | (local_d8[7] + local_d8[4]) * 0x40000);
        uStack_ac = uStack_ac ^
                    ((local_d8[10] + local_d8[9]) * 0x80 | local_d8[10] + local_d8[9] >> 0x19);
        local_d8[8] = local_d8[8] ^
                      ((uStack_ac + local_d8[10]) * 0x200 | uStack_ac + local_d8[10] >> 0x17);
        local_d8[9] = local_d8[9] ^
                      ((uStack_ac + local_d8[8]) * 0x2000 | uStack_ac + local_d8[8] >> 0x13);
        local_d8[10] = local_d8[10] ^
                       (local_d8[9] + local_d8[8] >> 0xe | (local_d8[9] + local_d8[8]) * 0x40000);
        uVar10 = local_10c ^ ((uStack_9c + uStack_a0) * 0x80 | uStack_9c + uStack_a0 >> 0x19);
        uVar12 = (ulonglong)uVar10;
        uStack_a4 = uStack_a4 ^ ((uStack_9c + uVar10) * 0x200 | uStack_9c + uVar10 >> 0x17);
        uStack_a0 = uStack_a0 ^ ((uStack_a4 + uVar10) * 0x2000 | uStack_a4 + uVar10 >> 0x13);
        uStack_9c = uStack_9c ^ (uStack_a0 + uStack_a4 >> 0xe | (uStack_a0 + uStack_a4) * 0x40000);
        local_108 = local_108 + -1;
      } while (local_108 != 0);
      local_d8[2] = local_114;
      lVar11 = 0;
      _local_a8 = CONCAT44(uStack_a4,uVar10);
      do {
        iVar4 = *(int *)((longlong)&uStack_90 + lVar11);
        iVar5 = *(int *)((longlong)&uStack_90 + lVar11 + 4);
        iVar6 = *(int *)((longlong)local_d8 + lVar11 + 4);
        iVar7 = *(int *)((longlong)local_d8 + lVar11 + 8);
        iVar8 = *(int *)((longlong)local_d8 + lVar11 + 0xc);
        *(int *)((longlong)&local_98 + lVar11) =
             *(int *)((longlong)local_d8 + lVar11) + *(int *)((longlong)&local_98 + lVar11);
        *(int *)((longlong)&local_98 + lVar11 + 4) =
             iVar6 + *(int *)((longlong)&local_98 + lVar11 + 4);
        *(int *)((longlong)&uStack_90 + lVar11) = iVar7 + iVar4;
        *(int *)((longlong)&uStack_90 + lVar11 + 4) = iVar8 + iVar5;
        auVar3 = *(undefined1 (*) [16])((longlong)&local_88 + lVar11);
        iVar4 = *(int *)((longlong)local_d8 + lVar11 + 0x14);
        iVar5 = *(int *)((longlong)local_d8 + lVar11 + 0x18);
        iVar6 = *(int *)((longlong)local_d8 + lVar11 + 0x1c);
        *(int *)((longlong)&local_88 + lVar11) =
             *(int *)((longlong)local_d8 + lVar11 + 0x10) + auVar3._0_4_;
        *(int *)((longlong)&local_88 + lVar11 + 4) = iVar4 + auVar3._4_4_;
        *(int *)((longlong)&uStack_80 + lVar11) = iVar5 + auVar3._8_4_;
        *(int *)((longlong)&uStack_80 + lVar11 + 4) = iVar6 + auVar3._12_4_;
        lVar11 = lVar11 + 0x20;
      } while (lVar11 < 0x40);
      local_100 = param_2;
      FUN_14259f0c0(local_d8,0x40);
      uVar12 = local_f8 + 1;
      lVar11 = ((ulonglong)((uint)local_f8 & 1) * local_f0 + (local_f8 >> 1)) * 0x40;
      *(ulonglong *)(lVar11 + local_e8) = local_98;
      ((ulonglong *)(lVar11 + local_e8))[1] = uStack_90;
      puVar2 = (ulonglong *)(lVar11 + 0x10 + local_e8);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (ulonglong *)(lVar11 + 0x20 + local_e8);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (ulonglong *)(lVar11 + 0x30 + local_e8);
      *puVar2 = local_68;
      puVar2[1] = auStack_60._0_8_;
      local_f8 = uVar12;
    } while (uVar12 < local_e0);
  }
  FUN_14259f0c0(&local_98,0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
}



// FUNCTION 1454e9cb0 FUN_1454e9cb0 body=546 status=ok
// SIG undefined FUN_1454e9cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454e9cb0(byte *param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,uint *param_5
                  ,uint *param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar10 = param_2 * 0x20;
  pbVar4 = param_1;
  puVar8 = param_6;
  for (uVar12 = uVar10; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar8 = (uint)*pbVar4;
    *puVar8 = *puVar8 | (uint)pbVar4[1] << 8;
    *puVar8 = *puVar8 | (uint)pbVar4[2] << 0x10;
    *puVar8 = *puVar8 | (uint)pbVar4[3] << 0x18;
    puVar8 = puVar8 + 1;
    pbVar4 = pbVar4 + 4;
  }
  if (1 < param_3) {
    lVar13 = param_3 - 1;
    do {
      FUN_1454e9840(puVar8,puVar8 + param_2 * -0x20,param_2);
      puVar8 = puVar8 + param_2 * 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  FUN_1454e9840(param_4,(uint *)((param_3 * 0x80 + -0x80) * param_2 + (longlong)param_6),param_2);
  uVar9 = 0;
  for (uVar12 = param_3; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar6 = (ulonglong *)
             (param_6 +
             ((ulonglong)(uint)param_4[param_2 * 0x10 + -8] % param_3 & 0xffffffff) * param_2 * 0x20
             );
    if (uVar10 != 0) {
      if (((uVar10 < 8) ||
          ((param_5 <= (uint *)((longlong)puVar6 + (uVar10 - 1) * 4) &&
           (puVar6 <= param_5 + param_2 * 0x20 + -1)))) ||
         ((param_5 <= (uint *)((longlong)param_4 + param_2 * 0x80 + -4) &&
          (param_4 <= param_5 + param_2 * 0x20 + -1)))) {
        puVar8 = param_5;
        uVar11 = uVar10;
        do {
          uVar5 = *puVar6;
          puVar6 = (ulonglong *)((longlong)puVar6 + 4);
          *puVar8 = *(uint *)((longlong)puVar8 + ((longlong)param_4 - (longlong)param_5)) ^
                    (uint)uVar5;
          uVar11 = uVar11 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar11 != 0);
      }
      else {
        puVar7 = (ulonglong *)(param_5 + 4);
        uVar11 = uVar9;
        do {
          uVar5 = puVar6[1];
          uVar11 = uVar11 + 8;
          puVar1 = (ulonglong *)((longlong)param_4 + (-0x10 - (longlong)param_5) + (longlong)puVar7)
          ;
          uVar3 = puVar1[1];
          puVar7[-2] = *puVar1 ^ *puVar6;
          puVar7[-1] = uVar3 ^ uVar5;
          puVar1 = (ulonglong *)
                   ((longlong)param_4 + (-0x20 - (longlong)param_5) + (longlong)(puVar7 + 4));
          uVar3 = puVar1[1];
          uVar5 = puVar6[3];
          *puVar7 = *puVar1 ^ puVar6[2];
          puVar7[1] = uVar3 ^ uVar5;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (uVar11 < uVar10);
      }
    }
    FUN_1454e9840(param_4,param_5,param_2);
  }
  if (uVar10 != 0) {
    do {
      uVar2 = *(uint *)((longlong)param_4 + uVar9 * 4);
      *param_1 = (byte)uVar2;
      uVar9 = uVar9 + 1;
      param_1[1] = (byte)(uVar2 >> 8);
      param_1[2] = (byte)(uVar2 >> 0x10);
      param_1[3] = (byte)(uVar2 >> 0x18);
      param_1 = param_1 + 4;
    } while (uVar9 < uVar10);
  }
  return;
}



// FUNCTION 1454e9ee0 FUN_1454e9ee0 body=5 status=ok
// SIG undefined FUN_1454e9ee0(void)

longlong FUN_1454e9ee0(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x2c);
}



// FUNCTION 1454e9ef0 FUN_1454e9ef0 body=67 status=ok
// SIG undefined FUN_1454e9ef0(void)

undefined8 FUN_1454e9ef0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 0x10;
  }
  else if ((param_2 - 8U & 0xfffffffffffffff7) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = 0x10;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 != param_2) {
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ 0xee;
    *(int *)(param_1 + 0x2c) = (int)param_2;
  }
  return 1;
}



// FUNCTION 1454e9f40 FUN_1454e9f40 body=331 status=ok
// SIG undefined FUN_1454e9f40(void)

undefined8 FUN_1454e9f40(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0x2c);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (iVar4 == 0) {
    iVar4 = 0x10;
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar4;
  iVar3 = 2;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 6) = iVar3;
  iVar3 = 4;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  *(int *)((longlong)param_1 + 0x34) = iVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = uVar1 ^ 0x736f6d6570736575;
  param_1[2] = uVar2 ^ 0x646f72616e646f6d;
  param_1[3] = uVar1 ^ 0x6c7967656e657261;
  param_1[4] = uVar2 ^ 0x7465646279746573;
  if (iVar4 == 0x10) {
    param_1[2] = uVar2 ^ 0x646f72616e646f83;
  }
  return 1;
}



// FUNCTION 1454ea090 FUN_1454ea090 body=559 status=ok
// SIG undefined FUN_1454ea090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ea090(longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined2 *_Src;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  *param_1 = *param_1 + param_3;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar10 = *(uint *)(param_1 + 5);
  if (uVar10 != 0) {
    uVar2 = (ulonglong)(8 - uVar10);
    _Dst = (void *)((longlong)param_1 + (ulonglong)uVar10 + 0x38);
    if (param_3 < uVar2) {
      memcpy(_Dst,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    memcpy(_Dst,param_2,uVar2);
    param_3 = param_3 - uVar2;
    param_2 = (undefined2 *)((longlong)param_2 + uVar2);
    uVar2 = (ulonglong)*(uint *)(param_1 + 6);
    uVar3 = uVar3 ^ param_1[7];
    if (0 < (int)*(uint *)(param_1 + 6)) {
      do {
        uVar7 = uVar7 + uVar8;
        uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
        uVar4 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
        uVar6 = uVar6 + uVar3 + uVar8;
        uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar4;
        uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
        uVar3 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar7;
        uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar7 = uVar7 ^ param_1[7];
  }
  uVar10 = (uint)param_3 & 7;
  _Src = (undefined2 *)((longlong)param_2 + (param_3 - uVar10));
  if (param_2 != _Src) {
    puVar9 = param_2 + 3;
    do {
      uVar4 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(*puVar9,*(undefined1 *)
                                                                             ((longlong)puVar9 + -1)
                                                                   ),*(undefined1 *)(puVar9 + -1)),
                                                  *(undefined1 *)((longlong)puVar9 + -3)),
                                         *(undefined1 *)(puVar9 + -2)),
                                *(undefined1 *)((longlong)puVar9 + -5)),*(undefined1 *)(puVar9 + -3)
                      );
      uVar3 = uVar3 ^ uVar4;
      uVar2 = (ulonglong)*(uint *)(param_1 + 6);
      if (0 < (int)*(uint *)(param_1 + 6)) {
        do {
          uVar7 = uVar7 + uVar8;
          uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
          uVar5 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
          uVar6 = uVar6 + uVar3 + uVar8;
          uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar5;
          uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
          uVar3 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar7;
          uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar7 = uVar7 ^ uVar4;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar1 != _Src);
  }
  if ((param_3 & 7) != 0) {
    memcpy(param_1 + 7,_Src,(longlong)(int)uVar10);
  }
  *(uint *)(param_1 + 5) = uVar10;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  return;
}



// FUNCTION 1454ea2c0 FUN_1454ea2c0 body=601 status=ok
// SIG undefined FUN_1454ea2c0(void)

undefined8 FUN_1454ea2c0(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = param_1[1];
  uVar7 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = *param_1 << 0x38;
  if (param_3 == *(int *)((longlong)param_1 + 0x2c)) {
    switch((int)param_1[5]) {
    case 7:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3e) << 0x30;
    case 6:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3d) << 0x28;
    case 5:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3c) << 0x20;
    case 4:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3b) << 0x18;
    case 3:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3a) << 0x10;
    case 2:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x39) << 8;
    case 1:
      uVar6 = uVar6 | *(byte *)(param_1 + 7);
    default:
      uVar1 = param_1[4] ^ uVar6;
      if (0 < (int)*(uint *)(param_1 + 6)) {
        uVar4 = (ulonglong)*(uint *)(param_1 + 6);
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar2 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
          uVar5 = uVar5 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar2;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
          uVar1 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar8 = uVar8 ^ uVar6;
      uVar6 = 0xff;
      if (*(int *)((longlong)param_1 + 0x2c) == 0x10) {
        uVar6 = 0xee;
      }
      uVar5 = uVar5 ^ uVar6;
      if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar4 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
          uVar5 = uVar5 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
          uVar1 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar6 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
      *param_2 = (char)uVar6;
      param_2[1] = (char)(uVar6 >> 8);
      param_2[2] = (char)(uVar6 >> 0x10);
      param_2[3] = (char)(uVar6 >> 0x18);
      param_2[5] = (char)(uVar6 >> 0x28);
      param_2[4] = (char)(uVar6 >> 0x20);
      param_2[6] = (char)(uVar6 >> 0x30);
      param_2[7] = (char)(uVar6 >> 0x38);
      if (*(int *)((longlong)param_1 + 0x2c) != 8) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        uVar7 = uVar7 ^ 0xdd;
        if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
          do {
            uVar8 = uVar8 + uVar7;
            uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
            uVar4 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
            uVar5 = uVar5 + uVar1 + uVar7;
            uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
            uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
            uVar1 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
            uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar8 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
        param_2[8] = (char)uVar8;
        param_2[9] = (char)(uVar8 >> 8);
        param_2[10] = (char)(uVar8 >> 0x10);
        param_2[0xb] = (char)(uVar8 >> 0x18);
        param_2[0xd] = (char)(uVar8 >> 0x28);
        param_2[0xc] = (char)(uVar8 >> 0x20);
        param_2[0xf] = (char)(uVar8 >> 0x38);
        param_2[0xe] = (char)(uVar8 >> 0x30);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1454ea540 FUN_1454ea540 body=32 status=ok
// SIG undefined FUN_1454ea540(void)

undefined8 FUN_1454ea540(int *param_1)

{
  if (*param_1 == 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x28);
  }
  return 0;
}



// FUNCTION 1454ea560 FUN_1454ea560 body=105 status=ok
// SIG undefined FUN_1454ea560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ea560(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    FUN_144ba24f0(0x2e,0x8e,0x7c,"crypto\\cms\\cms_env.c",0xee);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x28);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(lVar1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(lVar1 + 0x10);
  }
  return 1;
}



// FUNCTION 1454ea5d0 FUN_1454ea5d0 body=118 status=ok
// SIG undefined FUN_1454ea5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ea5d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar2 = FUN_1454ea870();
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_1454eaeb0();
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_1454eaa40();
    return uVar2;
  }
  if (iVar1 != 3) {
    FUN_144ba24f0(0x2e,0xa9,0x9a,"crypto\\cms\\cms_env.c",0x318);
    return 0;
  }
  uVar2 = FUN_1455d9570(param_1,param_2,1);
  return uVar2;
}



// FUNCTION 1454ea650 FUN_1454ea650 body=295 status=ok
// SIG undefined FUN_1454ea650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454ea650(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  bVar3 = false;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar5 = FUN_1455d90f0(lVar1);
  if ((lVar5 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
    iVar7 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
    iVar4 = FUN_144babbf0(uVar2);
    if (0 < iVar4) {
      do {
        uVar6 = FUN_144babc00(uVar2,iVar7);
        iVar4 = FUN_1454ea5d0(param_1,uVar6);
        if (iVar4 < 1) {
          FUN_144ba24f0(0x2e,0x7d,0x74,"crypto\\cms\\cms_env.c",0x376);
          goto LAB_1454ea6e9;
        }
        iVar7 = iVar7 + 1;
        iVar4 = FUN_144babbf0(uVar2);
      } while (iVar7 < iVar4);
    }
    FUN_1454eac60(*(undefined8 *)(param_1 + 8));
    bVar3 = true;
LAB_1454ea6e9:
    *(undefined8 *)(lVar1 + 0x18) = 0;
    FUN_144ea66f0(*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                  "crypto\\cms\\cms_env.c",0x380);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (bVar3) {
      return lVar5;
    }
    FUN_144b9e7b0(lVar5);
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1454ea780 FUN_1454ea780 body=225 status=ok
// SIG undefined FUN_1454ea780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ea780(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1454ea790;
  if (*param_1 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + 0x28);
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 2) + 0x28) == 0) {
      return 0;
    }
    lVar3 = FUN_144ed19d0();
    if (lVar3 == 0) {
      return 0;
    }
  }
  if ((*(longlong *)(lVar3 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(lVar3,7,param_2,param_1);
    if (iVar2 == -2) {
      FUN_144ba24f0(0x2e,0xab,0x7d,"crypto\\cms\\cms_env.c",0x47,uVar4);
      return 0;
    }
    if (iVar2 < 1) {
      FUN_144ba24f0(0x2e,0xab,0x6f,"crypto\\cms\\cms_env.c",0x4b,uVar4);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1454ea870 FUN_1454ea870 body=456 status=ok
// SIG undefined FUN_1454ea870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1454ea870(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  ulonglong in_stack_ffffffffffffffd8;
  undefined8 uVar9;
  longlong lVar6;
  undefined4 uVar10;
  
  lVar6 = 0;
  lVar5 = 0;
  uVar7 = 0;
  if (*param_2 != 0) {
    FUN_144ba24f0(0x2e,0x8d,0x7c,"crypto\\cms\\cms_env.c",0x130,0x1454ea87f);
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  lVar4 = *(longlong *)(lVar1 + 0x30);
  if (lVar4 == 0) {
    lVar4 = FUN_144ed1530(*(undefined8 *)(lVar1 + 0x28),0);
    if (lVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_144ed21c0(lVar4);
    uVar8 = uVar7;
    if (iVar3 < 1) goto LAB_1454ea9f8;
  }
  else {
    iVar3 = FUN_1454ea780(param_2,0);
    lVar5 = lVar6;
    uVar8 = 0;
    if (iVar3 == 0) goto LAB_1454ea9f8;
  }
  iVar3 = FUN_144ed1710(lVar4,0xffffffff,0x100,9,in_stack_ffffffffffffffd8 & 0xffffffff00000000,
                        param_2);
  if (iVar3 < 1) {
    FUN_144ba24f0(0x2e,0x8d,0x6e,"crypto\\cms\\cms_env.c",0x146);
    lVar5 = lVar6;
    uVar8 = uVar7;
  }
  else {
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    iVar3 = FUN_144ed2250(lVar4,0,&local_res10,*(undefined8 *)(lVar2 + 0x20),uVar9);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    lVar5 = lVar6;
    uVar8 = uVar7;
    if (0 < iVar3) {
      lVar5 = FUN_144ea64e0(CONCAT44(uStackX_14,local_res10),"crypto\\cms\\cms_env.c",0x14d);
      if (lVar5 == 0) {
        FUN_144ba24f0(0x2e,0x8d,0x41,"crypto\\cms\\cms_env.c",CONCAT44(uVar10,0x150));
      }
      else {
        iVar3 = FUN_144ed2250(lVar4,lVar5,&local_res10,*(undefined8 *)(lVar2 + 0x20),
                              *(undefined8 *)(lVar2 + 0x28));
        if (0 < iVar3) {
          FUN_144f03e20(*(undefined8 *)(lVar1 + 0x18),lVar5,local_res10);
          lVar5 = 0;
          uVar8 = 1;
        }
      }
    }
  }
LAB_1454ea9f8:
  FUN_144ed16b0(lVar4);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  FUN_144ea6530(lVar5,"crypto\\cms\\cms_env.c",0x15f);
  return uVar8;
}



// FUNCTION 1454eaa40 FUN_1454eaa40 body=329 status=ok
// SIG undefined FUN_1454eaa40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eaa40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1454eaa52;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = 0;
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    local_138 = 0x284;
    FUN_144ba24f0(0x2e,0x88,0x82,"crypto\\cms\\cms_env.c");
    goto LAB_1454eab79;
  }
  iVar3 = FUN_144ed50a0(*(longlong *)(lVar1 + 0x20),*(longlong *)(lVar1 + 0x28) << 3,local_128);
  if (iVar3 == 0) {
    lVar4 = FUN_144ea64e0(*(longlong *)(lVar2 + 0x28) + 8,"crypto\\cms\\cms_env.c",0x28e);
    if (lVar4 == 0) {
      local_138 = 0x291;
      uVar5 = 0x41;
      goto LAB_1454eab29;
    }
    local_138 = *(undefined4 *)(lVar2 + 0x28);
    iVar3 = FUN_1455d90c0(local_128,0,lVar4,*(undefined8 *)(lVar2 + 0x20));
    if (iVar3 < 1) {
      local_138 = 0x298;
      uVar5 = 0x9f;
      goto LAB_1454eab29;
    }
    FUN_144f03e20(*(undefined8 *)(lVar1 + 0x18),lVar4,iVar3);
  }
  else {
    local_138 = 0x28a;
    uVar5 = 0x73;
LAB_1454eab29:
    FUN_144ba24f0(0x2e,0x88,uVar5,"crypto\\cms\\cms_env.c");
    FUN_144ea6530(lVar4,"crypto\\cms\\cms_env.c",0x2a3);
  }
  FUN_14259f0c0(local_128,0xf4);
LAB_1454eab79:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_158);
}



// FUNCTION 1454eaba0 FUN_1454eaba0 body=188 status=ok
// SIG undefined FUN_1454eaba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eaba0(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    iVar5 = 0;
    iVar4 = 0;
    iVar2 = FUN_144babbf0(*puVar1);
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_144babc00(*puVar1,iVar4);
        if (*piVar3 == 4) goto LAB_1454eac41;
        if ((*piVar3 == 3) && (*param_1 < 3)) {
          *param_1 = 3;
        }
        iVar4 = iVar4 + 1;
        iVar2 = FUN_144babbf0(*puVar1);
      } while (iVar4 < iVar2);
    }
    iVar2 = FUN_144babbf0(puVar1[1]);
    if (0 < iVar2) {
      do {
        piVar3 = (int *)FUN_144babc00(puVar1[1],iVar5);
        if (*piVar3 == 1) {
LAB_1454eac41:
          *param_1 = 4;
          return;
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_144babbf0(puVar1[1]);
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 1454eac60 FUN_1454eac60 body=188 status=ok
// SIG undefined FUN_1454eac60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eac60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 < 4) && (FUN_1454eaba0(), *param_1 < 3)) {
    iVar3 = 0;
    iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 4));
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 4),iVar3);
        if (*piVar2 - 3U < 2) {
          *param_1 = 3;
          return;
        }
        if ((*piVar2 != 0) || (**(int **)(piVar2 + 2) != 0)) {
          *param_1 = 2;
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 4));
      } while (iVar3 < iVar1);
    }
    if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 8) == 0)) {
      if (*param_1 != 2) {
        *param_1 = 0;
        return;
      }
    }
    else {
      *param_1 = 2;
    }
  }
  return;
}



// FUNCTION 1454ead20 FUN_1454ead20 body=100 status=ok
// SIG undefined FUN_1454ead20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ead20(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 != 1) {
    FUN_144ba24f0(0x2e,0xaf,0xb5,"crypto\\cms\\cms_kari.c",0x1c);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x10);
  }
  return 1;
}



// FUNCTION 1454ead90 FUN_1454ead90 body=251 status=ok
// SIG undefined FUN_1454ead90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454ead90(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 1) {
    FUN_144ba24f0(0x2e,0xad,0xb5,"crypto\\cms\\cms_kari.c",0x3d,0x1454ead9c);
    return 0;
  }
  piVar2 = *(int **)(*(longlong *)(param_1 + 2) + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
      return 1;
    }
  }
  else if (iVar1 == 1) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar2 + 2);
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(longlong *)(piVar2 + 2) + 8);
    }
  }
  return 1;
}



// FUNCTION 1454eae90 FUN_1454eae90 body=17 status=ok
// SIG undefined FUN_1454eae90(void)

undefined8 FUN_1454eae90(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + 0x30);
  }
  return 0;
}



// FUNCTION 1454eaeb0 FUN_1454eaeb0 body=330 status=ok
// SIG undefined FUN_1454eaeb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454eaeb0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  if (*param_2 != 1) {
    FUN_144ba24f0(0x2e,0xb2,0xb5,"crypto\\cms\\cms_kari.c",0x178);
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar6 = FUN_1454eb180(lVar1,*(undefined8 *)(lVar2 + 0x18));
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  piVar4 = *(int **)(lVar1 + 8);
  if (*piVar4 == -1) {
    *piVar4 = 2;
    uVar6 = FUN_1454ec860();
    lVar7 = FUN_144efec20(uVar6);
    *(longlong *)(piVar4 + 2) = lVar7;
    if (lVar7 == 0) {
      return 0;
    }
  }
  iVar5 = FUN_1454ea780(param_2,0);
  if (iVar5 == 0) {
    return 0;
  }
  iVar8 = 0;
  iVar5 = FUN_144babbf0(uVar3);
  if (0 < iVar5) {
    do {
      lVar7 = FUN_144babc00(uVar3,iVar8);
      iVar5 = FUN_144ed2610(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar7 + 0x10));
      if (iVar5 < 1) {
        return 0;
      }
      iVar5 = FUN_1454eb000(&local_res18,local_res10,*(undefined8 *)(lVar2 + 0x20),
                            *(undefined8 *)(lVar2 + 0x28),lVar1,1);
      if (iVar5 == 0) {
        return 0;
      }
      FUN_144f03e20(*(undefined8 *)(lVar7 + 8),local_res18,local_res10[0]);
      iVar8 = iVar8 + 1;
      iVar5 = FUN_144babbf0(uVar3);
    } while (iVar8 < iVar5);
  }
  return 1;
}



// FUNCTION 1454eb000 FUN_1454eb000 body=351 status=ok
// SIG undefined FUN_1454eb000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eb000(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [2];
  ulonglong local_90;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454eb015;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar1 = false;
  lVar3 = 0;
  iVar2 = FUN_144ba3de0(*(undefined8 *)(param_5 + 0x30));
  local_90 = (ulonglong)iVar2;
  if (local_90 < 0x41) {
    iVar2 = FUN_144ed2820(*(undefined8 *)(param_5 + 0x28),local_88,&local_90);
    if (0 < iVar2) {
      local_a0 = param_6;
      local_a8 = 0;
      iVar2 = FUN_144ba4d00(*(undefined8 *)(param_5 + 0x30),0,0,local_88);
      if (iVar2 != 0) {
        local_a8 = CONCAT44(local_a8._4_4_,param_4);
        iVar2 = FUN_144ba5050(*(undefined8 *)(param_5 + 0x30),0,local_98,param_3);
        if ((iVar2 != 0) &&
           (lVar3 = FUN_144ea64e0((longlong)local_98[0],"crypto\\cms\\cms_kari.c",0xd0),
           bVar1 = false, lVar3 != 0)) {
          local_a8 = CONCAT44(local_a8._4_4_,param_4);
          iVar2 = FUN_144ba5050(*(undefined8 *)(param_5 + 0x30),lVar3,local_98,param_3);
          if (iVar2 != 0) {
            bVar1 = true;
            *param_1 = lVar3;
            *param_2 = (longlong)local_98[0];
          }
        }
      }
    }
    FUN_14259f0c0(local_88,local_90);
    if (!bVar1) {
      FUN_144ea6530(lVar3,"crypto\\cms\\cms_kari.c",0xdc);
    }
    FUN_144ba50e0(*(undefined8 *)(param_5 + 0x30));
    FUN_144ed16b0(*(undefined8 *)(param_5 + 0x28));
    *(undefined8 *)(param_5 + 0x28) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1454eb180 FUN_1454eb180 body=192 status=ok
// SIG undefined FUN_1454eb180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454eb180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  iVar1 = FUN_144ba3d80(param_2);
  lVar4 = FUN_144ba3db0(uVar5);
  if (lVar4 != 0) {
    uVar5 = FUN_144ba3db0(uVar5);
    uVar2 = FUN_144ba3da0(uVar5);
    return (ulonglong)((uVar2 & 0xf0007) == 0x10002);
  }
  iVar3 = FUN_144ba3f10();
  if (iVar3 == 0x2c) {
    uVar6 = FUN_144e9a5a0();
  }
  else if (iVar1 < 0x11) {
    uVar6 = FUN_144baa220();
  }
  else if (iVar1 < 0x19) {
    uVar6 = FUN_144baa380();
  }
  else {
    uVar6 = FUN_144baa500();
  }
  uVar7 = FUN_144ba4630(uVar5,uVar6,0,0,0);
  return uVar7;
}



// FUNCTION 1454eb240 FUN_1454eb240 body=5 status=ok
// SIG undefined FUN_1454eb240(void)

undefined8 FUN_1454eb240(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 1454eb250 FUN_1454eb250 body=54 status=ok
// SIG undefined FUN_1454eb250(void)

void FUN_1454eb250(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x40);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x10);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 1454eb290 FUN_1454eb290 body=693 status=ok
// SIG undefined FUN_1454eb290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454eb290(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  ulonglong in_stack_ffffffffffffffc8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  local_res10 = 0;
  local_res8 = 0;
  uVar3 = FUN_144ea8fa0(**(undefined8 **)(param_1 + 0x10));
  uVar5 = FUN_144ea8ee0(uVar3);
  lVar6 = FUN_144baab30(uVar5);
  if (lVar6 == 0) {
    return 0;
  }
  iVar4 = FUN_1455d9c50(param_1,0x34);
  if (iVar4 < 0) {
    lVar7 = FUN_144bafeb0(0,0);
    bVar2 = false;
    if (lVar7 != 0) {
      in_stack_ffffffffffffffc8 = CONCAT44((int)(in_stack_ffffffffffffffc8 >> 0x20),0xffffffff);
      iVar4 = FUN_1455d9c70(param_1,0x34,*(undefined4 *)(lVar7 + 4),lVar7,in_stack_ffffffffffffffc8)
      ;
      bVar2 = false;
      if (0 < iVar4) {
        bVar2 = true;
      }
    }
    FUN_144ef2170(lVar7);
    if (bVar2) goto LAB_1454eb3af;
    uVar8 = 0x67;
    uVar5 = 0x1a3;
    uVar3 = 0x41;
  }
  else {
LAB_1454eb3af:
    iVar4 = FUN_1455d9ca0(param_1);
    if (iVar4 == 0) goto LAB_1454eb382;
    lVar7 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      FUN_144ba5730(uVar1);
      in_stack_ffffffffffffffc8 = *(ulonglong *)(param_1 + 0x40);
      iVar4 = FUN_144ba6150(uVar1,&local_res10,lVar6,0,in_stack_ffffffffffffffc8);
      if (iVar4 < 1) goto LAB_1454eb382;
      *(longlong *)(param_1 + 0x50) = local_res10;
      lVar7 = local_res10;
    }
    local_res10 = lVar7;
    in_stack_ffffffffffffffc8 = in_stack_ffffffffffffffc8 & 0xffffffff00000000;
    iVar4 = FUN_144ed1710(local_res10,0xffffffff,8,0xb,in_stack_ffffffffffffffc8,param_1);
    uVar3 = (undefined4)(in_stack_ffffffffffffffc8 >> 0x20);
    if (iVar4 < 1) {
      uVar5 = CONCAT44(uVar3,0x2b0);
    }
    else {
      uVar5 = FUN_1454ec990();
      iVar4 = FUN_144f01520(*(undefined8 *)(param_1 + 0x18),&local_res8,uVar5);
      if (((local_res8 == 0) || (iVar4 = FUN_144ba5c70(uVar1,local_res8,(longlong)iVar4), iVar4 < 1)
          ) || (iVar4 = FUN_144ba6180(uVar1,0,&local_res18), iVar4 < 1)) goto LAB_1454eb382;
      FUN_144ea6530(local_res8,"crypto\\cms\\cms_sd.c",700);
      local_res8 = FUN_144ea64e0(CONCAT44(uStackX_1c,local_res18),"crypto\\cms\\cms_sd.c",0x2bd);
      if ((local_res8 == 0) || (iVar4 = FUN_144ba6180(uVar1,local_res8,&local_res18), iVar4 < 1))
      goto LAB_1454eb382;
      iVar4 = FUN_144ed1710(local_res10,0xffffffff,8,0xb,CONCAT44(uVar3,1),param_1);
      if (0 < iVar4) {
        FUN_144ba5730(uVar1);
        FUN_144f03e20(*(undefined8 *)(param_1 + 0x28),local_res8,local_res18);
        return 1;
      }
      uVar5 = 0x2c5;
    }
    uVar8 = 0x97;
    uVar3 = 0x6e;
  }
  FUN_144ba24f0(0x2e,uVar8,uVar3,"crypto\\cms\\cms_sd.c",uVar5);
LAB_1454eb382:
  FUN_144ea6530(local_res8,"crypto\\cms\\cms_sd.c",0x2d0);
  FUN_144ba5730(uVar1);
  return 0;
}



// FUNCTION 1454eb550 FUN_1454eb550 body=249 status=ok
// SIG undefined FUN_1454eb550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454eb550(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar7;
  ulonglong uVar6;
  
  uVar7 = 0x1454eb560;
  uVar3 = 0;
  iVar2 = FUN_144ea8fa0(*param_1);
  if (iVar2 != 0x16) {
    FUN_144ba24f0(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar7);
    return 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10) != 0) {
      FUN_1454eb720(lVar1);
    }
    iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
    uVar4 = uVar3;
    uVar6 = uVar3;
    if (0 < iVar2) {
      do {
        uVar7 = FUN_144babc00(*(undefined8 *)(lVar1 + 8),uVar6);
        uVar3 = FUN_1455d8ef0(uVar7);
        if (uVar3 == 0) {
          FUN_144b9f360(uVar4);
          return 0;
        }
        if (uVar4 != 0) {
          FUN_144b9f280(uVar4,uVar3);
          uVar3 = uVar4;
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = FUN_144babbf0(*(undefined8 *)(lVar1 + 8));
        uVar4 = uVar3;
      } while ((int)uVar5 < iVar2);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 1454eb650 FUN_1454eb650 body=199 status=ok
// SIG undefined FUN_1454eb650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454eb650(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1454eb66a;
  iVar1 = FUN_144ea8fa0(*param_1);
  if (iVar1 == 0x16) {
    uVar4 = 0;
    if (param_1[1] != 0) {
      uVar4 = *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  else {
    FUN_144ba24f0(0x2e,0x85,0x6c,"crypto\\cms\\cms_sd.c",0x1a,uVar4);
    uVar4 = 0;
  }
  iVar3 = 0;
  iVar1 = FUN_144babbf0(uVar4);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(uVar4,iVar3);
      iVar1 = FUN_1454eb960(param_1,uVar2,param_2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(uVar4);
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1[1] + 0x10) + 0x10) = 0;
  return 1;
}



// FUNCTION 1454eb720 FUN_1454eb720 body=324 status=ok
// SIG undefined FUN_1454eb720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eb720(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 6));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 6),iVar4);
      iVar1 = *piVar2;
      if (iVar1 == 4) {
        if (*param_1 < 5) {
          *param_1 = 5;
        }
      }
      else if (iVar1 == 3) {
        if (*param_1 < 4) {
          *param_1 = 4;
        }
      }
      else if ((iVar1 == 2) && (*param_1 < 3)) {
        *param_1 = 3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 6));
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 8),iVar4);
      if ((*piVar2 == 1) && (*param_1 < 5)) {
        *param_1 = 5;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
    } while (iVar4 < iVar1);
  }
  iVar1 = FUN_144ea8fa0(**(undefined8 **)(param_1 + 4));
  if ((iVar1 != 0x15) && (*param_1 < 3)) {
    *param_1 = 3;
  }
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 10));
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_144babc00(*(undefined8 *)(param_1 + 10),iVar3);
      if (**(int **)(piVar2 + 2) == 1) {
        if (*piVar2 < 3) {
          *piVar2 = 3;
        }
        if (*param_1 < 3) {
          *param_1 = 3;
        }
      }
      else if (*piVar2 < 1) {
        *piVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 10));
    } while (iVar3 < iVar1);
  }
  if (*param_1 < 1) {
    *param_1 = 1;
  }
  return;
}



// FUNCTION 1454eb870 FUN_1454eb870 body=66 status=ok
// SIG undefined FUN_1454eb870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1454eb870(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1455d9c70(param_2,0x32,6,**(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10),
                        0xffffffff);
  return 0 < iVar1;
}



// FUNCTION 1454eb8c0 FUN_1454eb8c0 body=152 status=ok
// SIG undefined FUN_1454eb8c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454eb8c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
  if ((lVar1 != 0) && (pcVar2 = *(code **)(lVar1 + 0xb0), pcVar2 != (code *)0x0)) {
    iVar3 = (*pcVar2)(*(longlong *)(param_1 + 0x40),5,param_2,param_1);
    if (iVar3 == -2) {
      FUN_144ba24f0(0x2e,0xaa,0x7d,"crypto\\cms\\cms_sd.c",0xe7);
      return 0;
    }
    if (iVar3 < 1) {
      FUN_144ba24f0(0x2e,0xaa,0x6f,"crypto\\cms\\cms_sd.c",0xeb);
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1454eb960 FUN_1454eb960 body=693 status=ok
// SIG undefined FUN_1454eb960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454eb960(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  uint local_88 [2];
  longlong local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1454eb976;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = FUN_144ba5700();
  lVar5 = 0;
  lVar6 = 0;
  if (lVar3 == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x234);
    FUN_144ba24f0(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
    goto LAB_1454ebc05;
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    local_98 = CONCAT44(local_98._4_4_,0x239);
    FUN_144ba24f0(0x2e,0x96,0x85,"crypto\\cms\\cms_sd.c");
    lVar6 = lVar5;
  }
  else {
    iVar2 = FUN_1455d8fc0(lVar3,param_3,*(undefined8 *)(param_2 + 0x10));
    if ((iVar2 != 0) &&
       ((*(longlong *)(param_2 + 0x50) == 0 || (iVar2 = FUN_1454eb8c0(param_2,0), iVar2 != 0)))) {
      iVar2 = FUN_1455d9c30(param_2);
      if (iVar2 < 0) {
        lVar1 = *(longlong *)(param_2 + 0x50);
        if (lVar1 == 0) {
          iVar2 = FUN_144ba6830(*(undefined8 *)(param_2 + 0x40));
          lVar4 = FUN_144ea64e0((longlong)iVar2,"crypto\\cms\\cms_sd.c",0x26b);
          if (lVar4 == 0) {
            local_98 = CONCAT44(local_98._4_4_,0x26d);
LAB_1454ebaf8:
            FUN_144ba24f0(0x2e,0x96,0x41,"crypto\\cms\\cms_sd.c");
            lVar6 = lVar5;
          }
          else {
            iVar2 = FUN_1452afb70(lVar3,lVar4,local_88,*(undefined8 *)(param_2 + 0x40));
            if (iVar2 != 0) {
LAB_1454ebbe2:
              FUN_144f03e20(*(undefined8 *)(param_2 + 0x28),lVar4,local_88[0]);
              goto LAB_1454ebbee;
            }
            local_98 = CONCAT44(local_98._4_4_,0x271);
            FUN_144ba24f0(0x2e,0x96,0x8b,"crypto\\cms\\cms_sd.c");
            FUN_144ea6530(lVar4,"crypto\\cms\\cms_sd.c",0x272);
          }
        }
        else {
          iVar2 = FUN_144ba5ca0(lVar3,local_78,local_88);
          lVar6 = lVar1;
          if (iVar2 != 0) {
            iVar2 = FUN_144ba6830(*(undefined8 *)(param_2 + 0x40));
            local_80 = (longlong)iVar2;
            lVar4 = FUN_144ea64e0(local_80,"crypto\\cms\\cms_sd.c",0x25e);
            lVar5 = lVar1;
            if (lVar4 == 0) {
              local_98 = CONCAT44(local_98._4_4_,0x260);
              goto LAB_1454ebaf8;
            }
            local_98 = (ulonglong)local_88[0];
            iVar2 = FUN_144ed1f60(lVar1,lVar4,&local_80,local_78);
            if (0 < iVar2) {
              local_88[0] = (uint)local_80;
              goto LAB_1454ebbe2;
            }
            FUN_144ea6530(lVar4,"crypto\\cms\\cms_sd.c",0x264);
          }
        }
      }
      else {
        iVar2 = FUN_144ba5ca0(lVar3,local_78,local_88);
        if (iVar2 != 0) {
          local_98 = CONCAT44(local_98._4_4_,local_88[0]);
          iVar2 = FUN_1455d9c70(param_2,0x33,4,local_78);
          if (((iVar2 != 0) && (iVar2 = FUN_1454eb870(param_1,param_2), iVar2 != 0)) &&
             (iVar2 = FUN_1454eb290(param_2), iVar2 != 0)) {
LAB_1454ebbee:
            lVar6 = lVar5;
          }
        }
      }
    }
  }
  FUN_144ba5800(lVar3);
  FUN_144ed16b0(lVar6);
LAB_1454ebc05:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1454ebc30 FUN_1454ebc30 body=488 status=ok
// SIG undefined FUN_1454ebc30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454ebc30(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar4;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar9 = 0x1454ebc48;
  lVar4 = 0;
  lVar3 = 0;
  lVar6 = 0;
  if ((*(byte *)*param_1 & 2) == 0) {
    lVar7 = lVar4;
    lVar5 = lVar4;
    if ((param_2 == 0) && (param_2 = FUN_144eedd20(), lVar7 = param_2, param_2 == 0)) {
      FUN_144ba24f0(0x10,0xaa,0x41,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x1b),uVar9);
      lVar6 = lVar4;
    }
    else {
      iVar1 = FUN_144efc430(param_1,param_2);
      if (iVar1 == 0) {
        FUN_144ba24f0(0x10,0xaa,0x76,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x22),uVar9);
      }
      else if (param_1[1] == 0) {
        FUN_144ba24f0(0x10,0xaa,0x71,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x28),uVar9);
      }
      else {
        iVar1 = FUN_144efceb0(param_1,param_1[1],param_2);
        lVar5 = lVar3;
        if (iVar1 < 1) {
          FUN_144ba24f0(0x10,0xaa,0x6b,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x2c),uVar9);
        }
        else {
          lVar6 = FUN_144efc690(param_1);
          if ((lVar6 != 0) && (lVar2 = FUN_144efc150(param_1), lVar5 = lVar4, lVar2 != 0)) {
            iVar1 = FUN_144ba0340(lVar2);
            if (iVar1 == 0) {
              uVar8 = 0;
              iVar1 = FUN_144efd2c0(param_1,lVar6,lVar2,0,0,param_2);
              if (iVar1 != 0) {
                iVar1 = FUN_144efce30(param_1,lVar6);
                if (iVar1 == 0) {
                  FUN_144ba24f0(0x10,0xaa,0x7a,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x3e));
                  lVar5 = lVar3;
                }
                else {
                  lVar5 = 1;
                }
              }
            }
            else {
              FUN_144ba24f0(0x10,0xaa,0x80,"crypto\\ec\\ec_check.c",CONCAT44(uVar8,0x37));
            }
          }
        }
      }
    }
    FUN_144eeddc0(lVar7);
    FUN_144efc7a0(lVar6);
  }
  else {
    lVar5 = 1;
  }
  return lVar5;
}



// FUNCTION 1454ebe20 FUN_1454ebe20 body=1284 status=ok
// SIG undefined FUN_1454ebe20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454ebe20(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_res20;
  longlong lVar18;
  undefined4 uVar19;
  longlong local_68;
  longlong local_60;
  undefined8 local_50;
  undefined4 uVar12;
  
  lVar16 = 0;
  uVar11 = 0x20;
  uVar12 = 0x20;
  local_68 = 0;
  local_res20 = 0;
  local_60 = 0;
  local_50 = 0;
  lVar15 = 0;
  lVar14 = 0;
  lVar17 = lVar16;
  if (param_2 == 0) {
    local_res20 = lVar16;
    local_68 = lVar16;
    lVar4 = lVar16;
    uVar13 = 0x43;
  }
  else {
    lVar4 = FUN_144eedd20();
    if (lVar4 == 0) {
      local_res20 = lVar16;
      local_68 = lVar16;
      uVar13 = 0x41;
    }
    else {
      iVar1 = FUN_144efc210(param_2);
      uVar13 = uVar11;
      if (iVar1 == 0) {
        uVar5 = FUN_144efbee0(param_2);
        iVar1 = FUN_144efbef0(uVar5);
        lVar15 = FUN_144ba0570();
        lVar17 = lVar15;
        if (((lVar15 == 0) || (lVar14 = FUN_144ba0570(), local_68 = lVar14, lVar14 == 0)) ||
           (local_res20 = FUN_144ba0570(), local_res20 == 0)) {
          uVar13 = 0x41;
        }
        else {
          iVar2 = FUN_144efc390(param_2,lVar15,lVar14,local_res20,lVar4);
          if (iVar2 == 0) {
            uVar13 = 0x10;
          }
          else {
            lVar6 = FUN_144efc0f0(param_2);
            if (lVar6 != 0) {
              lVar7 = FUN_144efc150(param_2);
              lVar8 = FUN_144efc1d0(param_2);
              if (lVar7 != 0) {
                iVar2 = FUN_144efc230(param_2);
                lVar18 = lVar4;
                local_60 = FUN_1455d9ed0(param_2,lVar6,iVar2,0,lVar4);
                uVar19 = (undefined4)((ulonglong)lVar18 >> 0x20);
                if (local_60 == 0) {
                  uVar13 = 0x10;
                }
                else {
                  lVar6 = FUN_144efc240(param_2);
                  if (lVar6 != 0) {
                    local_50 = FUN_144efc250(param_2);
                  }
                  iVar3 = FUN_144b9edb0(param_1,param_3,0x80);
                  if (iVar3 != 0) {
                    uVar5 = FUN_144ea8ee0(iVar1);
                    iVar3 = FUN_144ec7640(param_1,"Field Type: %s\n",uVar5);
                    if (0 < iVar3) {
                      if (iVar1 == 0x197) {
                        iVar1 = FUN_144ee61a0(param_2);
                        uVar13 = uVar12;
                        if ((iVar1 != 0) &&
                           (iVar3 = FUN_144b9edb0(param_1,param_3,0x80), iVar3 != 0)) {
                          uVar5 = FUN_144ea8ee0(iVar1);
                          iVar1 = FUN_144ec7640(param_1,"Basis Type: %s\n",uVar5);
                          if (0 < iVar1) {
                            pcVar9 = "Polynomial:";
                            goto LAB_1454ec1a5;
                          }
                        }
                      }
                      else {
                        pcVar9 = "Prime:";
LAB_1454ec1a5:
                        uVar5 = CONCAT44(uVar19,param_3);
                        iVar1 = FUN_1454dc320(param_1,pcVar9,lVar15,0,uVar5);
                        uVar13 = uVar12;
                        if (iVar1 != 0) {
                          uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                          iVar1 = FUN_1454dc320(param_1,"A:   ",lVar14,0,uVar5);
                          if (iVar1 != 0) {
                            uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                            iVar1 = FUN_1454dc320(param_1,"B:   ",local_res20,0,uVar5);
                            if (iVar1 != 0) {
                              uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                              puVar10 = PTR_s_Generator__compressed___14c745040;
                              if ((iVar2 != 2) &&
                                 (puVar10 = PTR_s_Generator__uncompressed___14c745048, iVar2 != 4))
                              {
                                puVar10 = PTR_s_Generator__hybrid___14c745050;
                              }
                              iVar1 = FUN_1454dc320(param_1,puVar10,local_60,0,uVar5);
                              if (iVar1 != 0) {
                                uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),param_3);
                                iVar1 = FUN_1454dc320(param_1,"Order: ",lVar7,0,uVar5);
                                uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                if (iVar1 != 0) {
                                  if (lVar8 != 0) {
                                    uVar5 = CONCAT44(uVar19,param_3);
                                    iVar1 = FUN_1454dc320(param_1,"Cofactor: ",lVar8,0,uVar5);
                                    uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
                                    if (iVar1 == 0) goto LAB_1454ebe79;
                                  }
                                  if (lVar6 == 0) {
                                    lVar17 = 1;
                                    goto LAB_1454ebe9a;
                                  }
                                  iVar1 = FUN_1454ec330(param_1,"Seed:",lVar6,local_50,
                                                        CONCAT44(uVar19,param_3));
                                  uVar13 = uVar11;
                                  if (iVar1 != 0) {
                                    lVar17 = 1;
                                    goto LAB_1454ebe9a;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_1454ebe79;
              }
            }
            uVar13 = 0x10;
          }
        }
      }
      else {
        iVar1 = FUN_144b9edb0(param_1,param_3,0x80);
        local_res20 = lVar16;
        local_68 = lVar16;
        if ((iVar1 != 0) && (iVar1 = FUN_144efc1f0(param_2), uVar13 = uVar12, iVar1 != 0)) {
          uVar5 = FUN_144ea8ee0(iVar1);
          iVar2 = FUN_144ec7640(param_1,"ASN1 OID: %s",uVar5);
          if ((0 < iVar2) && (iVar2 = FUN_144ec7640(param_1,&DAT_149dfc0af), 0 < iVar2)) {
            lVar6 = FUN_14527ff20(iVar1);
            if (lVar6 == 0) {
              lVar17 = 1;
              goto LAB_1454ebe9a;
            }
            iVar1 = FUN_144b9edb0(param_1,param_3,0x80);
            if ((iVar1 != 0) &&
               (iVar1 = FUN_144ec7640(param_1,"NIST CURVE: %s\n",lVar6), local_68 = lVar14,
               lVar17 = lVar15, uVar13 = uVar11, 0 < iVar1)) {
              lVar17 = 1;
              lVar14 = lVar16;
              lVar15 = lVar16;
              goto LAB_1454ebe9a;
            }
          }
        }
      }
    }
  }
LAB_1454ebe79:
  FUN_144ba24f0(0x10,0x95,uVar13,"crypto\\ec\\eck_prn.c",0xd6);
  lVar14 = local_68;
  lVar15 = lVar17;
  lVar17 = lVar16;
LAB_1454ebe9a:
  FUN_144ba0cd0(lVar15);
  FUN_144ba0cd0(lVar14);
  FUN_144ba0cd0(local_res20);
  FUN_144ba0cd0(local_60);
  FUN_144eeddc0(lVar4);
  return lVar17;
}



// FUNCTION 1454ec330 FUN_1454ec330 body=441 status=ok
// SIG undefined FUN_1454ec330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ec330(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  int param_5)

{
  int iVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [143];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 != 0) {
    uVar2 = 0;
    if (param_5 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0x80;
      if (param_5 < 0x81) {
        iVar4 = param_5;
      }
      memset(&local_e8,0x20,(longlong)iVar4);
      iVar1 = FUN_144b9eb80(param_1,&local_e8,iVar4);
      if (iVar1 < 1) goto LAB_1454ec4d5;
    }
    iVar1 = FUN_144ec7640(param_1,&DAT_149dfbe46,param_2);
    if (0 < iVar1) {
      if (param_4 != 0) {
        do {
          if (uVar2 == (uVar2 / 0xf) * 0xf) {
            local_e8 = 10;
            memset(local_e7,0x20,(longlong)(iVar4 + 4));
            iVar1 = FUN_144b9eb80(param_1,&local_e8,iVar4 + 5);
            if (iVar1 < 1) goto LAB_1454ec4d5;
          }
          pwVar3 = L":Asset";
          if (uVar2 + 1 == param_4) {
            pwVar3 = L"";
          }
          iVar1 = FUN_144ec7640(param_1,"%02x%s",*(undefined1 *)(param_3 + uVar2),pwVar3);
          if (iVar1 < 1) goto LAB_1454ec4d5;
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_4);
      }
      FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
    }
  }
LAB_1454ec4d5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_108);
}



// FUNCTION 1454ec500 FUN_1454ec500 body=68 status=ok
// SIG undefined FUN_1454ec500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ec500(int param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 3) {
    lVar1 = *param_2;
    FUN_144ba6e60(*(undefined8 *)(lVar1 + 0x40));
    FUN_144b47250(*(undefined8 *)(lVar1 + 0x38));
    FUN_144ba5800(*(undefined8 *)(lVar1 + 0x48));
  }
  return 1;
}



// FUNCTION 1454ec590 FUN_1454ec590 body=40 status=ok
// SIG undefined FUN_1454ec590(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ec590(int param_1,longlong *param_2)

{
  if (param_1 == 3) {
    FUN_144ba6e60(*(undefined8 *)(*param_2 + 0x10));
  }
  return 1;
}



// FUNCTION 1454ec5d0 FUN_1454ec5d0 body=109 status=ok
// SIG undefined FUN_1454ec5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ec5d0(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (param_1 != 1) {
    if (param_1 == 3) {
      FUN_144ed16b0(*(undefined8 *)(lVar1 + 0x28));
      FUN_144ba5170(*(undefined8 *)(lVar1 + 0x30));
    }
    return 1;
  }
  lVar2 = FUN_144ba50b0();
  *(longlong *)(lVar1 + 0x30) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  FUN_144ba3ef0(lVar2,1);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  return 1;
}



// FUNCTION 1454ec660 FUN_1454ec660 body=136 status=ok
// SIG undefined FUN_1454ec660(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ec660(int param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == 2) {
    piVar2 = (int *)*param_2;
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(piVar2 + 2);
      FUN_144ba6e60(*(undefined8 *)(lVar3 + 0x28));
      FUN_144b47250(*(undefined8 *)(lVar3 + 0x20));
      FUN_144ed16b0(*(undefined8 *)(lVar3 + 0x30));
      return 1;
    }
    if (iVar1 == 2) {
      uVar4 = 0xd2;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uVar4 = 0xd5;
    }
    FUN_144ea66f0(*(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x20),
                  *(undefined8 *)(*(longlong *)(piVar2 + 2) + 0x28),"crypto\\cms\\cms_asn1.c",uVar4,
                  0x1454ec66a);
  }
  return 1;
}



// FUNCTION 1454ec710 FUN_1454ec710 body=143 status=ok
// SIG undefined FUN_1454ec710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ec710(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  uVar1 = *param_2;
  if (param_1 == 10) {
    iVar2 = FUN_1455d9f40(param_4 + 2,uVar1);
    if (iVar2 < 1) {
      return 0;
    }
LAB_1454ec770:
    lVar3 = FUN_1455d8b10(uVar1,*param_4);
    param_4[1] = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  else {
    if (param_1 != 0xb) {
      if (param_1 == 0xc) goto LAB_1454ec770;
      if (param_1 != 0xd) {
        return 1;
      }
    }
    iVar2 = FUN_1455d8c80(uVar1,param_4[1]);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1454ec860 FUN_1454ec860 body=8 status=ok
// SIG undefined FUN_1454ec860(void)

undefined * FUN_1454ec860(void)

{
  return &DAT_149d94b00;
}



// FUNCTION 1454ec900 FUN_1454ec900 body=131 status=ok
// SIG undefined FUN_1454ec900(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ec900(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 local_res20;
  undefined1 local_res21;
  undefined1 local_res22;
  undefined1 local_res23;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 *local_10;
  undefined8 uStack_8;
  
  uStack_8 = 0x1454ec90a;
  param_4 = param_4 << 3;
  local_res20 = (undefined1)((uint)param_4 >> 0x18);
  local_res21 = (undefined1)((uint)param_4 >> 0x10);
  local_res22 = (undefined1)((uint)param_4 >> 8);
  local_30 = &local_res20;
  local_10 = &local_38;
  local_res23 = (undefined1)param_4;
  local_38 = 4;
  local_34 = 4;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_3;
  FUN_144f01520(&local_20,param_1,&DAT_149d958b0);
  return;
}



// FUNCTION 1454ec990 FUN_1454ec990 body=8 status=ok
// SIG undefined FUN_1454ec990(void)

undefined * FUN_1454ec990(void)

{
  return &DAT_149d95620;
}



// FUNCTION 1454ec9a0 FUN_1454ec9a0 body=313 status=ok
// SIG undefined FUN_1454ec9a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454ec9a0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 local_res10;
  undefined1 local_res11;
  
  uVar3 = 0;
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar6 = uVar3;
  if ((param_2[1] & 0x100U) != 0) {
    uVar6 = 1;
    iVar1 = FUN_144b9eb80(param_1,L"-`[Left Bracket",1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  if (*param_2 == 0) {
    iVar1 = FUN_144b9eb80(param_1,&DAT_149d01adc,2);
    if (iVar1 != 2) {
      return 0xffffffff;
    }
    return (ulonglong)((int)uVar6 + 2);
  }
  uVar4 = uVar3;
  if (*param_2 < 1) {
    return uVar6;
  }
  while( true ) {
    iVar5 = (int)uVar6;
    iVar1 = (int)uVar3;
    if ((iVar1 != 0) && (iVar1 == (iVar1 / 0x23) * 0x23)) {
      iVar2 = FUN_144b9eb80(param_1,&DAT_149d96358,2);
      if (iVar2 != 2) {
        return 0xffffffff;
      }
      iVar5 = iVar5 + 2;
    }
    local_res10 = PTR_s_0123456789ABCDEF_14c745058
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) >> 4];
    local_res11 = PTR_s_0123456789ABCDEF_14c745058
                  [*(byte *)(*(longlong *)(param_2 + 2) + uVar4) & 0xf];
    iVar2 = FUN_144b9eb80(param_1,&local_res10,2);
    if (iVar2 != 2) break;
    uVar6 = (ulonglong)(iVar5 + 2);
    uVar3 = (ulonglong)(iVar1 + 1U);
    uVar4 = uVar4 + 1;
    if (*param_2 <= (int)(iVar1 + 1U)) {
      return uVar6;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1454ecae0 FUN_1454ecae0 body=1826 status=ok
// SIG undefined FUN_1454ecae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1454ecae0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 uVar15;
  
  iVar1 = 0;
  if ((((*(longlong *)(param_1 + 0x30) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) ||
      (*(longlong *)(param_1 + 0x18) == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 || (*(longlong *)(param_1 + 0x28) == 0)))) {
    uVar15 = 0x1c;
    uVar14 = 0x93;
    goto LAB_1454ed1e0;
  }
  if (*(int *)(param_1 + 4) == 1) {
    iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar1) {
      uVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
      iVar3 = FUN_144eecff0(uVar2);
      if (iVar1 + 2 <= iVar3) goto LAB_1454ecb73;
    }
    uVar15 = 0x25;
    uVar14 = 0xa7;
LAB_1454ed1e0:
    FUN_144ba24f0(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    return 0;
  }
LAB_1454ecb73:
  lVar5 = FUN_144ba0570();
  lVar6 = FUN_144ba0570();
  lVar7 = FUN_144ba0570();
  lVar8 = FUN_144ba0570();
  lVar9 = FUN_144ba0570();
  lVar10 = FUN_144eedd20();
  if (((lVar5 == 0) || (lVar6 == 0)) ||
     ((lVar7 == 0 || (((lVar8 == 0 || (lVar9 == 0)) || (lVar10 == 0)))))) {
    uVar13 = 0xffffffff;
    FUN_144ba24f0(4,0xa0,0x41,"crypto\\rsa\\rsa_chk.c",0x33);
    goto LAB_1454ed176;
  }
  iVar3 = FUN_144ba0350(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 != 0) {
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x39);
    FUN_144ba24f0(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  uVar13 = (uint)(iVar3 == 0);
  iVar3 = FUN_144ba03a0(*(undefined8 *)(param_1 + 0x20));
  if (iVar3 == 0) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x3d);
    FUN_144ba24f0(4,0xa0,0x65,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = FUN_144eed390(*(undefined8 *)(param_1 + 0x30),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x43);
    FUN_144ba24f0(4,0xa0,0x80,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = FUN_144eed390(*(undefined8 *)(param_1 + 0x38),0,0,param_2);
  if (iVar3 != 1) {
    uVar13 = 0;
    in_stack_ffffffffffffffb8 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x49);
    FUN_144ba24f0(4,0xa0,0x81,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar11 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0x58),iVar3);
      iVar4 = FUN_144eed390(*puVar11,0,0,param_2);
      if (iVar4 != 1) {
        uVar13 = 0;
        in_stack_ffffffffffffffb8 =
             CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),0x51);
        FUN_144ba24f0(4,0xa0,0xaa,"crypto\\rsa\\rsa_chk.c",in_stack_ffffffffffffffb8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = FUN_144eee590(lVar5,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar10
                       );
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (iVar3 != 0) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar11 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0x58),iVar3);
        iVar4 = FUN_144eee590(lVar5,lVar5,*puVar11,lVar10);
        uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
        if (iVar4 == 0) goto LAB_1454ecd40;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar3 = FUN_144ba0c40(lVar5,*(undefined8 *)(param_1 + 0x18));
    if (iVar3 != 0) {
      uVar13 = 0;
      if (iVar1 == 0) {
        uVar15 = CONCAT44(uVar2,0x67);
        uVar14 = 0x7f;
      }
      else {
        uVar15 = CONCAT44(uVar2,0x65);
        uVar14 = 0xac;
      }
      FUN_144ba24f0(4,0xa0,uVar14,"crypto\\rsa\\rsa_chk.c",uVar15);
    }
    uVar14 = FUN_144ba03c0();
    iVar3 = FUN_144eee270(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
    if (iVar3 != 0) {
      uVar14 = FUN_144ba03c0();
      iVar3 = FUN_144eee270(lVar6,*(undefined8 *)(param_1 + 0x38),uVar14);
      if (((iVar3 != 0) && (iVar3 = FUN_144eee590(lVar8,lVar5,lVar6,lVar10), iVar3 != 0)) &&
         (iVar3 = FUN_144ef0290(lVar9,lVar5,lVar6,lVar10), iVar3 != 0)) {
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            puVar11 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0x58),iVar3);
            uVar14 = FUN_144ba03c0();
            iVar4 = FUN_144eee270(lVar7,*puVar11,uVar14);
            if (((iVar4 == 0) || (iVar4 = FUN_144eee590(lVar8,lVar8,lVar7,lVar10), iVar4 == 0)) ||
               (iVar4 = FUN_144ef0290(lVar9,lVar9,lVar7,lVar10), iVar4 == 0)) goto LAB_1454ecd40;
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
        iVar3 = FUN_144eef830(lVar7,0,lVar8,lVar9,lVar10);
        if (iVar3 != 0) {
          lVar12 = lVar10;
          iVar3 = FUN_1452a57a0(lVar5,*(undefined8 *)(param_1 + 0x28),
                                *(undefined8 *)(param_1 + 0x20),lVar7,lVar10);
          uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
          if (iVar3 != 0) {
            iVar3 = FUN_144ba0350(lVar5);
            if (iVar3 == 0) {
              uVar13 = 0;
              FUN_144ba24f0(4,0xa0,0x7b,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0x97));
            }
            if (((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) ||
               (*(longlong *)(param_1 + 0x50) == 0)) {
LAB_1454ed074:
              iVar3 = 0;
              if (0 < iVar1) {
                do {
                  puVar11 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 0x58),iVar3);
                  uVar14 = FUN_144ba03c0();
                  iVar4 = FUN_144eee270(lVar5,*puVar11,uVar14);
                  if (iVar4 == 0) goto LAB_1454ecd40;
                  lVar12 = lVar10;
                  iVar4 = FUN_144eef830(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar4 == 0) goto LAB_1454ecd40;
                  iVar4 = FUN_144ba0c40(lVar6,puVar11[1]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    uVar14 = CONCAT44(uVar2,0xcf);
                    FUN_144ba24f0(4,0xa0,0xa9,"crypto\\rsa\\rsa_chk.c",uVar14);
                    uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  }
                  lVar12 = FUN_144ef05b0(lVar5,puVar11[3],*puVar11,lVar10);
                  if (lVar12 == 0) goto LAB_1454ecd40;
                  iVar4 = FUN_144ba0c40(lVar5,puVar11[2]);
                  if (iVar4 != 0) {
                    uVar13 = 0;
                    FUN_144ba24f0(4,0xa0,0xa8,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xd8));
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar1);
              }
              goto LAB_1454ed176;
            }
            uVar14 = FUN_144ba03c0();
            iVar3 = FUN_144eee270(lVar5,*(undefined8 *)(param_1 + 0x30),uVar14);
            if (iVar3 != 0) {
              lVar12 = lVar10;
              iVar3 = FUN_144eef830(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
              uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
              if (iVar3 != 0) {
                iVar3 = FUN_144ba0c40(lVar6,*(undefined8 *)(param_1 + 0x40));
                if (iVar3 != 0) {
                  uVar13 = 0;
                  FUN_144ba24f0(4,0xa0,0x7c,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xa6));
                }
                uVar14 = FUN_144ba03c0();
                iVar3 = FUN_144eee270(lVar5,*(undefined8 *)(param_1 + 0x38),uVar14);
                if (iVar3 != 0) {
                  lVar12 = lVar10;
                  iVar3 = FUN_144eef830(0,lVar6,*(undefined8 *)(param_1 + 0x28),lVar5,lVar10);
                  uVar2 = (undefined4)((ulonglong)lVar12 >> 0x20);
                  if (iVar3 != 0) {
                    iVar3 = FUN_144ba0c40(lVar6,*(undefined8 *)(param_1 + 0x48));
                    if (iVar3 != 0) {
                      uVar13 = 0;
                      uVar14 = CONCAT44(uVar2,0xb4);
                      FUN_144ba24f0(4,0xa0,0x7d,"crypto\\rsa\\rsa_chk.c",uVar14);
                      uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    }
                    lVar12 = FUN_144ef05b0(lVar5,*(undefined8 *)(param_1 + 0x38),
                                           *(undefined8 *)(param_1 + 0x30),lVar10);
                    if (lVar12 != 0) {
                      iVar3 = FUN_144ba0c40(lVar5,*(undefined8 *)(param_1 + 0x50));
                      if (iVar3 != 0) {
                        uVar13 = 0;
                        FUN_144ba24f0(4,0xa0,0x7e,"crypto\\rsa\\rsa_chk.c",CONCAT44(uVar2,0xbe));
                      }
                      goto LAB_1454ed074;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1454ecd40:
  uVar13 = 0xffffffff;
LAB_1454ed176:
  FUN_144ba0cd0(lVar5);
  FUN_144ba0cd0(lVar6);
  FUN_144ba0cd0(lVar7);
  FUN_144ba0cd0(lVar8);
  FUN_144ba0cd0(lVar9);
  FUN_144eeddc0(lVar10);
  return uVar13;
}



// FUNCTION 1454ed210 FUN_1454ed210 body=990 status=ok
// SIG undefined FUN_1454ed210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454ed210(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  longlong local_38;
  undefined8 uVar10;
  
  uVar10 = 0;
  uVar9 = 0;
  local_38 = 0;
  FUN_144ba26f0();
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), local_38 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar4 = FUN_144eede90(param_5);
  lVar5 = FUN_144eede90(param_5);
  uVar6 = FUN_144eede90(param_5);
  lVar7 = FUN_144eede90(param_5);
  if ((lVar7 != 0) && (iVar2 = FUN_1452a55e0(uVar6,param_3,param_1[8],param_5), iVar2 != 0)) {
    if (*(longlong *)(*param_1 + 0x130) == 0) {
      iVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar5,param_3);
      if (iVar2 == 0) goto LAB_1454ed5b8;
      lVar8 = param_5;
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar4,lVar5,param_3,param_5);
      uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
    }
    else {
      iVar2 = FUN_1452a5860(lVar5,param_3,param_1[8],param_5);
      uVar10 = uVar9;
      if (iVar2 == 0) goto LAB_1454ed5b8;
      lVar8 = param_5;
      iVar2 = FUN_1452a57a0(uVar4,lVar5,param_3,param_1[8],param_5);
      uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
    }
    uVar10 = uVar9;
    if (iVar2 != 0) {
      if ((int)param_1[0xe] == 0) {
        pcVar1 = *(code **)(*param_1 + 0x130);
        if (pcVar1 == (code *)0x0) {
          lVar8 = param_5;
          iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar5,param_1[0xc],uVar6,param_5);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        }
        else {
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) goto LAB_1454ed5b8;
          lVar8 = param_5;
          iVar2 = FUN_1452a57a0(lVar5,lVar5,uVar6,param_1[8],param_5);
          uVar11 = (undefined4)((ulonglong)lVar8 >> 0x20);
        }
        if (iVar2 == 0) goto LAB_1454ed5b8;
        iVar2 = FUN_1452a56b0(uVar4,uVar4,lVar5,param_1[8]);
      }
      else {
        iVar2 = FUN_1452a58d0(lVar5,uVar6,param_1[8]);
        if ((iVar2 == 0) || (iVar2 = FUN_1452a56b0(lVar5,lVar5,uVar6,param_1[8]), iVar2 == 0))
        goto LAB_1454ed5b8;
        iVar2 = FUN_1452a5740(uVar4,uVar4,lVar5,param_1[8]);
      }
      if (iVar2 != 0) {
        lVar8 = param_1[0xd];
        if (((*(code **)(*param_1 + 0x130) == (code *)0x0) ||
            (iVar2 = (**(code **)(*param_1 + 0x130))(param_1,lVar5,param_1[0xd],param_5),
            lVar8 = lVar5, iVar2 != 0)) &&
           (iVar2 = FUN_1452a56b0(uVar4,uVar4,lVar8,param_1[8]), iVar2 != 0)) {
          lVar5 = FUN_1455da260(lVar7,uVar4,param_1[8],param_5);
          if (lVar5 == 0) {
            uVar3 = FUN_144ba26c0();
            if (((uVar3 & 0xff000000) == 0x3000000) && ((uVar3 & 0xfff) == 0x6f)) {
              FUN_144ba26f0();
              FUN_144ba24f0(0x10,0xa9,0x6e,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x6c));
            }
            else {
              FUN_144ba24f0(0x10,0xa9,3,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x6f));
            }
          }
          else {
            uVar3 = FUN_144ba03a0(lVar7);
            if ((param_4 != 0) != uVar3) {
              iVar2 = FUN_144ba0340(lVar7);
              if (iVar2 != 0) {
                iVar2 = FUN_1455d9fd0(uVar6,param_1[8],param_5);
                if (iVar2 != -2) {
                  if (iVar2 == 1) {
                    FUN_144ba24f0(0x10,0xa9,0x6d,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x7d));
                  }
                  else {
                    FUN_144ba24f0(0x10,0xa9,0x6e,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x83));
                  }
                }
                goto LAB_1454ed5b8;
              }
              iVar2 = FUN_144eee310(lVar7,param_1[8],lVar7);
              if (iVar2 == 0) goto LAB_1454ed5b8;
            }
            uVar3 = FUN_144ba03a0(lVar7);
            if ((param_4 != 0) == uVar3) {
              iVar2 = FUN_144efc9b0(param_1,param_2,uVar6,lVar7,param_5);
              uVar10 = 0;
              if (iVar2 != 0) {
                uVar10 = 1;
              }
            }
            else {
              FUN_144ba24f0(0x10,0xa9,0x44,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar11,0x8b));
            }
          }
        }
      }
    }
  }
LAB_1454ed5b8:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(local_38);
  return uVar10;
}



// FUNCTION 1454ed5f0 FUN_1454ed5f0 body=738 status=ok
// SIG undefined FUN_1454ed5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454ed5f0(longlong param_1,undefined8 param_2,int param_3,char *param_4,
                       ulonglong param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  undefined8 uVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  lVar10 = 0;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar1 = FUN_144efce30();
    if (iVar1 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        FUN_144ba24f0(0x10,0x68,100,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar12,0xaf));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
    uVar9 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    uVar2 = uVar9;
    if (param_3 != 2) {
      uVar2 = uVar9 * 2;
    }
    uVar2 = uVar2 + 1;
    if (param_4 == (char *)0x0) goto LAB_1454ed87c;
    if (uVar2 <= param_5) {
      if ((param_6 == 0) && (param_6 = FUN_144eedd20(), lVar10 = param_6, param_6 == 0)) {
        return 0;
      }
      FUN_144eede20(param_6);
      uVar3 = FUN_144eede90(param_6);
      lVar4 = FUN_144eede90(param_6);
      if (lVar4 != 0) {
        lVar7 = param_6;
        iVar1 = FUN_144efcb20(param_1,param_2,uVar3,lVar4,param_6);
        uVar12 = (undefined4)((ulonglong)lVar7 >> 0x20);
        if (iVar1 != 0) {
          if (((param_3 - 2U & 0xfffffffb) == 0) && (iVar1 = FUN_144ba03a0(lVar4), iVar1 != 0)) {
            *param_4 = (char)param_3 + '\x01';
          }
          else {
            *param_4 = (char)param_3;
          }
          lVar7 = 1;
          iVar1 = FUN_144ba03d0(uVar3);
          uVar5 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar9 < uVar5) {
            uVar3 = CONCAT44(uVar12,0xde);
          }
          else {
            if (uVar5 != 0) {
              lVar7 = uVar5 + 1;
              pcVar8 = param_4;
              for (; pcVar8 = pcVar8 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar8 = '\0';
              }
            }
            iVar1 = FUN_144ba08c0(uVar3,param_4 + lVar7);
            uVar5 = lVar7 + iVar1;
            if (uVar5 == uVar9 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar1 = FUN_144ba03d0(lVar4);
                uVar6 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar9 < uVar6) {
                  uVar3 = CONCAT44(uVar12,0xf0);
                  goto LAB_1454ed799;
                }
                if (uVar6 != 0) {
                  pcVar8 = param_4 + uVar5;
                  uVar5 = uVar5 + uVar6;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *pcVar8 = '\0';
                    pcVar8 = pcVar8 + 1;
                  }
                }
                iVar1 = FUN_144ba08c0(lVar4,param_4 + uVar5);
                uVar5 = uVar5 + (longlong)iVar1;
              }
              if (uVar5 == uVar2) {
                FUN_144eedf20(param_6);
LAB_1454ed87c:
                FUN_144eeddc0(lVar10);
                return uVar2;
              }
              uVar3 = CONCAT44(uVar12,0xfc);
            }
            else {
              uVar3 = CONCAT44(uVar12,0xe8);
            }
          }
LAB_1454ed799:
          FUN_144ba24f0(0x10,0x68,0x44,"crypto\\ec\\ecp_oct.c",uVar3);
        }
      }
      FUN_144eedf20(param_6);
      goto LAB_1454ed8aa;
    }
    uVar11 = 0xc0;
    uVar3 = 100;
  }
  else {
    uVar11 = 0xa7;
    uVar3 = 0x68;
  }
  FUN_144ba24f0(0x10,0x68,uVar3,"crypto\\ec\\ecp_oct.c",uVar11);
LAB_1454ed8aa:
  FUN_144eeddc0(lVar10);
  return 0;
}



// FUNCTION 1454ed8e0 FUN_1454ed8e0 body=686 status=ok
// SIG undefined FUN_1454ed8e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454ed8e0(longlong param_1,undefined8 param_2,byte *param_3,longlong param_4,
                       longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint local_res20;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_res20 = 0;
  if (param_4 == 0) {
    FUN_144ba24f0(0x10,0x67,100,"crypto\\ec\\ecp_oct.c",0x118);
    return 0;
  }
  bVar1 = *param_3;
  uVar10 = bVar1 & 1;
  uVar8 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_1454ed972:
    if ((bVar1 & 1) != 0) {
      uVar5 = 0x125;
      goto LAB_1454ed993;
    }
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 == 4) goto LAB_1454ed972;
      if (uVar8 != 6) {
        uVar5 = 0x121;
        goto LAB_1454ed993;
      }
    }
    if (uVar8 == 4) goto LAB_1454ed972;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar4 = FUN_144efc8b0();
      return uVar4;
    }
    uVar5 = 299;
LAB_1454ed993:
    FUN_144ba24f0(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar5);
    return 0;
  }
  iVar2 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
  iVar2 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar9 = (longlong)iVar2;
  lVar11 = lVar9;
  if (uVar8 != 2) {
    lVar11 = lVar9 * 2;
  }
  if (param_4 != lVar11 + 1) {
    FUN_144ba24f0(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",CONCAT44(uVar12,0x138));
    return 0;
  }
  lVar11 = 0;
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), lVar11 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar5 = FUN_144eede90(param_5);
  lVar6 = FUN_144eede90(param_5);
  if ((lVar6 == 0) || (lVar7 = FUN_144ba0740(param_3 + 1,iVar2,uVar5), lVar7 == 0))
  goto LAB_1454edb55;
  iVar3 = FUN_144ba0ef0(uVar5,*(undefined8 *)(param_1 + 0x40));
  if (iVar3 < 0) {
    if (uVar8 == 2) {
      iVar2 = FUN_145298a60(param_1,param_2,uVar5,uVar10,param_5);
LAB_1454edb46:
      if (iVar2 != 0) {
        local_res20 = 1;
      }
      goto LAB_1454edb55;
    }
    lVar9 = FUN_144ba0740(param_3 + lVar9 + 1,iVar2,lVar6);
    if (lVar9 == 0) goto LAB_1454edb55;
    iVar2 = FUN_144ba0ef0(lVar6,*(undefined8 *)(param_1 + 0x40));
    if (iVar2 < 0) {
      if ((uVar8 != 6) || (uVar8 = FUN_144ba03a0(lVar6), uVar10 == uVar8)) {
        iVar2 = FUN_144efc9b0(param_1,param_2,uVar5,lVar6,param_5);
        goto LAB_1454edb46;
      }
      uVar5 = CONCAT44(uVar12,0x15b);
    }
    else {
      uVar5 = CONCAT44(uVar12,0x156);
    }
  }
  else {
    uVar5 = CONCAT44(uVar12,0x14b);
  }
  FUN_144ba24f0(0x10,0x67,0x66,"crypto\\ec\\ecp_oct.c",uVar5);
LAB_1454edb55:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar11);
  return (ulonglong)local_res20;
}



// FUNCTION 1454edb90 FUN_1454edb90 body=644 status=ok
// SIG undefined FUN_1454edb90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1454edb90(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                      longlong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar9;
  
  lVar9 = 0;
  lVar8 = 0;
  FUN_144ba26f0();
  lVar11 = lVar9;
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), lVar11 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar4 = FUN_144eede90(param_5);
  uVar5 = FUN_144eede90(param_5);
  uVar6 = FUN_144eede90(param_5);
  lVar7 = FUN_144eede90(param_5);
  lVar10 = lVar9;
  if ((lVar7 == 0) || (iVar1 = FUN_1455dade0(uVar5,param_3,param_1 + 9), iVar1 == 0))
  goto LAB_1454eddea;
  iVar1 = FUN_144ba0340(uVar5);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,uVar4,uVar5,param_5);
    if (iVar1 == 0) goto LAB_1454eddea;
    lVar10 = param_5;
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1,uVar4,param_1[0xd],uVar4,param_5);
    uVar12 = (undefined4)((ulonglong)lVar10 >> 0x20);
    lVar10 = lVar8;
    if (((iVar1 == 0) || (iVar1 = FUN_1455da9d0(uVar4,param_1[0xc],uVar4), iVar1 == 0)) ||
       (iVar1 = FUN_1455da9d0(uVar4,uVar5,uVar4), iVar1 == 0)) goto LAB_1454eddea;
    iVar1 = FUN_1455dbbd0(lVar7,uVar4,param_1 + 9,param_5);
    if (iVar1 == 0) {
      uVar2 = FUN_144ba26c0();
      if (((uVar2 & 0xff000000) == 0x3000000) && ((uVar2 & 0xfff) == 0x74)) {
        FUN_144ba26f0();
        FUN_144ba24f0(0x10,0xa4,0x6e,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x52));
      }
      else {
        FUN_144ba24f0(0x10,0xa4,3,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x55));
      }
      goto LAB_1454eddea;
    }
    iVar1 = FUN_144ba03a0(lVar7);
    iVar3 = (**(code **)(*param_1 + 0x108))(param_1,uVar6,uVar5,lVar7,param_5);
    if (iVar3 == 0) goto LAB_1454eddea;
    if ((iVar1 != 0) != (param_4 != 0)) {
      iVar1 = FUN_1455da9d0(uVar6,uVar6,uVar5);
      goto LAB_1454eddbc;
    }
  }
  else {
    iVar1 = FUN_1455dbb20(uVar6,param_1[0xd],param_1 + 9);
LAB_1454eddbc:
    lVar10 = lVar9;
    if (iVar1 == 0) goto LAB_1454eddea;
  }
  iVar1 = FUN_144efc9b0(param_1,param_2,uVar5,uVar6,param_5);
  lVar10 = 0;
  if (iVar1 != 0) {
    lVar10 = 1;
  }
LAB_1454eddea:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar11);
  return lVar10;
}



// FUNCTION 1454ede20 FUN_1454ede20 body=797 status=ok
// SIG undefined FUN_1454ede20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454ede20(longlong *param_1,undefined8 param_2,int param_3,char *param_4,
                       ulonglong param_5,longlong param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar12;
  longlong lVar11;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar10 = 0;
  if (((param_3 - 2U & 0xfffffff9) == 0) && (param_3 != 8)) {
    iVar1 = FUN_144efce30();
    if (iVar1 != 0) {
      if (param_4 == (char *)0x0) {
        return 1;
      }
      if (param_5 == 0) {
        FUN_144ba24f0(0x10,0xa1,100,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar12,0x86));
        return 0;
      }
      *param_4 = '\0';
      return 1;
    }
    iVar1 = FUN_144efc3e0(param_1);
    uVar9 = (ulonglong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
    uVar2 = uVar9;
    if (param_3 != 2) {
      uVar2 = uVar9 * 2;
    }
    uVar2 = uVar2 + 1;
    if (param_4 == (char *)0x0) goto LAB_1454ee0e4;
    if (uVar2 <= param_5) {
      if ((param_6 == 0) && (param_6 = FUN_144eedd20(), lVar10 = param_6, param_6 == 0)) {
        return 0;
      }
      FUN_144eede20(param_6);
      uVar8 = FUN_144eede90(param_6);
      uVar3 = FUN_144eede90(param_6);
      lVar4 = FUN_144eede90(param_6);
      if (lVar4 != 0) {
        lVar11 = param_6;
        iVar1 = FUN_144efcb20(param_1,param_2,uVar8,uVar3,param_6);
        uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
        if (iVar1 != 0) {
          *param_4 = (char)param_3;
          if ((param_3 != 4) && (iVar1 = FUN_144ba0340(uVar8), iVar1 == 0)) {
            lVar11 = param_6;
            iVar1 = (**(code **)(*param_1 + 0x118))(param_1,lVar4,uVar3,uVar8,param_6);
            uVar12 = (undefined4)((ulonglong)lVar11 >> 0x20);
            if (iVar1 == 0) goto LAB_1454ee01d;
            iVar1 = FUN_144ba03a0(lVar4);
            if (iVar1 != 0) {
              *param_4 = *param_4 + '\x01';
            }
          }
          lVar4 = 1;
          iVar1 = FUN_144ba03d0(uVar8);
          uVar5 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar9 < uVar5) {
            uVar8 = CONCAT44(uVar12,0xb8);
          }
          else {
            if (uVar5 != 0) {
              lVar4 = uVar5 + 1;
              pcVar7 = param_4;
              for (; pcVar7 = pcVar7 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
                *pcVar7 = '\0';
              }
            }
            iVar1 = FUN_144ba08c0(uVar8,param_4 + lVar4);
            uVar5 = lVar4 + iVar1;
            if (uVar5 == uVar9 + 1) {
              if ((param_3 - 4U & 0xfffffffd) == 0) {
                iVar1 = FUN_144ba03d0(uVar3);
                uVar6 = uVar9 - (longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3);
                if (uVar9 < uVar6) {
                  uVar8 = CONCAT44(uVar12,0xca);
                  goto LAB_1454ee003;
                }
                if (uVar6 != 0) {
                  pcVar7 = param_4 + uVar5;
                  uVar5 = uVar5 + uVar6;
                  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *pcVar7 = '\0';
                    pcVar7 = pcVar7 + 1;
                  }
                }
                iVar1 = FUN_144ba08c0(uVar3,param_4 + uVar5);
                uVar5 = uVar5 + (longlong)iVar1;
              }
              if (uVar5 == uVar2) {
                FUN_144eedf20(param_6);
LAB_1454ee0e4:
                FUN_144eeddc0(lVar10);
                return uVar2;
              }
              uVar8 = CONCAT44(uVar12,0xd6);
            }
            else {
              uVar8 = CONCAT44(uVar12,0xc2);
            }
          }
LAB_1454ee003:
          FUN_144ba24f0(0x10,0xa1,0x44,"crypto\\ec\\ec2_oct.c",uVar8);
        }
      }
LAB_1454ee01d:
      FUN_144eedf20(param_6);
      goto LAB_1454ee115;
    }
    uVar3 = 0x97;
    uVar8 = 100;
  }
  else {
    uVar3 = 0x7e;
    uVar8 = 0x68;
  }
  FUN_144ba24f0(0x10,0xa1,uVar8,"crypto\\ec\\ec2_oct.c",uVar3);
LAB_1454ee115:
  FUN_144eeddc0(lVar10);
  return 0;
}



// FUNCTION 1454ee140 FUN_1454ee140 body=802 status=ok
// SIG undefined FUN_1454ee140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454ee140(longlong *param_1,undefined8 param_2,byte *param_3,longlong param_4,
                       longlong param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar14;
  uint local_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_48 = 0;
  if (param_4 == 0) {
    FUN_144ba24f0(0x10,0xa0,100,"crypto\\ec\\ec2_oct.c",0xf7);
    return 0;
  }
  bVar1 = *param_3;
  uVar11 = bVar1 & 1;
  uVar10 = bVar1 & 0xfffffffe;
  if ((bVar1 & 0xfe) == 0) {
LAB_1454ee1d2:
    if ((bVar1 & 1) != 0) {
      uVar6 = 0x110;
      goto LAB_1454ee1f2;
    }
  }
  else {
    if (uVar10 != 2) {
      if (uVar10 == 4) goto LAB_1454ee1d2;
      if (uVar10 != 6) {
        uVar6 = 0x10c;
        goto LAB_1454ee1f2;
      }
    }
    if (uVar10 == 4) goto LAB_1454ee1d2;
  }
  if ((bVar1 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar5 = FUN_144efc8b0();
      return uVar5;
    }
    uVar6 = 0x117;
LAB_1454ee1f2:
    FUN_144ba24f0(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",uVar6);
    return 0;
  }
  iVar2 = FUN_144efc3e0();
  iVar3 = (int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3;
  lVar13 = (longlong)iVar3;
  lVar12 = lVar13;
  if (uVar10 != 2) {
    lVar12 = lVar13 * 2;
  }
  if (param_4 != lVar12 + 1) {
    FUN_144ba24f0(0x10,0xa0,0x66,"crypto\\ec\\ec2_oct.c",CONCAT44(uVar14,0x125));
    return 0;
  }
  lVar12 = 0;
  if ((param_5 == 0) && (param_5 = FUN_144eedd20(), lVar12 = param_5, param_5 == 0)) {
    return 0;
  }
  FUN_144eede20(param_5);
  uVar6 = FUN_144eede90(param_5);
  uVar7 = FUN_144eede90(param_5);
  lVar8 = FUN_144eede90(param_5);
  if ((lVar8 == 0) || (lVar9 = FUN_144ba0740(param_3 + 1,iVar3,uVar6), lVar9 == 0))
  goto LAB_1454ee428;
  iVar4 = FUN_144ba03d0(uVar6);
  if (iVar2 < iVar4) {
    uVar6 = CONCAT44(uVar14,0x139);
LAB_1454ee30f:
    uVar7 = 0xa0;
LAB_1454ee319:
    FUN_144ba24f0(0x10,uVar7,0x66,"crypto\\ec\\ec2_oct.c",uVar6);
  }
  else {
    if (uVar10 == 2) {
      iVar2 = FUN_145298a60(param_1,param_2,uVar6,uVar11,param_5);
    }
    else {
      lVar13 = FUN_144ba0740(param_3 + lVar13 + 1,iVar3,uVar7);
      if (lVar13 == 0) goto LAB_1454ee428;
      iVar3 = FUN_144ba03d0(uVar7);
      if (iVar2 < iVar3) {
        uVar6 = CONCAT44(uVar14,0x144);
        goto LAB_1454ee30f;
      }
      if (uVar10 == 6) {
        iVar2 = FUN_144ba0340(uVar6);
        if (iVar2 == 0) {
          lVar13 = param_5;
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar8,uVar7,uVar6,param_5);
          uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
          if (iVar2 == 0) goto LAB_1454ee428;
          uVar10 = FUN_144ba03a0(lVar8);
          if (uVar11 != uVar10) {
            uVar7 = 0x10;
            uVar6 = CONCAT44(uVar14,0x156);
            goto LAB_1454ee319;
          }
        }
        else if ((bVar1 & 1) != 0) {
          uVar7 = 0x10;
          uVar6 = CONCAT44(uVar14,0x14f);
          goto LAB_1454ee319;
        }
      }
      iVar2 = FUN_144efc9b0(param_1,param_2,uVar6,uVar7,param_5);
    }
    if (iVar2 != 0) {
      local_48 = 1;
    }
  }
LAB_1454ee428:
  FUN_144eedf20(param_5);
  FUN_144eeddc0(lVar12);
  return (ulonglong)local_48;
}



// FUNCTION 1454ee470 FUN_1454ee470 body=78 status=ok
// SIG undefined FUN_1454ee470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454ee470(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong in_R9;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(in_R9 + 0x18) + 0x180);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_144ba24f0(0x10,0xf7,0xa0,"crypto\\ec\\ecdh_ossl.c",0x1a);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001454ee4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



// FUNCTION 1454ee4c0 FUN_1454ee4c0 body=751 status=ok
// SIG undefined FUN_1454ee4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 *
FUN_1454ee4c0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *_Dst;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  puVar12 = (undefined1 *)0x0;
  puVar8 = (undefined1 *)0x0;
  _Dst = (undefined1 *)0x0;
  lVar3 = FUN_144eedd20();
  puVar7 = puVar12;
  puVar9 = puVar12;
  if (lVar3 == 0) goto LAB_1454ee772;
  FUN_144eede20(lVar3);
  lVar4 = FUN_144eede90(lVar3);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x37));
    goto LAB_1454ee772;
  }
  lVar5 = FUN_144ed3220(param_4);
  if (lVar5 == 0) {
    FUN_144ba24f0(0x10,0x101,0x7d,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x3d));
    goto LAB_1454ee772;
  }
  uVar6 = FUN_144ed31a0(param_4);
  uVar1 = FUN_144ed2d90(param_4);
  if (((uVar1 >> 0xc & 1) == 0) ||
     ((iVar2 = FUN_144efc180(uVar6,lVar4,0), iVar2 != 0 &&
      (iVar2 = FUN_144eee590(lVar4,lVar4,lVar5,lVar3), lVar5 = lVar4, iVar2 != 0)))) {
    puVar8 = (undefined1 *)FUN_144efc690(uVar6);
    if (puVar8 != (undefined1 *)0x0) {
      iVar2 = FUN_144efd2c0(uVar6,puVar8,0,param_3,lVar5,lVar3);
      puVar9 = puVar8;
      if (iVar2 == 0) {
        uVar6 = 0x52;
      }
      else {
        lVar5 = lVar3;
        iVar2 = FUN_144efcb20(uVar6,puVar8,lVar4,0,lVar3);
        uVar13 = (undefined4)((ulonglong)lVar5 >> 0x20);
        if (iVar2 != 0) {
          iVar2 = FUN_144efc3e0(uVar6);
          uVar11 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          iVar2 = FUN_144ba03d0(lVar4);
          uVar10 = (ulonglong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3);
          if (uVar11 < uVar10) {
            FUN_144ba24f0(0x10,0x101,0x44,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x5e));
            puVar7 = _Dst;
            goto LAB_1454ee772;
          }
          _Dst = (undefined1 *)FUN_144ea64e0(uVar11,"crypto\\ec\\ecdh_ossl.c",0x61);
          if (_Dst != (undefined1 *)0x0) {
            memset(_Dst,0,uVar11 - uVar10);
            iVar2 = FUN_144ba08c0(lVar4,_Dst + (uVar11 - uVar10));
            if (uVar10 == (longlong)iVar2) {
              *param_1 = _Dst;
              puVar7 = (undefined1 *)0x0;
              puVar12 = &DAT_00000001;
              *param_2 = uVar11;
            }
            else {
              FUN_144ba24f0(0x10,0x101,3,"crypto\\ec\\ecdh_ossl.c",CONCAT44(uVar13,0x68));
              puVar7 = _Dst;
              puVar12 = (undefined1 *)0x0;
            }
            goto LAB_1454ee772;
          }
          uVar6 = CONCAT44(uVar13,0x62);
          goto LAB_1454ee6e0;
        }
        uVar6 = CONCAT44(uVar13,0x57);
      }
      FUN_144ba24f0(0x10,0x101,0x9b,"crypto\\ec\\ecdh_ossl.c",uVar6);
      goto LAB_1454ee772;
    }
    uVar6 = CONCAT44(uVar13,0x4d);
    _Dst = puVar12;
  }
  else {
    uVar6 = CONCAT44(uVar13,0x46);
  }
LAB_1454ee6e0:
  FUN_144ba24f0(0x10,0x101,0x41,"crypto\\ec\\ecdh_ossl.c",uVar6);
  puVar7 = _Dst;
  puVar9 = puVar8;
LAB_1454ee772:
  FUN_144efc7e0(puVar9);
  FUN_144eedf20(lVar3);
  FUN_144eeddc0(lVar3);
  FUN_144ea6530(puVar7,"crypto\\ec\\ecdh_ossl.c",0x76);
  return puVar12;
}



// FUNCTION 1454ee7b0 FUN_1454ee7b0 body=34 status=ok
// SIG undefined FUN_1454ee7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ee7b0(void)

{
  FUN_1454ef1d0();
  return;
}



// FUNCTION 1454ee7e0 FUN_1454ee7e0 body=115 status=ok
// SIG undefined FUN_1454ee7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454ee7e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res20;
  
  local_res20 = param_4;
  lVar2 = FUN_1454da380(param_2,param_3,param_6,param_7,param_8,0x1454ee7f0);
  if (lVar2 == 0) {
    *param_5 = 0;
    return 0;
  }
  uVar1 = FUN_144ee6d60(lVar2,&local_res20);
  *param_5 = uVar1;
  FUN_144ee6d10(lVar2);
  return 1;
}



// FUNCTION 1454ee860 FUN_1454ee860 body=1074 status=ok
// SIG undefined FUN_1454ee860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong *
FUN_1454ee860(undefined8 param_1,int param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar10 = 0;
  local_50 = 0;
  local_58 = 0;
  lVar6 = 0;
  lVar3 = FUN_144ed31a0(param_5);
  local_48 = FUN_144ed3220(param_5);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x10,0xf9,0x43,"crypto\\ec\\ecdsa_ossl.c",0xaa);
    return (longlong *)0x0;
  }
  if (local_48 == 0) {
    FUN_144ba24f0(0x10,0xf9,0x7d,"crypto\\ec\\ecdsa_ossl.c",0xae);
    return (longlong *)0x0;
  }
  iVar1 = FUN_144ed3360(param_5);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x10,0xf9,0x9f,"crypto\\ec\\ecdsa_ossl.c",0xb3);
    return (longlong *)0x0;
  }
  plVar4 = (longlong *)FUN_144ee6cb0();
  if (plVar4 == (longlong *)0x0) {
    FUN_144ba24f0(0x10,0xf9,0x41,"crypto\\ec\\ecdsa_ossl.c",0xb9);
    return (longlong *)0x0;
  }
  lVar5 = FUN_144ba0570();
  *plVar4 = lVar5;
  lVar5 = FUN_144ba0570();
  plVar4[1] = lVar5;
  if ((*plVar4 == 0) || (lVar5 == 0)) {
    uVar11 = 0xbf;
  }
  else {
    lVar6 = FUN_144eedd20();
    if ((lVar6 != 0) && (local_58 = FUN_144ba0570(), local_58 != 0)) {
      local_40 = FUN_144efc150(lVar3);
      uVar2 = FUN_144ba03d0(local_40);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = (int)(uVar2 + 7 + ((int)(uVar2 + 7) >> 0x1f & 7U)) >> 3;
      }
      lVar7 = FUN_144ba0740(param_1,param_2,local_58);
      if (lVar7 == 0) {
        uVar11 = 0xd2;
        uVar9 = 3;
      }
      else if (((int)uVar2 < param_2 * 8) &&
              (iVar1 = FUN_144eefec0(local_58,local_58,8 - (uVar2 & 7)), iVar1 == 0)) {
        uVar11 = 0xd7;
        uVar9 = 3;
      }
      else {
        do {
          if (param_3 == 0) goto LAB_1454eeac1;
          if (param_4 == 0) goto LAB_1454eeac1;
          lVar8 = FUN_144ba06b0(*plVar4,param_4);
          lVar7 = param_3;
          if (lVar8 == 0) {
            uVar11 = 0xe4;
            goto LAB_1454eec33;
          }
          while( true ) {
            iVar1 = FUN_144eced20(lVar5,*plVar4,*(undefined8 *)(lVar3 + 0x90),lVar6);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_144ecebf0(lVar5,lVar5,local_48,*(undefined8 *)(lVar3 + 0x90),lVar6),
               iVar1 == 0)) {
              uVar11 = 0xf2;
              uVar9 = 3;
              goto LAB_1454eec39;
            }
            iVar1 = FUN_1452a5a40(lVar5,lVar5,local_58,local_40);
            if (iVar1 == 0) {
              uVar11 = 0xf6;
              uVar9 = 3;
              goto LAB_1454eec39;
            }
            iVar1 = FUN_144eced20(lVar5,lVar5,*(undefined8 *)(lVar3 + 0x90),lVar6);
            if ((iVar1 == 0) ||
               (iVar1 = FUN_144ece730(lVar5,lVar5,lVar7,*(undefined8 *)(lVar3 + 0x90),lVar6),
               iVar1 == 0)) {
              uVar11 = 0xff;
              uVar9 = 3;
              goto LAB_1454eec39;
            }
            iVar1 = FUN_144ba0340(lVar5);
            if (iVar1 == 0) goto LAB_1454eec59;
            if (param_3 != 0) break;
LAB_1454eeac1:
            iVar1 = FUN_1454ef1d0(param_5,lVar6,&local_50,plVar4,param_1,param_2);
            lVar7 = local_50;
            lVar10 = local_50;
            if (iVar1 == 0) {
              FUN_144ba24f0(0x10,0xf9,0x2a,"crypto\\ec\\ecdsa_ossl.c",0xdd);
              lVar10 = local_50;
              goto LAB_1454eec4f;
            }
          }
        } while (param_4 == 0);
        uVar11 = 0x109;
        uVar9 = 0x9d;
      }
      goto LAB_1454eec39;
    }
    uVar11 = 0xc6;
  }
LAB_1454eec33:
  uVar9 = 0x41;
LAB_1454eec39:
  FUN_144ba24f0(0x10,0xf9,uVar9,"crypto\\ec\\ecdsa_ossl.c",uVar11);
LAB_1454eec4f:
  FUN_144ee6d10(plVar4);
  plVar4 = (longlong *)0x0;
LAB_1454eec59:
  FUN_144eeddc0(lVar6);
  FUN_144ba0630(local_58);
  FUN_144ba0630(lVar10);
  return plVar4;
}



// FUNCTION 1454eeca0 FUN_1454eeca0 body=216 status=ok
// SIG undefined FUN_1454eeca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1454eeca0(undefined8 param_1,undefined8 param_2,undefined4 param_3,void *param_4,int param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong local_res20;
  void *local_18;
  void *local_10;
  
  local_18 = (void *)0x0;
  uVar2 = 0xffffffff;
  local_10 = param_4;
  local_res20 = FUN_144ee6cb0();
  if (local_res20 != 0) {
    lVar3 = FUN_144ee6d80(&local_res20,&local_10,param_5);
    if (lVar3 != 0) {
      iVar1 = FUN_144ee6d60(local_res20,&local_18);
      uVar2 = 0xffffffff;
      if (iVar1 == param_5) {
        iVar1 = memcmp(param_4,local_18,(longlong)iVar1);
        if (iVar1 == 0) {
          uVar2 = FUN_1454da440(param_2,param_3,local_res20,param_6);
        }
      }
    }
    FUN_144ea6530(local_18,"crypto\\ec\\ecdsa_ossl.c",0x138);
    FUN_144ee6d10(local_res20);
  }
  return uVar2;
}



// FUNCTION 1454eed80 FUN_1454eed80 body=1099 status=ok
// SIG undefined FUN_1454eed80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1454eed80(undefined8 param_1,int param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 in_stack_ffffffffffffff98;
  longlong lVar15;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar12 = 0xffffffff;
  lVar15 = 0;
  lVar14 = 0;
  if ((((param_4 == 0) || (lVar3 = FUN_144ed31a0(param_4), lVar3 == 0)) ||
      (lVar4 = FUN_144ed3230(param_4), lVar4 == 0)) || (param_3 == (undefined8 *)0x0)) {
    uVar6 = CONCAT44(uVar13,0x14b);
    uVar13 = 0x7c;
LAB_1454ef1a5:
    FUN_144ba24f0(0x10,0xfa,uVar13,"crypto\\ec\\ecdsa_ossl.c",uVar6);
    return 0xffffffff;
  }
  iVar1 = FUN_144ed3360(param_4);
  if (iVar1 == 0) {
    uVar6 = CONCAT44(uVar13,0x150);
    uVar13 = 0x9f;
    goto LAB_1454ef1a5;
  }
  lVar5 = FUN_144eedd20();
  if (lVar5 == 0) {
    uVar6 = CONCAT44(uVar13,0x156);
    uVar13 = 0x41;
    goto LAB_1454ef1a5;
  }
  FUN_144eede20(lVar5);
  uVar6 = FUN_144eede90(lVar5);
  uVar7 = FUN_144eede90(lVar5);
  uVar8 = FUN_144eede90(lVar5);
  lVar9 = FUN_144eede90(lVar5);
  if (lVar9 == 0) {
    FUN_144ba24f0(0x10,0xfa,3,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x15f));
    uVar12 = 0xffffffff;
    lVar14 = lVar15;
    goto LAB_1454ef167;
  }
  lVar10 = FUN_144efc150(lVar3);
  if (lVar10 == 0) {
    uVar6 = CONCAT44(uVar13,0x165);
    uVar7 = 0x10;
    lVar14 = lVar15;
  }
  else {
    iVar1 = FUN_144ba0340(*param_3);
    if ((((iVar1 != 0) || (iVar1 = FUN_144ba0ba0(*param_3), iVar1 != 0)) ||
        ((iVar1 = FUN_144ba0ef0(*param_3,lVar10), -1 < iVar1 ||
         ((iVar1 = FUN_144ba0340(param_3[1]), iVar1 != 0 ||
          (iVar1 = FUN_144ba0ba0(param_3[1]), iVar1 != 0)))))) ||
       (iVar1 = FUN_144ba0ef0(param_3[1],lVar10), -1 < iVar1)) {
      FUN_144ba24f0(0x10,0xfa,0x9c,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x16c));
      uVar12 = 0;
      goto LAB_1454ef167;
    }
    iVar1 = FUN_144efd320(lVar3,uVar7,param_3[1],lVar5);
    if (iVar1 == 0) {
      uVar6 = 0x172;
      lVar14 = lVar15;
    }
    else {
      uVar2 = FUN_144ba03d0(lVar10);
      if ((int)uVar2 < param_2 * 8) {
        param_2 = (int)(((int)(uVar2 + 7) >> 0x1f & 7U) + uVar2 + 7) >> 3;
      }
      lVar11 = FUN_144ba0740(param_1,param_2,uVar8);
      if (lVar11 == 0) {
        uVar6 = 0x17d;
        lVar14 = lVar15;
      }
      else if (((int)uVar2 < param_2 * 8) &&
              (iVar1 = FUN_144eefec0(uVar8,uVar8,8 - (uVar2 & 7)), iVar1 == 0)) {
        uVar6 = 0x182;
        lVar14 = lVar15;
      }
      else {
        iVar1 = FUN_1452a57a0(uVar6,uVar8,uVar7,lVar10,lVar5);
        if (iVar1 == 0) {
          uVar6 = 0x187;
        }
        else {
          lVar15 = lVar5;
          iVar1 = FUN_1452a57a0(uVar7,*param_3,uVar7,lVar10,lVar5);
          uVar13 = (undefined4)((ulonglong)lVar15 >> 0x20);
          if (iVar1 == 0) {
            uVar6 = CONCAT44(uVar13,0x18c);
          }
          else {
            lVar14 = FUN_144efc690(lVar3);
            if (lVar14 == 0) {
              FUN_144ba24f0(0x10,0xfa,0x41,"crypto\\ec\\ecdsa_ossl.c",CONCAT44(uVar13,0x191));
              goto LAB_1454ef167;
            }
            iVar1 = FUN_144efd2c0(lVar3,lVar14,uVar6,lVar4,uVar7,lVar5);
            if (iVar1 == 0) {
              FUN_144ba24f0(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x195);
              goto LAB_1454ef167;
            }
            iVar1 = FUN_144efcb20(lVar3,lVar14,lVar9,0,lVar5);
            if (iVar1 == 0) {
              FUN_144ba24f0(0x10,0xfa,0x10,"crypto\\ec\\ecdsa_ossl.c",0x19a);
              goto LAB_1454ef167;
            }
            iVar1 = FUN_1452a55e0(uVar6,lVar9,lVar10,lVar5);
            if (iVar1 != 0) {
              iVar1 = FUN_144ba0ef0(uVar6,*param_3);
              uVar12 = (ulonglong)(iVar1 == 0);
              goto LAB_1454ef167;
            }
            uVar6 = 0x19f;
          }
        }
      }
    }
    uVar7 = 3;
  }
  FUN_144ba24f0(0x10,0xfa,uVar7,"crypto\\ec\\ecdsa_ossl.c",uVar6);
  uVar12 = 0xffffffff;
LAB_1454ef167:
  FUN_144eedf20(lVar5);
  FUN_144eeddc0(lVar5);
  FUN_144efc7a0(lVar14);
  return uVar12;
}



// FUNCTION 1454ef1d0 FUN_1454ef1d0 body=1042 status=ok
// SIG undefined FUN_1454ef1d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454ef1d0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,longlong param_5
             ,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_res8;
  
  local_res8 = 0;
  if ((param_1 == 0) || (lVar3 = FUN_144ed31a0(), lVar3 == 0)) {
    FUN_144ba24f0(0x10,0xf8,0x43,"crypto\\ec\\ecdsa_ossl.c",0x2f);
    return 0;
  }
  lVar4 = FUN_144ed3220(param_1);
  if (lVar4 == 0) {
    FUN_144ba24f0(0x10,0xf8,0x7d,"crypto\\ec\\ecdsa_ossl.c",0x33);
    return 0;
  }
  iVar1 = FUN_144ed3360(param_1);
  if (iVar1 == 0) {
    FUN_144ba24f0(0x10,0xf8,0x9f,"crypto\\ec\\ecdsa_ossl.c",0x38);
    return 0;
  }
  lVar5 = param_2;
  if ((param_2 == 0) && (lVar5 = FUN_144eedd20(), lVar5 == 0)) {
    FUN_144ba24f0(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x3e);
    return 0;
  }
  lVar6 = FUN_144ba0570();
  lVar7 = FUN_144ba0570();
  lVar8 = FUN_144ba0570();
  if (((lVar6 == 0) || (lVar7 == 0)) || (lVar8 == 0)) {
    FUN_144ba24f0(0x10,0xf8,0x41,"crypto\\ec\\ecdsa_ossl.c",0x47);
  }
  else {
    local_res8 = FUN_144efc690(lVar3);
    if (local_res8 == 0) {
      FUN_144ba24f0(0x10,0xf8,0x10,"crypto\\ec\\ecdsa_ossl.c",0x4b);
    }
    else {
      uVar9 = FUN_144efc150(lVar3);
      uVar2 = FUN_144ba03d0(uVar9);
      iVar1 = FUN_144ba0f40(lVar6,uVar2);
      if (((iVar1 != 0) && (iVar1 = FUN_144ba0f40(lVar7,uVar2), iVar1 != 0)) &&
         (iVar1 = FUN_144ba0f40(lVar8,uVar2), iVar1 != 0)) {
        do {
          do {
            if (param_5 == 0) {
              iVar1 = FUN_1452983f0(lVar6,uVar9);
              if (iVar1 == 0) {
                uVar9 = 100;
                uVar2 = 0x9e;
                goto LAB_1454ef511;
              }
            }
            else {
              iVar1 = FUN_145298410(lVar6,uVar9,lVar4,param_5,(longlong)param_6,lVar5);
              if (iVar1 == 0) {
                uVar9 = 0x5e;
                uVar2 = 0x9e;
                goto LAB_1454ef511;
              }
            }
            iVar1 = FUN_144ba0340(lVar6);
          } while (iVar1 != 0);
          iVar1 = FUN_144efd2c0(lVar3,local_res8,lVar6,0,0,lVar5);
          if (iVar1 == 0) {
            uVar9 = 0x6c;
LAB_1454ef509:
            uVar2 = 0x10;
            goto LAB_1454ef511;
          }
          iVar1 = FUN_144efcb20(lVar3,local_res8,lVar8,0,lVar5);
          if (iVar1 == 0) {
            uVar9 = 0x71;
            goto LAB_1454ef509;
          }
          iVar1 = FUN_1452a55e0(lVar7,lVar8,uVar9);
          if (iVar1 == 0) {
            uVar9 = 0x76;
            uVar2 = 3;
            goto LAB_1454ef511;
          }
          iVar1 = FUN_144ba0340(lVar7);
        } while (iVar1 != 0);
        iVar1 = FUN_144efd320(lVar3,lVar6,lVar6,lVar5);
        if (iVar1 != 0) {
          FUN_144ba0630(*param_4);
          FUN_144ba0630(*param_3);
          *param_4 = lVar7;
          uVar9 = 1;
          *param_3 = lVar6;
          goto LAB_1454ef534;
        }
        uVar9 = 0x7d;
        uVar2 = 3;
LAB_1454ef511:
        FUN_144ba24f0(0x10,0xf8,uVar2,"crypto\\ec\\ecdsa_ossl.c",uVar9);
      }
    }
  }
  uVar9 = 0;
  FUN_144ba0630(lVar6);
  FUN_144ba0630(lVar7);
LAB_1454ef534:
  if (lVar5 != param_2) {
    FUN_144eeddc0(lVar5);
  }
  FUN_144efc7a0(local_res8);
  FUN_144ba0630(lVar8);
  return uVar9;
}



// FUNCTION 1454ef5f0 FUN_1454ef5f0 body=1690 status=ok
// SIG undefined FUN_1454ef5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454ef5f0(ulonglong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined8 local_2a8;
  uint local_2a0;
  longlong local_298;
  ulonglong local_290;
  int local_288;
  ulonglong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260 [32];
  longlong alStack_160 [33];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_260[0] = param_5;
  local_2a8 = param_7;
  local_270 = param_8;
  local_298 = 0;
  local_280 = param_1;
  local_268 = param_3;
  iVar3 = FUN_144ba03a0(param_6);
  if (iVar3 == 0) {
    local_2b8 = CONCAT44(local_2b8._4_4_,0x24);
    FUN_144ba24f0(3,0x76,0x66,"crypto\\bn\\bn_exp2.c");
    goto LAB_1454efc76;
  }
  iVar3 = FUN_144ba03d0(param_3);
  iVar4 = FUN_144ba03d0(param_5);
  if ((iVar3 == 0) && (iVar4 == 0)) {
    FUN_144ba0bb0(param_1,1);
    goto LAB_1454efc76;
  }
  local_288 = iVar4;
  if (iVar4 < iVar3) {
    local_288 = iVar3;
  }
  FUN_144eede20(param_7);
  local_290 = FUN_144eede90(param_7);
  local_278 = FUN_144eede90(param_7);
  lVar8 = FUN_144eede90(param_7);
  local_260[1] = lVar8;
  lVar9 = FUN_144eede90(param_7);
  param_7 = param_7;
  alStack_160[1] = lVar9;
  if (lVar9 == 0) {
LAB_1454efc4f:
    if (local_270 == 0) goto LAB_1454efc5c;
  }
  else {
    if (local_270 != 0) {
      local_298 = local_270;
LAB_1454ef761:
      local_2a0 = 1;
      if (iVar3 < 0x2a0) {
        if (iVar3 < 0xf0) {
          if (iVar3 < 0x50) {
            if (0x17 < iVar3) {
              local_2a0 = 3;
            }
          }
          else {
            local_2a0 = 4;
          }
        }
        else {
          local_2a0 = 5;
        }
      }
      else {
        local_2a0 = 6;
      }
      uVar1 = local_2a0;
      uVar17 = 6;
      if (iVar4 < 0x2a0) {
        if (iVar4 < 0xf0) {
          if (iVar4 < 0x50) {
            uVar17 = 1;
            if (0x17 < iVar4) {
              uVar17 = 3;
            }
          }
          else {
            uVar17 = 4;
          }
        }
        else {
          uVar17 = 5;
        }
      }
      if ((*(int *)(param_2 + 0x10) != 0) ||
         (iVar3 = FUN_144ba0ef0(param_2,param_6), uVar11 = local_2a8, -1 < iVar3)) {
        uVar11 = local_2a8;
        local_2b8 = local_2a8;
        iVar3 = FUN_144eef830(0,lVar8,param_2,param_6);
        param_2 = lVar8;
        param_7 = uVar11;
        if (iVar3 == 0) goto LAB_1454efc4f;
      }
      iVar3 = FUN_144ba0340(param_2);
      if (iVar3 == 0) {
        iVar3 = FUN_144ba1260(lVar8,param_2,local_298,uVar11);
        uVar2 = local_290;
        param_7 = local_2a8;
        if (iVar3 != 0) {
          uVar13 = local_2a8;
          if (1 < uVar1) {
            local_2b8 = uVar11;
            iVar3 = FUN_144ece730(local_290,lVar8,lVar8,local_298);
            uVar13 = local_2a8;
            param_7 = uVar13;
            if (iVar3 == 0) goto LAB_1454efc4f;
            lVar8 = 1;
            lVar14 = (longlong)(1 << ((char)uVar1 - 1U & 0x1f));
            if (1 < lVar14) {
              do {
                lVar10 = FUN_144eede90(uVar13);
                local_260[lVar8 + 1] = lVar10;
                if (lVar10 == 0) goto LAB_1454efc4f;
                local_2b8 = uVar13;
                iVar3 = FUN_144ece730(lVar10,local_260[lVar8],uVar2,local_298);
                if (iVar3 == 0) goto LAB_1454efc4f;
                lVar8 = lVar8 + 1;
              } while (lVar8 < lVar14);
            }
          }
          if (((*(int *)(param_4 + 0x10) == 0) &&
              (iVar3 = FUN_144ba0ef0(param_4,param_6), iVar3 < 0)) ||
             (local_2b8 = uVar13, iVar3 = FUN_144eef830(0,lVar9,param_4,param_6), param_4 = lVar9,
             param_7 = local_2a8, iVar3 != 0)) {
            iVar3 = FUN_144ba0340(param_4);
            lVar8 = local_298;
            if (iVar3 == 0) {
              iVar3 = FUN_144ba1260(lVar9,param_4,local_298,uVar13);
              param_7 = local_2a8;
              if (iVar3 != 0) {
                if (1 < uVar17) {
                  local_2b8 = uVar13;
                  iVar3 = FUN_144ece730(uVar2,lVar9,lVar9,lVar8);
                  param_7 = local_2a8;
                  if (iVar3 == 0) goto LAB_1454efc4f;
                  lVar9 = 1;
                  lVar14 = (longlong)(1 << ((char)uVar17 - 1U & 0x1f));
                  if (1 < lVar14) {
                    do {
                      lVar10 = FUN_144eede90(uVar13);
                      alStack_160[lVar9 + 1] = lVar10;
                      param_7 = local_2a8;
                      if ((lVar10 == 0) ||
                         (local_2b8 = uVar13,
                         iVar3 = FUN_144ece730(lVar10,alStack_160[lVar9],uVar2,lVar8),
                         param_7 = local_2a8, iVar3 == 0)) goto LAB_1454efc4f;
                      lVar9 = lVar9 + 1;
                    } while (lVar9 < lVar14);
                  }
                }
                local_290 = CONCAT44(local_290._4_4_,1);
                iVar3 = 0;
                iVar4 = 0;
                iVar16 = 0;
                iVar12 = 0;
                uVar11 = FUN_144ba03c0();
                iVar5 = FUN_144ba1260(local_278,uVar11,lVar8,local_2a8);
                param_7 = local_2a8;
                if (iVar5 != 0) {
                  iVar5 = local_288 + -1;
                  if (-1 < iVar5) {
                    iVar15 = local_288 + -2;
                    local_288 = uVar17 - local_2a0;
                    local_2a0 = 2 - uVar17;
                    iVar6 = (int)local_290;
                    do {
                      uVar1 = local_2a0;
                      param_7 = local_2a8;
                      if (iVar6 == 0) {
                        local_2b8 = local_2a8;
                        iVar6 = FUN_144ece730(local_278,local_278,local_278,local_298);
                        if (iVar6 == 0) goto LAB_1454efc4f;
                      }
                      uVar11 = local_268;
                      if ((iVar3 == 0) && (iVar6 = FUN_144ba0d50(local_268,iVar5), iVar6 != 0)) {
                        iVar16 = local_288 + uVar1 + iVar15;
                        iVar3 = FUN_144ba0d50(uVar11,iVar16);
                        while (iVar3 == 0) {
                          iVar16 = iVar16 + 1;
                          iVar3 = FUN_144ba0d50(uVar11,iVar16);
                        }
                        iVar3 = 1;
                        for (iVar6 = iVar15; iVar16 <= iVar6; iVar6 = iVar6 + -1) {
                          iVar3 = iVar3 * 2;
                          iVar7 = FUN_144ba0d50(uVar11,iVar6);
                          if (iVar7 != 0) {
                            iVar3 = iVar3 + 1;
                          }
                        }
                      }
                      lVar8 = local_260[0];
                      if ((iVar4 == 0) && (iVar6 = FUN_144ba0d50(local_260[0],iVar5), iVar6 != 0)) {
                        iVar12 = local_2a0 + iVar15;
                        iVar4 = FUN_144ba0d50(lVar8,iVar12);
                        while (iVar4 == 0) {
                          iVar12 = iVar12 + 1;
                          iVar4 = FUN_144ba0d50(lVar8,iVar12);
                        }
                        iVar4 = 1;
                        for (iVar6 = iVar15; iVar12 <= iVar6; iVar6 = iVar6 + -1) {
                          iVar4 = iVar4 * 2;
                          iVar7 = FUN_144ba0d50(lVar8,iVar6);
                          if (iVar7 != 0) {
                            iVar4 = iVar4 + 1;
                          }
                        }
                      }
                      param_7 = local_2a8;
                      if ((iVar3 == 0) || (iVar5 != iVar16)) {
                        iVar6 = (int)local_290;
                      }
                      else {
                        local_2b8 = local_2a8;
                        iVar6 = FUN_144ece730(local_278,local_278,
                                              local_260[((longlong)iVar3 >> 1) + 1],local_298);
                        iVar3 = 0;
                        if (iVar6 == 0) goto LAB_1454efc4f;
                        local_290 = local_290 & 0xffffffff00000000;
                        iVar6 = iVar3;
                      }
                      if ((iVar4 != 0) && (iVar5 == iVar12)) {
                        local_2b8 = param_7;
                        iVar4 = FUN_144ece730(local_278,local_278,
                                              alStack_160[((longlong)iVar4 >> 1) + 1],local_298);
                        if (iVar4 == 0) goto LAB_1454efc4f;
                        local_290 = local_290 & 0xffffffff00000000;
                        iVar6 = 0;
                        iVar4 = 0;
                      }
                      iVar15 = iVar15 + -1;
                      iVar5 = iVar5 + -1;
                      lVar8 = local_298;
                    } while (-1 < iVar5);
                  }
                  iVar3 = FUN_144ece770(local_280,local_278,lVar8,param_7);
                  local_280 = (ulonglong)(iVar3 != 0);
                }
              }
            }
            else {
              FUN_144ba0bb0(local_280,0);
              param_7 = local_2a8;
            }
          }
        }
      }
      else {
        FUN_144ba0bb0(local_280,0);
        local_280 = CONCAT44(local_280._4_4_,1);
        param_7 = local_2a8;
      }
      goto LAB_1454efc4f;
    }
    local_298 = FUN_144ece690();
    if ((local_298 != 0) && (iVar16 = FUN_144ece810(local_298,param_6,param_7), iVar16 != 0))
    goto LAB_1454ef761;
LAB_1454efc5c:
    FUN_144ece7b0(local_298);
  }
  FUN_144eedf20(param_7);
LAB_1454efc76:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 1454efca0 FUN_1454efca0 body=29 status=ok
// SIG undefined FUN_1454efca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454efca0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d96430);
  return;
}



// FUNCTION 1454efcc0 FUN_1454efcc0 body=8 status=ok
// SIG undefined FUN_1454efcc0(void)

undefined * FUN_1454efcc0(void)

{
  return &DAT_149d96430;
}



// FUNCTION 1454efcd0 FUN_1454efcd0 body=29 status=ok
// SIG undefined FUN_1454efcd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454efcd0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d964e0);
  return;
}



// FUNCTION 1454efcf0 FUN_1454efcf0 body=8 status=ok
// SIG undefined FUN_1454efcf0(void)

undefined * FUN_1454efcf0(void)

{
  return &DAT_149d964e0;
}



// FUNCTION 1454efd00 FUN_1454efd00 body=29 status=ok
// SIG undefined FUN_1454efd00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454efd00(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d965a0);
  return;
}



// FUNCTION 1454efd20 FUN_1454efd20 body=8 status=ok
// SIG undefined FUN_1454efd20(void)

undefined * FUN_1454efd20(void)

{
  return &DAT_149d965a0;
}



// FUNCTION 1454efd30 FUN_1454efd30 body=1103 status=ok
// SIG undefined FUN_1454efd30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1454efd30(longlong param_1,int param_2,longlong param_3,int param_4,undefined1 param_5,
             int param_6,int param_7,void *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  byte *pbVar4;
  longlong lVar5;
  ushort uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_60 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = (undefined1 *)0x0;
  lVar3 = FUN_144ba5700();
  _Src = (void *)0x0;
  if (lVar3 != 0) {
    iVar1 = FUN_144ba3d10(param_9);
    lVar7 = (longlong)iVar1;
    iVar2 = FUN_144ba3cd0(param_9);
    _Src = (void *)0x0;
    if ((0 < iVar2) && (0 < iVar1)) {
      local_58 = (undefined1 *)FUN_144ea64e0(lVar7,"crypto\\pkcs12\\p12_key.c",0x6a);
      _Src = (void *)FUN_144ea64e0((longlong)iVar2,"crypto\\pkcs12\\p12_key.c",0x6b);
      local_60 = FUN_144ea64e0((longlong)(iVar1 + 1),"crypto\\pkcs12\\p12_key.c",0x6c);
      iVar16 = param_4 + -1 + iVar1;
      iVar16 = iVar16 - iVar16 % iVar1;
      if (param_2 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = param_2 + -1 + iVar1;
        iVar15 = iVar15 - iVar15 % iVar1;
      }
      lVar5 = (longlong)(iVar15 + iVar16);
      local_50 = (undefined1 *)FUN_144ea64e0(lVar5,"crypto\\pkcs12\\p12_key.c");
      if ((((local_58 != (undefined1 *)0x0) && (_Src != (void *)0x0)) && (local_60 != 0)) &&
         (local_50 != (undefined1 *)0x0)) {
        lVar13 = lVar7;
        puVar8 = local_58;
        if (0 < iVar1) {
          for (; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar8 = param_5;
            puVar8 = puVar8 + 1;
          }
        }
        iVar1 = 0;
        puVar8 = local_50;
        if (0 < iVar16) {
          do {
            iVar10 = iVar1 + 1;
            *puVar8 = *(undefined1 *)(iVar1 % param_4 + param_3);
            puVar8 = puVar8 + 1;
            iVar1 = iVar10;
          } while (iVar10 < iVar16);
        }
        iVar1 = 0;
        if (0 < iVar15) {
          do {
            iVar16 = iVar1 + 1;
            *puVar8 = *(undefined1 *)(iVar1 % param_2 + param_1);
            puVar8 = puVar8 + 1;
            iVar1 = iVar16;
          } while (iVar16 < iVar15);
        }
        iVar1 = FUN_144ba5a20(lVar3,param_9,0);
        while (iVar1 != 0) {
          uVar14 = 0;
          iVar16 = 1;
          iVar1 = FUN_144ba5c70(lVar3,local_58,lVar7);
          if (((iVar1 == 0) || (iVar1 = FUN_144ba5c70(lVar3,local_50,lVar5), iVar1 == 0)) ||
             (iVar1 = FUN_144ba5ca0(lVar3,_Src,0), iVar1 == 0)) break;
          if (1 < param_6) {
            do {
              iVar1 = FUN_144ba5a20(lVar3,param_9,0);
              if (((iVar1 == 0) || (iVar1 = FUN_144ba5c70(lVar3,_Src), iVar1 == 0)) ||
                 (iVar1 = FUN_144ba5ca0(lVar3,_Src), iVar1 == 0)) goto LAB_1454f00e2;
              iVar16 = iVar16 + 1;
            } while (iVar16 < param_6);
          }
          iVar1 = iVar2;
          if (param_7 < iVar2) {
            iVar1 = param_7;
          }
          memcpy(param_8,_Src,(longlong)iVar1);
          if (param_7 <= iVar2) {
            uVar17 = 1;
            goto LAB_1454f0102;
          }
          param_8 = (void *)((longlong)param_8 + (longlong)iVar2);
          param_7 = param_7 - iVar2;
          uVar9 = uVar14;
          uVar11 = uVar14;
          if (0 < lVar7) {
            do {
              *(undefined1 *)(uVar9 + local_60) =
                   *(undefined1 *)((longlong)((int)uVar11 % iVar2) + (longlong)_Src);
              uVar9 = uVar9 + 1;
              uVar11 = (ulonglong)((int)uVar11 + 1);
            } while ((longlong)uVar9 < lVar7);
          }
          if (0 < lVar5) {
            lVar13 = local_60 - (longlong)local_50;
            do {
              uVar6 = 1;
              if (-1 < lVar7 + -1) {
                pbVar4 = local_50 + uVar14 + lVar7 + -1;
                lVar12 = lVar7;
                do {
                  uVar6 = uVar6 + (ushort)pbVar4[lVar13] + (ushort)*pbVar4;
                  *pbVar4 = (byte)uVar6;
                  uVar6 = uVar6 >> 8;
                  lVar12 = lVar12 + -1;
                  pbVar4 = pbVar4 + -1;
                } while (lVar12 != 0);
              }
              uVar14 = uVar14 + lVar7;
              lVar13 = lVar13 - lVar7;
            } while ((longlong)uVar14 < lVar5);
          }
          iVar1 = FUN_144ba5a20(lVar3,param_9,0);
        }
      }
    }
  }
LAB_1454f00e2:
  uVar17 = 0;
  FUN_144ba24f0(0x23,0x6f,0x41,"crypto\\pkcs12\\p12_key.c",0xa5);
LAB_1454f0102:
  FUN_144ea6530(_Src,"crypto\\pkcs12\\p12_key.c",0xa8);
  FUN_144ea6530(local_60,"crypto\\pkcs12\\p12_key.c",0xa9);
  FUN_144ea6530(local_58,"crypto\\pkcs12\\p12_key.c",0xaa);
  FUN_144ea6530(local_50,"crypto\\pkcs12\\p12_key.c",0xab);
  FUN_144ba5800(lVar3);
  return uVar17;
}



// FUNCTION 1454f0180 FUN_1454f0180 body=232 status=ok
// SIG undefined FUN_1454f0180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1454f0180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454f0190;
  if (param_1 == 0) {
    local_res8[0] = 0;
    local_18 = 0;
  }
  else {
    lVar2 = FUN_14550ab90(param_1,param_2,&local_18,local_res8);
    if (lVar2 == 0) {
      FUN_144ba24f0(0x23,0x74,0x41,"crypto\\pkcs12\\p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = FUN_1454efd30(local_18,local_res8[0],param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9);
  if (iVar1 < 1) {
    return 0;
  }
  FUN_144ea66f0(local_18,(longlong)local_res8[0],"crypto\\pkcs12\\p12_key.c",0x48);
  return iVar1;
}



// FUNCTION 1454f0270 FUN_1454f0270 body=1677 status=ok
// SIG undefined FUN_1454f0270(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f0270(uint *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,uint *param_5,
                  uint *param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  undefined1 *local_40;
  
  local_40 = (undefined1 *)0x1454f028f;
  uVar10 = *param_6;
  uVar13 = param_6[1];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  if (param_8 == 0) {
    iVar12 = param_3 - 8;
    local_40 = (undefined1 *)((longlong)param_5 + 1);
    uVar7 = *param_5;
    uVar8 = param_5[1];
    if (0 < iVar12) {
      uVar6 = (param_3 - 9 >> 3) + 1;
      local_48 = (ulonglong)uVar6;
      iVar12 = iVar12 + uVar6 * -8;
      uVar6 = uVar7;
      uVar9 = uVar8;
      do {
        uVar7 = *param_1;
        local_50 = uVar7 ^ uVar3;
        uVar8 = param_1[1];
        param_1 = param_1 + 2;
        local_4c = uVar8 ^ uVar4;
        FUN_14525fae0(&local_50,param_4,0);
        uVar6 = local_50 ^ uVar6 ^ uVar10;
        uVar9 = local_4c ^ uVar9 ^ uVar13;
        *param_2 = (char)uVar6;
        param_2[1] = (char)(uVar6 >> 8);
        param_2[2] = (char)(uVar6 >> 0x10);
        param_2[3] = (char)(uVar6 >> 0x18);
        param_2[4] = (char)uVar9;
        param_2[5] = (char)(uVar9 >> 8);
        param_2[6] = (char)(uVar9 >> 0x10);
        param_2[7] = (char)(uVar9 >> 0x18);
        param_2 = param_2 + 8;
        local_48 = local_48 - 1;
        uVar6 = uVar7;
        uVar9 = uVar8;
      } while (local_48 != 0);
      local_48 = 0;
    }
    puVar5 = local_40;
    uVar6 = uVar7;
    uVar9 = uVar8;
    if (iVar12 != -8) {
      uVar6 = *param_1;
      local_50 = uVar6 ^ uVar3;
      uVar9 = param_1[1];
      local_4c = uVar9 ^ uVar4;
      FUN_14525fae0(&local_50,param_4,0);
      uVar10 = local_50 ^ uVar7 ^ uVar10;
      uVar13 = local_4c ^ uVar8 ^ uVar13;
      param_2 = param_2 + (iVar12 + 8);
      switch(iVar12) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 0x18);
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 0x10);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar13 >> 8);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)uVar13;
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x18);
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 0x10);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(uVar10 >> 8);
      case -7:
        param_2[-1] = (char)uVar10;
      }
    }
    *(char *)param_5 = (char)uVar6;
    *puVar5 = (char)(uVar6 >> 8);
    puVar5[1] = (char)(uVar6 >> 0x10);
    puVar5[2] = (char)(uVar6 >> 0x18);
    puVar5[3] = (char)uVar9;
    puVar5[4] = (char)(uVar9 >> 8);
    puVar5[5] = (char)(uVar9 >> 0x10);
    puVar5[6] = (char)(uVar9 >> 0x18);
  }
  else {
    iVar12 = param_3 - 8;
    local_50 = *param_5;
    local_4c = param_5[1];
    if (-1 < iVar12) {
      uVar14 = (ulonglong)(param_3 >> 3);
      iVar12 = iVar12 + (param_3 >> 3) * -8;
      do {
        puVar1 = param_1 + 1;
        local_50 = *param_1 ^ local_50 ^ uVar10;
        param_1 = param_1 + 2;
        local_4c = *puVar1 ^ local_4c ^ uVar13;
        FUN_14525fae0(&local_50,param_4,1);
        local_50 = local_50 ^ uVar3;
        *param_2 = (char)local_50;
        local_4c = local_4c ^ uVar4;
        param_2[1] = (char)(local_50 >> 8);
        param_2[2] = (char)(local_50 >> 0x10);
        param_2[3] = (char)(local_50 >> 0x18);
        param_2[4] = (char)local_4c;
        param_2[5] = (char)(local_4c >> 8);
        param_2[6] = (char)(local_4c >> 0x10);
        param_2[7] = (char)(local_4c >> 0x18);
        param_2 = param_2 + 8;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (iVar12 != -8) {
      lVar11 = (longlong)param_1 + (longlong)(iVar12 + 8);
      uVar7 = 0;
      uVar8 = 0;
      switch(iVar12) {
      case 0:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = (uint)*pbVar2 << 0x18;
      case -1:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | (uint)*pbVar2 << 0x10;
      case -2:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | (uint)*pbVar2 << 8;
      case -3:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar7 = uVar7 | *pbVar2;
      case -4:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = (uint)*pbVar2 << 0x18;
      case -5:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
      case -6:
        pbVar2 = (byte *)(lVar11 + -1);
        lVar11 = lVar11 + -1;
        uVar8 = uVar8 | (uint)*pbVar2 << 8;
      case -7:
        uVar8 = uVar8 | *(byte *)(lVar11 + -1);
      default:
        local_50 = uVar8 ^ local_50 ^ uVar10;
        local_4c = uVar7 ^ local_4c ^ uVar13;
        FUN_14525fae0(&local_50,param_4,1);
        local_50 = local_50 ^ uVar3;
        *param_2 = (char)local_50;
        local_4c = local_4c ^ uVar4;
        param_2[1] = (char)(local_50 >> 8);
        param_2[2] = (char)(local_50 >> 0x10);
        param_2[3] = (char)(local_50 >> 0x18);
        param_2[4] = (char)local_4c;
        param_2[5] = (char)(local_4c >> 8);
        param_2[6] = (char)(local_4c >> 0x10);
        param_2[7] = (char)(local_4c >> 0x18);
      }
    }
    *(char *)param_5 = (char)local_50;
    *(char *)((longlong)param_5 + 1) = (char)(local_50 >> 8);
    *(char *)((longlong)param_5 + 2) = (char)(local_50 >> 0x10);
    *(char *)((longlong)param_5 + 3) = (char)(local_50 >> 0x18);
    *(char *)(param_5 + 1) = (char)local_4c;
    *(char *)((longlong)param_5 + 5) = (char)(local_4c >> 8);
    *(char *)((longlong)param_5 + 6) = (char)(local_4c >> 0x10);
    *(char *)((longlong)param_5 + 7) = (char)(local_4c >> 0x18);
  }
  return;
}



// FUNCTION 1454f0940 FUN_1454f0940 body=410 status=ok
// SIG undefined FUN_1454f0940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f0940(undefined8 *param_1,int param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 local_res8;
  
  lVar11 = 0x20;
  puVar7 = (undefined8 *)&DAT_149d96600;
  puVar8 = param_1;
  do {
    puVar18 = puVar8;
    puVar10 = puVar7;
    uVar6 = puVar10[1];
    *puVar18 = *puVar10;
    puVar18[1] = uVar6;
    uVar6 = puVar10[3];
    puVar18[2] = puVar10[2];
    puVar18[3] = uVar6;
    uVar6 = puVar10[5];
    puVar18[4] = puVar10[4];
    puVar18[5] = uVar6;
    uVar6 = puVar10[7];
    puVar18[6] = puVar10[6];
    puVar18[7] = uVar6;
    uVar6 = puVar10[9];
    puVar18[8] = puVar10[8];
    puVar18[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar18[10] = puVar10[10];
    puVar18[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar18[0xc] = puVar10[0xc];
    puVar18[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar18[0xe] = puVar10[0xe];
    puVar18[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar10 + 0x10;
    puVar8 = puVar18 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar18[0x10] = puVar10[0x10];
  puVar18[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar18[0x12] = puVar10[0x12];
  puVar18[0x13] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar10 + 0xa4);
  uVar4 = *(undefined4 *)(puVar10 + 0x15);
  uVar5 = *(undefined4 *)((longlong)puVar10 + 0xac);
  *(undefined4 *)(puVar18 + 0x14) = *(undefined4 *)(puVar10 + 0x14);
  *(undefined4 *)((longlong)puVar18 + 0xa4) = uVar3;
  *(undefined4 *)(puVar18 + 0x15) = uVar4;
  *(undefined4 *)((longlong)puVar18 + 0xac) = uVar5;
  uVar6 = puVar10[0x17];
  puVar18[0x16] = puVar10[0x16];
  puVar18[0x17] = uVar6;
  puVar18[0x18] = puVar10[0x18];
  iVar9 = 0x48;
  if (param_2 < 0x49) {
    iVar9 = param_2;
  }
  puVar17 = param_3 + iVar9;
  lVar16 = 0;
  puVar15 = param_3;
  lVar11 = lVar16;
  do {
    uVar2 = *puVar15;
    puVar12 = puVar15 + 1;
    if (puVar17 <= puVar15 + 1) {
      puVar12 = param_3;
    }
    puVar13 = puVar12 + 1;
    if (puVar17 <= puVar12 + 1) {
      puVar13 = param_3;
    }
    puVar14 = puVar13 + 1;
    if (puVar17 <= puVar13 + 1) {
      puVar14 = param_3;
    }
    puVar15 = puVar14 + 1;
    if (puVar17 <= puVar14 + 1) {
      puVar15 = param_3;
    }
    puVar1 = (uint *)((longlong)param_1 + lVar11 * 4);
    *puVar1 = *puVar1 ^ CONCAT31(CONCAT21(CONCAT11(uVar2,*puVar12),*puVar13),*puVar14);
    lVar11 = lVar11 + 1;
  } while (lVar11 < 0x12);
  local_res8 = 0;
  lVar11 = lVar16;
  do {
    FUN_1454f0bb0(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar11 * 4) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar11 * 4 + 4) = local_res8._4_4_;
    lVar11 = lVar11 + 2;
  } while (lVar11 < 0x12);
  do {
    FUN_1454f0bb0(&local_res8,param_1);
    *(undefined4 *)((longlong)param_1 + lVar16 * 4 + 0x48) = (undefined4)local_res8;
    *(undefined4 *)((longlong)param_1 + lVar16 * 4 + 0x4c) = local_res8._4_4_;
    lVar16 = lVar16 + 2;
  } while (lVar16 < 0x400);
  return;
}



// FUNCTION 1454f0ae0 FUN_1454f0ae0 body=195 status=ok
// SIG undefined FUN_1454f0ae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f0ae0(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  if (param_4 == 0) {
    FUN_1454f1050(&local_res8,param_3);
  }
  else {
    FUN_1454f0bb0();
  }
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}



// FUNCTION 1454f0bb0 FUN_1454f0bb0 body=1180 status=ok
// SIG undefined FUN_1454f0bb0(void)

void FUN_1454f0bb0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1 ^ *param_2;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[1] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[0x10];
  *param_1 = uVar6 ^ param_2[0x11];
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}



// FUNCTION 1454f1050 FUN_1454f1050 body=1180 status=ok
// SIG undefined FUN_1454f1050(void)

void FUN_1454f1050(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2[0x11] ^ *param_1;
  uVar6 = (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
           param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
          param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0x10] ^ param_1[1];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xf];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xe];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xd];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[0xc];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[0xb];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[10];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[9];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[8];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[7];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[6];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[5];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[4];
  uVar7 = uVar7 ^ (param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar6 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12] ^ param_2[3];
  uVar6 = uVar6 ^ (param_2[(ulonglong)((uVar7 >> 0x10 & 0xff) + 0x100) + 0x12] +
                   param_2[(ulonglong)(uVar7 >> 0x18) + 0x12] ^
                  param_2[(ulonglong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12]) +
                  param_2[(ulonglong)((uVar7 & 0xff) + 0x300) + 0x12] ^ param_2[2];
  uVar1 = param_2[(ulonglong)((uVar6 >> 0x10 & 0xff) + 0x100) + 0x12];
  uVar2 = param_2[(ulonglong)(uVar6 >> 0x18) + 0x12];
  uVar3 = param_2[(ulonglong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12];
  uVar4 = param_2[(ulonglong)((uVar6 & 0xff) + 0x300) + 0x12];
  uVar5 = param_2[1];
  *param_1 = uVar6 ^ *param_2;
  param_1[1] = uVar7 ^ (uVar1 + uVar2 ^ uVar3) + uVar4 ^ uVar5;
  return;
}



// FUNCTION 1454f14f0 FUN_1454f14f0 body=1325 status=ok
// SIG undefined FUN_1454f14f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f14f0(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,byte *param_5,
                  int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_38;
  uint local_34;
  byte *local_30;
  
  if (param_6 == 0) {
    iVar6 = param_3 - 8;
    local_30 = param_5;
    uVar8 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
            (uint)param_5[3];
    uVar9 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
            (uint)param_5[7];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      uVar7 = uVar8;
      uVar5 = uVar9;
      do {
        uVar8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                (uint)param_1[3];
        uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar8;
        local_34 = uVar9;
        FUN_1454f1050(&local_38,param_4);
        local_38 = local_38 ^ uVar7;
        local_34 = local_34 ^ uVar5;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
        uVar5 = uVar9;
      } while (uVar10 != 0);
    }
    pbVar1 = local_30;
    uVar7 = uVar8;
    uVar5 = uVar9;
    if (iVar6 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar5 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar5;
      FUN_1454f1050(&local_38,param_4);
      local_38 = local_38 ^ uVar8;
      local_34 = local_34 ^ uVar9;
      param_2 = param_2 + (iVar6 + 8);
      switch(iVar6) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)local_38;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -7:
        param_2[-1] = (char)(local_38 >> 0x18);
      }
    }
    *pbVar1 = (byte)(uVar7 >> 0x18);
    pbVar1[1] = (byte)(uVar7 >> 0x10);
    pbVar1[2] = (byte)(uVar7 >> 8);
    pbVar1[3] = (byte)uVar7;
    pbVar1[4] = (byte)(uVar5 >> 0x18);
    pbVar1[5] = (byte)(uVar5 >> 0x10);
    pbVar1[6] = (byte)(uVar5 >> 8);
    pbVar1[7] = (byte)uVar5;
    return;
  }
  iVar6 = param_3 - 8;
  local_30 = param_5;
  local_38 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
             (uint)param_5[3];
  local_34 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
             (uint)param_5[7];
  if (-1 < iVar6) {
    uVar10 = (ulonglong)(param_3 >> 3);
    iVar6 = iVar6 + (param_3 >> 3) * -8;
    do {
      pbVar1 = param_1 + 4;
      pbVar2 = param_1 + 5;
      local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3]) ^ local_38;
      pbVar3 = param_1 + 6;
      pbVar4 = param_1 + 7;
      param_1 = param_1 + 8;
      local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4
                 ) ^ local_34;
      FUN_1454f0bb0(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
      param_2 = param_2 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pbVar1 = local_30;
  if (iVar6 != -8) {
    param_1 = param_1 + (iVar6 + 8);
    uVar8 = 0;
    uVar9 = 0;
    switch(iVar6) {
    case 0:
      uVar8 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -1:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 8;
    case -2:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
    case -3:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x18;
    case -4:
      uVar9 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -5:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 8;
    case -6:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 0x10;
    case -7:
      uVar9 = uVar9 | (uint)param_1[-1] << 0x18;
    default:
      local_38 = uVar9 ^ local_38;
      local_34 = uVar8 ^ local_34;
      FUN_1454f0bb0(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
    }
  }
  *pbVar1 = (byte)(local_38 >> 0x18);
  pbVar1[1] = (byte)(local_38 >> 0x10);
  pbVar1[2] = (byte)(local_38 >> 8);
  pbVar1[3] = (byte)local_38;
  pbVar1[4] = (byte)(local_34 >> 0x18);
  pbVar1[5] = (byte)(local_34 >> 0x10);
  pbVar1[6] = (byte)(local_34 >> 8);
  pbVar1[7] = (byte)local_34;
  return;
}



// FUNCTION 1454f1a60 FUN_1454f1a60 body=541 status=ok
// SIG undefined FUN_1454f1a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f1a60(byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined1 *param_5,
                  uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_7 == 0) {
    param_7 = 0;
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        FUN_1454f0bb0(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = puVar3[(int)uVar5];
      puVar3[(int)uVar5] = bVar1;
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 7;
    }
  }
  else if (param_3 != 0) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        FUN_1454f0bb0(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = param_2[lVar6];
      bVar2 = puVar3[(int)uVar5];
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      puVar3[(int)uVar5] = bVar1 ^ bVar2;
      uVar5 = uVar5 + 1 & 7;
    } while (param_3 != 0);
  }
  *puVar4 = uVar5;
  return;
}



// FUNCTION 1454f1c80 FUN_1454f1c80 body=468 status=ok
// SIG undefined FUN_1454f1c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f1c80(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                  uint *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  undefined8 local_70;
  uint *local_68;
  byte *local_60;
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454f1c9d;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_5;
  iVar7 = 0;
  local_58[1] = param_5[1];
  uVar3 = *param_6;
  uVar5 = (uint)param_5[3];
  uVar6 = (uint)*param_5 << 0x18 | (uint)local_58[1] << 0x10 | (uint)param_5[2] << 8 | uVar5;
  local_68 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_74 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar4 = (ulonglong)local_74;
  local_58[3] = param_5[3];
  local_58[0] = *param_5;
  local_58[2] = param_5[2];
  local_54 = param_5[4];
  local_53 = param_5[5];
  local_52 = param_5[6];
  local_51 = param_5[7];
  local_78 = uVar6;
  local_70 = param_4;
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar2 = (ulonglong)(uVar1 & 0xff);
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        FUN_1454f0bb0(&local_78,param_4);
        uVar4 = (ulonglong)local_74;
        uVar5 = local_78 & 0xff;
        uVar2 = uVar4 & 0xff;
        local_58[0] = (byte)(local_78 >> 0x18);
        local_58[1] = (byte)(local_78 >> 0x10);
        local_58[2] = (byte)(local_78 >> 8);
        local_54 = (byte)(local_74 >> 0x18);
        local_53 = (byte)(local_74 >> 0x10);
        local_52 = (byte)(local_74 >> 8);
        iVar7 = iVar7 + 1;
        local_58[3] = (byte)local_78;
        local_51 = (byte)local_74;
        uVar6 = local_78;
      }
      param_1[param_2] = local_58[(int)uVar3] ^ *param_1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_3 != 0);
    if (iVar7 != 0) {
      *local_60 = (byte)(uVar6 >> 0x18);
      param_5[1] = (byte)(uVar6 >> 0x10);
      param_5[2] = (byte)(uVar6 >> 8);
      param_5[3] = (byte)uVar5;
      param_5[4] = (byte)(uVar4 >> 0x18);
      param_5[5] = (byte)(uVar4 >> 0x10);
      param_5[6] = (byte)(uVar4 >> 8);
      param_5[7] = (byte)uVar2;
    }
  }
  *local_68 = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1454f1e70 FUN_1454f1e70 body=5712 status=ok
// SIG undefined FUN_1454f1e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f1e70(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_178;
  uint local_174;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  uint local_f8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8 [4];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78 [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1454f1e97;
  local_38 = DAT_14c707940 ^ (ulonglong)&local_178;
  lVar14 = 0;
  local_108 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  iVar17 = 0x10;
  if (param_2 < 0x11) {
    iVar17 = param_2;
  }
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if (0 < iVar17) {
    do {
      local_f8[lVar14] = (uint)*(byte *)(lVar14 + param_3);
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar17);
  }
  *(uint *)(param_1 + 0x80) = (uint)(iVar17 < 0xb);
  uVar20 = *(uint *)(&DAT_149d98650 + (ulonglong)local_c0._4_4_ * 4) ^
           *(uint *)(&DAT_149d98e50 + (local_c0 & 0xffffffff) * 4) ^
           *(uint *)(&DAT_149d98250 + (ulonglong)local_c8._4_4_ * 4) ^
           *(uint *)(&DAT_149d98a50 + (local_c8 & 0xffffffff) * 4) ^
           *(uint *)(&DAT_149d98a50 + (local_d8 & 0xffffffff) * 4) ^
           (((local_f8[0] << 8 | local_f8[1]) << 8 | local_f8[2]) << 8 | local_f8[3]);
  lVar14 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar20 >> 0x18) * 4;
  lVar2 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar20 & 0xff) * 4;
  uVar18 = *(uint *)(&DAT_149d98e50 + (local_d0 & 0xffffffff) * 4) ^
           *(uint *)(&DAT_149d98e50 + lVar3) ^ *(uint *)(&DAT_149d98650 + lVar2) ^
           *(uint *)(&DAT_149d98250 + lVar1) ^
           ((((int)local_d8 << 8 | local_d8._4_4_) << 8 | (uint)local_d0) << 8 | local_d0._4_4_) ^
           *(uint *)(&DAT_149d98a50 + lVar14);
  lVar12 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar4 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar16 = *(uint *)(&DAT_149d98250 + (ulonglong)local_d8._4_4_ * 4) ^
           *(uint *)(&DAT_149d98250 + lVar6) ^
           ((((int)local_c8 << 8 | local_c8._4_4_) << 8 | (uint)local_c0) << 8 | local_c0._4_4_) ^
           *(uint *)(&DAT_149d98650 + lVar5) ^ *(uint *)(&DAT_149d98a50 + lVar4) ^
           *(uint *)(&DAT_149d98e50 + lVar12);
  lVar7 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar13 = *(uint *)(&DAT_149d98650 + (ulonglong)local_d0._4_4_ * 4) ^
           *(uint *)(&DAT_149d98a50 + lVar7) ^ *(uint *)(&DAT_149d98e50 + lVar9) ^
           *(uint *)(&DAT_149d98250 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98650 + lVar8) ^
           (((local_f8[4] << 8 | local_f8[5]) << 8 | local_f8[6]) << 8 | local_f8[7]);
  local_b8[0] = *(uint *)(&DAT_149d98250 + lVar9) ^ *(uint *)(&DAT_149d98a50 + lVar6) ^
                *(uint *)(&DAT_149d98250 + lVar2) ^ *(uint *)(&DAT_149d98e50 + lVar5) ^
                *(uint *)(&DAT_149d98650 + lVar8);
  lVar9 = (ulonglong)(uVar13 >> 0x18) * 4;
  local_b8[1] = *(uint *)(&DAT_149d98650 + lVar7) ^
                *(uint *)(&DAT_149d98250 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98650 + lVar5) ^ *(uint *)(&DAT_149d98a50 + lVar4) ^
                *(uint *)(&DAT_149d98e50 + lVar12);
  local_b8[2] = *(uint *)(&DAT_149d98650 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98250 + lVar9) ^ *(uint *)(&DAT_149d98a50 + lVar8) ^
                *(uint *)(&DAT_149d98a50 + lVar3) ^ *(uint *)(&DAT_149d98e50 + lVar2);
  uVar16 = *(uint *)(&DAT_149d98650 + lVar6) ^ *(uint *)(&DAT_149d98250 + lVar4) ^
           *(uint *)(&DAT_149d98a50 + lVar12) ^ *(uint *)(&DAT_149d98a50 + lVar1) ^ uVar16 ^
           *(uint *)(&DAT_149d98e50 + lVar5);
  local_b8[3] = *(uint *)(&DAT_149d98250 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98650 + (ulonglong)(uVar13 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98e50 + lVar9) ^ *(uint *)(&DAT_149d98e50 + lVar1) ^
                *(uint *)(&DAT_149d98a50 + lVar14);
  lVar1 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar20 = *(uint *)(&DAT_149d98250 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar1) ^
           *(uint *)(&DAT_149d98e50 + lVar12) ^
           *(uint *)(&DAT_149d98650 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^ uVar20 ^
           *(uint *)(&DAT_149d98e50 + lVar2);
  lVar2 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar20 >> 0x18) * 4;
  uVar18 = *(uint *)(&DAT_149d98e50 + lVar6) ^ *(uint *)(&DAT_149d98a50 + lVar5) ^
           *(uint *)(&DAT_149d98250 + lVar14) ^
           *(uint *)(&DAT_149d98650 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98250 + lVar2) ^ uVar18;
  lVar14 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar18 >> 0x18) * 4;
  uVar13 = *(uint *)(&DAT_149d98a50 + lVar14) ^ *(uint *)(&DAT_149d98650 + lVar8) ^
           *(uint *)(&DAT_149d98250 + lVar7) ^ *(uint *)(&DAT_149d98650 + lVar3) ^
           *(uint *)(&DAT_149d98e50 + lVar9) ^ uVar13;
  lVar3 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  local_a8 = *(uint *)(&DAT_149d98250 + lVar12) ^ *(uint *)(&DAT_149d98250 + lVar9) ^
             *(uint *)(&DAT_149d98e50 + lVar11) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar13 >> 0x18) * 4);
  local_a4 = *(uint *)(&DAT_149d98650 + lVar4) ^ *(uint *)(&DAT_149d98250 + lVar1) ^
             *(uint *)(&DAT_149d98650 + lVar11) ^ *(uint *)(&DAT_149d98a50 + lVar10) ^
             *(uint *)(&DAT_149d98e50 + lVar3);
  uVar16 = *(uint *)(&DAT_149d98250 + lVar11) ^ *(uint *)(&DAT_149d98e50 + lVar10) ^
           *(uint *)(&DAT_149d98650 + lVar3) ^ *(uint *)(&DAT_149d98a50 + lVar9) ^
           *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar13 >> 0x18) * 4) ^ uVar16;
  local_a0 = *(uint *)(&DAT_149d98a50 + lVar12) ^ *(uint *)(&DAT_149d98e50 + lVar8) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98250 + lVar2) ^ *(uint *)(&DAT_149d98a50 + lVar9);
  local_9c = *(uint *)(&DAT_149d98650 + lVar6) ^ *(uint *)(&DAT_149d98250 + lVar5) ^
             *(uint *)(&DAT_149d98e50 + lVar2) ^ *(uint *)(&DAT_149d98e50 + lVar14) ^
             *(uint *)(&DAT_149d98a50 + lVar7);
  lVar1 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar16 >> 0x18) * 4;
  lVar3 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar16 & 0xff) * 4;
  uVar18 = *(uint *)(&DAT_149d98e50 + lVar7) ^ *(uint *)(&DAT_149d98e50 + lVar12) ^
           *(uint *)(&DAT_149d98a50 + lVar1) ^ *(uint *)(&DAT_149d98250 + lVar2) ^ uVar18 ^
           *(uint *)(&DAT_149d98650 + lVar3);
  lVar4 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar6 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 & 0xff) * 4;
  uVar13 = *(uint *)(&DAT_149d98250 + lVar8) ^ *(uint *)(&DAT_149d98a50 + lVar4) ^
           *(uint *)(&DAT_149d98e50 + lVar5) ^ uVar13 ^ *(uint *)(&DAT_149d98250 + lVar7) ^
           *(uint *)(&DAT_149d98650 + lVar6);
  lVar8 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  lVar11 = (ulonglong)(uVar13 >> 0x18) * 4;
  uVar20 = *(uint *)(&DAT_149d98650 + lVar14) ^ *(uint *)(&DAT_149d98a50 + lVar8) ^
           *(uint *)(&DAT_149d98250 + lVar9) ^ *(uint *)(&DAT_149d98650 + lVar10) ^
           *(uint *)(&DAT_149d98e50 + lVar11) ^ uVar20;
  lVar14 = (ulonglong)(uVar20 >> 0x18) * 4;
  local_98 = *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar20 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98a50 + lVar14) ^ *(uint *)(&DAT_149d98250 + lVar10) ^
             *(uint *)(&DAT_149d98250 + lVar12) ^ *(uint *)(&DAT_149d98650 + lVar3);
  local_94 = *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar20 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98650 + lVar14) ^ *(uint *)(&DAT_149d98650 + lVar2) ^
             *(uint *)(&DAT_149d98250 + lVar1);
  local_90 = *(uint *)(&DAT_149d98e50 + lVar10) ^ *(uint *)(&DAT_149d98a50 + lVar11) ^
             *(uint *)(&DAT_149d98a50 + lVar3) ^ *(uint *)(&DAT_149d98250 + lVar7) ^
             *(uint *)(&DAT_149d98650 + lVar6);
  local_8c = *(uint *)(&DAT_149d98e50 + lVar8) ^ *(uint *)(&DAT_149d98a50 + lVar9) ^
             *(uint *)(&DAT_149d98650 + lVar5) ^ *(uint *)(&DAT_149d98250 + lVar4) ^
             *(uint *)(&DAT_149d98e50 + lVar6);
  uVar19 = *(uint *)(&DAT_149d98650 + lVar7) ^ *(uint *)(&DAT_149d98a50 + lVar5) ^
           *(uint *)(&DAT_149d98a50 + lVar2) ^ *(uint *)(&DAT_149d98250 + lVar4) ^ uVar13 ^
           *(uint *)(&DAT_149d98e50 + lVar6);
  lVar14 = (ulonglong)(uVar19 & 0xff) * 4;
  lVar2 = (ulonglong)(uVar19 >> 0x18) * 4;
  lVar4 = (ulonglong)(uVar19 >> 8 & 0xff) * 4;
  uVar16 = *(uint *)(&DAT_149d98250 + lVar2) ^ *(uint *)(&DAT_149d98650 + lVar4) ^
           *(uint *)(&DAT_149d98e50 + lVar14) ^ *(uint *)(&DAT_149d98e50 + lVar3) ^
           *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar19 >> 0x10 & 0xff) * 4) ^ uVar16;
  lVar3 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  uVar18 = *(uint *)(&DAT_149d98650 + lVar5) ^ *(uint *)(&DAT_149d98250 + lVar3) ^
           *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar16 >> 0x18) * 4) ^
           *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98250 + lVar1) ^ uVar18;
  lVar1 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar18 >> 0x18) * 4;
  local_118 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  uVar20 = *(uint *)(&DAT_149d98a50 + lVar1) ^ *(uint *)(&DAT_149d98650 + lVar12) ^
           *(uint *)(&DAT_149d98e50 + lVar6) ^ *(uint *)(&DAT_149d98650 + lVar7) ^
           *(uint *)(&DAT_149d98250 + local_118) ^ uVar20;
  local_88 = *(uint *)(&DAT_149d98e50 + lVar5) ^ *(uint *)(&DAT_149d98a50 + lVar3) ^
             *(uint *)(&DAT_149d98250 + lVar14) ^ *(uint *)(&DAT_149d98250 + lVar6) ^
             *(uint *)(&DAT_149d98650 + lVar7);
  lVar12 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar20 >> 8 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar20 >> 0x18) * 4;
  local_84 = *(uint *)(&DAT_149d98650 + lVar3) ^ *(uint *)(&DAT_149d98250 + local_118) ^
             *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar16 >> 0x18) * 4) ^
             *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98650 + lVar1);
  uVar13 = *(uint *)(&DAT_149d98a50 + lVar8) ^ *(uint *)(&DAT_149d98250 + lVar12) ^
           *(uint *)(&DAT_149d98e50 + lVar5) ^ *(uint *)(&DAT_149d98a50 + lVar6) ^
           *(uint *)(&DAT_149d98650 + (ulonglong)(uVar20 & 0xff) * 4) ^ uVar19;
  local_80 = *(uint *)(&DAT_149d98e50 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar14) ^
             *(uint *)(&DAT_149d98250 + lVar8) ^ *(uint *)(&DAT_149d98650 + lVar12) ^
             *(uint *)(&DAT_149d98a50 + lVar6);
  local_7c = *(uint *)(&DAT_149d98e50 + lVar2) ^ *(uint *)(&DAT_149d98e50 + lVar12) ^
             *(uint *)(&DAT_149d98250 + lVar5) ^
             *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar19 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(uVar20 & 0xff) * 4);
  lVar14 = (ulonglong)(uVar13 >> 0x18) * 4;
  lVar2 = (ulonglong)(uVar13 >> 0x10 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar13 >> 8 & 0xff) * 4;
  lVar12 = (ulonglong)(uVar13 & 0xff) * 4;
  uVar19 = *(uint *)(&DAT_149d98e50 + local_118) ^ *(uint *)(&DAT_149d98e50 + lVar12) ^
           *(uint *)(&DAT_149d98650 + lVar3) ^ *(uint *)(&DAT_149d98250 + lVar14) ^ uVar18 ^
           *(uint *)(&DAT_149d98a50 + lVar2);
  lVar4 = (ulonglong)(uVar19 >> 8 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar19 >> 0x18) * 4;
  lVar6 = (ulonglong)(uVar19 >> 0x10 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar19 & 0xff) * 4;
  uVar20 = *(uint *)(&DAT_149d98250 + lVar7) ^ *(uint *)(&DAT_149d98250 + lVar8) ^ uVar20 ^
           *(uint *)(&DAT_149d98650 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar6) ^
           *(uint *)(&DAT_149d98e50 + lVar5);
  lVar7 = (ulonglong)(uVar20 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar20 >> 0x10 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar20 >> 0x18) * 4;
  uVar16 = *(uint *)(&DAT_149d98a50 + lVar7) ^ *(uint *)(&DAT_149d98e50 + lVar10) ^
           *(uint *)(&DAT_149d98650 + lVar1) ^
           *(uint *)(&DAT_149d98250 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98650 + lVar9) ^ uVar16;
  local_78[0] = *(uint *)(&DAT_149d98250 + lVar10) ^ *(uint *)(&DAT_149d98a50 + lVar8) ^
                *(uint *)(&DAT_149d98250 + lVar3) ^ *(uint *)(&DAT_149d98e50 + lVar4) ^
                *(uint *)(&DAT_149d98650 + lVar9);
  lVar1 = (ulonglong)(uVar16 >> 0x18) * 4;
  local_78[1] = *(uint *)(&DAT_149d98650 + lVar7) ^
                *(uint *)(&DAT_149d98250 + (ulonglong)(uVar20 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98650 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar6) ^
                *(uint *)(&DAT_149d98e50 + lVar5);
  local_78[2] = *(uint *)(&DAT_149d98650 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98250 + lVar1) ^ *(uint *)(&DAT_149d98a50 + lVar9) ^
                *(uint *)(&DAT_149d98a50 + lVar12) ^ *(uint *)(&DAT_149d98e50 + lVar3);
  uVar18 = *(uint *)(&DAT_149d98650 + lVar8) ^ *(uint *)(&DAT_149d98250 + lVar6) ^
           *(uint *)(&DAT_149d98a50 + lVar5) ^ *(uint *)(&DAT_149d98a50 + lVar14) ^ uVar20 ^
           *(uint *)(&DAT_149d98e50 + lVar4);
  local_78[3] = *(uint *)(&DAT_149d98250 + (ulonglong)(uVar16 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98650 + (ulonglong)(uVar16 & 0xff) * 4) ^
                *(uint *)(&DAT_149d98e50 + lVar1) ^ *(uint *)(&DAT_149d98e50 + lVar14) ^
                *(uint *)(&DAT_149d98a50 + lVar2);
  lVar14 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar4 = (ulonglong)(uVar18 >> 0x18) * 4;
  local_178 = *(uint *)(&DAT_149d98250 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar14) ^
              *(uint *)(&DAT_149d98e50 + lVar1) ^
              *(uint *)(&DAT_149d98650 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^ uVar13 ^
              *(uint *)(&DAT_149d98e50 + lVar3);
  lVar3 = (ulonglong)(local_178 & 0xff) * 4;
  lVar5 = (ulonglong)(local_178 >> 0x10 & 0xff) * 4;
  lVar6 = (ulonglong)(local_178 >> 0x18) * 4;
  uVar19 = *(uint *)(&DAT_149d98e50 + lVar6) ^ *(uint *)(&DAT_149d98a50 + lVar5) ^
           *(uint *)(&DAT_149d98250 + lVar2) ^
           *(uint *)(&DAT_149d98650 + (ulonglong)(local_178 >> 8 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98250 + lVar3) ^ uVar19;
  lVar2 = (ulonglong)(uVar19 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar19 >> 8 & 0xff) * 4;
  local_138 = (ulonglong)(uVar19 >> 0x10 & 0xff) * 4;
  lVar8 = (ulonglong)(uVar19 >> 0x18) * 4;
  uVar16 = *(uint *)(&DAT_149d98a50 + lVar2) ^ *(uint *)(&DAT_149d98650 + local_138) ^
           *(uint *)(&DAT_149d98250 + lVar7) ^ *(uint *)(&DAT_149d98650 + lVar12) ^
           *(uint *)(&DAT_149d98e50 + lVar8) ^ uVar16;
  lVar12 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar9 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar10 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  local_68 = *(uint *)(&DAT_149d98250 + lVar1) ^ *(uint *)(&DAT_149d98250 + lVar8) ^
             *(uint *)(&DAT_149d98e50 + lVar9) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar16 >> 0x18) * 4);
  uVar18 = *(uint *)(&DAT_149d98250 + lVar9) ^ *(uint *)(&DAT_149d98e50 + lVar10) ^
           *(uint *)(&DAT_149d98650 + lVar12) ^ *(uint *)(&DAT_149d98a50 + lVar8) ^
           *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar16 >> 0x18) * 4) ^ uVar18;
  local_64 = *(uint *)(&DAT_149d98650 + lVar4) ^ *(uint *)(&DAT_149d98250 + lVar14) ^
             *(uint *)(&DAT_149d98650 + lVar9) ^ *(uint *)(&DAT_149d98a50 + lVar10) ^
             *(uint *)(&DAT_149d98e50 + lVar12);
  local_160 = (ulonglong)uVar18;
  local_60 = *(uint *)(&DAT_149d98a50 + lVar1) ^ *(uint *)(&DAT_149d98e50 + local_138) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(local_178 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98250 + lVar3) ^ *(uint *)(&DAT_149d98a50 + lVar8);
  local_5c = *(uint *)(&DAT_149d98650 + lVar6) ^ *(uint *)(&DAT_149d98250 + lVar5) ^
             *(uint *)(&DAT_149d98e50 + lVar3) ^ *(uint *)(&DAT_149d98e50 + lVar2) ^
             *(uint *)(&DAT_149d98a50 + lVar7);
  lVar14 = (ulonglong)(uVar18 >> 0x10 & 0xff) * 4;
  local_158 = (ulonglong)(uVar18 >> 0x18) * 4;
  lVar1 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  local_140 = (ulonglong)(uVar18 & 0xff) * 4;
  local_174 = *(uint *)(&DAT_149d98e50 + lVar7) ^ *(uint *)(&DAT_149d98e50 + local_140) ^
              *(uint *)(&DAT_149d98a50 + lVar14) ^ *(uint *)(&DAT_149d98250 + local_158) ^ uVar19 ^
              *(uint *)(&DAT_149d98650 + lVar1);
  lVar3 = (ulonglong)(local_174 >> 0x10 & 0xff) * 4;
  local_128 = (ulonglong)(local_174 >> 0x18) * 4;
  lVar12 = (ulonglong)(local_174 >> 8 & 0xff) * 4;
  local_130 = (ulonglong)(local_174 & 0xff) * 4;
  uVar16 = *(uint *)(&DAT_149d98250 + local_138) ^ *(uint *)(&DAT_149d98a50 + lVar3) ^
           *(uint *)(&DAT_149d98e50 + local_128) ^ uVar16 ^ *(uint *)(&DAT_149d98250 + local_130) ^
           *(uint *)(&DAT_149d98650 + lVar12);
  lVar4 = (ulonglong)(uVar16 & 0xff) * 4;
  lVar5 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  lVar6 = (ulonglong)(uVar16 >> 0x10 & 0xff) * 4;
  lVar7 = (ulonglong)(uVar16 >> 0x18) * 4;
  local_178 = *(uint *)(&DAT_149d98650 + lVar2) ^ *(uint *)(&DAT_149d98a50 + lVar4) ^
              *(uint *)(&DAT_149d98250 + lVar5) ^ *(uint *)(&DAT_149d98650 + lVar6) ^
              *(uint *)(&DAT_149d98e50 + lVar7) ^ local_178;
  lVar2 = (ulonglong)(local_178 >> 0x18) * 4;
  local_58 = *(uint *)(&DAT_149d98e50 + (ulonglong)(local_178 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98a50 + lVar2) ^ *(uint *)(&DAT_149d98250 + lVar6) ^
             *(uint *)(&DAT_149d98250 + local_140) ^ *(uint *)(&DAT_149d98650 + lVar1);
  uVar13 = *(uint *)(&DAT_149d98250 + lVar14);
  local_168 = (ulonglong)uVar13;
  local_54 = *(uint *)(&DAT_149d98a50 + (ulonglong)(local_178 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98e50 + (ulonglong)(local_178 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98650 + lVar2) ^ *(uint *)(&DAT_149d98650 + local_158) ^ uVar13;
  local_50 = *(uint *)(&DAT_149d98e50 + lVar6) ^ *(uint *)(&DAT_149d98a50 + lVar7) ^
             *(uint *)(&DAT_149d98a50 + lVar1) ^ *(uint *)(&DAT_149d98250 + local_130) ^
             *(uint *)(&DAT_149d98650 + lVar12);
  local_4c = *(uint *)(&DAT_149d98e50 + lVar4) ^ *(uint *)(&DAT_149d98a50 + lVar5) ^
             *(uint *)(&DAT_149d98650 + local_128) ^ *(uint *)(&DAT_149d98250 + lVar3) ^
             *(uint *)(&DAT_149d98e50 + lVar12);
  uVar16 = *(uint *)(&DAT_149d98650 + local_130) ^ *(uint *)(&DAT_149d98a50 + local_128) ^
           *(uint *)(&DAT_149d98a50 + local_158) ^ *(uint *)(&DAT_149d98250 + lVar3) ^ uVar16 ^
           *(uint *)(&DAT_149d98e50 + lVar12);
  local_110 = (ulonglong)(uVar16 & 0xff) * 4;
  local_120 = (ulonglong)(uVar16 >> 8 & 0xff) * 4;
  local_150 = (ulonglong)(uVar16 >> 0x18) * 4;
  uVar16 = *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar16 >> 0x10 & 0xff) * 4);
  uVar18 = *(uint *)(&DAT_149d98250 + local_150) ^ *(uint *)(&DAT_149d98650 + local_120) ^
           *(uint *)(&DAT_149d98e50 + local_110) ^ *(uint *)(&DAT_149d98e50 + lVar1) ^ uVar16 ^
           uVar18;
  local_148 = (ulonglong)uVar16;
  lVar14 = (ulonglong)(uVar18 & 0xff) * 4;
  lVar1 = (ulonglong)(uVar18 >> 8 & 0xff) * 4;
  uVar20 = *(uint *)(&DAT_149d98a50 + (ulonglong)(uVar18 >> 0x10 & 0xff) * 4);
  lVar12 = 0;
  local_170 = (ulonglong)uVar20;
  uVar13 = *(uint *)(&DAT_149d98650 + lVar1) ^ *(uint *)(&DAT_149d98250 + lVar14) ^
           *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar18 >> 0x18) * 4) ^ uVar20 ^ uVar13 ^ local_174
  ;
  lVar2 = (ulonglong)(uVar13 & 0xff) * 4;
  lVar3 = (ulonglong)(uVar13 >> 0x18) * 4;
  uVar19 = *(uint *)(&DAT_149d98a50 + lVar2) ^ *(uint *)(&DAT_149d98650 + local_140) ^
           *(uint *)(&DAT_149d98e50 + lVar3) ^
           *(uint *)(&DAT_149d98650 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4) ^
           *(uint *)(&DAT_149d98250 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^ local_178;
  local_48 = *(uint *)(&DAT_149d98e50 + lVar1) ^ *(uint *)(&DAT_149d98a50 + lVar14) ^
             *(uint *)(&DAT_149d98250 + local_110) ^ *(uint *)(&DAT_149d98250 + lVar3) ^
             *(uint *)(&DAT_149d98650 + (ulonglong)(uVar13 >> 0x10 & 0xff) * 4);
  lVar1 = (ulonglong)(uVar19 >> 0x10 & 0xff) * 4;
  local_44 = *(uint *)(&DAT_149d98650 + lVar14) ^ *(uint *)(&DAT_149d98650 + lVar2) ^
             *(uint *)(&DAT_149d98250 + (ulonglong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98e50 + (ulonglong)(uVar18 >> 0x18) * 4) ^ uVar20;
  local_40 = *(uint *)(&DAT_149d98250 + (ulonglong)(uVar19 >> 0x18) * 4) ^
             *(uint *)(&DAT_149d98e50 + local_120) ^ *(uint *)(&DAT_149d98a50 + local_110) ^
             *(uint *)(&DAT_149d98a50 + lVar3) ^ *(uint *)(&DAT_149d98650 + lVar1);
  local_3c = *(uint *)(&DAT_149d98650 + (ulonglong)(uVar19 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98250 + (ulonglong)(uVar19 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_149d98e50 + local_150) ^ *(uint *)(&DAT_149d98e50 + lVar1) ^ uVar16;
  puVar15 = local_b8;
  do {
    *(uint *)(lVar12 + param_1) = *puVar15;
    *(uint *)(lVar12 + 4 + param_1) = puVar15[0x10] - 0x10 & 0x1f;
    lVar12 = lVar12 + 8;
    puVar15 = puVar15 + 1;
  } while (lVar12 < 0x80);
  local_100 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)&local_178);
}



// FUNCTION 1454f34f0 FUN_1454f34f0 body=195 status=ok
// SIG undefined FUN_1454f34f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f34f0(byte *param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  uint local_res8;
  uint local_resc;
  
  local_res8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  local_resc = (uint)CONCAT11(param_1[6],param_1[7]) |
               (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10;
  if (param_4 == 0) {
    FUN_1454f3a90(&local_res8,param_3);
  }
  else {
    FUN_1454f35c0();
  }
  *param_2 = (char)(local_res8 >> 0x18);
  param_2[1] = (char)(local_res8 >> 0x10);
  param_2[2] = (char)(local_res8 >> 8);
  param_2[3] = (undefined1)local_res8;
  param_2[4] = (char)(local_resc >> 0x18);
  param_2[5] = (char)(local_resc >> 0x10);
  param_2[6] = (char)(local_resc >> 8);
  param_2[7] = (undefined1)local_resc;
  return;
}



// FUNCTION 1454f35c0 FUN_1454f35c0 body=1217 status=ok
// SIG undefined FUN_1454f35c0(void)

void FUN_1454f35c0(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_2 + param_1[1];
  bVar1 = (byte)param_2[1] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
           *(uint *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
          *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4) ^ *param_1;
  uVar2 = param_2[2] ^ uVar3;
  bVar1 = (byte)param_2[3] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = param_1[1] ^
          (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
          *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4)) +
          *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[4] - uVar4;
  bVar1 = (byte)param_2[5] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[6] + uVar3;
  bVar1 = (byte)param_2[7] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[8] ^ uVar4;
  bVar1 = (byte)param_2[9] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[10] - uVar3;
  bVar1 = (byte)param_2[0xb] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0xc] + uVar4;
  bVar1 = (byte)param_2[0xd] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[0xe] ^ uVar3;
  bVar1 = (byte)param_2[0xf] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0x10] - uVar4;
  bVar1 = (byte)param_2[0x11] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  uVar2 = param_2[0x12] + uVar3;
  bVar1 = (byte)param_2[0x13] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4);
  uVar2 = param_2[0x14] ^ uVar4;
  bVar1 = (byte)param_2[0x15] & 0x1f;
  uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
  uVar3 = uVar3 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  bVar1 = (byte)param_2[0x17] & 0x1f;
  uVar2 = param_2[0x16] - uVar3 << bVar1 | param_2[0x16] - uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
  if (param_2[0x20] == 0) {
    bVar1 = (byte)param_2[0x19] & 0x1f;
    uVar2 = param_2[0x18] + uVar4 << bVar1 | param_2[0x18] + uVar4 >> 0x20 - bVar1;
    uVar3 = uVar3 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                     *(uint *)(&DAT_149d97650 + (ulonglong)(uVar2 & 0xff) * 4)) +
                    *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4);
    uVar2 = param_2[0x1a] ^ uVar3;
    bVar1 = (byte)param_2[0x1b] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                    *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
    uVar2 = param_2[0x1c] - uVar4;
    bVar1 = (byte)param_2[0x1d] & 0x1f;
    uVar2 = uVar2 << bVar1 | uVar2 >> 0x20 - bVar1;
    uVar3 = uVar3 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) +
                     *(int *)(&DAT_149d97650 + ((ulonglong)uVar2 & 0xff) * 4) ^
                    *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4)) -
                    *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4);
    bVar1 = (byte)param_2[0x1f] & 0x1f;
    uVar2 = param_2[0x1e] + uVar3 << bVar1 | param_2[0x1e] + uVar3 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar2 >> 8) * 4) ^
                     *(uint *)(&DAT_149d97650 + (ulonglong)(uVar2 & 0xff) * 4)) +
                    *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar2 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar2 >> 0x18) * 4);
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  return;
}



// FUNCTION 1454f3a90 FUN_1454f3a90 body=1241 status=ok
// SIG undefined FUN_1454f3a90(void)

void FUN_1454f3a90(uint *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar2 = param_1[1];
  if (param_2[0x20] == 0) {
    bVar1 = (byte)param_2[0x1f] & 0x1f;
    uVar3 = param_2[0x1e] + uVar2 << bVar1 | param_2[0x1e] + uVar2 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                     *(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4)) +
                    *(int *)(&DAT_149d97e50 + (ulonglong)(byte)(uVar3 >> 0x10) * 4)) -
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4);
    uVar3 = param_2[0x1c] - uVar4;
    bVar1 = (byte)param_2[0x1d] & 0x1f;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
    uVar2 = uVar2 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                     *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                    *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                    *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
    uVar3 = param_2[0x1a] ^ uVar2;
    bVar1 = (byte)param_2[0x1b] & 0x1f;
    uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
    uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                    *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                    *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
    bVar1 = (byte)param_2[0x19] & 0x1f;
    uVar3 = param_2[0x18] + uVar4 << bVar1 | param_2[0x18] + uVar4 >> 0x20 - bVar1;
    uVar2 = uVar2 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                     *(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4)) +
                    *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                    *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4);
  }
  bVar1 = (byte)param_2[0x17] & 0x1f;
  uVar3 = param_2[0x16] - uVar2 << bVar1 | param_2[0x16] - uVar2 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0x14] ^ uVar4;
  bVar1 = (byte)param_2[0x15] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0x12] + uVar2;
  bVar1 = (byte)param_2[0x13] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[0x10] - uVar4;
  bVar1 = (byte)param_2[0x11] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0xe] ^ uVar2;
  bVar1 = (byte)param_2[0xf] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[0xc] + uVar4;
  bVar1 = (byte)param_2[0xd] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[10] - uVar2;
  bVar1 = (byte)param_2[0xb] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[8] ^ uVar4;
  bVar1 = (byte)param_2[9] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[6] + uVar2;
  bVar1 = (byte)param_2[7] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ ((*(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) ^
                   *(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4)) +
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4)) -
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_2[4] - uVar4;
  bVar1 = (byte)param_2[5] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar2 = uVar2 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                   *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = param_2[2] ^ uVar2;
  bVar1 = (byte)param_2[3] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  uVar4 = uVar4 ^ (*(int *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4) +
                  *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) -
                  *(int *)(&DAT_149d97650 + ((ulonglong)uVar3 & 0xff) * 4) ^
                  *(uint *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4);
  uVar3 = *param_2 + uVar4;
  bVar1 = (byte)param_2[1] & 0x1f;
  uVar3 = uVar3 << bVar1 | uVar3 >> 0x20 - bVar1;
  *param_1 = ((*(uint *)(&DAT_149d97650 + (ulonglong)(uVar3 & 0xff) * 4) ^
              *(uint *)(&DAT_149d99250 + (ulonglong)(byte)(uVar3 >> 8) * 4)) -
             *(int *)(&DAT_149d97a50 + (ulonglong)(uVar3 >> 0x18) * 4)) +
             *(int *)(&DAT_149d97e50 + ((ulonglong)(uVar3 >> 0x10) & 0xff) * 4) ^ uVar2;
  param_1[1] = uVar4;
  return;
}



// FUNCTION 1454f3f70 FUN_1454f3f70 body=1325 status=ok
// SIG undefined FUN_1454f3f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f3f70(byte *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,byte *param_5,
                  int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_38;
  uint local_34;
  byte *local_30;
  
  if (param_6 == 0) {
    iVar6 = param_3 - 8;
    local_30 = param_5;
    uVar8 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
            (uint)param_5[3];
    uVar9 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
            (uint)param_5[7];
    if (-1 < iVar6) {
      uVar10 = (ulonglong)(param_3 >> 3);
      iVar6 = iVar6 + (param_3 >> 3) * -8;
      uVar7 = uVar8;
      uVar5 = uVar9;
      do {
        uVar8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                (uint)param_1[3];
        uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[6] << 8 |
                (uint)param_1[7];
        param_1 = param_1 + 8;
        local_38 = uVar8;
        local_34 = uVar9;
        FUN_1454f3a90(&local_38,param_4);
        local_38 = local_38 ^ uVar7;
        local_34 = local_34 ^ uVar5;
        *param_2 = (char)(local_38 >> 0x18);
        param_2[1] = (char)(local_38 >> 0x10);
        param_2[2] = (char)(local_38 >> 8);
        param_2[3] = (char)local_38;
        param_2[4] = (char)(local_34 >> 0x18);
        param_2[5] = (char)(local_34 >> 0x10);
        param_2[6] = (char)(local_34 >> 8);
        param_2[7] = (char)local_34;
        param_2 = param_2 + 8;
        uVar10 = uVar10 - 1;
        uVar7 = uVar8;
        uVar5 = uVar9;
      } while (uVar10 != 0);
    }
    pbVar1 = local_30;
    uVar7 = uVar8;
    uVar5 = uVar9;
    if (iVar6 != -8) {
      uVar7 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
              (uint)param_1[3];
      uVar5 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 |
              (uint)CONCAT11(param_1[6],param_1[7]);
      local_38 = uVar7;
      local_34 = uVar5;
      FUN_1454f3a90(&local_38,param_4);
      local_38 = local_38 ^ uVar8;
      local_34 = local_34 ^ uVar9;
      param_2 = param_2 + (iVar6 + 8);
      switch(iVar6) {
      case 0:
        param_2 = param_2 + -1;
        *param_2 = (char)local_34;
      case -1:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 8);
      case -2:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x10);
      case -3:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_34 >> 0x18);
      case -4:
        param_2 = param_2 + -1;
        *param_2 = (char)local_38;
      case -5:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 8);
      case -6:
        param_2 = param_2 + -1;
        *param_2 = (char)(local_38 >> 0x10);
      case -7:
        param_2[-1] = (char)(local_38 >> 0x18);
      }
    }
    *pbVar1 = (byte)(uVar7 >> 0x18);
    pbVar1[1] = (byte)(uVar7 >> 0x10);
    pbVar1[2] = (byte)(uVar7 >> 8);
    pbVar1[3] = (byte)uVar7;
    pbVar1[4] = (byte)(uVar5 >> 0x18);
    pbVar1[5] = (byte)(uVar5 >> 0x10);
    pbVar1[6] = (byte)(uVar5 >> 8);
    pbVar1[7] = (byte)uVar5;
    return;
  }
  iVar6 = param_3 - 8;
  local_30 = param_5;
  local_38 = (uint)*param_5 << 0x18 | (uint)param_5[1] << 0x10 | (uint)param_5[2] << 8 |
             (uint)param_5[3];
  local_34 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | (uint)param_5[6] << 8 |
             (uint)param_5[7];
  if (-1 < iVar6) {
    uVar10 = (ulonglong)(param_3 >> 3);
    iVar6 = iVar6 + (param_3 >> 3) * -8;
    do {
      pbVar1 = param_1 + 4;
      pbVar2 = param_1 + 5;
      local_38 = ((uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
                 (uint)param_1[3]) ^ local_38;
      pbVar3 = param_1 + 6;
      pbVar4 = param_1 + 7;
      param_1 = param_1 + 8;
      local_34 = ((uint)*pbVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4
                 ) ^ local_34;
      FUN_1454f35c0(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
      param_2 = param_2 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pbVar1 = local_30;
  if (iVar6 != -8) {
    param_1 = param_1 + (iVar6 + 8);
    uVar8 = 0;
    uVar9 = 0;
    switch(iVar6) {
    case 0:
      uVar8 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -1:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 8;
    case -2:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x10;
    case -3:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar8 = uVar8 | (uint)*pbVar2 << 0x18;
    case -4:
      uVar9 = (uint)param_1[-1];
      param_1 = param_1 + -1;
    case -5:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 8;
    case -6:
      pbVar2 = param_1 + -1;
      param_1 = param_1 + -1;
      uVar9 = uVar9 | (uint)*pbVar2 << 0x10;
    case -7:
      uVar9 = uVar9 | (uint)param_1[-1] << 0x18;
    default:
      local_38 = uVar9 ^ local_38;
      local_34 = uVar8 ^ local_34;
      FUN_1454f35c0(&local_38,param_4);
      *param_2 = (char)(local_38 >> 0x18);
      param_2[1] = (char)(local_38 >> 0x10);
      param_2[2] = (char)(local_38 >> 8);
      param_2[3] = (char)local_38;
      param_2[4] = (char)(local_34 >> 0x18);
      param_2[5] = (char)(local_34 >> 0x10);
      param_2[6] = (char)(local_34 >> 8);
      param_2[7] = (char)local_34;
    }
  }
  *pbVar1 = (byte)(local_38 >> 0x18);
  pbVar1[1] = (byte)(local_38 >> 0x10);
  pbVar1[2] = (byte)(local_38 >> 8);
  pbVar1[3] = (byte)local_38;
  pbVar1[4] = (byte)(local_34 >> 0x18);
  pbVar1[5] = (byte)(local_34 >> 0x10);
  pbVar1[6] = (byte)(local_34 >> 8);
  pbVar1[7] = (byte)local_34;
  return;
}



// FUNCTION 1454f44e0 FUN_1454f44e0 body=541 status=ok
// SIG undefined FUN_1454f44e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f44e0(byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined1 *param_5,
                  uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  
  puVar4 = param_6;
  puVar3 = param_5;
  uVar5 = *param_6;
  if (param_7 == 0) {
    param_7 = 0;
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        FUN_1454f35c0(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      bVar2 = puVar3[(int)uVar5];
      puVar3[(int)uVar5] = bVar1;
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      uVar5 = uVar5 + 1 & 7;
    }
  }
  else if (param_3 != 0) {
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      param_3 = param_3 + -1;
      if (uVar5 == 0) {
        param_5._0_4_ =
             (uint)CONCAT11(*puVar3,puVar3[1]) << 0x10 | (uint)(byte)puVar3[2] << 8 |
             (uint)(byte)puVar3[3];
        param_5._4_4_ =
             (uint)CONCAT11(puVar3[6],puVar3[7]) |
             (uint)(byte)puVar3[4] << 0x18 | (uint)(byte)puVar3[5] << 0x10;
        FUN_1454f35c0(&param_5,param_4);
        *puVar3 = (char)((uint)param_5 >> 0x18);
        puVar3[1] = (char)((uint)param_5 >> 0x10);
        puVar3[2] = (char)((uint)param_5 >> 8);
        puVar3[3] = param_5._0_1_;
        puVar3[4] = (char)(param_5._4_4_ >> 0x18);
        puVar3[5] = (char)(param_5._4_4_ >> 0x10);
        puVar3[6] = (char)(param_5._4_4_ >> 8);
        puVar3[7] = param_5._4_1_;
      }
      bVar1 = param_2[lVar6];
      bVar2 = puVar3[(int)uVar5];
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      puVar3[(int)uVar5] = bVar1 ^ bVar2;
      uVar5 = uVar5 + 1 & 7;
    } while (param_3 != 0);
  }
  *puVar4 = uVar5;
  return;
}



// FUNCTION 1454f4700 FUN_1454f4700 body=468 status=ok
// SIG undefined FUN_1454f4700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f4700(byte *param_1,longlong param_2,int param_3,undefined8 param_4,byte *param_5,
                  uint *param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_74;
  undefined8 local_70;
  uint *local_68;
  byte *local_60;
  byte local_58 [4];
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1454f471d;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_5;
  iVar7 = 0;
  local_58[1] = param_5[1];
  uVar3 = *param_6;
  uVar5 = (uint)param_5[3];
  uVar6 = (uint)*param_5 << 0x18 | (uint)local_58[1] << 0x10 | (uint)param_5[2] << 8 | uVar5;
  local_68 = param_6;
  uVar1 = (uint)CONCAT11(param_5[6],param_5[7]);
  local_74 = (uint)param_5[4] << 0x18 | (uint)param_5[5] << 0x10 | uVar1;
  uVar4 = (ulonglong)local_74;
  local_58[3] = param_5[3];
  local_58[0] = *param_5;
  local_58[2] = param_5[2];
  local_54 = param_5[4];
  local_53 = param_5[5];
  local_52 = param_5[6];
  local_51 = param_5[7];
  local_78 = uVar6;
  local_70 = param_4;
  if (param_3 != 0) {
    param_2 = param_2 - (longlong)param_1;
    uVar2 = (ulonglong)(uVar1 & 0xff);
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        FUN_1454f35c0(&local_78,param_4);
        uVar4 = (ulonglong)local_74;
        uVar5 = local_78 & 0xff;
        uVar2 = uVar4 & 0xff;
        local_58[0] = (byte)(local_78 >> 0x18);
        local_58[1] = (byte)(local_78 >> 0x10);
        local_58[2] = (byte)(local_78 >> 8);
        local_54 = (byte)(local_74 >> 0x18);
        local_53 = (byte)(local_74 >> 0x10);
        local_52 = (byte)(local_74 >> 8);
        iVar7 = iVar7 + 1;
        local_58[3] = (byte)local_78;
        local_51 = (byte)local_74;
        uVar6 = local_78;
      }
      param_1[param_2] = local_58[(int)uVar3] ^ *param_1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1 & 7;
    } while (param_3 != 0);
    if (iVar7 != 0) {
      *local_60 = (byte)(uVar6 >> 0x18);
      param_5[1] = (byte)(uVar6 >> 0x10);
      param_5[2] = (byte)(uVar6 >> 8);
      param_5[3] = (byte)uVar5;
      param_5[4] = (byte)(uVar4 >> 0x18);
      param_5[5] = (byte)(uVar4 >> 0x10);
      param_5[6] = (byte)(uVar4 >> 8);
      param_5[7] = (byte)uVar2;
    }
  }
  *local_68 = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1454f48f0 FUN_1454f48f0 body=487 status=ok
// SIG undefined FUN_1454f48f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f48f0(undefined1 *param_1,uint *param_2)

{
  uint3 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  uint local_28 [4];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1454f4900;
  local_18 = DAT_14c707940 ^ (ulonglong)local_28;
  local_28[0] = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ 0xa3b1bac6
  ;
  local_28[1] = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]) ^
                0x56aa3350;
  local_28[2] = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]) ^
                0x677d9197;
  local_28[3] = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]) ^
                0xb27022dc;
  lVar5 = (longlong)&DAT_149d99b60 - (longlong)param_2;
  uVar6 = 2;
  do {
    uVar2 = uVar6 - 1 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = uVar6 + 1 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = uVar6 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = local_28[(int)uVar2] ^ local_28[(int)uVar3] ^ local_28[(int)uVar4] ^
            *(uint *)(lVar5 + (longlong)param_2);
    uVar1 = CONCAT21(CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]
                             ),(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
    uVar4 = CONCAT31(uVar1,(&DAT_149d99650)[uVar3 & 0xff]);
    uVar2 = uVar6 - 2 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    uVar4 = (uVar4 << 0xd |
            (uint)(ushort)(CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],
                                    (&DAT_149d99650)[uVar3 >> 0x10 & 0xff]) >> 3)) ^
            ((uint)(uVar1 >> 1) | uVar4 << 0x17) ^ local_28[(int)uVar2] ^ uVar4;
    *param_2 = uVar4;
    param_2 = param_2 + 1;
    local_28[(int)uVar2] = uVar4;
    bVar7 = uVar6 != 0x21;
    uVar6 = uVar6 + 1;
  } while (bVar7);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_28);
}



// FUNCTION 1454f4af0 FUN_1454f4af0 body=3523 status=ok
// SIG undefined FUN_1454f4af0(void)

void FUN_1454f4af0(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = *param_3 ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[1] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[3] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[4] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1b] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1c] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1f] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  param_2[3] = (char)uVar4;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}



// FUNCTION 1454f58c0 FUN_1454f58c0 body=3523 status=ok
// SIG undefined FUN_1454f58c0(void)

void FUN_1454f58c0(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  uint3 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT31(CONCAT21(CONCAT11(param_1[4],param_1[5]),param_1[6]),param_1[7]);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
  uVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[0xc],param_1[0xd]),param_1[0xe]),param_1[0xf]);
  uVar3 = param_3[0x1f] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar7 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar7 = ((uint)(uVar2 >> 6) | uVar7 << 0x12) ^ (uVar7 << 10 | (uint)(uVar1 >> 6)) ^
          ((uint)uVar2 | uVar7 << 0x18) ^
          (uVar7 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^
          CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) ^ uVar7;
  uVar3 = param_3[0x1e] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1c] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[0x1b] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x1a] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x19] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x18] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x17] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x16] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x15] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x14] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x13] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x12] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x11] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0x10] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xf] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xe] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xd] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xc] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[0xb] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[10] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[9] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[8] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[7] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar7 = uVar7 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[6] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar5 = uVar5 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[5] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar6 = uVar6 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[4] ^ uVar6 ^ uVar5 ^ uVar7;
  uVar4 = uVar4 ^ (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18) ^
                  (*(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) << 8 |
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 & 0xff) * 4) >> 0x18) ^
                  *(uint *)(&DAT_149d99750 + (ulonglong)(uVar3 >> 0x18) * 4);
  uVar3 = param_3[3] ^ uVar4 ^ uVar6 ^ uVar5;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar7 = uVar7 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[2] ^ uVar4 ^ uVar6 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar5 = uVar5 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = param_3[1] ^ uVar4 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar6 = uVar6 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  uVar3 = *param_3 ^ uVar6 ^ uVar5 ^ uVar7;
  uVar1 = CONCAT11((&DAT_149d99650)[uVar3 >> 0x18],(&DAT_149d99650)[uVar3 >> 0x10 & 0xff]);
  uVar2 = CONCAT21(uVar1,(&DAT_149d99650)[uVar3 >> 8 & 0xff]);
  uVar8 = CONCAT31(uVar2,(&DAT_149d99650)[uVar3 & 0xff]);
  uVar4 = uVar4 ^ ((uint)(uVar2 >> 6) | uVar8 << 0x12) ^ (uVar8 << 10 | (uint)(uVar1 >> 6)) ^
                  ((uint)uVar2 | uVar8 << 0x18) ^
                  (uVar8 << 2 | (uint)((byte)(&DAT_149d99650)[uVar3 >> 0x18] >> 6)) ^ uVar8;
  param_2[3] = (char)uVar4;
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[5] = (char)(uVar6 >> 0x10);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[7] = (char)uVar6;
  param_2[8] = (char)(uVar5 >> 0x18);
  param_2[9] = (char)(uVar5 >> 0x10);
  param_2[10] = (char)(uVar5 >> 8);
  param_2[0xb] = (char)uVar5;
  param_2[0xc] = (char)(uVar7 >> 0x18);
  param_2[0xd] = (char)(uVar7 >> 0x10);
  param_2[0xe] = (char)(uVar7 >> 8);
  param_2[0xf] = (char)uVar7;
  return;
}



// FUNCTION 1454f6690 FUN_1454f6690 body=67 status=ok
// SIG undefined FUN_1454f6690(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f6690(undefined4 *param_1)

{
  memset(param_1,0,0x5c);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return 1;
}



// FUNCTION 1454f66e0 FUN_1454f66e0 body=295 status=ok
// SIG undefined FUN_1454f66e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f66e0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x58);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x18);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      FUN_1454f6980(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x58) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_1454f6980(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 1454f6810 FUN_1454f6810 body=356 status=ok
// SIG undefined FUN_1454f6810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f6810(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x16];
  puVar1 = param_2 + 6;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_1454f6980(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_2 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  FUN_1454f6980(param_2,puVar1,1);
  param_2[0x16] = 0;
  FUN_14259f0c0(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// FUNCTION 1454f6980 FUN_1454f6980 body=2033 status=ok
// SIG undefined FUN_1454f6980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f6980(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_3 != 0) {
    uVar25 = param_1[1];
    uVar19 = param_1[2];
    uVar20 = param_1[3];
    iVar21 = *param_1;
    do {
      param_3 = param_3 + -1;
      iVar5 = *param_2;
      uVar18 = ((uVar20 ^ uVar19) & uVar25 ^ uVar20) + iVar5 + iVar21;
      iVar6 = param_2[1];
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = ((uVar19 ^ uVar25) & uVar18 ^ uVar19) + iVar6 + uVar20;
      iVar7 = param_2[2];
      uVar22 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar23 = ((uVar25 ^ uVar18) & uVar22 ^ uVar25) + iVar7 + uVar19;
      iVar8 = param_2[3];
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      iVar9 = param_2[4];
      uVar23 = ((uVar22 ^ uVar18) & uVar24 ^ uVar18) + iVar8 + uVar25;
      uVar23 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar21 = param_2[5];
      uVar18 = ((uVar22 ^ uVar24) & uVar23 ^ uVar22) + iVar9 + uVar18;
      uVar26 = uVar18 * 8 | uVar18 >> 0x1d;
      iVar10 = param_2[6];
      uVar22 = ((uVar24 ^ uVar23) & uVar26 ^ uVar24) + iVar21 + uVar22;
      uVar18 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar24 = ((uVar23 ^ uVar26) & uVar18 ^ uVar23) + iVar10 + uVar24;
      iVar11 = param_2[7];
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar23 = ((uVar18 ^ uVar26) & uVar24 ^ uVar26) + iVar11 + uVar23;
      uVar22 = uVar23 >> 0xd | uVar23 * 0x80000;
      iVar12 = param_2[8];
      iVar13 = param_2[9];
      uVar26 = ((uVar18 ^ uVar24) & uVar22 ^ uVar18) + iVar12 + uVar26;
      uVar23 = uVar26 * 8 | uVar26 >> 0x1d;
      iVar14 = param_2[10];
      uVar18 = ((uVar24 ^ uVar22) & uVar23 ^ uVar24) + iVar13 + uVar18;
      uVar26 = uVar18 * 0x80 | uVar18 >> 0x19;
      iVar15 = param_2[0xb];
      uVar24 = ((uVar22 ^ uVar23) & uVar26 ^ uVar22) + iVar14 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar16 = param_2[0xc];
      uVar22 = ((uVar26 ^ uVar23) & uVar24 ^ uVar23) + iVar15 + uVar22;
      uVar18 = uVar22 >> 0xd | uVar22 * 0x80000;
      uVar23 = ((uVar26 ^ uVar24) & uVar18 ^ uVar26) + iVar16 + uVar23;
      iVar17 = param_2[0xd];
      uVar22 = uVar23 * 8 | uVar23 >> 0x1d;
      piVar1 = param_2 + 0xe;
      piVar2 = param_2 + 0xf;
      param_2 = param_2 + 0x10;
      uVar26 = ((uVar24 ^ uVar18) & uVar22 ^ uVar24) + iVar17 + uVar26;
      uVar23 = uVar26 * 0x80 | uVar26 >> 0x19;
      iVar3 = *piVar1;
      uVar24 = ((uVar18 ^ uVar22) & uVar23 ^ uVar18) + iVar3 + uVar24;
      uVar24 = uVar24 * 0x800 | uVar24 >> 0x15;
      iVar4 = *piVar2;
      uVar18 = ((uVar23 ^ uVar22) & uVar24 ^ uVar22) + iVar4 + uVar18;
      uVar18 = uVar18 >> 0xd | uVar18 * 0x80000;
      uVar22 = uVar22 + 0x5a827999 + ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + iVar5;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar9;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar24 + ((uVar18 | uVar22) & uVar23 | uVar18 & uVar22) + 0x5a827999 + iVar12;
      uVar26 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar23 | uVar26 & uVar22) + 0x5a827999 + iVar16;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar23 | uVar26 & uVar18) + 0x5a827999 + iVar6;
      uVar22 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar23 = uVar23 + ((uVar18 | uVar22) & uVar26 | uVar18 & uVar22) + 0x5a827999 + iVar21;
      uVar24 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar22) & uVar24 | uVar18 & uVar22) + 0x5a827999 + iVar13;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + 0x5a827999 + iVar17;
      uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar22 = uVar22 + ((uVar26 | uVar18) & uVar24 | uVar26 & uVar18) + 0x5a827999 + iVar7;
      uVar23 = uVar22 * 8 | uVar22 >> 0x1d;
      uVar24 = uVar24 + ((uVar18 | uVar23) & uVar26 | uVar18 & uVar23) + 0x5a827999 + iVar10;
      uVar24 = uVar24 * 0x20 | uVar24 >> 0x1b;
      uVar26 = uVar26 + ((uVar18 | uVar23) & uVar24 | uVar18 & uVar23) + 0x5a827999 + iVar14;
      uVar26 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar18 + 0x5a827999 + ((uVar26 | uVar23) & uVar24 | uVar26 & uVar23) + iVar3;
      uVar22 = uVar18 * 0x2000 | uVar18 >> 0x13;
      uVar18 = uVar23 + 0x5a827999 + ((uVar26 | uVar22) & uVar24 | uVar26 & uVar22) + iVar8;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar24 + 0x5a827999 + ((uVar22 | uVar18) & uVar26 | uVar22 & uVar18) + iVar11;
      uVar23 = uVar23 * 0x20 | uVar23 >> 0x1b;
      uVar24 = uVar26 + 0x5a827999 + ((uVar22 | uVar18) & uVar23 | uVar22 & uVar18) + iVar15;
      uVar24 = uVar24 * 0x200 | uVar24 >> 0x17;
      uVar22 = ((uVar24 | uVar18) & uVar23 | uVar24 & uVar18) + 0x5a827999 + iVar4 + uVar22;
      uVar26 = uVar22 * 0x2000 | uVar22 >> 0x13;
      uVar18 = (uVar23 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar5 + uVar18;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar23 = uVar23 + (uVar24 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar12;
      uVar22 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar24 = uVar24 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar9;
      uVar23 = uVar24 * 0x800 | uVar24 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar23 ^ uVar18) + 0x6ed9eba1 + iVar16;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar23 ^ uVar26) + 0x6ed9eba1 + iVar7;
      uVar18 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar22 = uVar22 + (uVar23 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar14;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar23 = uVar23 + (uVar22 ^ uVar26 ^ uVar18) + 0x6ed9eba1 + iVar10;
      uVar24 = uVar23 * 0x800 | uVar23 >> 0x15;
      uVar26 = uVar26 + (uVar22 ^ uVar24 ^ uVar18) + 0x6ed9eba1 + iVar3;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar18 = uVar18 + (uVar22 ^ uVar24 ^ uVar26) + 0x6ed9eba1 + iVar6;
      uVar23 = uVar18 * 8 | uVar18 >> 0x1d;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar13;
      uVar18 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar22 = uVar24 + 0x6ed9eba1 + (uVar18 ^ uVar26 ^ uVar23) + iVar21;
      uVar22 = uVar22 * 0x800 | uVar22 >> 0x15;
      uVar26 = uVar26 + (uVar18 ^ uVar22 ^ uVar23) + 0x6ed9eba1 + iVar17;
      uVar26 = uVar26 * 0x8000 | uVar26 >> 0x11;
      uVar23 = uVar23 + 0x6ed9eba1 + (uVar18 ^ uVar22 ^ uVar26) + iVar8;
      uVar23 = uVar23 * 8 | uVar23 >> 0x1d;
      uVar18 = uVar18 + 0x6ed9eba1 + (uVar22 ^ uVar26 ^ uVar23) + iVar15;
      uVar24 = uVar18 * 0x200 | uVar18 >> 0x17;
      uVar18 = uVar22 + 0x6ed9eba1 + (uVar24 ^ uVar26 ^ uVar23) + iVar11;
      uVar22 = uVar18 * 0x800 | uVar18 >> 0x15;
      uVar18 = uVar26 + 0x6ed9eba1 + (uVar24 ^ uVar22 ^ uVar23) + iVar4;
      *param_1 = *param_1 + uVar23;
      iVar21 = *param_1;
      uVar25 = uVar25 + (uVar18 * 0x8000 | uVar18 >> 0x11);
      uVar19 = uVar19 + uVar22;
      param_1[1] = uVar25;
      param_1[2] = uVar19;
      uVar20 = uVar20 + uVar24;
      param_1[3] = uVar20;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1454f7180 FUN_1454f7180 body=111 status=ok
// SIG undefined FUN_1454f7180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f7180(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_46;
  undefined8 local_3e;
  undefined8 local_36;
  undefined8 local_2e;
  undefined8 local_26;
  undefined4 local_1e;
  undefined2 local_1a;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1454f718a;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0x1010040;
  local_50 = 0;
  local_48 = 0;
  local_46 = 0;
  local_3e = 0;
  local_36 = 0;
  local_2e = 0;
  local_26 = 0;
  local_1e = 0;
  local_1a = 0;
  FUN_1454f7370(param_1,&local_58);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 1454f7200 FUN_1454f7200 body=221 status=ok
// SIG undefined FUN_1454f7200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f7200(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong _Size;
  ulonglong _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  _Size_00 = 0x80 - lVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (lVar1 != 0) {
      memcpy((void *)(param_1 + 0x60 + lVar1),param_2,_Size_00);
      FUN_1454f7430(param_1,param_1 + 0x60,0x80);
      param_2 = (void *)((longlong)param_2 + _Size_00);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x80 < param_3) {
      _Size = 0x80;
      if ((param_3 & 0x7f) != 0) {
        _Size = (ulonglong)((uint)param_3 & 0x7f);
      }
      FUN_1454f7430(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((longlong)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(longlong *)(param_1 + 0xe0) + 0x60 + param_1),param_2,_Size);
  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + _Size;
  return 1;
}



// FUNCTION 1454f72e0 FUN_1454f72e0 body=142 status=ok
// SIG undefined FUN_1454f72e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f72e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
  memset((void *)(param_2 + 0x60 + *(longlong *)(param_2 + 0xe0)),0,
         0x80 - *(longlong *)(param_2 + 0xe0));
  FUN_1454f7430(param_2,param_2 + 0x60,*(undefined8 *)(param_2 + 0xe0));
  lVar1 = 8;
  lVar2 = param_2 - (longlong)param_1;
  do {
    *param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14259f0c0(param_2,0xe8);
  return 1;
}



// FUNCTION 1454f7370 FUN_1454f7370 body=188 status=ok
// SIG undefined FUN_1454f7370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f7370(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  
  memset(param_1,0,0xe8);
  param_2 = param_2 - (longlong)param_1;
  *param_1 = 0x6a09e667f3bcc908;
  lVar1 = 8;
  param_1[1] = 0xbb67ae8584caa73b;
  param_1[2] = 0x3c6ef372fe94f82b;
  param_1[3] = 0xa54ff53a5f1d36f1;
  param_1[4] = 0x510e527fade682d1;
  param_1[5] = 0x9b05688c2b3e6c1f;
  param_1[6] = 0x1f83d9abfb41bd6b;
  param_1[7] = 0x5be0cd19137e2179;
  do {
    *param_1 = *param_1 ^ *(ulonglong *)(param_2 + (longlong)param_1);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1454f7430 FUN_1454f7430 body=9419 status=ok
// SIG undefined FUN_1454f7430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f7430(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_a8;
  
  local_a8 = DAT_14c707940 ^ (ulonglong)&local_1f8;
  local_1b0 = param_1[7];
  uVar11 = *param_1;
  uVar12 = param_1[1];
  local_1e0 = param_1[2];
  local_138 = 0x80;
  if (param_3 < 0x80) {
    local_138 = param_3;
  }
  uVar17 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  local_160 = param_1[6];
  local_140 = param_3;
  do {
    lVar1 = *param_2;
    local_190 = param_2[1];
    local_180 = param_2[2];
    local_168 = param_2[3];
    local_1a0 = param_2[4];
    local_170 = param_2[5];
    local_198 = param_2[6];
    local_178 = param_2[7];
    local_158 = param_2[8];
    lVar2 = param_2[9];
    lVar3 = param_2[10];
    local_150 = param_2[0xb];
    local_188 = param_2[0xc];
    lVar4 = param_2[0xd];
    lVar5 = param_2[0xe];
    lVar6 = param_2[0xf];
    param_1[8] = param_1[8] + local_138;
    local_e8 = 0x6a09e667f3bcc908;
    uStack_e0 = 0xbb67ae8584caa73b;
    param_1[9] = param_1[9] + (ulonglong)(param_1[8] < local_138);
    local_d8 = 0x3c6ef372fe94f82b;
    uStack_d0 = 0xa54ff53a5f1d36f1;
    uVar11 = uVar11 + lVar1 + uVar7;
    uVar9 = param_1[8] ^ 0x510e527fade682d1 ^ uVar11;
    uVar10 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c0 = uVar10 + 0x6a09e667f3bcc908;
    uVar7 = local_1c0 ^ uVar7;
    uVar9 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar11 = uVar11 + local_190 + uVar9;
    uVar10 = uVar10 ^ uVar11;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar12 = uVar12 + local_180 + uVar8;
    uVar7 = param_1[9] ^ 0x9b05688c2b3e6c1f ^ uVar12;
    local_1c0 = local_1c0 + uVar10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1c0 ^ uVar9;
    local_1d0 = uVar7 + 0xbb67ae8584caa73b;
    uVar14 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar8 = local_1d0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar12 = uVar12 + local_168 + uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + local_1a0 + local_160;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar8 = param_1[10] ^ 0x1f83d9abfb41bd6b ^ local_1e0;
    uVar20 = uVar8 >> 0x20 | uVar8 << 0x20;
    local_1c8 = uVar20 + 0x3c6ef372fe94f82b;
    local_160 = local_1c8 ^ local_160;
    uVar8 = local_160 >> 0x18 | local_160 << 0x28;
    local_1e0 = local_1e0 + local_170 + uVar8;
    uVar20 = uVar20 ^ local_1e0;
    uVar17 = uVar17 + local_198 + local_1b0;
    uVar9 = param_1[0xb] ^ 0x5be0cd19137e2179 ^ uVar17;
    uVar21 = uVar20 >> 0x10 | uVar20 << 0x30;
    local_1c8 = local_1c8 + uVar21;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1b8 = uVar9 + 0xa54ff53a5f1d36f1;
    uVar8 = local_1c8 ^ uVar8;
    uVar16 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    local_1b0 = local_1b8 ^ local_1b0;
    uVar8 = local_1b0 >> 0x18 | local_1b0 << 0x28;
    uVar17 = uVar17 + local_178 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    uVar11 = uVar11 + local_158 + uVar13;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar20 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + lVar2 + uVar9;
    uVar12 = uVar12 + uVar16 + lVar3;
    uVar8 = uVar11 ^ uVar8;
    uVar18 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar18;
    uVar10 = uVar12 ^ uVar10;
    uVar9 = uVar9 ^ local_1c8;
    uVar8 = uVar10 >> 0x20 | uVar10 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar16 = local_1b8 ^ uVar16;
    uVar10 = uVar16 >> 0x18 | uVar16 << 0x28;
    uVar12 = uVar12 + local_150 + uVar10;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + local_188 + uVar20;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar13;
    uVar10 = local_1b8 ^ uVar10;
    uVar7 = uVar7 ^ local_1e0;
    uVar8 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1c0 = local_1c0 + uVar8;
    uVar10 = uVar10 << 1 | (ulonglong)((longlong)uVar10 < 0);
    uVar20 = local_1c0 ^ uVar20;
    uVar7 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_1e0 = local_1e0 + lVar4 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c0 = local_1c0 + uVar16;
    uVar7 = local_1c0 ^ uVar7;
    uVar17 = uVar17 + uVar14 + lVar5;
    uVar20 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar21 = uVar17 ^ uVar21;
    uVar7 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar14 = local_1d0 ^ uVar14;
    uVar8 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar17 = uVar17 + uVar8 + lVar6;
    uVar7 = uVar17 ^ uVar7;
    uVar15 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar15;
    uVar8 = local_1d0 ^ uVar8;
    uVar7 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar11 = uVar11 + uVar7 + lVar5;
    uVar13 = uVar13 ^ uVar11;
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    local_1c0 = local_1c0 + uVar8;
    uVar7 = local_1c0 ^ uVar7;
    uVar7 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar11 = uVar11 + uVar7 + lVar3;
    uVar8 = uVar8 ^ uVar11;
    uVar21 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c0 = local_1c0 + uVar21;
    uVar7 = local_1c0 ^ uVar7;
    uVar14 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar12 = uVar12 + local_1a0 + uVar9;
    uVar16 = uVar16 ^ uVar12;
    uVar7 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 >> 0x18 | uVar9 << 0x28;
    uVar12 = uVar12 + local_158 + uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + lVar2 + uVar10;
    uVar16 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar15 = uVar15 ^ local_1e0;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar10 = local_1c8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + uVar8 + lVar6;
    uVar9 = uVar9 ^ local_1e0;
    uVar13 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar13;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + lVar4 + uVar20;
    uVar15 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar18 = uVar18 ^ uVar17;
    uVar9 = uVar18 >> 0x20 | uVar18 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar20 = local_1b8 ^ uVar20;
    uVar8 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar17 = uVar17 + local_198 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + local_190 + uVar16;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar16 = uVar16 ^ local_1c8;
    uVar9 = uVar16 >> 0x18 | uVar16 << 0x28;
    uVar11 = uVar11 + local_188 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar18 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar18;
    uVar9 = uVar9 ^ local_1c8;
    uVar12 = uVar12 + lVar1 + uVar15;
    uVar20 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar21 = uVar12 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar15 = local_1b8 ^ uVar15;
    uVar9 = uVar15 >> 0x18 | uVar15 << 0x28;
    uVar12 = uVar12 + local_180 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar16;
    uVar9 = local_1b8 ^ uVar9;
    uVar21 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    local_1e0 = local_1e0 + uVar10 + local_150;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1c0 = local_1c0 + uVar7;
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_178 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + local_170 + uVar14;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar13 = uVar17 ^ uVar13;
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar14 = local_1d0 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar17 = uVar17 + local_168 + uVar9;
    uVar8 = uVar17 ^ uVar8;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar13;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + uVar8 + local_150;
    uVar16 = uVar16 ^ uVar11;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + local_158 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + local_188 + uVar20;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar15 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar8 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar20 = local_1d0 ^ uVar20;
    uVar7 = uVar20 >> 0x18 | uVar20 << 0x28;
    uVar12 = uVar12 + lVar1 + uVar7;
    uVar8 = uVar8 ^ uVar12;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    local_1e0 = local_1e0 + local_170 + uVar21;
    uVar7 = local_1d0 ^ uVar7;
    uVar13 = uVar13 ^ local_1e0;
    uVar16 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar21 = local_1c8 ^ uVar21;
    uVar7 = uVar21 >> 0x18 | uVar21 << 0x28;
    local_1e0 = local_1e0 + local_180 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar20 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar20;
    uVar7 = local_1c8 ^ uVar7;
    uVar17 = uVar17 + uVar10 + lVar6;
    uVar13 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar18 = uVar18 ^ uVar17;
    uVar8 = uVar18 >> 0x20 | uVar18 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar10 = local_1b8 ^ uVar10;
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + lVar4 + uVar7;
    uVar8 = uVar8 ^ uVar17;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar8;
    uVar7 = local_1b8 ^ uVar7;
    uVar11 = uVar11 + uVar16 + lVar3;
    uVar10 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar8 = uVar11 ^ uVar8;
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    local_1c8 = local_1c8 + uVar7;
    uVar16 = uVar16 ^ local_1c8;
    uVar8 = uVar16 >> 0x18 | uVar16 << 0x28;
    uVar11 = uVar11 + uVar8 + lVar5;
    uVar7 = uVar11 ^ uVar7;
    uVar19 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c8 = local_1c8 + uVar19;
    uVar8 = uVar8 ^ local_1c8;
    uVar12 = uVar12 + local_168 + uVar13;
    uVar21 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar12 ^ uVar9;
    uVar7 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1b8 = local_1b8 + uVar7;
    uVar13 = local_1b8 ^ uVar13;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + local_198 + uVar9;
    uVar7 = uVar12 ^ uVar7;
    local_1e0 = local_1e0 + local_178 + uVar10;
    uVar16 = uVar7 >> 0x10 | uVar7 << 0x30;
    uVar14 = uVar14 ^ local_1e0;
    local_1b8 = local_1b8 + uVar16;
    uVar8 = uVar14 >> 0x20 | uVar14 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar8;
    uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_190 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c0 = local_1c0 + uVar14;
    uVar7 = local_1c0 ^ uVar7;
    uVar10 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar17 = uVar17 + uVar15 + lVar2;
    uVar20 = uVar17 ^ uVar20;
    uVar7 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar15 = local_1d0 ^ uVar15;
    uVar8 = uVar15 >> 0x18 | uVar15 << 0x28;
    uVar17 = uVar17 + local_1a0 + uVar8;
    uVar7 = uVar17 ^ uVar7;
    uVar13 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar13;
    uVar8 = local_1d0 ^ uVar8;
    uVar7 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar11 = uVar11 + local_178 + uVar7;
    uVar16 = uVar16 ^ uVar11;
    uVar8 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1c0 = local_1c0 + uVar8;
    uVar7 = local_1c0 ^ uVar7;
    uVar7 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar11 = uVar11 + uVar7 + lVar2;
    uVar8 = uVar8 ^ uVar11;
    uVar12 = uVar12 + local_168 + uVar21;
    uVar20 = uVar8 >> 0x10 | uVar8 << 0x30;
    uVar14 = uVar14 ^ uVar12;
    local_1c0 = local_1c0 + uVar20;
    uVar8 = uVar14 >> 0x20 | uVar14 << 0x20;
    uVar7 = local_1c0 ^ uVar7;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar21 = local_1d0 ^ uVar21;
    uVar7 = uVar21 >> 0x18 | uVar21 << 0x28;
    uVar12 = uVar12 + local_190 + uVar7;
    uVar8 = uVar8 ^ uVar12;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar7 = local_1d0 ^ uVar7;
    local_1e0 = local_1e0 + lVar4 + uVar9;
    uVar16 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar13 = uVar13 ^ local_1e0;
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar9 = local_1c8 ^ uVar9;
    uVar7 = uVar9 >> 0x18 | uVar9 << 0x28;
    local_1e0 = local_1e0 + local_188 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar21 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar21;
    uVar7 = local_1c8 ^ uVar7;
    uVar17 = uVar17 + local_150 + uVar10;
    uVar13 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar19 = uVar19 ^ uVar17;
    uVar8 = uVar19 >> 0x20 | uVar19 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar10 = local_1b8 ^ uVar10;
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + uVar7 + lVar5;
    uVar8 = uVar8 ^ uVar17;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar8;
    uVar7 = local_1b8 ^ uVar7;
    uVar11 = uVar11 + local_180 + uVar16;
    uVar9 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar8 = uVar11 ^ uVar8;
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    local_1c8 = local_1c8 + uVar7;
    uVar16 = uVar16 ^ local_1c8;
    uVar8 = uVar16 >> 0x18 | uVar16 << 0x28;
    uVar11 = uVar11 + local_198 + uVar8;
    uVar7 = uVar11 ^ uVar7;
    uVar16 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar8 = uVar8 ^ local_1c8;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar12 = uVar12 + local_170 + uVar13;
    uVar20 = uVar12 ^ uVar20;
    uVar7 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1b8 = local_1b8 + uVar7;
    uVar13 = local_1b8 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + uVar8 + lVar3;
    uVar7 = uVar12 ^ uVar7;
    local_1e0 = local_1e0 + local_1a0 + uVar9;
    uVar15 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar14 = uVar14 ^ local_1e0;
    uVar8 = local_1b8 ^ uVar8;
    uVar20 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar7 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c0 = local_1c0 + uVar7;
    uVar9 = local_1c0 ^ uVar9;
    uVar8 = uVar9 >> 0x18 | uVar9 << 0x28;
    local_1e0 = local_1e0 + lVar1 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + uVar18 + lVar6;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar21 = uVar17 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + uVar9 + local_158;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + lVar2 + uVar8;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + lVar1 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + local_170 + uVar10;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar21;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar8 = local_1c0 ^ uVar8;
    local_1d0 = local_1d0 + uVar7;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar10 = local_1d0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar12 = uVar12 + local_178 + uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + local_180 + uVar20;
    uVar15 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar20 = local_1c8 ^ uVar20;
    uVar8 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_1e0 = local_1e0 + local_1a0 + uVar8;
    uVar9 = uVar9 ^ local_1e0;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar20;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + uVar13 + lVar3;
    uVar14 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar13 = local_1b8 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar17 = uVar17 + uVar8 + lVar6;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + uVar15 + lVar5;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar15 = uVar15 ^ local_1c8;
    uVar9 = uVar15 >> 0x18 | uVar15 << 0x28;
    uVar11 = uVar11 + local_190 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + local_150 + uVar14;
    uVar21 = uVar12 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar14 = local_1b8 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar12 = uVar12 + local_188 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + local_198 + uVar10;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar7;
    uVar21 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_158 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + local_168 + uVar18;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar20 = uVar17 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + uVar9 + lVar4;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + local_180 + uVar8;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + local_188 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + local_198 + uVar13;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar20;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar8 = local_1c0 ^ uVar8;
    local_1d0 = local_1d0 + uVar7;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar13 = local_1d0 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + uVar8 + lVar3;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + lVar1 + uVar21;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar21 = local_1c8 ^ uVar21;
    uVar8 = uVar21 >> 0x18 | uVar21 << 0x28;
    local_1e0 = local_1e0 + local_150 + uVar8;
    uVar9 = uVar9 ^ local_1e0;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar21;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + local_158 + uVar10;
    uVar14 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar10 = local_1b8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + local_168 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + local_1a0 + uVar13;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + uVar9 + lVar4;
    uVar8 = uVar11 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + local_178 + uVar14;
    uVar20 = uVar12 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar14 = local_1b8 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar12 = uVar12 + local_170 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + uVar10 + lVar6;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar7;
    uVar20 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + uVar8 + lVar5;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + local_190 + uVar18;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar21 = uVar17 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + lVar2 + uVar9;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + local_188 + uVar8;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + local_170 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + local_190 + uVar13;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar21;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar8 = local_1c0 ^ uVar8;
    local_1d0 = local_1d0 + uVar7;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar13 = local_1d0 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + uVar8 + lVar6;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + uVar20 + lVar5;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar20 = local_1c8 ^ uVar20;
    uVar8 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_1e0 = local_1e0 + uVar8 + lVar4;
    uVar9 = uVar9 ^ local_1e0;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar20;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + local_1a0 + uVar10;
    uVar14 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar10 = local_1b8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + uVar8 + lVar3;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + lVar1 + uVar13;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + local_178 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + local_198 + uVar14;
    uVar21 = uVar12 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar14 = local_1b8 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar12 = uVar12 + local_168 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + lVar2 + uVar10;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar7;
    uVar21 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_180 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + local_158 + uVar18;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar20 = uVar17 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + uVar9 + local_150;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + uVar8 + lVar4;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + uVar8 + local_150;
    uVar9 = uVar9 ^ uVar11;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar20;
    uVar8 = local_1c0 ^ uVar8;
    uVar12 = uVar12 + local_178 + uVar13;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar13 = local_1d0 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + uVar8 + lVar5;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + local_188 + uVar21;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar21 = local_1c8 ^ uVar21;
    uVar8 = uVar21 >> 0x18 | uVar21 << 0x28;
    local_1e0 = local_1e0 + local_190 + uVar8;
    uVar9 = uVar9 ^ local_1e0;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar21;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + local_168 + uVar10;
    uVar14 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar10 = local_1b8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + lVar2 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar11 = uVar11 + local_170 + uVar13;
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + lVar1 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + uVar14 + lVar6;
    uVar20 = uVar12 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar14 = local_1b8 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar12 = uVar12 + local_1a0 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + local_158 + uVar10;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar7;
    uVar20 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_198 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar17 = uVar17 + local_180 + uVar18;
    uVar21 = uVar17 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + uVar9 + lVar3;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + local_198 + uVar8;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + uVar8 + lVar6;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + uVar13 + lVar5;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar21;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar8 = local_1c0 ^ uVar8;
    local_1d0 = local_1d0 + uVar7;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar13 = local_1d0 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + lVar2 + uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + local_150 + uVar20;
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar20 = local_1c8 ^ uVar20;
    uVar8 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_1e0 = local_1e0 + local_168 + uVar8;
    uVar9 = uVar9 ^ local_1e0;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar20;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + lVar1 + uVar10;
    uVar14 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar10 = local_1b8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + local_158 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + local_188 + uVar13;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + local_180 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar16;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + uVar14 + lVar4;
    uVar21 = uVar12 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar14 = local_1b8 ^ uVar14;
    uVar9 = uVar14 >> 0x18 | uVar14 << 0x28;
    uVar12 = uVar12 + local_178 + uVar9;
    uVar8 = uVar12 ^ uVar8;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar15;
    uVar9 = local_1b8 ^ uVar9;
    uVar21 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    local_1e0 = local_1e0 + local_190 + uVar10;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1c0 = local_1c0 + uVar7;
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_1a0 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + uVar18 + lVar3;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar20 = uVar17 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + local_170 + uVar9;
    uVar8 = uVar17 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar14;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + uVar8 + lVar3;
    uVar15 = uVar15 ^ uVar11;
    uVar9 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + local_180 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar20 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar20;
    uVar8 = local_1c0 ^ uVar8;
    uVar18 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar12 = uVar12 + local_158 + uVar13;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar13 = local_1d0 ^ uVar13;
    uVar8 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + local_1a0 + uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar7;
    uVar8 = local_1d0 ^ uVar8;
    local_1e0 = local_1e0 + local_178 + uVar21;
    uVar14 = uVar14 ^ local_1e0;
    uVar9 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c8 = local_1c8 + uVar9;
    uVar13 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar21 = local_1c8 ^ uVar21;
    uVar8 = uVar21 >> 0x18 | uVar21 << 0x28;
    local_1e0 = local_1e0 + local_198 + uVar8;
    uVar9 = uVar9 ^ local_1e0;
    uVar21 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c8 = local_1c8 + uVar21;
    uVar8 = local_1c8 ^ uVar8;
    uVar17 = uVar17 + local_190 + uVar10;
    uVar15 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar16 = uVar16 ^ uVar17;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1b8 = local_1b8 + uVar9;
    uVar10 = local_1b8 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + local_170 + uVar8;
    uVar9 = uVar9 ^ uVar17;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1b8 = local_1b8 + uVar9;
    uVar8 = local_1b8 ^ uVar8;
    uVar11 = uVar11 + uVar13 + lVar6;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar9 = uVar11 ^ uVar9;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar13 = uVar13 ^ local_1c8;
    uVar9 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar11 = uVar11 + local_150 + uVar9;
    uVar8 = uVar11 ^ uVar8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar14;
    uVar9 = uVar9 ^ local_1c8;
    uVar13 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar12 = uVar12 + lVar2 + uVar15;
    uVar20 = uVar12 ^ uVar20;
    uVar8 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar15 = local_1b8 ^ uVar15;
    uVar9 = uVar15 >> 0x18 | uVar15 << 0x28;
    uVar12 = uVar12 + uVar9 + lVar5;
    uVar8 = uVar12 ^ uVar8;
    local_1e0 = local_1e0 + local_168 + uVar10;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar16;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar9 = local_1b8 ^ uVar9;
    local_1c0 = local_1c0 + uVar7;
    uVar20 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar8 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_188 + uVar8;
    uVar7 = uVar7 ^ local_1e0;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c0 = local_1c0 + uVar7;
    uVar8 = local_1c0 ^ uVar8;
    uVar17 = uVar17 + uVar18 + lVar4;
    uVar10 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar21 = uVar17 ^ uVar21;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar18 = local_1d0 ^ uVar18;
    uVar9 = uVar18 >> 0x18 | uVar18 << 0x28;
    uVar17 = uVar17 + uVar9 + lVar1;
    uVar8 = uVar17 ^ uVar8;
    uVar21 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar21;
    uVar9 = local_1d0 ^ uVar9;
    uVar8 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar11 = uVar11 + uVar8 + lVar1;
    uVar16 = uVar16 ^ uVar11;
    uVar9 = uVar16 >> 0x20 | uVar16 << 0x20;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar8 = uVar8 >> 0x18 | uVar8 << 0x28;
    uVar11 = uVar11 + local_190 + uVar8;
    uVar9 = uVar9 ^ uVar11;
    uVar12 = uVar12 + local_180 + uVar13;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x30;
    local_1c0 = local_1c0 + uVar9;
    uVar8 = local_1c0 ^ uVar8;
    uVar7 = uVar7 ^ uVar12;
    uVar15 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar8 = uVar7 >> 0x20 | uVar7 << 0x20;
    local_1d0 = local_1d0 + uVar8;
    uVar13 = local_1d0 ^ uVar13;
    uVar7 = uVar13 >> 0x18 | uVar13 << 0x28;
    uVar12 = uVar12 + local_168 + uVar7;
    uVar8 = uVar8 ^ uVar12;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1d0 = local_1d0 + uVar13;
    local_1e0 = local_1e0 + local_1a0 + uVar20;
    uVar7 = local_1d0 ^ uVar7;
    uVar21 = uVar21 ^ local_1e0;
    uVar8 = uVar21 >> 0x20 | uVar21 << 0x20;
    local_1c8 = local_1c8 + uVar8;
    uVar21 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar20 = local_1c8 ^ uVar20;
    uVar7 = uVar20 >> 0x18 | uVar20 << 0x28;
    local_1e0 = local_1e0 + local_170 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar20 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c8 = local_1c8 + uVar20;
    uVar7 = local_1c8 ^ uVar7;
    uVar17 = uVar17 + local_198 + uVar10;
    uVar16 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar14 = uVar14 ^ uVar17;
    uVar8 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1b8 = local_1b8 + uVar8;
    uVar10 = local_1b8 ^ uVar10;
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + local_178 + uVar7;
    uVar8 = uVar8 ^ uVar17;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1b8 = local_1b8 + uVar8;
    uVar7 = local_1b8 ^ uVar7;
    uVar11 = uVar11 + local_158 + uVar21;
    uVar10 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar8 = uVar11 ^ uVar8;
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    local_1c8 = local_1c8 + uVar7;
    uVar21 = uVar21 ^ local_1c8;
    uVar8 = uVar21 >> 0x18 | uVar21 << 0x28;
    uVar11 = uVar11 + lVar2 + uVar8;
    uVar7 = uVar11 ^ uVar7;
    uVar19 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1c8 = local_1c8 + uVar19;
    uVar8 = uVar8 ^ local_1c8;
    uVar21 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar12 = uVar12 + uVar16 + lVar3;
    uVar9 = uVar12 ^ uVar9;
    uVar7 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_1b8 = local_1b8 + uVar7;
    uVar16 = local_1b8 ^ uVar16;
    uVar9 = uVar16 >> 0x18 | uVar16 << 0x28;
    uVar12 = uVar12 + local_150 + uVar9;
    uVar7 = uVar12 ^ uVar7;
    local_1e0 = local_1e0 + local_188 + uVar10;
    uVar14 = uVar7 >> 0x10 | uVar7 << 0x30;
    uVar13 = uVar13 ^ local_1e0;
    local_1b8 = local_1b8 + uVar14;
    uVar9 = local_1b8 ^ uVar9;
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    local_1c0 = local_1c0 + uVar8;
    uVar9 = uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0);
    uVar10 = local_1c0 ^ uVar10;
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + lVar4 + uVar7;
    uVar8 = uVar8 ^ local_1e0;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c0 = local_1c0 + uVar13;
    uVar17 = uVar17 + uVar15 + lVar5;
    uVar7 = local_1c0 ^ uVar7;
    uVar20 = uVar17 ^ uVar20;
    uVar10 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar7 = uVar20 >> 0x20 | uVar20 << 0x20;
    local_1d0 = local_1d0 + uVar7;
    uVar15 = local_1d0 ^ uVar15;
    uVar8 = uVar15 >> 0x18 | uVar15 << 0x28;
    uVar17 = uVar17 + uVar8 + lVar6;
    uVar7 = uVar17 ^ uVar7;
    uVar16 = uVar7 >> 0x10 | uVar7 << 0x30;
    local_1d0 = local_1d0 + uVar16;
    uVar8 = local_1d0 ^ uVar8;
    uVar7 = uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0);
    uVar11 = uVar11 + uVar7 + lVar5;
    uVar14 = uVar14 ^ uVar11;
    uVar8 = uVar14 >> 0x20 | uVar14 << 0x20;
    local_1c0 = local_1c0 + uVar8;
    uVar7 = local_1c0 ^ uVar7;
    uVar7 = uVar7 >> 0x18 | uVar7 << 0x28;
    uVar11 = uVar11 + uVar7 + lVar3;
    uVar8 = uVar8 ^ uVar11;
    uVar12 = uVar12 + local_1a0 + uVar21;
    uVar20 = uVar8 >> 0x10 | uVar8 << 0x30;
    local_1c0 = local_1c0 + uVar20;
    uVar7 = local_1c0 ^ uVar7;
    uVar13 = uVar13 ^ uVar12;
    uVar15 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar8 = uVar13 >> 0x20 | uVar13 << 0x20;
    uVar13 = local_1d0 + uVar8;
    uVar21 = uVar13 ^ uVar21;
    uVar7 = uVar21 >> 0x18 | uVar21 << 0x28;
    uVar12 = uVar12 + local_158 + uVar7;
    uVar8 = uVar8 ^ uVar12;
    local_1d8 = uVar8 >> 0x10 | uVar8 << 0x30;
    uVar13 = uVar13 + local_1d8;
    uVar7 = uVar13 ^ uVar7;
    local_1e0 = local_1e0 + lVar2 + uVar9;
    uVar14 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar16 = uVar16 ^ local_1e0;
    uVar8 = uVar16 >> 0x20 | uVar16 << 0x20;
    uVar18 = local_1c8 + uVar8;
    uVar9 = uVar18 ^ uVar9;
    uVar7 = uVar9 >> 0x18 | uVar9 << 0x28;
    local_1e0 = local_1e0 + uVar7 + lVar6;
    uVar8 = uVar8 ^ local_1e0;
    uVar17 = uVar17 + lVar4 + uVar10;
    uVar21 = uVar8 >> 0x10 | uVar8 << 0x30;
    uVar19 = uVar19 ^ uVar17;
    uVar8 = uVar19 >> 0x20 | uVar19 << 0x20;
    uVar18 = uVar18 + uVar21;
    uVar16 = local_1b8 + uVar8;
    uVar7 = uVar18 ^ uVar7;
    uVar10 = uVar16 ^ uVar10;
    uVar9 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar7 = uVar10 >> 0x18 | uVar10 << 0x28;
    uVar17 = uVar17 + local_198 + uVar7;
    uVar8 = uVar8 ^ uVar17;
    uVar11 = uVar11 + local_190 + uVar14;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x30;
    uVar16 = uVar16 + uVar8;
    uVar7 = uVar16 ^ uVar7;
    uVar8 = uVar11 ^ uVar8;
    uVar10 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar18 = uVar18 + uVar7;
    uVar14 = uVar14 ^ uVar18;
    uVar8 = uVar14 >> 0x18 | uVar14 << 0x28;
    local_1f0 = uVar11 + local_188 + uVar8;
    uVar7 = local_1f0 ^ uVar7;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x30;
    uVar18 = uVar18 + uVar7;
    uVar8 = uVar8 ^ uVar18;
    uVar12 = uVar12 + lVar1 + uVar9;
    uVar20 = uVar12 ^ uVar20;
    uVar11 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar16 = uVar16 + uVar11;
    uVar9 = uVar16 ^ uVar9;
    uVar9 = uVar9 >> 0x18 | uVar9 << 0x28;
    local_1e8 = uVar12 + local_180 + uVar9;
    uVar11 = local_1e8 ^ uVar11;
    local_1a8 = uVar11 >> 0x10 | uVar11 << 0x30;
    uVar16 = uVar16 + local_1a8;
    uVar9 = uVar16 ^ uVar9;
    local_1e0 = local_1e0 + local_150 + uVar10;
    uVar11 = local_1d8 ^ local_1e0;
    uVar20 = uVar11 >> 0x20 | uVar11 << 0x20;
    uVar11 = local_1c0 + uVar20;
    uVar10 = uVar11 ^ uVar10;
    uVar12 = uVar10 >> 0x18 | uVar10 << 0x28;
    local_1e0 = local_1e0 + local_178 + uVar12;
    uVar20 = uVar20 ^ local_1e0;
    uVar17 = uVar17 + local_170 + uVar15;
    uVar10 = uVar20 >> 0x10 | uVar20 << 0x30;
    uVar11 = uVar11 + uVar10;
    uVar12 = uVar11 ^ uVar12;
    uVar8 = uVar10 ^ (uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0)) ^ param_1[5];
    uVar21 = uVar17 ^ uVar21;
    uVar10 = uVar21 >> 0x20 | uVar21 << 0x20;
    uVar11 = uVar11 ^ local_1f0 ^ *param_1;
    uVar13 = uVar13 + uVar10;
    uVar15 = uVar13 ^ uVar15;
    *param_1 = uVar11;
    uVar20 = uVar15 >> 0x18 | uVar15 << 0x28;
    param_1[5] = uVar8;
    local_1f8 = uVar17 + local_168 + uVar20;
    uVar10 = local_1f8 ^ uVar10;
    local_1e0 = local_1e0 ^ param_1[2] ^ uVar18;
    local_1b0 = uVar7 ^ (uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0)) ^ param_1[7];
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x30;
    uVar13 = uVar13 + uVar10;
    param_1[2] = local_1e0;
    uVar12 = local_1e8 ^ uVar13 ^ param_1[1];
    param_1[1] = uVar12;
    uVar13 = uVar13 ^ uVar20;
    uVar17 = uVar16 ^ local_1f8 ^ param_1[3];
    param_1[3] = uVar17;
    uVar7 = local_1a8 ^ (uVar13 << 1 | (ulonglong)((longlong)uVar13 < 0)) ^ param_1[4];
    local_160 = (uVar9 << 1 | (ulonglong)((longlong)uVar9 < 0)) ^ param_1[6] ^ uVar10;
    param_1[6] = local_160;
    param_2 = (longlong *)((longlong)param_2 + local_138);
    param_1[4] = uVar7;
    local_140 = local_140 - local_138;
    param_1[7] = local_1b0;
  } while (local_140 != 0);
  local_148 = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a8 ^ (ulonglong)&local_1f8);
}



// FUNCTION 1454f9940 FUN_1454f9940 body=164 status=ok
// SIG undefined FUN_1454f9940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f9940(uint *param_1)

{
  undefined1 auStack_58 [32];
  uint local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x1010020;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  memset(param_1,0,0x78);
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  *param_1 = *param_1 ^ local_38;
  param_1[2] = param_1[2] ^ (uint)local_30;
  param_1[3] = param_1[3] ^ local_30._4_4_;
  param_1[4] = param_1[4] ^ (uint)local_28;
  param_1[5] = param_1[5] ^ local_28._4_4_;
  param_1[6] = param_1[6] ^ (uint)local_20;
  param_1[1] = param_1[1];
  param_1[7] = param_1[7] ^ local_20._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 1454f99f0 FUN_1454f99f0 body=209 status=ok
// SIG undefined FUN_1454f99f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f99f0(longlong param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong _Size;
  ulonglong _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  _Size_00 = 0x40 - lVar1;
  _Size = param_3;
  if (_Size_00 < param_3) {
    if (lVar1 != 0) {
      memcpy((void *)(param_1 + 0x30 + lVar1),param_2,_Size_00);
      FUN_1454f9b60(param_1,param_1 + 0x30,0x40);
      param_2 = (void *)((longlong)param_2 + _Size_00);
      *(undefined8 *)(param_1 + 0x70) = 0;
      param_3 = param_3 - _Size_00;
    }
    _Size = param_3;
    if (0x40 < param_3) {
      _Size = 0x40;
      if ((param_3 & 0x3f) != 0) {
        _Size = (ulonglong)((uint)param_3 & 0x3f);
      }
      FUN_1454f9b60(param_1,param_2,param_3 - _Size);
      param_2 = (void *)((longlong)param_2 + (param_3 - _Size));
    }
  }
  memcpy((void *)(*(longlong *)(param_1 + 0x70) + 0x30 + param_1),param_2,_Size);
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + _Size;
  return 1;
}



// FUNCTION 1454f9ad0 FUN_1454f9ad0 body=138 status=ok
// SIG undefined FUN_1454f9ad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454f9ad0(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  memset((void *)(param_2 + 0x30 + *(longlong *)(param_2 + 0x70)),0,
         0x40 - *(longlong *)(param_2 + 0x70));
  FUN_1454f9b60(param_2,param_2 + 0x30,*(undefined8 *)(param_2 + 0x70));
  lVar1 = 8;
  lVar2 = param_2 - (longlong)param_1;
  do {
    *param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FUN_14259f0c0(param_2,0x78);
  return 1;
}



// FUNCTION 1454f9b60 FUN_1454f9b60 body=6854 status=ok
// SIG undefined FUN_1454f9b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454f9b60(uint *param_1,int *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  int *local_b0;
  ulonglong local_a8;
  uint *local_a0;
  ulonglong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_108;
  uVar10 = *(undefined8 *)(param_1 + 4);
  uVar11 = *(undefined8 *)(param_1 + 6);
  uVar12 = *(undefined8 *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 2);
  local_98 = 0x40;
  if (param_3 < 0x40) {
    local_98 = param_3;
  }
  uStack_70._0_4_ = (uint)uVar11;
  local_78._4_4_ = (uint)((ulonglong)uVar10 >> 0x20);
  uStack_70._4_4_ = (uint)((ulonglong)uVar11 >> 0x20);
  local_78._0_4_ = (uint)uVar10;
  uStack_80._4_4_ = (uint)((ulonglong)uVar13 >> 0x20);
  uStack_80._0_4_ = (uint)uVar13;
  local_88._4_4_ = (uint)((ulonglong)uVar12 >> 0x20);
  local_88._0_4_ = (uint)uVar12;
  local_d8 = local_78._4_4_;
  local_a8 = param_3;
  do {
    local_bc = *param_2;
    local_d0 = param_2[1];
    iVar3 = param_2[2];
    local_c8 = param_2[3];
    local_d4 = param_2[4];
    local_cc = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    iVar6 = param_2[8];
    iVar7 = param_2[9];
    iVar8 = param_2[10];
    iVar9 = param_2[0xb];
    auVar1 = *(undefined1 (*) [16])(param_2 + 0xc);
    iVar2 = auVar1._12_4_;
    param_1[8] = param_1[8] + (int)local_98;
    param_1[9] = param_1[9] + (uint)(param_1[8] < local_98);
    local_68 = 0x6a09e667;
    uStack_64 = 0xbb67ae85;
    uStack_60 = 0x3c6ef372;
    uStack_5c = 0xa54ff53a;
    local_88._0_4_ = (uint)local_88 + local_bc + (uint)local_78;
    uVar14 = (uint)local_88 ^ param_1[8] ^ 0x510e527f;
    uVar15 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_ec = uVar15 + 0x6a09e667;
    local_78._0_4_ = local_ec ^ (uint)local_78;
    uVar14 = (uint)local_78 >> 0xc | (uint)local_78 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_d0 + uVar14;
    uVar15 = (uint)local_88 ^ uVar15;
    local_88._4_4_ = local_88._4_4_ + iVar3 + local_d8;
    uVar16 = uVar15 >> 8 | uVar15 << 0x18;
    uVar15 = param_1[9] ^ 0x9b05688c ^ local_88._4_4_;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_ec = local_ec + uVar16;
    local_e8 = uVar15 + 0xbb67ae85;
    uVar14 = local_ec ^ uVar14;
    uVar18 = uVar14 >> 7 | uVar14 << 0x19;
    local_d8 = local_e8 ^ local_d8;
    uVar14 = local_d8 >> 0xc | local_d8 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_c8 + uVar14;
    uVar15 = uVar15 ^ local_88._4_4_;
    uVar22 = uVar15 >> 8 | uVar15 << 0x18;
    local_e8 = local_e8 + uVar22;
    uVar14 = local_e8 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d4 + (uint)uStack_70;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar14 = param_1[10] ^ 0x1f83d9ab ^ (uint)uStack_80;
    uVar15 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_f0 = uVar15 + 0x3c6ef372;
    uStack_70._0_4_ = local_f0 ^ (uint)uStack_70;
    uVar14 = (uint)uStack_70 >> 0xc | (uint)uStack_70 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_cc + uVar14;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar4 + uStack_70._4_4_;
    uVar20 = uVar15 >> 8 | uVar15 << 0x18;
    uVar15 = param_1[0xb] ^ 0x5be0cd19 ^ uStack_80._4_4_;
    local_f0 = local_f0 + uVar20;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e4 = uVar15 + 0xa54ff53a;
    uVar14 = local_f0 ^ uVar14;
    uStack_70._4_4_ = local_e4 ^ uStack_70._4_4_;
    uVar24 = uVar14 >> 7 | uVar14 << 0x19;
    uVar14 = uStack_70._4_4_ >> 0xc | uStack_70._4_4_ << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar14 + iVar5;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar15 = uVar15 >> 8 | uVar15 << 0x18;
    local_e4 = local_e4 + uVar15;
    uVar14 = local_e4 ^ uVar14;
    uVar21 = uVar14 >> 7 | uVar14 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar23 + iVar6;
    uVar15 = (uint)local_88 ^ uVar15;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar23 = local_f0 ^ uVar23;
    uVar15 = uVar23 >> 0xc | uVar23 << 0x14;
    local_88._0_4_ = (uint)local_88 + iVar7 + uVar15;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar17 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar17;
    uVar15 = local_f0 ^ uVar15;
    uVar23 = uVar15 >> 7 | uVar15 << 0x19;
    local_88._4_4_ = local_88._4_4_ + uVar24 + iVar8;
    uVar16 = uVar16 ^ local_88._4_4_;
    uVar15 = uVar16 >> 0x10 | uVar16 << 0x10;
    local_e4 = local_e4 + uVar15;
    uVar24 = local_e4 ^ uVar24;
    uVar14 = uVar24 >> 0xc | uVar24 << 0x14;
    local_88._4_4_ = local_88._4_4_ + iVar9 + uVar14;
    uVar15 = uVar15 ^ local_88._4_4_;
    uVar24 = uVar15 >> 8 | uVar15 << 0x18;
    local_e4 = local_e4 + uVar24;
    local_c4 = auVar1._0_4_;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c4 + uVar21;
    uVar16 = uVar14 >> 7 | uVar14 << 0x19;
    uVar22 = uVar22 ^ (uint)uStack_80;
    local_c0 = auVar1._4_4_;
    uVar15 = uVar22 >> 0x10 | uVar22 << 0x10;
    local_ec = local_ec + uVar15;
    uVar21 = local_ec ^ uVar21;
    uVar14 = uVar21 >> 0xc | uVar21 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c0 + uVar14;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar22 = uVar15 >> 8 | uVar15 << 0x18;
    local_ec = local_ec + uVar22;
    uVar14 = local_ec ^ uVar14;
    iVar26 = auVar1._8_4_;
    uVar21 = uVar14 >> 7 | uVar14 << 0x19;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar18 + iVar26;
    uVar20 = uVar20 ^ uStack_80._4_4_;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar18 = uVar18 ^ local_e8;
    uVar20 = uVar18 >> 0xc | uVar18 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar20 + iVar2;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar20 = uVar20 ^ local_e8;
    uVar20 = uVar20 >> 7 | uVar20 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar20 + iVar26;
    uVar24 = (uint)local_88 ^ uVar24;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar20 = local_ec ^ uVar20;
    uVar24 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar24 + iVar8;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar24 = local_ec ^ uVar24;
    uVar19 = uVar24 >> 7 | uVar24 << 0x19;
    local_88._4_4_ = local_88._4_4_ + local_d4 + uVar23;
    uVar22 = uVar22 ^ local_88._4_4_;
    uVar14 = uVar22 >> 0x10 | uVar22 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar23 = local_e8 ^ uVar23;
    uVar24 = uVar23 >> 0xc | uVar23 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar24 + iVar6;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar14 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar14;
    uVar24 = local_e8 ^ uVar24;
    uStack_80._0_4_ = (uint)uStack_80 + iVar7 + uVar16;
    uVar22 = uVar24 >> 7 | uVar24 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar15;
    uVar16 = local_f0 ^ uVar16;
    uVar24 = uVar16 >> 0xc | uVar16 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar24 + iVar2;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar15 = uVar15 >> 8 | uVar15 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar24 = local_f0 ^ uVar24;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c0 + uVar21;
    uVar20 = uVar24 >> 7 | uVar24 << 0x19;
    uVar17 = uVar17 ^ uStack_80._4_4_;
    uVar23 = uVar17 >> 0x10 | uVar17 << 0x10;
    local_e4 = local_e4 + uVar23;
    uVar21 = local_e4 ^ uVar21;
    uVar24 = uVar21 >> 0xc | uVar21 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar4 + uVar24;
    uVar23 = uVar23 ^ uStack_80._4_4_;
    uVar21 = uVar23 >> 8 | uVar23 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar24 = local_e4 ^ uVar24;
    local_88._0_4_ = (uint)local_88 + local_d0 + uVar22;
    uVar23 = uVar24 >> 7 | uVar24 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar24 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar24;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_c4 + uVar21;
    uVar24 = (uint)local_88 ^ uVar24;
    uVar25 = uVar24 >> 8 | uVar24 << 0x18;
    local_f0 = local_f0 + uVar25;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_bc + uVar20;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar20 = local_e4 ^ uVar20;
    uVar24 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + iVar3 + uVar24;
    uVar21 = uVar21 ^ local_88._4_4_;
    uVar20 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar24 = local_e4 ^ uVar24;
    uStack_80._0_4_ = (uint)uStack_80 + uVar23 + iVar9;
    uVar22 = uVar24 >> 7 | uVar24 << 0x19;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar21 + iVar5;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + local_cc + uVar19;
    uVar23 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar19 = uVar19 ^ local_e8;
    uVar21 = uVar19 >> 0xc | uVar19 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c8 + uVar21;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar9;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar6;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_c4 + uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_bc + uVar21;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + local_cc + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + iVar3 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar23 + iVar2;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uVar25 = uVar25 ^ uStack_80._4_4_;
    uVar21 = uVar25 >> 0x10 | uVar25 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar23 = local_e4 ^ uVar23;
    uVar14 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c0 + uVar14;
    uVar21 = uVar21 ^ uStack_80._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + uVar16 + iVar8;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar26;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_c8 + uVar20;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + iVar4 + uVar14;
    uVar21 = uVar21 ^ local_88._4_4_;
    uVar20 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar14 = local_e4 ^ uVar14;
    uVar22 = uVar14 >> 7 | uVar14 << 0x19;
    uStack_80._0_4_ = (uint)uStack_80 + uVar23 + iVar5;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d0 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar7 + uVar17;
    uVar23 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar21 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_d4 + uVar21;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar5;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + iVar7 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_c8 + uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_d0 + uVar21;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + local_c0 + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c4 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar23 + iVar9;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar21 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar23 = local_e4 ^ uVar23;
    uVar14 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar14 + iVar26;
    uVar21 = uVar21 ^ uStack_80._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + iVar3 + uVar16;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + iVar4 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_cc + uVar20;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar14 + iVar8;
    uVar21 = uVar21 ^ local_88._4_4_;
    uVar20 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d4 + uVar23;
    uVar22 = uVar14 >> 7 | uVar14 << 0x19;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_bc + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar17 + iVar2;
    uVar23 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar21 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar21 + iVar6;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + iVar7 + uVar21;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_bc + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_cc + uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar21 + iVar5;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + iVar3 + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d4 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar23 + iVar8;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar22 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar22;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uVar23 = local_e4 ^ uVar23;
    uVar14 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar14 + iVar2;
    uVar22 = uVar22 ^ uStack_80._4_4_;
    uVar21 = uVar22 >> 8 | uVar22 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + uVar16 + iVar26;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_d0 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + uVar20 + iVar9;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar22 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_c4 + uVar14;
    uVar22 = uVar22 ^ local_88._4_4_;
    uVar20 = uVar22 >> 8 | uVar22 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + iVar4 + uVar23;
    uVar22 = uVar14 >> 7 | uVar14 << 0x19;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar21 + iVar6;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c8 + uVar17;
    uVar23 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar21 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c0 + uVar21;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + iVar3 + uVar21;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_c4 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + iVar4 + uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar21 + iVar8;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + local_bc + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar21 + iVar9;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar23 + iVar6;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar21 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar23 = local_e4 ^ uVar23;
    uVar14 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c8 + uVar14;
    uVar21 = uVar21 ^ uStack_80._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + local_d4 + uVar16;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_c0 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + uVar20 + iVar5;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar22 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_cc + uVar14;
    uVar22 = uVar22 ^ local_88._4_4_;
    uVar20 = uVar22 >> 8 | uVar22 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar23 + iVar2;
    uVar22 = uVar14 >> 7 | uVar14 << 0x19;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + uVar21 + iVar26;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + local_d0 + uVar17;
    uVar23 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar21 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar7 + uVar21;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + local_c4 + uVar21;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_cc + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_d0 + uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar21 + iVar2;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + uVar22 + iVar26;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar22 = local_f0 ^ uVar22;
    uVar21 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c0 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uStack_80._4_4_ = uStack_80._4_4_ + local_d4 + uVar23;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar21 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar23 = local_e4 ^ uVar23;
    uVar14 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar14 + iVar8;
    uVar21 = uVar21 ^ uStack_80._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + local_bc + uVar16;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar5;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + iVar4 + uVar20;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_c8 + uVar14;
    uVar21 = uVar21 ^ local_88._4_4_;
    uVar20 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + iVar7 + uVar23;
    uVar22 = uVar14 >> 7 | uVar14 << 0x19;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + iVar3 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar17 + iVar6;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar23 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar23 + iVar9;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar23 = uVar23 ^ local_e8;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    local_88._0_4_ = (uint)local_88 + local_c0 + uVar23;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar20 = uVar23 >> 0xc | uVar23 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar20 + iVar9;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar20 = local_ec ^ uVar20;
    local_88._4_4_ = local_88._4_4_ + uVar16 + iVar5;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar20 >> 7 | uVar20 << 0x19;
    uVar16 = local_e8 ^ uVar16;
    uVar24 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar24 + iVar26;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar14 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar14;
    uVar24 = local_e8 ^ uVar24;
    uStack_80._0_4_ = (uint)uStack_80 + local_c4 + uVar22;
    uVar16 = uVar24 >> 7 | uVar24 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar15;
    uVar22 = local_f0 ^ uVar22;
    uVar24 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d0 + uVar24;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar15 = uVar15 >> 8 | uVar15 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar24 = local_f0 ^ uVar24;
    uStack_80._4_4_ = uStack_80._4_4_ + local_c8 + uVar21;
    uVar20 = uVar24 >> 7 | uVar24 << 0x19;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar23 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar23;
    uVar21 = local_e4 ^ uVar21;
    uVar24 = uVar21 >> 0xc | uVar21 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar7 + uVar24;
    uVar23 = uVar23 ^ uStack_80._4_4_;
    uVar21 = uVar23 >> 8 | uVar23 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar24 = local_e4 ^ uVar24;
    local_88._0_4_ = (uint)local_88 + local_cc + uVar16;
    uVar23 = uVar24 >> 7 | uVar24 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar24 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar24;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + local_bc + uVar21;
    uVar24 = (uint)local_88 ^ uVar24;
    uVar19 = uVar24 >> 8 | uVar24 << 0x18;
    local_f0 = local_f0 + uVar19;
    local_88._4_4_ = local_88._4_4_ + uVar20 + iVar2;
    uVar21 = local_f0 ^ uVar21;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar22 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar22;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar20 = local_e4 ^ uVar20;
    uVar24 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + local_d4 + uVar24;
    uVar22 = uVar22 ^ local_88._4_4_;
    uVar20 = uVar22 >> 8 | uVar22 << 0x18;
    local_e4 = local_e4 + uVar20;
    uVar24 = local_e4 ^ uVar24;
    uStack_80._0_4_ = (uint)uStack_80 + uVar23 + iVar6;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar23 = uVar24 >> 7 | uVar24 << 0x19;
    uStack_80._0_4_ = (uint)uStack_80 + iVar4 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar24;
    uVar21 = local_ec ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + iVar3 + uVar17;
    uVar22 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar17 = uVar17 ^ local_e8;
    uVar21 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar21 + iVar8;
    uVar14 = uVar14 ^ uStack_80._4_4_;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar15;
    uVar21 = uVar21 ^ local_e8;
    uVar21 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar4;
    uVar20 = (uint)local_88 ^ uVar20;
    uVar14 = uVar20 >> 0x10 | uVar20 << 0x10;
    local_ec = local_ec + uVar14;
    uVar21 = local_ec ^ uVar21;
    uVar21 = uVar21 >> 0xc | uVar21 << 0x14;
    local_88._0_4_ = (uint)local_88 + uVar21 + iVar2;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar18 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar18;
    uVar21 = local_ec ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + uVar16 + iVar26;
    uVar24 = uVar24 ^ local_88._4_4_;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_e8 = local_e8 + uVar14;
    uVar16 = local_e8 ^ uVar16;
    uVar17 = uVar21 >> 7 | uVar21 << 0x19;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._4_4_ = local_88._4_4_ + iVar7 + uVar21;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar24 = uVar14 >> 8 | uVar14 << 0x18;
    local_e8 = local_e8 + uVar24;
    uVar21 = local_e8 ^ uVar21;
    uStack_80._0_4_ = (uint)uStack_80 + uVar23 + iVar9;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar15 = uVar15 ^ (uint)uStack_80;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar23 = local_f0 ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c8 + uVar21;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar15;
    uVar21 = local_f0 ^ uVar21;
    uStack_80._4_4_ = uStack_80._4_4_ + local_bc + uVar22;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar20 = uVar21 >> 7 | uVar21 << 0x19;
    uVar21 = uVar19 >> 0x10 | uVar19 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar22 = local_e4 ^ uVar22;
    uVar14 = uVar22 >> 0xc | uVar22 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar14 + iVar6;
    uVar21 = uVar21 ^ uStack_80._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    local_88._0_4_ = (uint)local_88 + local_c4 + uVar16;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar14 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_f0 = local_f0 + uVar14;
    uVar16 = local_f0 ^ uVar16;
    uVar21 = uVar16 >> 0xc | uVar16 << 0x14;
    local_88._0_4_ = (uint)local_88 + iVar3 + uVar21;
    uVar14 = (uint)local_88 ^ uVar14;
    uVar19 = uVar14 >> 8 | uVar14 << 0x18;
    local_f0 = local_f0 + uVar19;
    uVar21 = local_f0 ^ uVar21;
    local_88._4_4_ = local_88._4_4_ + local_c0 + uVar20;
    uVar16 = uVar21 >> 7 | uVar21 << 0x19;
    uVar18 = uVar18 ^ local_88._4_4_;
    uVar21 = uVar18 >> 0x10 | uVar18 << 0x10;
    local_e4 = local_e4 + uVar21;
    uVar20 = local_e4 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_88._4_4_ = local_88._4_4_ + uVar14 + iVar5;
    uVar21 = uVar21 ^ local_88._4_4_;
    uVar21 = uVar21 >> 8 | uVar21 << 0x18;
    local_e4 = local_e4 + uVar21;
    uVar14 = local_e4 ^ uVar14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d0 + uVar23;
    uVar20 = uVar14 >> 7 | uVar14 << 0x19;
    uVar24 = uVar24 ^ (uint)uStack_80;
    uVar14 = uVar24 >> 0x10 | uVar24 << 0x10;
    local_ec = local_ec + uVar14;
    uVar23 = local_ec ^ uVar23;
    uVar24 = uVar23 >> 0xc | uVar23 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_d4 + uVar24;
    uVar14 = uVar14 ^ (uint)uStack_80;
    uVar14 = uVar14 >> 8 | uVar14 << 0x18;
    local_ec = local_ec + uVar14;
    uVar24 = local_ec ^ uVar24;
    uStack_80._4_4_ = uStack_80._4_4_ + uVar17 + iVar8;
    uVar24 = uVar24 >> 7 | uVar24 << 0x19;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
    local_e8 = local_e8 + uVar15;
    uVar17 = uVar17 ^ local_e8;
    uVar23 = uVar17 >> 0xc | uVar17 << 0x14;
    uStack_80._4_4_ = uStack_80._4_4_ + local_cc + uVar23;
    uVar15 = uVar15 ^ uStack_80._4_4_;
    local_f4 = uVar15 >> 8 | uVar15 << 0x18;
    local_e8 = local_e8 + local_f4;
    uVar23 = uVar23 ^ local_e8;
    uVar23 = uVar23 >> 7 | uVar23 << 0x19;
    local_88._0_4_ = (uint)local_88 + uVar23 + iVar8;
    uVar21 = (uint)local_88 ^ uVar21;
    uVar15 = uVar21 >> 0x10 | uVar21 << 0x10;
    local_ec = local_ec + uVar15;
    uVar23 = local_ec ^ uVar23;
    uVar21 = uVar23 >> 0xc | uVar23 << 0x14;
    local_104 = (uint)local_88 + iVar3 + uVar21;
    uVar15 = local_104 ^ uVar15;
    uVar22 = uVar15 >> 8 | uVar15 << 0x18;
    local_ec = local_ec + uVar22;
    uVar21 = local_ec ^ uVar21;
    uVar18 = uVar21 >> 7 | uVar21 << 0x19;
    local_88._4_4_ = local_88._4_4_ + uVar16 + iVar6;
    uVar14 = uVar14 ^ local_88._4_4_;
    uVar15 = uVar14 >> 0x10 | uVar14 << 0x10;
    uVar28 = local_e8 + uVar15;
    uVar16 = uVar28 ^ uVar16;
    uVar14 = uVar16 >> 0xc | uVar16 << 0x14;
    local_fc = local_88._4_4_ + local_d4 + uVar14;
    uVar15 = uVar15 ^ local_fc;
    local_f8 = uVar15 >> 8 | uVar15 << 0x18;
    uVar28 = uVar28 + local_f8;
    uVar14 = uVar28 ^ uVar14;
    uVar23 = uVar14 >> 7 | uVar14 << 0x19;
    uStack_80._0_4_ = (uint)uStack_80 + uVar20 + iVar5;
    uVar14 = local_f4 ^ (uint)uStack_80;
    uVar15 = uVar14 >> 0x10 | uVar14 << 0x10;
    uVar16 = local_f0 + uVar15;
    uVar20 = uVar16 ^ uVar20;
    uVar14 = uVar20 >> 0xc | uVar20 << 0x14;
    local_100 = (uint)uStack_80 + iVar4 + uVar14;
    uVar15 = uVar15 ^ local_100;
    uStack_80._4_4_ = uStack_80._4_4_ + local_d0 + uVar24;
    uVar25 = uVar15 >> 8 | uVar15 << 0x18;
    uVar19 = uVar19 ^ uStack_80._4_4_;
    uVar15 = uVar19 >> 0x10 | uVar19 << 0x10;
    uVar16 = uVar16 + uVar25;
    uVar17 = local_e4 + uVar15;
    uVar14 = uVar16 ^ uVar14;
    uVar24 = uVar17 ^ uVar24;
    uVar21 = uVar14 >> 7 | uVar14 << 0x19;
    uVar14 = uVar24 >> 0xc | uVar24 << 0x14;
    local_108 = uStack_80._4_4_ + local_cc + uVar14;
    uVar15 = uVar15 ^ local_108;
    uVar27 = local_104 + uVar23 + iVar2;
    uVar15 = uVar15 >> 8 | uVar15 << 0x18;
    uVar17 = uVar17 + uVar15;
    uVar14 = uVar17 ^ uVar14;
    uVar15 = uVar27 ^ uVar15;
    uVar24 = uVar14 >> 7 | uVar14 << 0x19;
    uVar14 = uVar15 >> 0x10 | uVar15 << 0x10;
    uVar16 = uVar16 + uVar14;
    uVar23 = uVar16 ^ uVar23;
    uVar15 = uVar23 >> 0xc | uVar23 << 0x14;
    uVar27 = uVar27 + uVar15 + iVar9;
    uVar14 = uVar27 ^ uVar14;
    local_b8 = uVar14 >> 8 | uVar14 << 0x18;
    uVar16 = uVar16 + local_b8;
    uVar15 = uVar16 ^ uVar15;
    uVar19 = local_fc + iVar7 + uVar21;
    uVar22 = uVar22 ^ uVar19;
    uVar20 = uVar22 >> 0x10 | uVar22 << 0x10;
    uVar17 = uVar17 + uVar20;
    uVar21 = uVar17 ^ uVar21;
    uVar14 = uVar21 >> 0xc | uVar21 << 0x14;
    uVar19 = uVar19 + uVar14 + iVar26;
    uVar20 = uVar20 ^ uVar19;
    uVar20 = uVar20 >> 8 | uVar20 << 0x18;
    uVar17 = uVar17 + uVar20;
    uVar14 = uVar17 ^ uVar14;
    uStack_80._0_4_ = local_100 + local_c8 + uVar24;
    uVar21 = local_f8 ^ (uint)uStack_80;
    uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar23 = local_ec + uVar21;
    uVar24 = uVar23 ^ uVar24;
    uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
    uStack_80._0_4_ = (uint)uStack_80 + local_c4 + uVar24;
    uVar21 = uVar21 ^ (uint)uStack_80;
    uVar22 = uVar21 >> 8 | uVar21 << 0x18;
    uVar23 = uVar23 + uVar22;
    uVar24 = uVar23 ^ uVar24;
    uVar21 = local_108 + local_c0 + uVar18;
    uVar25 = uVar25 ^ uVar21;
    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
    uVar28 = uVar28 + uVar25;
    uVar18 = uVar18 ^ uVar28;
    uVar18 = uVar18 >> 0xc | uVar18 << 0x14;
    uVar21 = uVar21 + local_bc + uVar18;
    uVar25 = uVar25 ^ uVar21;
    uVar25 = uVar25 >> 8 | uVar25 << 0x18;
    uVar28 = uVar28 + uVar25;
    uVar18 = uVar18 ^ uVar28;
    local_dc = uVar18 >> 7 | uVar18 << 0x19;
    uStack_80._0_4_ = (uint)uStack_80 ^ param_1[2] ^ uVar16;
    uStack_70._0_4_ = (uVar14 >> 7 | uVar14 << 0x19) ^ uVar25 ^ param_1[6];
    local_88._0_4_ = uVar23 ^ uVar27 ^ *param_1;
    local_d8 = (uVar15 >> 7 | uVar15 << 0x19) ^ uVar22 ^ param_1[5];
    local_88._4_4_ = uVar28 ^ uVar19 ^ param_1[1];
    uStack_80._4_4_ = uVar17 ^ uVar21 ^ param_1[3];
    local_78._0_4_ = local_dc ^ uVar20 ^ param_1[4];
    uStack_70._4_4_ = local_b8 ^ (uVar24 >> 7 | uVar24 << 0x19) ^ param_1[7];
    param_1[5] = local_d8;
    param_2 = (int *)((longlong)param_2 + local_98);
    *param_1 = (uint)local_88;
    local_a8 = local_a8 - local_98;
    param_1[1] = local_88._4_4_;
    param_1[2] = (uint)uStack_80;
    param_1[3] = uStack_80._4_4_;
    param_1[4] = (uint)local_78;
    param_1[6] = (uint)uStack_70;
    param_1[7] = uStack_70._4_4_;
  } while (local_a8 != 0);
  local_e0 = (uint)uStack_70;
  local_b0 = param_2;
  local_a0 = param_1;
  local_88 = uVar12;
  uStack_80 = uVar13;
  local_78 = uVar10;
  uStack_70 = uVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&local_108);
}



// FUNCTION 1454fb650 FUN_1454fb650 body=47 status=ok
// SIG undefined FUN_1454fb650(void)

undefined8 FUN_1454fb650(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[7] = 1;
  *(undefined8 *)(param_1 + 3) = 0x5252525252525252;
  *(undefined8 *)(param_1 + 5) = 0x2525252525252525;
  return 1;
}



// FUNCTION 1454fb680 FUN_1454fb680 body=184 status=ok
// SIG undefined FUN_1454fb680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fb680(uint *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  size_t sVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  if (uVar2 != 0) {
    sVar1 = 8 - uVar2;
    _Dst = (void *)((longlong)param_1 + uVar2 + 4);
    if (param_3 < sVar1) {
      memcpy(_Dst,param_2,param_3);
      *param_1 = *param_1 + (int)param_3;
      return 1;
    }
    memcpy(_Dst,param_2,sVar1);
    *param_1 = 0;
    param_3 = param_3 - sVar1;
    param_2 = (void *)((longlong)param_2 + sVar1);
    FUN_1454fb7c0(param_1,param_1 + 1,8);
  }
  uVar2 = param_3 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    FUN_1454fb7c0(param_1,param_2,uVar2);
  }
  sVar1 = param_3 - uVar2;
  if (sVar1 != 0) {
    memcpy(param_1 + 1,(void *)(uVar2 + (longlong)param_2),sVar1);
    *param_1 = (uint)sVar1;
  }
  return 1;
}



// FUNCTION 1454fb740 FUN_1454fb740 body=127 status=ok
// SIG undefined FUN_1454fb740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fb740(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_2;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    if (param_2[7] != 2) goto LAB_1454fb7a0;
LAB_1454fb76e:
    *(undefined1 *)(uVar2 + 4 + (longlong)param_2) = 0x80;
    uVar2 = (ulonglong)(uVar1 + 1);
  }
  else if (param_2[7] == 2) goto LAB_1454fb76e;
  memset((void *)((longlong)param_2 + uVar2 + 4),0,(ulonglong)(8 - (int)uVar2));
  FUN_1454fb7c0(param_2,param_2 + 1,8);
LAB_1454fb7a0:
  *param_1 = *(undefined8 *)(param_2 + 3);
  param_1[1] = *(undefined8 *)(param_2 + 5);
  return 1;
}



// FUNCTION 1454fb7c0 FUN_1454fb7c0 body=499 status=ok
// SIG undefined FUN_1454fb7c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454fb7c0(longlong param_1,uint *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  if (param_3 != 0) {
    local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
    pbVar1 = (byte *)(param_1 + 0xc);
    lVar4 = (param_3 - 1U >> 3) + 1;
    pbVar2 = (byte *)(param_1 + 0x14);
    do {
      uVar6 = *param_2;
      uVar5 = param_2[1];
      *pbVar1 = *pbVar1 & 0xdf;
      *pbVar2 = *pbVar2 & 0xbf;
      *pbVar1 = *pbVar1 | 0x40;
      *pbVar2 = *pbVar2 | 0x20;
      local_b8 = uVar6;
      local_b4 = uVar5;
      local_b0 = uVar6;
      local_ac = uVar5;
      FUN_145263190(pbVar1);
      FUN_1452631f0(pbVar1,local_a8);
      FUN_14525fae0(&local_b0,local_a8,1);
      FUN_145263190(pbVar2);
      FUN_1452631f0(pbVar2,local_a8);
      FUN_14525fae0(&local_b8,local_a8,1);
      uVar7 = local_b8 ^ uVar6;
      uVar6 = uVar6 ^ local_b0;
      uVar3 = local_b4 ^ uVar5;
      uVar5 = uVar5 ^ local_ac;
      *pbVar1 = (byte)uVar6;
      *(char *)(param_1 + 0xd) = (char)(uVar6 >> 8);
      *(char *)(param_1 + 0xe) = (char)(uVar6 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(uVar6 >> 0x18);
      *(char *)(param_1 + 0x10) = (char)uVar3;
      *(char *)(param_1 + 0x11) = (char)(uVar3 >> 8);
      *(char *)(param_1 + 0x12) = (char)(uVar3 >> 0x10);
      *(char *)(param_1 + 0x13) = (char)(uVar3 >> 0x18);
      *pbVar2 = (byte)uVar7;
      *(char *)(param_1 + 0x15) = (char)(uVar7 >> 8);
      *(char *)(param_1 + 0x16) = (char)(uVar7 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(uVar7 >> 0x18);
      *(char *)(param_1 + 0x18) = (char)uVar5;
      *(char *)(param_1 + 0x19) = (char)(uVar5 >> 8);
      *(char *)(param_1 + 0x1a) = (char)(uVar5 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uVar5 >> 0x18);
      lVar4 = lVar4 + -1;
      param_2 = param_2 + 2;
    } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
  }
  return;
}



// FUNCTION 1454fb9c0 FUN_1454fb9c0 body=74 status=ok
// SIG undefined FUN_1454fb9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fb9c0(undefined4 *param_1)

{
  memset(param_1,0,0x60);
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  param_1[4] = 0xc3d2e1f0;
  return 1;
}



// FUNCTION 1454fba10 FUN_1454fba10 body=295 status=ok
// SIG undefined FUN_1454fba10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fba10(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x14) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *(uint *)(param_1 + 0x14) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x1c);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      FUN_1454fbcd0(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_1454fbcd0(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 1454fbb40 FUN_1454fbb40 body=385 status=ok
// SIG undefined FUN_1454fbb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fbb40(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x17];
  puVar1 = param_2 + 7;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_1454fbcd0(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_2 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_2 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined1 *)((longlong)param_2 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x17);
  *(undefined1 *)(param_2 + 0x16) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_2 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_2 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  FUN_1454fbcd0(param_2,puVar1,1);
  param_2[0x17] = 0;
  FUN_14259f0c0(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)uVar3;
  param_1[1] = (char)((uint)uVar3 >> 8);
  param_1[2] = (char)((uint)uVar3 >> 0x10);
  param_1[3] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[1];
  param_1[4] = (char)uVar3;
  param_1[5] = (char)((uint)uVar3 >> 8);
  param_1[6] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[2];
  param_1[8] = (char)uVar3;
  param_1[9] = (char)((uint)uVar3 >> 8);
  param_1[10] = (char)((uint)uVar3 >> 0x10);
  param_1[0xb] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[3];
  param_1[0xc] = (char)uVar3;
  param_1[0xd] = (char)((uint)uVar3 >> 8);
  param_1[0xe] = (char)((uint)uVar3 >> 0x10);
  param_1[0xf] = (char)((uint)uVar3 >> 0x18);
  uVar3 = param_2[4];
  param_1[0x10] = (char)uVar3;
  param_1[0x11] = (char)((uint)uVar3 >> 8);
  param_1[0x12] = (char)((uint)uVar3 >> 0x10);
  param_1[0x13] = (char)((uint)uVar3 >> 0x18);
  return 1;
}



// FUNCTION 1454fbcd0 FUN_1454fbcd0 body=6111 status=ok
// SIG undefined FUN_1454fbcd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454fbcd0(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  
  if (param_3 != 0) {
    uVar26 = param_1[1];
    iVar19 = param_1[4];
    uVar16 = param_1[3];
    uVar33 = param_1[2];
    do {
      param_3 = param_3 + -1;
      uVar23 = uVar33 << 10 | uVar33 >> 0x16;
      iVar3 = *param_2;
      uVar25 = uVar26 << 10 | uVar26 >> 0x16;
      uVar17 = (uVar33 ^ uVar16 ^ uVar26) + *param_1 + iVar3;
      iVar4 = param_2[1];
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + iVar19;
      uVar27 = (uVar26 ^ uVar23 ^ uVar17) + iVar19 + iVar4;
      iVar5 = param_2[2];
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar16;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar27 ^ uVar25 ^ uVar17) + uVar16 + iVar5;
      iVar6 = param_2[3];
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar23;
      iVar7 = param_2[4];
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = (uVar27 ^ uVar17 ^ uVar18) + iVar6 + uVar23;
      iVar8 = param_2[5];
      uVar21 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar25;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = (uVar28 ^ uVar17 ^ uVar21) + iVar7 + uVar25;
      uVar17 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar18;
      iVar9 = param_2[6];
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar18 = (uVar27 ^ uVar21 ^ uVar17) + iVar8 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar24 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar1 = param_2[7];
      uVar28 = (uVar22 ^ uVar17 ^ uVar18) + iVar9 + uVar28;
      uVar21 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar27;
      iVar10 = param_2[8];
      uVar27 = (uVar21 ^ uVar24 ^ uVar18) + iVar1 + uVar27;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      iVar20 = param_2[9];
      uVar28 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar21 ^ uVar28 ^ uVar18) + iVar10 + uVar22;
      iVar11 = param_2[10];
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar24;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar17 ^ uVar28 ^ uVar27) + iVar20 + uVar24;
      uVar28 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar18;
      iVar12 = param_2[0xb];
      uVar22 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = (uVar21 ^ uVar27 ^ uVar28) + iVar11 + uVar18;
      uVar27 = (uVar18 * 0x4000 | uVar18 >> 0x12) + uVar17;
      iVar13 = param_2[0xc];
      uVar17 = (uVar22 ^ uVar28 ^ uVar27) + iVar12 + uVar17;
      uVar24 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar21;
      uVar21 = (uVar17 ^ uVar24 ^ uVar27) + iVar13 + uVar21;
      iVar14 = param_2[0xd];
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      iVar2 = param_2[0xe];
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar22;
      uVar22 = (uVar17 ^ uVar28 ^ uVar18) + iVar14 + uVar22;
      iVar15 = param_2[0xf];
      uVar17 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar24;
      param_2 = param_2 + 0x10;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar24 = (uVar27 ^ uVar28 ^ uVar17) + iVar2 + uVar24;
      uVar21 = (uVar24 * 0x200 | uVar24 >> 0x17) + uVar18;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar21) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar27;
      uVar27 = uVar27 + ((uVar28 ^ uVar21) & uVar18 ^ uVar28) + 0x5a827999 + iVar1;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar21 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar18) & uVar17 ^ uVar21) + 0x5a827999 + iVar7;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x40 | uVar22 >> 0x1a) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar24) & uVar18 ^ uVar24) + 0x5a827999 + iVar14;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar4;
      uVar18 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar11;
      uVar24 = (uVar24 * 0x800 | uVar24 >> 0x15) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar9;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar15;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar28 = uVar28 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar6;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar13;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + 0x5a827999 + iVar3;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar22 ^ uVar28) & uVar24 ^ uVar22) + 0x5a827999 + iVar20;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar18;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar18 = uVar18 + ((uVar21 ^ uVar24) & uVar17 ^ uVar21) + 0x5a827999 + iVar8;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar22;
      uVar22 = uVar22 + ((uVar17 ^ uVar29) & uVar18 ^ uVar29) + 0x5a827999 + iVar5;
      uVar17 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar27 ^ uVar18) & uVar17 ^ uVar27) + 0x5a827999 + iVar2;
      uVar18 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x5a827999 + iVar12;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar24 ^ uVar28) + 0x5a827999 + iVar10;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar6;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar24 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6ed9eba1 + iVar11;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar2;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar7;
      uVar24 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar20;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar17 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar22;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar15;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar10;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar4;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar5;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar1;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar3;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar29) + 0x6ed9eba1 + iVar9;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6ed9eba1 + iVar14;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar29;
      uVar29 = uVar29 + ((~uVar17 | uVar18) ^ uVar22) + 0x6ed9eba1 + iVar12;
      uVar24 = (uVar29 * 0x1000 | uVar29 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar24) ^ uVar28) + 0x6ed9eba1 + iVar8;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar21) + 0x6ed9eba1 + iVar13;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar4;
      uVar17 = (uVar28 * 0x800 | uVar28 >> 0x15) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar20;
      uVar18 = (uVar21 * 0x1000 | uVar21 >> 0x14) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar12;
      uVar24 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar11;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar3;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar10;
      uVar17 = (uVar28 * 0x8000 | uVar28 >> 0x11) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar13;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar7;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar14;
      uVar17 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar6;
      uVar18 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar1;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x8f1bbcdc + iVar15;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x8f1bbcdc + iVar2;
      uVar24 = (uVar29 * 0x100 | uVar29 >> 0x18) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar24) & uVar28 ^ uVar18) + 0x8f1bbcdc + iVar8;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((uVar17 ^ uVar24) & uVar21 ^ uVar24) + 0x8f1bbcdc + iVar9;
      uVar18 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar17 ^ uVar18) & uVar29 ^ uVar17) + 0x8f1bbcdc + iVar5;
      uVar17 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar7;
      uVar18 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar29;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar18) + 0xa953fd4e + iVar3;
      uVar24 = (uVar29 * 0x8000 | uVar29 >> 0x11) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar24) + 0xa953fd4e + iVar8;
      uVar17 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar20;
      uVar18 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar29 | uVar17) ^ uVar18) + 0xa953fd4e + iVar1;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0xa953fd4e + iVar13;
      uVar28 = (uVar21 * 0x100 | uVar21 >> 0x18) + uVar29;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar29 = uVar29 + ((~uVar22 | uVar17) ^ uVar28) + 0xa953fd4e + iVar5;
      uVar24 = (uVar29 * 0x2000 | uVar29 >> 0x13) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar28) ^ uVar24) + 0xa953fd4e + iVar11;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar29 = uVar24 * 0x400 | uVar24 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar24) ^ uVar17) + 0xa953fd4e + iVar2;
      uVar27 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar18;
      uVar18 = uVar18 + ((~uVar29 | uVar17) ^ uVar27) + 0xa953fd4e + iVar4;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar21;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar17 | uVar27) ^ uVar22) + 0xa953fd4e + iVar6;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar29;
      uVar27 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar29 = uVar29 + ((~uVar18 | uVar22) ^ uVar28) + iVar10 + -0x56ac02b2;
      uVar21 = (uVar29 * 0x4000 | uVar29 >> 0x12) + uVar17;
      uVar22 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = ((~uVar27 | uVar28) ^ uVar21) + iVar12 + -0x56ac02b2 + uVar17;
      uVar29 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar28 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar17 = uVar18 + 0xa953fd4e + ((~uVar22 | uVar21) ^ uVar28) + iVar9;
      uVar30 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar27;
      uVar31 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar17 = uVar27 + 0xa953fd4e + ((~uVar29 | uVar28) ^ uVar30) + iVar15;
      uVar34 = (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar22;
      uVar32 = uVar22 + 0xa953fd4e + ((~uVar31 | uVar30) ^ uVar34) + iVar14;
      uVar17 = iVar8 + 0x50a28be6 + ((~uVar16 | uVar33) ^ uVar26) + *param_1;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + iVar19;
      uVar27 = ((uVar26 | ~uVar23) ^ uVar17) + iVar19 + 0x50a28be6 + iVar2;
      uVar18 = (uVar27 * 0x200 | uVar27 >> 0x17) + uVar16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = iVar1 + 0x50a28be6 + ((~uVar25 | uVar17) ^ uVar18) + uVar16;
      uVar17 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar23;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar18 = uVar23 + 0x50a28be6 + ((~uVar27 | uVar18) ^ uVar17) + iVar3;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar25;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar17 = uVar25 + 0x50a28be6 + ((~uVar22 | uVar17) ^ uVar18) + iVar20;
      uVar23 = (uVar17 * 0x2000 | uVar17 >> 0x13) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar5;
      uVar17 = (uVar27 * 0x8000 | uVar27 >> 0x11) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar12;
      uVar18 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar7;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar14;
      uVar28 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar18 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar22 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar18 | uVar17) ^ uVar28) + 0x50a28be6 + iVar9;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((~uVar22 | uVar28) ^ uVar23) + 0x50a28be6 + iVar15;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar18;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = uVar18 + ((~uVar21 | uVar23) ^ uVar17) + 0x50a28be6 + iVar10;
      uVar18 = (uVar18 * 0x800 | uVar18 >> 0x15) + uVar22;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar22 + ((~uVar24 | uVar17) ^ uVar18) + 0x50a28be6 + iVar4;
      uVar17 = (uVar22 * 0x4000 | uVar22 >> 0x12) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar18) ^ uVar17) + 0x50a28be6 + iVar11;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar17) ^ uVar18) + 0x50a28be6 + iVar6;
      uVar23 = (uVar24 * 0x1000 | uVar24 >> 0x14) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar28 | uVar18) ^ uVar23) + 0x50a28be6 + iVar13;
      uVar17 = (uVar27 * 0x40 | uVar27 >> 0x1a) + uVar22;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar9;
      uVar18 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar28;
      uVar23 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar23 ^ uVar17) + 0x5c4dd124 + iVar12;
      uVar17 = (uVar28 * 0x2000 | uVar28 >> 0x13) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar6;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar1;
      uVar23 = (uVar23 * 0x80 | uVar23 >> 0x19) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar3;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar14;
      uVar18 = (uVar22 * 0x100 | uVar22 >> 0x18) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar8;
      uVar17 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar11;
      uVar18 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar24;
      uVar24 = uVar24 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar2;
      uVar23 = (uVar24 * 0x80 | uVar24 >> 0x19) + uVar27;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar18 ^ uVar23) & uVar28 ^ uVar18) + 0x5c4dd124 + iVar15;
      uVar17 = (uVar27 * 0x80 | uVar27 >> 0x19) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar10;
      uVar18 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar18 ^ uVar17) & uVar24 ^ uVar17) + 0x5c4dd124 + iVar13;
      uVar17 = (uVar28 * 0x80 | uVar28 >> 0x19) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar17) & uVar27 ^ uVar18) + 0x5c4dd124 + iVar7;
      uVar28 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar24;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar17 ^ uVar28) & uVar22 ^ uVar17) + 0x5c4dd124 + iVar20;
      uVar23 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar27;
      uVar21 = uVar28 * 0x400 | uVar28 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar23) & uVar18 ^ uVar28) + 0x5c4dd124 + iVar4;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar23 ^ uVar17) & uVar21 ^ uVar23) + 0x5c4dd124 + iVar5;
      uVar27 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar18;
      uVar18 = uVar18 + ((~uVar17 | uVar27) ^ uVar24) + 0x6d703ef3 + iVar15;
      uVar22 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar21;
      uVar17 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = uVar21 + ((~uVar27 | uVar22) ^ uVar17) + 0x6d703ef3 + iVar8;
      uVar27 = (uVar21 * 0x80 | uVar21 >> 0x19) + uVar24;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = uVar24 + ((~uVar22 | uVar27) ^ uVar18) + 0x6d703ef3 + iVar4;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = (uVar24 * 0x8000 | uVar24 >> 0x11) + uVar17;
      uVar17 = uVar17 + ((~uVar27 | uVar22) ^ uVar28) + 0x6d703ef3 + iVar6;
      uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
      uVar23 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = uVar18 + ((~uVar22 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar1;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar18 = (uVar18 * 0x100 | uVar18 >> 0x18) + uVar28;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar23) + 0x6d703ef3 + iVar2;
      uVar17 = (uVar28 * 0x40 | uVar28 >> 0x1a) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar9;
      uVar18 = (uVar21 * 0x40 | uVar21 >> 0x1a) + uVar23;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = uVar23 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar20;
      uVar23 = (uVar23 * 0x4000 | uVar23 >> 0x12) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar12;
      uVar17 = (uVar27 * 0x1000 | uVar27 >> 0x14) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar10;
      uVar18 = (uVar22 * 0x2000 | uVar22 >> 0x13) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar13;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar21 = uVar21 + ((~uVar18 | uVar17) ^ uVar27) + 0x6d703ef3 + iVar5;
      uVar18 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((~uVar17 | uVar18) ^ uVar22) + 0x6d703ef3 + iVar11;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar23 = (uVar24 * 0x2000 | uVar24 >> 0x13) + uVar27;
      uVar27 = uVar27 + ((~uVar18 | uVar23) ^ uVar28) + 0x6d703ef3 + iVar3;
      uVar17 = (uVar27 * 0x2000 | uVar27 >> 0x13) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((~uVar23 | uVar17) ^ uVar21) + 0x6d703ef3 + iVar7;
      uVar18 = (uVar22 * 0x80 | uVar22 >> 0x19) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((~uVar17 | uVar18) ^ uVar24) + 0x6d703ef3 + iVar14;
      uVar17 = (uVar28 * 0x20 | uVar28 >> 0x1b) + uVar21;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = uVar21 + ((uVar18 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar10;
      uVar18 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar24 = uVar24 + ((uVar22 ^ uVar17) & uVar18 ^ uVar22) + 0x7a6d76e9 + iVar9;
      uVar23 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar27;
      uVar21 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar27 + ((uVar28 ^ uVar18) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar7;
      uVar17 = (uVar27 * 0x100 | uVar27 >> 0x18) + uVar22;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar22 = uVar22 + ((uVar21 ^ uVar23) & uVar17 ^ uVar21) + 0x7a6d76e9 + iVar4;
      uVar22 = (uVar22 * 0x800 | uVar22 >> 0x15) + uVar28;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = uVar28 + ((uVar24 ^ uVar17) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar6;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 * 0x4000 | uVar28 >> 0x12) + uVar21;
      uVar21 = uVar21 + ((uVar22 ^ uVar27) & uVar17 ^ uVar27) + 0x7a6d76e9 + iVar12;
      uVar21 = (uVar21 * 0x4000 | uVar21 >> 0x12) + uVar24;
      uVar28 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar22 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar24 = uVar24 + ((uVar18 ^ uVar17) & uVar21 ^ uVar18) + iVar15 + 0x7a6d76e9;
      uVar23 = (uVar24 * 0x40 | uVar24 >> 0x1a) + uVar27;
      uVar17 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = ((uVar28 ^ uVar21) & uVar23 ^ uVar28) + 0x7a6d76e9 + iVar3 + uVar27;
      uVar27 = (uVar27 * 0x4000 | uVar27 >> 0x12) + uVar18;
      uVar18 = ((uVar22 ^ uVar23) & uVar27 ^ uVar22) + 0x7a6d76e9 + iVar8 + uVar18;
      uVar23 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar18 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar28 = iVar13 + 0x7a6d76e9 + ((uVar17 ^ uVar27) & uVar23 ^ uVar17) + uVar28;
      uVar24 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar27 = (uVar28 * 0x200 | uVar28 >> 0x17) + uVar22;
      uVar21 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar22 = ((uVar23 ^ uVar18) & uVar27 ^ uVar18) + 0x7a6d76e9 + iVar5 + uVar22;
      uVar22 = (uVar22 * 0x1000 | uVar22 >> 0x14) + uVar17;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = ((uVar24 ^ uVar27) & uVar22 ^ uVar24) + 0x7a6d76e9 + iVar14 + uVar17;
      uVar27 = (uVar17 * 0x200 | uVar17 >> 0x17) + uVar18;
      uVar17 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar18 = uVar18 + 0x7a6d76e9 + ((uVar21 ^ uVar22) & uVar27 ^ uVar21) + iVar20;
      uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar24;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar24 = ((uVar28 ^ uVar27) & uVar22 ^ uVar28) + 0x7a6d76e9 + iVar1 + uVar24;
      uVar27 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar21;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar21 = ((uVar17 ^ uVar22) & uVar27 ^ uVar17) + 0x7a6d76e9 + iVar11 + uVar21;
      uVar22 = (uVar21 * 0x8000 | uVar21 >> 0x11) + uVar28;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = ((uVar27 ^ uVar18) & uVar22 ^ uVar18) + 0x7a6d76e9 + iVar2 + uVar28;
      uVar27 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar17;
      uVar17 = (uVar23 ^ uVar22 ^ uVar27) + iVar13 + uVar17;
      uVar17 = (uVar17 * 0x100 | uVar17 >> 0x18) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar15 + uVar18;
      uVar18 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar23;
      uVar28 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar28 ^ uVar17 ^ uVar18) + iVar11 + uVar23;
      uVar22 = (uVar23 * 0x1000 | uVar23 >> 0x14) + uVar21;
      uVar17 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar21 = (uVar22 ^ uVar27 ^ uVar18) + iVar7 + uVar21;
      uVar21 = (uVar21 * 0x200 | uVar21 >> 0x17) + uVar28;
      uVar18 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar28 = (uVar22 ^ uVar21 ^ uVar17) + iVar4 + uVar28;
      uVar22 = (uVar28 * 0x1000 | uVar28 >> 0x14) + uVar27;
      uVar28 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar27 = (uVar18 ^ uVar21 ^ uVar22) + iVar8 + uVar27;
      uVar27 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar17;
      uVar21 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar17 = (uVar28 ^ uVar22 ^ uVar27) + iVar10 + uVar17;
      uVar23 = uVar27 * 0x400 | uVar27 >> 0x16;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar18;
      uVar18 = (uVar21 ^ uVar27 ^ uVar17) + iVar1 + uVar18;
      uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar28;
      uVar22 = uVar18 * 0x400 | uVar18 >> 0x16;
      uVar27 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar28 = (uVar18 ^ uVar23 ^ uVar17) + iVar9 + uVar28;
      uVar17 = (uVar28 * 0x100 | uVar28 >> 0x18) + uVar21;
      uVar21 = (uVar18 ^ uVar17 ^ uVar27) + iVar5 + uVar21;
      uVar28 = (uVar21 * 0x2000 | uVar21 >> 0x13) + uVar23;
      uVar18 = uVar17 * 0x400 | uVar17 >> 0x16;
      uVar23 = (uVar22 ^ uVar17 ^ uVar28) + iVar14 + uVar23;
      uVar21 = (uVar23 * 0x40 | uVar23 >> 0x1a) + uVar27;
      uVar27 = (uVar18 ^ uVar28 ^ uVar21) + iVar2 + uVar27;
      uVar23 = (uVar27 * 0x20 | uVar27 >> 0x1b) + uVar22;
      uVar27 = uVar28 * 0x400 | uVar28 >> 0x16;
      iVar1 = *param_1;
      uVar17 = uVar21 * 0x400 | uVar21 >> 0x16;
      uVar22 = (uVar27 ^ uVar21 ^ uVar23) + iVar3 + uVar22;
      uVar22 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar18;
      uVar28 = uVar22 * 0x400 | uVar22 >> 0x16;
      uVar18 = (uVar22 ^ uVar17 ^ uVar23) + iVar6 + uVar18;
      uVar21 = uVar23 * 0x400 | uVar23 >> 0x16;
      uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x13) + uVar27;
      uVar27 = (uVar22 ^ uVar18 ^ uVar21) + iVar20 + uVar27;
      iVar20 = iVar19 + uVar29;
      uVar22 = uVar16 + uVar31 + uVar21;
      uVar16 = (uVar27 * 0x800 | uVar27 >> 0x15) + uVar17;
      param_1[2] = uVar22;
      *param_1 = (uVar18 * 0x400 | uVar18 >> 0x16) + uVar26 + uVar34;
      iVar19 = iVar1 + (uVar32 * 0x40 | uVar32 >> 0x1a) + uVar29 + uVar16;
      uVar17 = (uVar28 ^ uVar18 ^ uVar16) + iVar12 + uVar17;
      uVar16 = iVar20 + (uVar17 * 0x800 | uVar17 >> 0x15) + uVar21;
      uVar26 = uVar33 + (uVar30 * 0x400 | uVar30 >> 0x16) + uVar28;
      param_1[1] = uVar26;
      param_1[3] = uVar16;
      param_1[4] = iVar19;
      uVar33 = uVar22;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1454fd4b0 FUN_1454fd4b0 body=36 status=ok
// SIG undefined FUN_1454fd4b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fd4b0(void *param_1)

{
  memset(param_1,0,0xa8);
  return 1;
}



// FUNCTION 1454fd4e0 FUN_1454fd4e0 body=634 status=ok
// SIG undefined FUN_1454fd4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fd4e0(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  sbyte sVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong local_res10;
  
  if (0xfffffffffffffff < param_3) {
    local_res10 = param_3 >> 0x3c;
    do {
      uVar6 = *(uint *)(param_1 + 0x80);
      uVar7 = 0x8000000000000000;
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -0x8000000000000000;
      uVar10 = uVar6 & 7;
      if (*(ulonglong *)(param_1 + 0x88) < 0x8000000000000000) {
        uVar5 = 1;
        plVar3 = (longlong *)(param_1 + 0x90);
        do {
          *plVar3 = *plVar3 + 1;
          if (*plVar3 != 0) break;
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (uVar5 < 4);
      }
      pbVar9 = param_2;
      if (uVar10 == 0) {
        do {
          if ((uVar6 == 0) && (uVar5 = uVar7 >> 9, uVar5 != 0)) {
            FUN_14272b2c0(param_1,pbVar9,uVar5);
            pbVar9 = pbVar9 + uVar5 * 0x40;
            uVar7 = (ulonglong)((uint)uVar7 & 0x1ff);
          }
          else {
            uVar10 = 0x200 - uVar6;
            if (uVar7 < uVar10) {
              memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),pbVar9,uVar7 >> 3);
              uVar6 = uVar6 + (uint)uVar7;
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 - uVar10;
              memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),pbVar9,
                     (ulonglong)(uVar10 >> 3));
              pbVar9 = pbVar9 + (uVar10 >> 3);
              FUN_14272b2c0(param_1,param_1 + 0x40,1);
              uVar6 = 0;
            }
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        } while (uVar7 != 0);
      }
      else {
        while (uVar7 != 0) {
          bVar2 = *pbVar9;
          uVar8 = uVar6 >> 3;
          sVar4 = (sbyte)uVar10;
          pbVar1 = (byte *)((ulonglong)uVar8 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar2 >> sVar4;
          if (uVar7 < 9) {
            uVar6 = uVar6 + (int)uVar7;
            uVar7 = (ulonglong)(uVar8 + 1);
            if (uVar6 == 0x200) {
              FUN_14272b2c0(param_1,param_1 + 0x40,1);
              uVar7 = 0;
              uVar6 = 0;
            }
            *(byte *)(uVar7 + 0x40 + param_1) = bVar2 << (8U - sVar4 & 0x1f);
            uVar7 = 0;
            *(uint *)(param_1 + 0x80) = uVar6;
          }
          else {
            uVar6 = uVar6 + 8;
            uVar7 = uVar7 - 8;
            pbVar9 = pbVar9 + 1;
            uVar5 = (ulonglong)(uVar8 + 1);
            if (0x1ff < uVar6) {
              FUN_14272b2c0(param_1,param_1 + 0x40,1);
              uVar5 = 0;
              uVar6 = uVar6 & 0x1ff;
            }
            *(byte *)(uVar5 + 0x40 + param_1) = bVar2 << (8U - sVar4 & 0x1f);
            *(uint *)(param_1 + 0x80) = uVar6;
          }
        }
      }
      param_3 = param_3 + 0xf000000000000000;
      param_2 = param_2 + 0x1000000000000000;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  if (param_3 != 0) {
    FUN_1454fd760(param_1,param_2,param_3 * 8);
  }
  return 1;
}



// FUNCTION 1454fd760 FUN_1454fd760 body=691 status=ok
// SIG undefined FUN_1454fd760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454fd760(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  sbyte sVar3;
  sbyte sVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar6 = *(uint *)(param_1 + 0x80);
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + param_3;
  uVar9 = -(int)param_3 & 7;
  uVar11 = uVar6 & 7;
  if (*(ulonglong *)(param_1 + 0x88) < param_3) {
    uVar5 = 1;
    plVar2 = (longlong *)(param_1 + 0x90);
    do {
      *plVar2 = *plVar2 + 1;
      if (*plVar2 != 0) break;
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar5 < 4);
  }
  do {
    if ((uVar9 == 0) && (uVar11 == 0)) {
      while (param_3 != 0) {
        if ((uVar6 == 0) && (uVar5 = param_3 >> 9, uVar5 != 0)) {
          FUN_14272b2c0(param_1,param_2,uVar5);
          param_2 = param_2 + uVar5 * 0x40;
          param_3 = (ulonglong)((uint)param_3 & 0x1ff);
          uVar6 = 0;
        }
        else {
          uVar9 = 0x200 - uVar6;
          if (param_3 < uVar9) {
            memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),param_2,param_3 >> 3);
            uVar6 = uVar6 + (uint)param_3;
            param_3 = 0;
          }
          else {
            param_3 = param_3 - uVar9;
            memcpy((void *)(param_1 + 0x40 + (ulonglong)(uVar6 >> 3)),param_2,
                   (ulonglong)(uVar9 >> 3));
            param_2 = param_2 + (uVar9 >> 3);
            FUN_14272b2c0(param_1,param_1 + 0x40,1);
            uVar6 = 0;
          }
          *(uint *)(param_1 + 0x80) = uVar6;
        }
      }
      return;
    }
    uVar10 = 8 - uVar9;
    while( true ) {
      if (param_3 == 0) {
        return;
      }
      uVar8 = uVar6 >> 3;
      uVar5 = (ulonglong)uVar8;
      sVar3 = (sbyte)uVar9;
      if (uVar11 == uVar9) break;
      sVar4 = (sbyte)uVar11;
      if (param_3 < 9) {
        bVar7 = *param_2 << sVar3;
        if (uVar11 == 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7;
        }
        else {
          pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar7 >> sVar4;
        }
        uVar6 = uVar6 + (int)param_3;
        uVar5 = (ulonglong)(uVar8 + 1);
        if (uVar6 == 0x200) {
          FUN_14272b2c0(param_1,param_1 + 0x40);
          uVar5 = 0;
          uVar6 = 0;
        }
        if (uVar11 != 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7 << (8U - sVar4 & 0x1f);
        }
        param_3 = 0;
LAB_1454fd8f6:
        *(uint *)(param_1 + 0x80) = uVar6;
      }
      else {
        bVar7 = param_2[1] >> ((byte)uVar10 & 0x1f) | *param_2 << sVar3;
        if (uVar11 == 0) {
          *(byte *)(uVar5 + 0x40 + param_1) = bVar7;
        }
        else {
          pbVar1 = (byte *)(uVar5 + 0x40 + param_1);
          *pbVar1 = *pbVar1 | bVar7 >> sVar4;
        }
        uVar6 = uVar6 + 8;
        param_3 = param_3 - 8;
        param_2 = param_2 + 1;
        uVar5 = (ulonglong)(uVar8 + 1);
        if (0x1ff < uVar6) {
          FUN_14272b2c0(param_1,param_1 + 0x40);
          uVar5 = 0;
          uVar6 = uVar6 & 0x1ff;
        }
        if (uVar11 == 0) goto LAB_1454fd8f6;
        *(byte *)(uVar5 + 0x40 + param_1) = bVar7 << (8U - sVar4 & 0x1f);
        *(uint *)(param_1 + 0x80) = uVar6;
      }
    }
    uVar6 = uVar6 + uVar10;
    uVar11 = 0;
    uVar9 = 0;
    pbVar1 = (byte *)(uVar5 + param_1 + 0x40);
    *pbVar1 = *pbVar1 | (byte)(0xff >> sVar3) & *param_2;
    param_2 = param_2 + 1;
    param_3 = param_3 - uVar10;
    if (uVar6 == 0x200) {
      FUN_14272b2c0(param_1,param_1 + 0x40,1);
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x80) = uVar6;
  } while( true );
}



// FUNCTION 1454fda20 FUN_1454fda20 body=339 status=ok
// SIG undefined FUN_1454fda20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fda20(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = *(uint *)(param_2 + 0x10) >> 3;
  uVar7 = *(uint *)(param_2 + 0x10) & 7;
  if (uVar7 == 0) {
    *(undefined1 *)((ulonglong)uVar10 + 0x40 + (longlong)param_2) = 0x80;
  }
  else {
    pbVar1 = (byte *)((ulonglong)uVar10 + 0x40 + (longlong)param_2);
    *pbVar1 = *pbVar1 | (byte)(0x80 >> (sbyte)uVar7);
  }
  uVar10 = uVar10 + 1;
  uVar11 = (ulonglong)uVar10;
  if (uVar10 < 0x21) {
    if (0x1f < uVar10) goto LAB_1454fdabb;
  }
  else {
    if (uVar10 < 0x40) {
      memset((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x40 - uVar10));
    }
    FUN_14272b2c0(param_2,param_2 + 8,1);
    uVar11 = 0;
  }
  memset((void *)((longlong)param_2 + uVar11 + 0x40),0,(ulonglong)(0x20 - (int)uVar11));
LAB_1454fdabb:
  lVar9 = 4;
  puVar8 = param_2 + 0x11;
  puVar6 = (undefined1 *)((longlong)param_2 + 0x7f);
  do {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = (char)uVar2;
    puVar6[-1] = (char)((ulonglong)uVar2 >> 8);
    puVar6[-2] = (char)((ulonglong)uVar2 >> 0x10);
    puVar6[-3] = (char)((ulonglong)uVar2 >> 0x18);
    puVar6[-4] = (char)((ulonglong)uVar2 >> 0x20);
    puVar6[-5] = (char)((ulonglong)uVar2 >> 0x28);
    puVar6[-6] = (char)((ulonglong)uVar2 >> 0x30);
    puVar6[-7] = (char)((ulonglong)uVar2 >> 0x38);
    lVar9 = lVar9 + -1;
    puVar6 = puVar6 + -8;
  } while (lVar9 != 0);
  FUN_14272b2c0(param_2,param_2 + 8,1);
  if (param_1 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 5);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 7);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 7) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    FUN_14259f0c0(param_2,0xa8);
    return 1;
  }
  return 0;
}



// FUNCTION 1454fdb80 FUN_1454fdb80 body=95 status=ok
// SIG undefined FUN_1454fdb80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fdb80(undefined4 *param_1)

{
  memset(param_1,0,0x6c);
  *param_1 = 0x7380166f;
  param_1[1] = 0x4914b2b9;
  param_1[2] = 0x172442d7;
  param_1[3] = 0xda8a0600;
  param_1[4] = 0xa96f30bc;
  param_1[5] = 0x163138aa;
  param_1[6] = 0xe38dee4d;
  param_1[7] = 0xb0fb0e4e;
  return 1;
}



// FUNCTION 1454fdbe0 FUN_1454fdbe0 body=295 status=ok
// SIG undefined FUN_1454fdbe0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fdbe0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      FUN_1454fdf00(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_1454fdf00(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 1454fdd10 FUN_1454fdd10 body=488 status=ok
// SIG undefined FUN_1454fdd10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1454fdd10(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar4 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar4) {
    memset((void *)(uVar4 + (longlong)puVar1),0,0x40 - uVar4);
    uVar4 = 0;
    FUN_1454fdf00(param_2,puVar1,1);
  }
  memset((void *)(uVar4 + (longlong)puVar1),0,0x38 - uVar4);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  FUN_1454fdf00(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_14259f0c0(puVar1,0x40);
  uVar3 = *param_2;
  *param_1 = (char)((uint)uVar3 >> 0x18);
  param_1[1] = (char)((uint)uVar3 >> 0x10);
  param_1[2] = (char)((uint)uVar3 >> 8);
  param_1[3] = (char)uVar3;
  uVar3 = param_2[1];
  param_1[4] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = (char)((uint)uVar3 >> 0x10);
  param_1[6] = (char)((uint)uVar3 >> 8);
  param_1[7] = (char)uVar3;
  uVar3 = param_2[2];
  param_1[8] = (char)((uint)uVar3 >> 0x18);
  param_1[9] = (char)((uint)uVar3 >> 0x10);
  param_1[10] = (char)((uint)uVar3 >> 8);
  param_1[0xb] = (char)uVar3;
  uVar3 = param_2[3];
  param_1[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[0xd] = (char)((uint)uVar3 >> 0x10);
  param_1[0xe] = (char)((uint)uVar3 >> 8);
  param_1[0xf] = (char)uVar3;
  uVar3 = param_2[4];
  param_1[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[0x11] = (char)((uint)uVar3 >> 0x10);
  param_1[0x12] = (char)((uint)uVar3 >> 8);
  param_1[0x13] = (char)uVar3;
  uVar3 = param_2[5];
  param_1[0x14] = (char)((uint)uVar3 >> 0x18);
  param_1[0x15] = (char)((uint)uVar3 >> 0x10);
  param_1[0x16] = (char)((uint)uVar3 >> 8);
  param_1[0x17] = (char)uVar3;
  uVar3 = param_2[6];
  param_1[0x18] = (char)((uint)uVar3 >> 0x18);
  param_1[0x19] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1a] = (char)((uint)uVar3 >> 8);
  param_1[0x1b] = (char)uVar3;
  uVar3 = param_2[7];
  param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
  param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
  param_1[0x1e] = (char)((uint)uVar3 >> 8);
  param_1[0x1f] = (char)uVar3;
  return 1;
}



// FUNCTION 1454fdf00 FUN_1454fdf00 body=10629 status=ok
// SIG undefined FUN_1454fdf00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1454fdf00(uint *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  if (param_3 != 0) {
    local_68 = param_1[2];
    uVar33 = param_1[4];
    local_50 = param_1[5];
    local_60 = param_1[6];
    local_54 = param_1[3];
    local_5c = param_1[1];
    local_4c = param_1[7];
    do {
      param_3 = param_3 + -1;
      pbVar1 = param_2 + 0x10;
      pbVar2 = param_2 + 0x14;
      pbVar3 = param_2 + 0x18;
      pbVar4 = param_2 + 0x1c;
      uVar25 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
               (uint)param_2[3];
      uVar27 = (uint)param_2[4] << 0x18 | (uint)param_2[5] << 0x10 | (uint)param_2[6] << 8 |
               (uint)param_2[7];
      uVar14 = (uint)param_2[8] << 0x18 | (uint)param_2[9] << 0x10 | (uint)param_2[10] << 8 |
               (uint)param_2[0xb];
      pbVar5 = param_2 + 0xc;
      uVar15 = (uint)*pbVar5 << 0x18 | (uint)param_2[0xd] << 0x10 | (uint)param_2[0xe] << 8 |
               (uint)param_2[0xf];
      uVar34 = (uint)*pbVar1 << 0x18 | (uint)param_2[0x11] << 0x10 | (uint)param_2[0x12] << 8 |
               (uint)param_2[0x13];
      uVar42 = (uint)*pbVar2 << 0x18 | (uint)param_2[0x15] << 0x10 | (uint)param_2[0x16] << 8 |
               (uint)param_2[0x17];
      uVar38 = (uint)*pbVar3 << 0x18 | (uint)param_2[0x19] << 0x10 | (uint)param_2[0x1a] << 8 |
               (uint)param_2[0x1b];
      pbVar6 = param_2 + 0x20;
      pbVar7 = param_2 + 0x28;
      uVar39 = (uint)*pbVar4 << 0x18 | (uint)param_2[0x1d] << 0x10 | (uint)param_2[0x1e] << 8 |
               (uint)param_2[0x1f];
      pbVar8 = param_2 + 0x34;
      uVar16 = (uint)*pbVar6 << 0x18 | (uint)param_2[0x21] << 0x10 | (uint)param_2[0x22] << 8 |
               (uint)param_2[0x23];
      pbVar9 = param_2 + 0x24;
      uVar17 = (uint)*pbVar9 << 0x18 | (uint)param_2[0x25] << 0x10 | (uint)param_2[0x26] << 8 |
               (uint)param_2[0x27];
      pbVar10 = param_2 + 0x2c;
      uVar36 = (uint)*pbVar7 << 0x18 | (uint)param_2[0x29] << 0x10 | (uint)param_2[0x2a] << 8 |
               (uint)param_2[0x2b];
      uVar18 = (uint)*pbVar10 << 0x18 | (uint)param_2[0x2d] << 0x10 | (uint)param_2[0x2e] << 8 |
               (uint)param_2[0x2f];
      pbVar11 = param_2 + 0x30;
      uVar19 = (uint)*pbVar11 << 0x18 | (uint)param_2[0x31] << 0x10 | (uint)param_2[0x32] << 8 |
               (uint)param_2[0x33];
      uVar28 = (uint)*pbVar8 << 0x18 | (uint)param_2[0x35] << 0x10;
      pbVar12 = param_2 + 0x38;
      uVar29 = uVar28 | (uint)param_2[0x36] << 8 | (uint)param_2[0x37];
      uVar20 = (uint)*pbVar12 << 0x18 | (uint)param_2[0x39] << 0x10;
      uVar21 = uVar20 | (uint)param_2[0x3a] << 8 | (uint)param_2[0x3b];
      pbVar13 = param_2 + 0x3c;
      uVar22 = (uint)*pbVar13 << 0x18 | (uint)param_2[0x3d] << 0x10;
      uVar23 = uVar22 | (uint)param_2[0x3e] << 8 | (uint)param_2[0x3f];
      param_2 = param_2 + 0x40;
      uVar24 = *param_1 << 0xc | *param_1 >> 0x14;
      uVar31 = uVar33 + 0x79cc4519 + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar40 = (uVar34 ^ uVar25) + (uVar31 ^ uVar24) + local_54 + (local_68 ^ local_5c ^ *param_1);
      uVar31 = (uVar33 ^ local_60 ^ local_50) + local_4c + uVar31 + uVar25;
      uVar30 = uVar29 << 0xf | uVar28 >> 0x11;
      uVar35 = local_5c << 9 | local_5c >> 0x17;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar26 = local_50 >> 0xd | local_50 << 0x13;
      uVar28 = uVar30 ^ uVar39 ^ uVar25;
      uVar24 = *param_1;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | (uint)(*pbVar5 >> 1)) ^ uVar30 ^ uVar36 ^ uVar39;
      uVar28 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar30 = uVar31 + 0xf3988a32 + uVar28;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar43 = (uVar42 ^ uVar27) + (uVar32 ^ uVar28) + local_68 + (uVar40 ^ uVar35 ^ uVar24);
      uVar30 = uVar21 << 0xf | uVar20 >> 0x11;
      uVar28 = (uVar33 ^ uVar31 ^ uVar26) + local_60 + uVar32 + uVar27;
      uVar20 = uVar33 >> 0xd | uVar33 << 0x13;
      uVar37 = uVar24 << 9 | uVar24 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar30 ^ uVar16 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | (uint)(*pbVar1 >> 1)) ^ uVar30 ^ uVar18 ^ uVar16;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar30 = uVar28 + 0xe7311465 + uVar24;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar32 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar22 = uVar23 << 0xf | uVar22 >> 0x11;
      uVar35 = (uVar38 ^ uVar14) + (uVar32 ^ uVar24) + uVar35 + (uVar43 ^ uVar40 ^ uVar37);
      uVar26 = (uVar31 ^ uVar28 ^ uVar20) + uVar32 + uVar14 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar24 = uVar22 ^ uVar17 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | (uint)(*pbVar2 >> 1)) ^ uVar22 ^ uVar19 ^ uVar17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar22 = uVar26 + 0xce6228cb + uVar24;
      uVar32 = uVar22 * 0x80 | uVar22 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar31 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar22 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = (uVar30 ^ uVar28 ^ uVar26) + uVar32 + uVar15 + uVar20;
      uVar40 = (uVar39 ^ uVar15) + (uVar32 ^ uVar24) + uVar37 + (uVar35 ^ uVar43 ^ uVar41);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar24 = uVar31 ^ uVar36 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | (uint)(*pbVar3 >> 1)) ^ uVar31 ^ uVar29 ^ uVar36;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar40 * 0x1000 | uVar40 >> 0x14;
      uVar28 = uVar20 + 0x9cc45197 + uVar24;
      uVar32 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar28 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar30 = (uVar22 ^ uVar26 ^ uVar20) + uVar32 + uVar34 + uVar30;
      uVar35 = (uVar16 ^ uVar34) + (uVar32 ^ uVar24) + uVar41 + (uVar40 ^ uVar35 ^ uVar44);
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar24 = uVar31 ^ uVar18 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | (uint)(*pbVar4 >> 1)) ^ uVar31 ^ uVar21 ^ uVar18;
      uVar41 = uVar40 * 0x200 | uVar40 >> 0x17;
      uVar24 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar31 = uVar30 + 0x3988a32f + uVar24;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar26 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar28 ^ uVar20) + uVar31 + uVar42 + uVar22;
      uVar20 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar32 = (uVar17 ^ uVar42) + (uVar31 ^ uVar24) + uVar44 + (uVar35 ^ uVar40 ^ uVar37);
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar24 = uVar20 ^ uVar19 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar16 << 7 | (uint)(*pbVar6 >> 1)) ^ uVar20 ^ uVar23 ^ uVar19;
      uVar43 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar24 = uVar32 * 0x1000 | uVar32 >> 0x14;
      uVar20 = uVar22 + 0x7311465e + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar35 = (uVar36 ^ uVar38) + (uVar20 ^ uVar24) + uVar37 + (uVar32 ^ uVar35 ^ uVar41);
      uVar28 = (uVar30 ^ uVar22 ^ uVar26) + uVar20 + uVar38 + uVar28;
      uVar30 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar40 = uVar32 * 0x200 | uVar32 >> 0x17;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar20 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar20 ^ uVar29 ^ uVar38;
      uVar31 = uVar35 * 0x1000 | uVar35 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar17 << 7 | (uint)(*pbVar9 >> 1)) ^ uVar20 ^ uVar29 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0xe6228cbc + uVar31;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar44 = (uVar18 ^ uVar39) + (uVar24 ^ uVar31) + uVar41 + (uVar35 ^ uVar32 ^ uVar43);
      uVar31 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar26 = (uVar30 ^ uVar22 ^ uVar28) + uVar24 + uVar39 + uVar26;
      uVar26 = (uVar26 >> 0xf | uVar26 * 0x20000) ^ (uVar26 * 0x200 | uVar26 >> 0x17) ^ uVar26;
      uVar20 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar20 ^ uVar21 ^ uVar39;
      uVar22 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar36 << 7 | (uint)(*pbVar7 >> 1)) ^ uVar20 ^ uVar21 ^ uVar39 ^ uVar27;
      uVar24 = uVar26 + 0xcc451979 + uVar22;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar37 = uVar35 * 0x200 | uVar35 >> 0x17;
      uVar32 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar43 = (uVar19 ^ uVar16) + (uVar24 ^ uVar22) + uVar43 + (uVar44 ^ uVar35 ^ uVar40);
      uVar30 = (uVar31 ^ uVar28 ^ uVar26) + uVar24 + uVar16 + uVar30;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar30 = (uVar30 >> 0xf | uVar30 * 0x20000) ^ (uVar30 * 0x200 | uVar30 >> 0x17) ^ uVar30;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar16;
      uVar20 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar18 << 7 | (uint)(*pbVar10 >> 1)) ^ uVar28 ^ uVar23 ^ uVar16 ^ uVar14;
      uVar24 = uVar30 + 0x988a32f3 + uVar20;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar22 = (uVar29 ^ uVar17) + (uVar24 ^ uVar20) + uVar40 + (uVar43 ^ uVar44 ^ uVar37);
      uVar20 = uVar26 >> 0xd | uVar26 << 0x13;
      uVar31 = (uVar30 ^ uVar32 ^ uVar26) + uVar24 + uVar17 + uVar31;
      uVar31 = (uVar31 >> 0xf | uVar31 * 0x20000) ^ (uVar31 * 0x200 | uVar31 >> 0x17) ^ uVar31;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar17 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar19 << 7 | (uint)(*pbVar11 >> 1)) ^ uVar28 ^ uVar17 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar31 + 0x311465e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar26 = (uVar21 ^ uVar36) + (uVar28 ^ uVar24) + uVar37 + (uVar22 ^ uVar43 ^ uVar45);
      uVar17 = uVar30 >> 0xd | uVar30 << 0x13;
      uVar32 = (uVar30 ^ uVar31 ^ uVar20) + uVar28 + uVar36 + uVar32;
      uVar32 = (uVar32 >> 0xf | uVar32 * 0x20000) ^ (uVar32 * 0x200 | uVar32 >> 0x17) ^ uVar32;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar36 ^ uVar27;
      uVar16 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar30 = uVar32 + 0x6228cbce + uVar16;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | (uint)(*pbVar8 >> 1)) ^ uVar28 ^ uVar36 ^ uVar34 ^ uVar27;
      uVar24 = uVar30 * 0x80 | uVar30 >> 0x19;
      uVar30 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar43 = (uVar23 ^ uVar18) + (uVar24 ^ uVar16) + uVar45 + (uVar26 ^ uVar22 ^ uVar44);
      uVar22 = uVar31 >> 0xd | uVar31 << 0x13;
      uVar20 = (uVar17 ^ uVar31 ^ uVar32) + uVar24 + uVar18 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar18 ^ uVar14;
      uVar16 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar31 = uVar20 + 0xc451979c + uVar16;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar21 << 7 | (uint)(*pbVar12 >> 1)) ^ uVar28 ^ uVar18 ^ uVar42 ^ uVar14;
      uVar24 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar31 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar18 = uVar32 >> 0xd | uVar32 << 0x13;
      uVar36 = (uVar19 ^ uVar25) + (uVar24 ^ uVar16) + uVar44 + (uVar43 ^ uVar26 ^ uVar30);
      uVar17 = (uVar22 ^ uVar32 ^ uVar20) + uVar24 + uVar19 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar19 ^ uVar15;
      uVar16 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar26 = uVar17 + 0x88a32f39 + uVar16;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar23 << 7 | (uint)(*pbVar13 >> 1)) ^ uVar28 ^ uVar19 ^ uVar38 ^ uVar15;
      uVar24 = uVar26 * 0x80 | uVar26 >> 0x19;
      uVar26 = (uVar29 ^ uVar27) + (uVar24 ^ uVar16) + uVar30 + (uVar36 ^ uVar43 ^ uVar31);
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar16 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar17 ^ uVar18 ^ uVar20) + uVar24 + uVar29 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar34;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar24 = uVar26 * 0x1000 | uVar26 >> 0x14;
      uVar28 = uVar22 + 0x11465e73 + uVar24;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar28 ^ uVar24) + (uVar21 ^ uVar14) + uVar31 + (uVar26 ^ uVar36 ^ uVar44);
      uVar18 = (uVar17 ^ uVar22 ^ uVar16) + uVar28 + uVar21 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar21 ^ uVar42;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar21 ^ uVar41 ^ uVar42;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar18 + 0x228cbce6 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar26 * 0x200 | uVar26 >> 0x17;
      uVar44 = (uVar28 ^ uVar24) + (uVar23 ^ uVar15) + uVar44 + (uVar31 ^ uVar26 ^ uVar43);
      uVar17 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar16 = (uVar19 ^ uVar22 ^ uVar18) + uVar28 + uVar23 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar23 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar23 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar16 + 0x9d8a7a87 + uVar24;
      uVar22 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar36 = (uVar34 ^ uVar25) +
               (uVar22 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar20 | uVar44 & uVar31);
      uVar21 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar19 = ((uVar17 ^ uVar18) & uVar16 ^ uVar17) + uVar22 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar21 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar21 ^ uVar37 ^ uVar39;
      uVar45 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar18 = uVar19 + 0x3b14f50f + uVar24;
      uVar22 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar22 ^ uVar24) + uVar20 + ((uVar36 | uVar44) & uVar23 | uVar36 & uVar44);
      uVar21 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar17 = ((uVar28 ^ uVar16) & uVar19 ^ uVar28) + uVar22 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar21 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar21 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar16 = uVar17 + 0x7629ea1e + uVar24;
      uVar22 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar22 ^ uVar24) + uVar23 + ((uVar20 | uVar36) & uVar45 | uVar20 & uVar36);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar16 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar22 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xec53d43c + uVar24;
      uVar21 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar44 = (uVar39 ^ uVar15) +
               (uVar21 ^ uVar24) + uVar45 + ((uVar31 | uVar20) & uVar43 | uVar31 & uVar20);
      uVar18 = ((uVar16 ^ uVar17) & uVar28 ^ uVar16) + uVar21 + uVar15 + uVar18;
      uVar17 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar19 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar19 ^ uVar30 ^ uVar37;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar19 = uVar18 + 0xd8a7a879 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar21 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar44 | uVar31) & uVar22 | uVar44 & uVar31);
      uVar16 = ((uVar17 ^ uVar28) & uVar18 ^ uVar17) + uVar23 + uVar34 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar43 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar16 + 0xb14f50f3 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar17 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar28 + uVar42 + uVar17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar21 | uVar44) & uVar36 | uVar21 & uVar44);
      uVar28 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar28 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar32;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar24 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar28 = uVar17 + 0x629ea1e7 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar23 | uVar21) & uVar43 | uVar23 & uVar21);
      uVar19 = ((uVar16 ^ uVar20) & uVar17 ^ uVar20) + uVar28 + uVar38 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar38;
      uVar16 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar19 + 0xc53d43ce + uVar16;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar36 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar16) + uVar43 + ((uVar21 | uVar23) & uVar22 | uVar21 & uVar23);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar39;
      uVar23 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar28 = uVar20 + 0x8a7a879d + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar32 ^ uVar41) +
               (uVar28 ^ uVar24) + uVar22 + ((uVar36 | uVar21) & uVar31 | uVar36 & uVar21);
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar41 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar41 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar24 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar28 = uVar18 + 0x14f50f3b + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar24) + uVar31 + ((uVar21 | uVar36) & uVar23 | uVar21 & uVar36);
      uVar16 = ((uVar17 ^ uVar20) & uVar18 ^ uVar17) + uVar28 + uVar35 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar24 = uVar28 ^ uVar35 ^ uVar25;
      uVar35 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar28 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar16 + 0x29ea1e76 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar24 ^ uVar28) + uVar23 + ((uVar22 | uVar21) & uVar43 | uVar22 & uVar21);
      uVar20 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar17 = ((uVar18 ^ uVar19) & uVar16 ^ uVar19) + uVar28 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar24 = uVar28 ^ uVar37 ^ uVar27;
      uVar37 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar28 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar17 + 0x53d43cec + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar28 ^ uVar24) + uVar43 + ((uVar22 | uVar31) & uVar21 | uVar22 & uVar31);
      uVar19 = ((uVar20 ^ uVar16) & uVar17 ^ uVar20) + uVar28 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar28 = uVar41 << 0xf | uVar41 >> 0x11;
      uVar24 = uVar28 ^ uVar40 ^ uVar14;
      uVar40 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar28 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar19 + 0xa7a879d8 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar32 ^ uVar25) +
               (uVar28 ^ uVar24) + uVar21 + ((uVar22 | uVar31) & uVar23 | uVar22 & uVar31);
      uVar20 = ((uVar18 ^ uVar17) & uVar19 ^ uVar18) + uVar28 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar24 = uVar28 ^ uVar32 ^ uVar15;
      uVar32 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar28 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar28 = uVar20 + 0x4f50f3b1 + uVar24;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar18 = ((uVar16 ^ uVar19) & uVar20 ^ uVar16) + uVar28 + uVar30 + uVar18;
      uVar22 = (uVar30 ^ uVar27) +
               (uVar28 ^ uVar24) + uVar23 + ((uVar31 | uVar22) & uVar36 | uVar31 & uVar22);
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar24 = uVar28 ^ uVar30 ^ uVar34;
      uVar30 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar28 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar28 = uVar18 + 0x9ea1e762 + uVar24;
      uVar23 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar36 = (uVar29 ^ uVar14) +
               (uVar28 ^ uVar24) + uVar36 + ((uVar22 | uVar31) & uVar43 | uVar22 & uVar31);
      uVar16 = ((uVar20 ^ uVar21) & uVar18 ^ uVar21) + uVar28 + uVar29 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar24 = uVar28 ^ uVar29 ^ uVar42;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar20 = uVar16 + 0x3d43cec5 + uVar17;
      uVar29 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar28 ^ uVar29 ^ uVar41 ^ uVar42;
      uVar24 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar31 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar44 = (uVar26 ^ uVar15) +
               (uVar24 ^ uVar17) + uVar43 + ((uVar36 | uVar22) & uVar23 | uVar36 & uVar22);
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar21 = ((uVar19 ^ uVar18) & uVar16 ^ uVar19) + uVar24 + uVar26 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar38;
      uVar26 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar24 = uVar44 * 0x1000 | uVar44 >> 0x14;
      uVar28 = uVar21 + 0x7a879d8a + uVar24;
      uVar20 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar28 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar18 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar22 = (uVar34 ^ uVar25) +
               (uVar20 ^ uVar24) + uVar23 + ((uVar44 | uVar36) & uVar31 | uVar44 & uVar36);
      uVar19 = ((uVar17 ^ uVar16) & uVar21 ^ uVar17) + uVar20 + uVar25 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar18 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar18 ^ uVar37 ^ uVar39;
      uVar36 = uVar44 * 0x200 | uVar44 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xf50f3b14 + uVar24;
      uVar23 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar18 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar16 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar20 = (uVar42 ^ uVar27) +
               (uVar23 ^ uVar24) + uVar31 + ((uVar22 | uVar44) & uVar43 | uVar22 & uVar44);
      uVar17 = ((uVar28 ^ uVar21) & uVar19 ^ uVar28) + uVar23 + uVar27 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar24 = uVar18 ^ uVar41 ^ uVar27;
      uVar27 = uVar27 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar34 << 7 | uVar34 >> 0x19) ^ uVar18 ^ uVar40 ^ uVar41;
      uVar24 = uVar20 * 0x1000 | uVar20 >> 0x14;
      uVar18 = uVar17 + 0xea1e7629 + uVar24;
      uVar23 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar31 = (uVar38 ^ uVar14) +
               (uVar23 ^ uVar24) + uVar43 + ((uVar20 | uVar22) & uVar36 | uVar20 & uVar22);
      uVar21 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar28 = ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + uVar23 + uVar14 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar24 = uVar21 ^ uVar35 ^ uVar14;
      uVar14 = uVar14 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar42 << 7 | uVar42 >> 0x19) ^ uVar21 ^ uVar32 ^ uVar35;
      uVar21 = uVar20 * 0x200 | uVar20 >> 0x17;
      uVar24 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar19 = uVar28 + 0xd43cec53 + uVar24;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar43 = (uVar39 ^ uVar15) +
               (uVar23 ^ uVar24) + uVar36 + ((uVar31 | uVar20) & uVar22 | uVar31 & uVar20);
      uVar20 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar19 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar16 = ((uVar18 ^ uVar17) & uVar28 ^ uVar18) + uVar23 + uVar15 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar24 = uVar20 ^ uVar37 ^ uVar15;
      uVar15 = uVar15 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar38 << 7 | uVar38 >> 0x19) ^ uVar20 ^ uVar30 ^ uVar37;
      uVar24 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar16 + 0xa879d8a7 + uVar24;
      uVar23 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar27 << 0xf | uVar27 >> 0x11;
      uVar17 = (uVar41 ^ uVar34) +
               (uVar23 ^ uVar24) + uVar22 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar18 = ((uVar19 ^ uVar28) & uVar16 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar28 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar24 = uVar20 ^ uVar40 ^ uVar34;
      uVar34 = uVar34 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar39 << 7 | uVar39 >> 0x19) ^ uVar20 ^ uVar29 ^ uVar40;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar24 = uVar17 * 0x1000 | uVar17 >> 0x14;
      uVar20 = uVar18 + 0x50f3b14f + uVar24;
      uVar20 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar22 = (uVar35 ^ uVar42) +
               (uVar20 ^ uVar24) + uVar21 + ((uVar17 | uVar43) & uVar36 | uVar17 & uVar43);
      uVar19 = ((uVar28 ^ uVar16) & uVar18 ^ uVar28) + uVar20 + uVar42 + uVar19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar16 = uVar14 << 0xf | uVar14 >> 0x11;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar24 = uVar16 ^ uVar32 ^ uVar42;
      uVar42 = uVar42 ^ (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
                        (uVar41 << 7 | uVar41 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar32;
      uVar31 = uVar17 * 0x200 | uVar17 >> 0x17;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0xa1e7629e + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar36 = (uVar37 ^ uVar38) +
               (uVar16 ^ uVar24) + uVar36 + ((uVar22 | uVar17) & uVar44 | uVar22 & uVar17);
      uVar28 = ((uVar18 ^ uVar20) & uVar19 ^ uVar20) + uVar16 + uVar38 + uVar28;
      uVar28 = (uVar28 >> 0xf | uVar28 * 0x20000) ^ (uVar28 * 0x200 | uVar28 >> 0x17) ^ uVar28;
      uVar16 = uVar15 << 0xf | uVar15 >> 0x11;
      uVar24 = uVar16 ^ uVar30 ^ uVar38;
      uVar17 = uVar36 * 0x1000 | uVar36 >> 0x14;
      uVar38 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar35 << 7 | uVar35 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar38 ^ uVar25;
      uVar24 = uVar28 + 0x43cec53d + uVar17;
      uVar24 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar22 = (uVar40 ^ uVar39) +
               (uVar24 ^ uVar17) + uVar44 + ((uVar36 | uVar22) & uVar31 | uVar36 & uVar22);
      uVar20 = ((uVar21 ^ uVar19) & uVar28 ^ uVar21) + uVar24 + uVar39 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar34 << 0xf | uVar34 >> 0x11;
      uVar24 = uVar16 ^ uVar29 ^ uVar39;
      uVar43 = uVar36 * 0x200 | uVar36 >> 0x17;
      uVar39 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar37 << 7 | uVar37 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar39 ^ uVar27;
      uVar24 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar20 + 0x879d8a7a + uVar24;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar17 = uVar28 >> 0xd | uVar28 << 0x13;
      uVar31 = (uVar32 ^ uVar41) +
               (uVar16 ^ uVar24) + uVar31 + ((uVar22 | uVar36) & uVar23 | uVar22 & uVar36);
      uVar21 = ((uVar18 ^ uVar28) & uVar20 ^ uVar18) + uVar16 + uVar41 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar28 = uVar42 << 0xf | uVar42 >> 0x11;
      uVar24 = uVar28 ^ uVar26 ^ uVar41;
      uVar16 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar24 = (uVar24 << 0xf | uVar24 >> 0x11) ^ (uVar24 >> 9 | uVar24 << 0x17) ^
               (uVar40 << 7 | uVar40 >> 0x19) ^ uVar28 ^ uVar26 ^ uVar41 ^ uVar14;
      uVar28 = uVar21 + 0xf3b14f5 + uVar16;
      uVar28 = uVar28 * 0x80 | uVar28 >> 0x19;
      uVar36 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar22 = (uVar30 ^ uVar35) +
               (uVar28 ^ uVar16) + uVar23 + ((uVar31 | uVar22) & uVar43 | uVar31 & uVar22);
      uVar18 = ((uVar17 ^ uVar20) & uVar21 ^ uVar17) + uVar28 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar38 << 0xf | uVar38 >> 0x11;
      uVar28 = uVar16 ^ uVar35 ^ uVar25;
      uVar35 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar32 << 7 | uVar32 >> 0x19) ^ uVar16 ^ uVar35 ^ uVar15 ^ uVar25;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar18 + 0x1e7629ea + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = (uVar29 ^ uVar37) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar22 | uVar31) & uVar36 | uVar22 & uVar31);
      uVar31 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar17 = ((uVar21 ^ uVar19) & uVar18 ^ uVar19) + uVar16 + uVar37 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar16 = uVar39 << 0xf | uVar39 >> 0x11;
      uVar28 = uVar16 ^ uVar37 ^ uVar27;
      uVar37 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar30 << 7 | uVar30 >> 0x19) ^ uVar16 ^ uVar37 ^ uVar34 ^ uVar27;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar17 + 0x3cec53d4 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar22 = (uVar26 ^ uVar40) +
               (uVar16 ^ uVar28) + uVar36 + ((uVar41 | uVar22) & uVar31 | uVar41 & uVar22);
      uVar19 = ((uVar20 ^ uVar18) & uVar17 ^ uVar20) + uVar16 + uVar40 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar24 << 0xf | uVar24 >> 0x11;
      uVar28 = uVar16 ^ uVar40 ^ uVar14;
      uVar40 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar29 << 7 | uVar29 >> 0x19) ^ uVar16 ^ uVar40 ^ uVar42 ^ uVar14;
      uVar28 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = uVar19 + 0x79d8a7a8 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar43 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar18 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar41 = (uVar32 ^ uVar25) +
               (uVar16 ^ uVar28) + uVar31 + ((uVar22 | uVar41) & uVar23 | uVar22 & uVar41);
      uVar20 = ((uVar21 ^ uVar17) & uVar19 ^ uVar21) + uVar16 + uVar32 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar16 = uVar35 << 0xf | uVar35 >> 0x11;
      uVar28 = uVar16 ^ uVar32 ^ uVar15;
      uVar32 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar26 << 7 | uVar26 >> 0x19) ^ uVar16 ^ uVar32 ^ uVar38 ^ uVar15;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar16 = uVar20 + 0xf3b14f50 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = ((uVar18 ^ uVar19) & uVar20 ^ uVar18) + uVar16 + uVar30 + uVar21;
      uVar31 = (uVar30 ^ uVar27) +
               (uVar16 ^ uVar28) + uVar23 + ((uVar41 | uVar22) & uVar43 | uVar41 & uVar22);
      uVar44 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar19 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar16 = uVar37 << 0xf | uVar37 >> 0x11;
      uVar28 = uVar16 ^ uVar30 ^ uVar34;
      uVar30 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar25 << 7 | uVar25 >> 0x19) ^ uVar16 ^ uVar30 ^ uVar39 ^ uVar34;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar21 + 0xe7629ea1 + uVar28;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar22 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar23 = (uVar29 ^ uVar14) +
               (uVar16 ^ uVar28) + uVar43 + ((uVar31 | uVar41) & uVar44 | uVar31 & uVar41);
      uVar18 = ((uVar20 ^ uVar19) & uVar21 ^ uVar19) + uVar16 + uVar29 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar16 = uVar40 << 0xf | uVar40 >> 0x11;
      uVar28 = uVar16 ^ uVar29 ^ uVar42;
      uVar17 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar20 = uVar18 + 0xcec53d43 + uVar17;
      uVar29 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar27 << 7 | uVar27 >> 0x19) ^ uVar16 ^ uVar29 ^ uVar24 ^ uVar42;
      uVar28 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar41 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar20 = uVar21 >> 0xd | uVar21 << 0x13;
      uVar31 = (uVar26 ^ uVar15) +
               (uVar28 ^ uVar17) + uVar44 + ((uVar23 | uVar31) & uVar36 | uVar23 & uVar31);
      uVar19 = ((uVar22 ^ uVar21) & uVar18 ^ uVar22) + uVar28 + uVar26 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar16 = uVar32 << 0xf | uVar32 >> 0x11;
      uVar28 = uVar16 ^ uVar26 ^ uVar38;
      uVar26 = (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
               (uVar14 << 7 | uVar14 >> 0x19) ^ uVar16 ^ uVar26 ^ uVar35 ^ uVar38;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar16 = uVar19 + 0x9d8a7a87 + uVar28;
      uVar17 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar21 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar16 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar43 = (uVar34 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar22 = ((uVar20 ^ uVar18) & uVar19 ^ uVar20) + uVar17 + uVar25 + uVar22;
      uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) ^ (uVar22 * 0x200 | uVar22 >> 0x17) ^ uVar22;
      uVar17 = uVar30 << 0xf | uVar30 >> 0x11;
      uVar28 = uVar17 ^ uVar39 ^ uVar25;
      uVar25 = uVar25 ^ (uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                        (uVar15 << 7 | uVar15 >> 0x19) ^ uVar17 ^ uVar37 ^ uVar39;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar17 = uVar22 + 0x3b14f50f + uVar28;
      uVar18 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar23 = (uVar42 ^ uVar27) +
               (uVar18 ^ uVar28) + uVar41 + ((uVar43 | uVar31) & uVar21 | uVar43 & uVar31);
      uVar20 = ((uVar16 ^ uVar19) & uVar22 ^ uVar16) + uVar18 + uVar27 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar18 = uVar20 + 0x7629ea1e + uVar28;
      uVar19 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar18 = uVar22 >> 0xd | uVar22 << 0x13;
      uVar21 = (uVar38 ^ uVar14) +
               (uVar19 ^ uVar28) + uVar21 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar16 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar19 + uVar14 + uVar16;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar19 = uVar16 + 0xec53d43c + uVar28;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar22 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar41 = (uVar39 ^ uVar15) +
               (uVar22 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar22 + uVar15 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar20 = uVar17 + 0xd8a7a879 + uVar28;
      uVar23 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar43 = (uVar24 ^ uVar34) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar23 + uVar34 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar43 * 0x1000 | uVar43 >> 0x14;
      uVar16 = uVar18 + 0xb14f50f3 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar23 = (uVar35 ^ uVar42) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar41 | uVar43) & uVar22 | uVar41 & uVar43);
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar19 = ((uVar20 ^ uVar17) & uVar18 ^ uVar20) + uVar21 + uVar42 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar44 = uVar43 * 0x200 | uVar43 >> 0x17;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar19 + 0x629ea1e7 + uVar28;
      uVar21 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar17 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar20 = ((uVar18 ^ uVar16) & uVar19 ^ uVar16) + uVar21 + uVar38 + uVar20;
      uVar21 = (uVar37 ^ uVar38) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar43) & uVar36 | uVar23 & uVar43);
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar21 * 0x1000 | uVar21 >> 0x14;
      uVar31 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar18 = uVar20 + 0xc53d43ce + uVar28;
      uVar18 = uVar18 * 0x80 | uVar18 >> 0x19;
      uVar41 = (uVar40 ^ uVar39) +
               (uVar18 ^ uVar28) + uVar36 + ((uVar21 | uVar23) & uVar44 | uVar21 & uVar23);
      uVar16 = ((uVar17 ^ uVar19) & uVar20 ^ uVar17) + uVar18 + uVar39 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar28 = uVar41 * 0x1000 | uVar41 >> 0x14;
      uVar22 = uVar21 * 0x200 | uVar21 >> 0x17;
      uVar19 = uVar16 + 0x8a7a879d + uVar28;
      uVar23 = uVar19 * 0x80 | uVar19 >> 0x19;
      uVar19 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar39 = (uVar32 ^ uVar24) +
               (uVar23 ^ uVar28) + uVar44 + ((uVar41 | uVar21) & uVar31 | uVar41 & uVar21);
      uVar17 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar23 + uVar24 + uVar17;
      uVar17 = (uVar17 >> 0xf | uVar17 * 0x20000) ^ (uVar17 * 0x200 | uVar17 >> 0x17) ^ uVar17;
      uVar28 = uVar39 * 0x1000 | uVar39 >> 0x14;
      uVar36 = uVar41 * 0x200 | uVar41 >> 0x17;
      uVar20 = uVar17 + 0x14f50f3b + uVar28;
      uVar21 = uVar20 * 0x80 | uVar20 >> 0x19;
      uVar20 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar23 = (uVar30 ^ uVar35) +
               (uVar21 ^ uVar28) + uVar31 + ((uVar39 | uVar41) & uVar22 | uVar39 & uVar41);
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + uVar21 + uVar35 + uVar18;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar16 = uVar18 + 0x29ea1e76 + uVar28;
      uVar21 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar41 = uVar39 * 0x200 | uVar39 >> 0x17;
      uVar16 = uVar17 >> 0xd | uVar17 << 0x13;
      uVar31 = (uVar29 ^ uVar37) +
               (uVar21 ^ uVar28) + uVar22 + ((uVar23 | uVar39) & uVar36 | uVar23 & uVar39);
      uVar19 = ((uVar17 ^ uVar20) & uVar18 ^ uVar20) + uVar21 + uVar37 + uVar19;
      uVar19 = (uVar19 >> 0xf | uVar19 * 0x20000) ^ (uVar19 * 0x200 | uVar19 >> 0x17) ^ uVar19;
      uVar39 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = uVar31 * 0x1000 | uVar31 >> 0x14;
      uVar17 = uVar19 + 0x53d43cec + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar21 = uVar18 >> 0xd | uVar18 << 0x13;
      uVar23 = (uVar26 ^ uVar40) +
               (uVar17 ^ uVar28) + uVar36 + ((uVar31 | uVar23) & uVar41 | uVar31 & uVar23);
      uVar20 = ((uVar16 ^ uVar18) & uVar19 ^ uVar16) + uVar17 + uVar40 + uVar20;
      uVar20 = (uVar20 >> 0xf | uVar20 * 0x20000) ^ (uVar20 * 0x200 | uVar20 >> 0x17) ^ uVar20;
      uVar28 = uVar23 * 0x1000 | uVar23 >> 0x14;
      uVar17 = uVar20 + 0xa7a879d8 + uVar28;
      uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
      uVar22 = (uVar32 ^ uVar25) +
               (uVar17 ^ uVar28) + uVar41 + ((uVar23 | uVar31) & uVar39 | uVar23 & uVar31);
      uVar16 = ((uVar21 ^ uVar19) & uVar20 ^ uVar21) + uVar17 + uVar32 + uVar16;
      uVar18 = uVar19 >> 0xd | uVar19 << 0x13;
      uVar36 = uVar31 * 0x200 | uVar31 >> 0x17;
      uVar19 = uVar22 * 0x1000 | uVar22 >> 0x14;
      uVar16 = (uVar16 >> 0xf | uVar16 * 0x20000) ^ (uVar16 * 0x200 | uVar16 >> 0x17) ^ uVar16;
      uVar17 = uVar29 << 0xf | uVar29 >> 0x11;
      uVar28 = uVar17 ^ uVar24 ^ uVar27;
      uVar31 = uVar16 + 0x4f50f3b1 + uVar19;
      uVar31 = uVar31 * 0x80 | uVar31 >> 0x19;
      uVar41 = uVar23 * 0x200 | uVar23 >> 0x17;
      uVar28 = (uVar31 ^ uVar19) +
               ((uVar22 | uVar23) & uVar36 | uVar22 & uVar23) + uVar39 +
               ((uVar28 << 0xf | uVar28 >> 0x11) ^ (uVar28 >> 9 | uVar28 << 0x17) ^
                (uVar34 << 7 | uVar34 >> 0x19) ^ uVar17 ^ uVar30 ^ uVar40 ^ uVar24 ^ uVar27);
      uVar17 = uVar28 * 0x1000 | uVar28 >> 0x14;
      uVar23 = uVar20 >> 0xd | uVar20 << 0x13;
      uVar21 = ((uVar18 ^ uVar20) & uVar16 ^ uVar18) + uVar31 + uVar30 + uVar21;
      uVar21 = (uVar21 >> 0xf | uVar21 * 0x20000) ^ (uVar21 * 0x200 | uVar21 >> 0x17) ^ uVar21;
      uVar34 = uVar26 << 0xf | uVar26 >> 0x11;
      uVar27 = uVar34 ^ uVar35 ^ uVar14;
      uVar24 = uVar21 + 0x9ea1e762 + uVar17;
      uVar19 = uVar24 * 0x80 | uVar24 >> 0x19;
      uVar24 = uVar22 * 0x200 | uVar22 >> 0x17;
      uVar42 = (uVar19 ^ uVar17) +
               ((uVar28 | uVar22) & uVar41 | uVar28 & uVar22) + uVar36 +
               ((uVar27 << 0xf | uVar27 >> 0x11) ^ (uVar27 >> 9 | uVar27 << 0x17) ^
                (uVar42 << 7 | uVar42 >> 0x19) ^ uVar34 ^ uVar29 ^ uVar32 ^ uVar35 ^ uVar14);
      uVar17 = uVar16 >> 0xd | uVar16 << 0x13;
      uVar14 = uVar42 * 0x1000 | uVar42 >> 0x14;
      uVar18 = ((uVar16 ^ uVar23) & uVar21 ^ uVar23) + uVar19 + uVar29 + uVar18;
      uVar27 = uVar25 << 0xf | uVar25 >> 0x11;
      uVar18 = (uVar18 >> 0xf | uVar18 * 0x20000) ^ (uVar18 * 0x200 | uVar18 >> 0x17) ^ uVar18;
      uVar34 = uVar27 ^ uVar37 ^ uVar15;
      uVar16 = uVar18 + 0x3d43cec5 + uVar14;
      uVar16 = uVar16 * 0x80 | uVar16 >> 0x19;
      uVar23 = ((uVar17 ^ uVar21) & uVar18 ^ uVar17) + uVar16 + uVar26 + uVar23;
      local_5c = local_5c ^ uVar42;
      param_1[1] = local_5c;
      *param_1 = *param_1 ^
                 (uVar16 ^ uVar14) +
                 ((uVar42 | uVar28) & uVar24 | uVar42 & uVar28) + uVar41 +
                 ((uVar34 << 0xf | uVar34 >> 0x11) ^ (uVar34 >> 9 | uVar34 << 0x17) ^
                  (uVar38 << 7 | uVar38 >> 0x19) ^ uVar27 ^ uVar26 ^ uVar30 ^ uVar37 ^ uVar15);
      local_68 = local_68 ^ (uVar28 * 0x200 | uVar28 >> 0x17);
      param_1[2] = local_68;
      local_54 = local_54 ^ uVar24;
      param_1[3] = local_54;
      local_50 = local_50 ^ uVar18;
      uVar33 = (uVar23 >> 0xf | uVar23 * 0x20000) ^ (uVar23 * 0x200 | uVar23 >> 0x17) ^ uVar33 ^
               uVar23;
      param_1[5] = local_50;
      local_60 = local_60 ^ (uVar21 >> 0xd | uVar21 << 0x13);
      param_1[6] = local_60;
      local_4c = local_4c ^ uVar17;
      param_1[4] = uVar33;
      param_1[7] = local_4c;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145500890 FUN_145500890 body=283 status=ok
// SIG undefined FUN_145500890(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145500890(code *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1178 [32];
  undefined1 *local_1158;
  undefined8 local_1150;
  undefined4 local_1148;
  undefined1 *local_1140;
  byte local_1138 [4];
  undefined4 local_1134;
  undefined1 *local_1130;
  undefined8 local_1128 [2];
  undefined1 local_1118 [256];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_10;
  longlong lVar5;
  
  uStack_10 = 0x1455008a5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1178;
  uVar2 = FUN_144e98800();
  iVar3 = FUN_144ba2660(local_1128,&local_1134,&local_1130,local_1138);
  while (iVar3 != 0) {
    FUN_144ba27f0(iVar3,local_1118,0x100);
    local_1140 = &DAT_149e02088;
    if ((local_1138[0] & 2) != 0) {
      local_1140 = local_1130;
    }
    local_1148 = local_1134;
    local_1150 = local_1128[0];
    local_1158 = local_1118;
    FUN_144ec7760(local_1018,0x1000,"%lu:%s:%s:%d:%s\n",uVar2);
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar1 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_1018[lVar1] != '\0');
    iVar3 = (*param_1)(local_1018,lVar4,param_2);
    if (iVar3 < 1) break;
    iVar3 = FUN_144ba2660(local_1128,&local_1134,&local_1130,local_1138);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1178);
}



// FUNCTION 1455009c0 FUN_1455009c0 body=32 status=ok
// SIG undefined FUN_1455009c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455009c0(undefined8 param_1)

{
  FUN_145500890(FUN_1455009e0,param_1);
  return;
}



// FUNCTION 1455009e0 FUN_1455009e0 body=34 status=ok
// SIG undefined FUN_1455009e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1455009e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144b9eb80(param_3,param_1,param_2);
  return;
}



// FUNCTION 145500a10 FUN_145500a10 body=322 status=ok
// SIG undefined FUN_145500a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145500a10(undefined8 param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (iVar1 = FUN_144babbf0(param_2), iVar1 == 0)) {
      FUN_144ec7640(param_1,&DAT_149c02f70,param_3,&DAT_149e02088);
      iVar1 = FUN_144babbf0(param_2);
      if (iVar1 == 0) {
        FUN_144b9ebc0(param_1,"<EMPTY>\n");
      }
    }
    iVar3 = 0;
    iVar1 = FUN_144babbf0(param_2);
    if (0 < iVar1) {
      do {
        if (param_4 == 0) {
          if (0 < iVar3) {
            FUN_144ec7640(param_1,&DAT_149dfd133);
          }
        }
        else {
          FUN_144ec7640(param_1,&DAT_149c02f70,param_3,&DAT_149e02088);
        }
        lVar2 = FUN_144babc00(param_2,iVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
          FUN_144b9ebc0(param_1,*(undefined8 *)(lVar2 + 0x10));
        }
        else if (*(longlong *)(lVar2 + 0x10) == 0) {
          FUN_144b9ebc0(param_1,*(longlong *)(lVar2 + 8));
        }
        else {
          FUN_144ec7640(param_1,"%s:%s");
        }
        if (param_4 != 0) {
          FUN_144b9ebc0(param_1,&DAT_149dfc0af);
        }
        iVar3 = iVar3 + 1;
        iVar1 = FUN_144babbf0(param_2);
      } while (iVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 145500b60 FUN_145500b60 body=592 status=ok
// SIG undefined FUN_145500b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145500b60(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar9;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar10;
  undefined8 local_38;
  longlong local_30;
  undefined4 uVar8;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar7 = 1;
  uVar8 = 1;
  lVar9 = 0;
  local_30 = 0;
  uVar3 = FUN_144ef4430(param_2);
  local_38 = FUN_144f03e90(uVar3);
  uVar1 = FUN_144f03e70(uVar3);
  lVar4 = FUN_14526d210(param_2);
  if (lVar4 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    if ((param_3 & 0xf0000) == 0x10000) {
      FUN_144ec7640(param_1,"%*s<Not Supported>",param_4,&DAT_149e02088);
      return 1;
    }
LAB_145500be3:
    if ((param_3 & 0xf0000) == 0x20000) {
      uVar7 = FUN_1454c9ab0(param_1,local_38,uVar1,param_4,CONCAT44(uVar10,0xffffffff));
    }
    else if ((param_3 & 0xf0000) == 0x30000) {
      uVar7 = FUN_145287ef0(param_1,local_38,uVar1,param_4);
    }
    return uVar7;
  }
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    lVar5 = (**(code **)(lVar4 + 0x20))(0,&local_38,uVar1);
  }
  else {
    uVar3 = (**(code **)(lVar4 + 8))();
    lVar5 = FUN_144eff7f0(0,&local_38,uVar1,uVar3);
  }
  if (lVar5 == 0) {
    if ((param_3 & 0xf0000) == 0) {
      return 0;
    }
    if ((param_3 & 0xf0000) == 0x10000) {
      FUN_144ec7640(param_1,"%*s<Parse Error>",param_4,&DAT_149e02088);
      return 1;
    }
    goto LAB_145500be3;
  }
  if (*(code **)(lVar4 + 0x30) == (code *)0x0) {
    lVar6 = lVar9;
    if (*(code **)(lVar4 + 0x40) == (code *)0x0) {
      if ((*(code **)(lVar4 + 0x50) != (code *)0x0) &&
         (iVar2 = (**(code **)(lVar4 + 0x50))(lVar4,lVar5,param_1,param_4), lVar6 = 0, iVar2 != 0))
      goto LAB_145500d4a;
    }
    else {
      local_30 = (**(code **)(lVar4 + 0x40))(lVar4,lVar5,0);
      if (local_30 != 0) {
        FUN_145500a10(param_1,local_30,param_4,*(uint *)(lVar4 + 4) & 4);
        uVar8 = uVar7;
        goto LAB_145500d4a;
      }
    }
  }
  else {
    lVar6 = (**(code **)(lVar4 + 0x30))(lVar4,lVar5);
    if (lVar6 != 0) {
      FUN_144ec7640(param_1,"%*s%s",param_4,&DAT_149e02088,lVar6);
      lVar9 = lVar6;
      uVar8 = uVar7;
      goto LAB_145500d4a;
    }
  }
  lVar9 = lVar6;
  uVar8 = 0;
LAB_145500d4a:
  FUN_144babe00(local_30,FUN_144ef58f0);
  FUN_144ea6530(lVar9,"crypto\\x509v3\\v3_prn.c",0x82);
  if (*(code **)(lVar4 + 8) == (code *)0x0) {
    (**(code **)(lVar4 + 0x18))(lVar5);
    return uVar8;
  }
  uVar3 = (**(code **)(lVar4 + 8))();
  FUN_144eff330(lVar5,uVar3);
  return uVar8;
}



// FUNCTION 145500db0 FUN_145500db0 body=413 status=ok
// SIG undefined FUN_145500db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145500db0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  
  iVar1 = FUN_144babbf0(param_3);
  if (iVar1 < 1) {
    return 1;
  }
  if (param_2 != 0) {
    FUN_144ec7640(param_1,"%*s%s:\n",param_5,&DAT_149e02088,param_2);
    param_5 = param_5 + 4;
  }
  iVar4 = 0;
  iVar1 = FUN_144babbf0(param_3);
  if (0 < iVar1) {
    do {
      uVar2 = FUN_144babc00(param_3,iVar4);
      if ((param_5 != 0) &&
         (iVar1 = FUN_144ec7640(param_1,&DAT_149c02f70,param_5,&DAT_149e02088), iVar1 < 1)) {
        return 0;
      }
      uVar3 = FUN_144ef4420(uVar2);
      FUN_144ed09c0(param_1,uVar3);
      iVar1 = FUN_144ef4440(uVar2);
      pcVar5 = "";
      if (iVar1 != 0) {
        pcVar5 = "critical";
      }
      iVar1 = FUN_144ec7640(param_1,": %s\n",pcVar5);
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = FUN_145500b60(param_1,uVar2,param_4,param_5 + 4);
      if (iVar1 == 0) {
        FUN_144ec7640(param_1,&DAT_149c02f70,param_5 + 4,&DAT_149e02088);
        uVar2 = FUN_144ef4430(uVar2);
        FUN_1452aafe0(param_1,uVar2);
      }
      iVar1 = FUN_144b9eb80(param_1,&DAT_149dfc0af,1);
      if (iVar1 < 1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_144babbf0(param_3);
    } while (iVar4 < iVar1);
  }
  return 1;
}



// FUNCTION 145500f50 FUN_145500f50 body=433 status=ok
// SIG undefined FUN_145500f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145500f50(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      int param_5,longlong *param_6,int *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar8;
  undefined8 uVar6;
  longlong lVar7;
  int local_28 [2];
  undefined8 uStack_20;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uStack_20 = 0x145500f6e;
  lVar4 = 0;
  lVar3 = FUN_144ba50b0();
  if (lVar3 == 0) {
    uVar6 = CONCAT44(uVar8,0x21);
LAB_145500f94:
    uVar5 = 0x41;
  }
  else {
    lVar7 = lVar3;
    iVar1 = FUN_144edaee0(*param_1,param_2,param_3,param_1[1],lVar3,param_8);
    uVar8 = (undefined4)((ulonglong)lVar7 >> 0x20);
    if (iVar1 == 0) {
      FUN_144ba24f0(0x23,0x77,0x73,"crypto\\pkcs12\\p12_decr.c",CONCAT44(uVar8,0x29));
      goto LAB_1455010dd;
    }
    iVar1 = FUN_144ba3dd0(lVar3);
    lVar4 = FUN_144ea64e0((longlong)(iVar1 + param_5),"crypto\\pkcs12\\p12_decr.c",0x2d);
    if (lVar4 == 0) {
      uVar6 = CONCAT44(uVar8,0x2f);
      goto LAB_145500f94;
    }
    uVar5 = CONCAT44(uVar8,param_5);
    iVar2 = FUN_144ba5050(lVar3,lVar4,local_28,param_4,uVar5);
    iVar1 = local_28[0];
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (iVar2 == 0) {
      FUN_144ea6530(lVar4,"crypto\\pkcs12\\p12_decr.c",0x34);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x36);
      uVar5 = 6;
    }
    else {
      iVar2 = FUN_144ba5080(lVar3,lVar4 + local_28[0],local_28);
      if (iVar2 != 0) {
        if (param_7 != (int *)0x0) {
          *param_7 = local_28[0] + iVar1;
        }
        if (param_6 != (longlong *)0x0) {
          *param_6 = lVar4;
        }
        goto LAB_1455010dd;
      }
      FUN_144ea6530(lVar4,"crypto\\pkcs12\\p12_decr.c",0x3c);
      lVar4 = 0;
      uVar6 = CONCAT44(uVar8,0x3f);
      uVar5 = 0x74;
    }
  }
  FUN_144ba24f0(0x23,0x77,uVar5,"crypto\\pkcs12\\p12_decr.c",uVar6);
LAB_1455010dd:
  FUN_144ba5170(lVar3);
  return lVar4;
}


