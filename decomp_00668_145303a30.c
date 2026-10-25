// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145303a30 FUN_145303a30 body=39 status=ok
// SIG undefined FUN_145303a30(void)

undefined4 *
FUN_145303a30(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  lVar2 = lVar1;
  if (lVar1 < 0) {
    lVar2 = -lVar1;
  }
  *param_2 = 0;
  *param_5 = lVar2;
  *(byte *)(param_5 + 1) = (byte)((ulonglong)lVar1 >> 0x3f);
  return param_2;
}



// FUNCTION 145303a60 FUN_145303a60 body=87 status=ok
// SIG undefined FUN_145303a60(void)

undefined8 FUN_145303a60(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303ac0 FUN_145303ac0 body=73 status=ok
// SIG undefined FUN_145303ac0(void)

undefined4 *
FUN_145303ac0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_5;
  if (uVar1 <= (ulonglong)((char)param_5[1] != '\0') + 0x7fffffffffffffff) {
    if ((char)param_5[1] != '\0') {
      uVar1 = -uVar1;
    }
    *param_3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303b10 FUN_145303b10 body=42 status=ok
// SIG undefined FUN_145303b10(void)

undefined4 *
FUN_145303b10(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_3;
  uVar2 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
          (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
          (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  if ((longlong)uVar2 < 0) {
    uVar2 = -uVar2;
  }
  *param_2 = 0;
  *param_5 = uVar2;
  *(byte *)(param_5 + 1) = (byte)uVar1 >> 7;
  return param_2;
}



// FUNCTION 145303b40 FUN_145303b40 body=87 status=ok
// SIG undefined FUN_145303b40(void)

undefined8 FUN_145303b40(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303ba0 FUN_145303ba0 body=42 status=ok
// SIG undefined FUN_145303ba0(void)

undefined4 *
FUN_145303ba0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((byte)param_5[1] == 0) && ((ulonglong)(byte)*param_5 == *param_5)) {
    *param_3 = (byte)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303bd0 FUN_145303bd0 body=26 status=ok
// SIG undefined FUN_145303bd0(void)

undefined4 *
FUN_145303bd0(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)bVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303bf0 FUN_145303bf0 body=87 status=ok
// SIG undefined FUN_145303bf0(void)

undefined8 FUN_145303bf0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303c50 FUN_145303c50 body=42 status=ok
// SIG undefined FUN_145303c50(void)

undefined4 *
FUN_145303c50(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((byte)param_5[1] == 0) && ((ulonglong)(byte)*param_5 == *param_5)) {
    *param_3 = (byte)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303c80 FUN_145303c80 body=26 status=ok
// SIG undefined FUN_145303c80(void)

undefined4 *
FUN_145303c80(undefined8 param_1,undefined4 *param_2,byte *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  byte bVar1;
  
  bVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)bVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303ca0 FUN_145303ca0 body=87 status=ok
// SIG undefined FUN_145303ca0(void)

undefined8 FUN_145303ca0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303d00 FUN_145303d00 body=43 status=ok
// SIG undefined FUN_145303d00(void)

undefined4 *
FUN_145303d00(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(ushort)*param_5 == *param_5)) {
    *param_3 = (ushort)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303d30 FUN_145303d30 body=26 status=ok
// SIG undefined FUN_145303d30(void)

undefined4 *
FUN_145303d30(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303d50 FUN_145303d50 body=87 status=ok
// SIG undefined FUN_145303d50(void)

undefined8 FUN_145303d50(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303db0 FUN_145303db0 body=47 status=ok
// SIG undefined FUN_145303db0(void)

undefined4 *
FUN_145303db0(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  if (((char)param_5[1] == '\0') && (uVar1 = (ushort)*param_5, (ulonglong)uVar1 == *param_5)) {
    *param_3 = uVar1 >> 8 | uVar1 << 8;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303de0 FUN_145303de0 body=33 status=ok
// SIG undefined FUN_145303de0(void)

undefined4 *
FUN_145303de0(undefined8 param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ushort uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)(ushort)(uVar1 >> 8 | uVar1 << 8);
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303e10 FUN_145303e10 body=87 status=ok
// SIG undefined FUN_145303e10(void)

undefined8 FUN_145303e10(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303e70 FUN_145303e70 body=41 status=ok
// SIG undefined FUN_145303e70(void)

undefined4 *
FUN_145303e70(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  if (((char)param_5[1] == '\0') && ((ulonglong)(uint)*param_5 == *param_5)) {
    *param_3 = (uint)*param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303ea0 FUN_145303ea0 body=25 status=ok
// SIG undefined FUN_145303ea0(void)

undefined4 *
FUN_145303ea0(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303ec0 FUN_145303ec0 body=87 status=ok
// SIG undefined FUN_145303ec0(void)

undefined8 FUN_145303ec0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303f20 FUN_145303f20 body=43 status=ok
// SIG undefined FUN_145303f20(void)

undefined4 *
FUN_145303f20(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  if (((char)param_5[1] == '\0') && (uVar1 = (uint)*param_5, (ulonglong)uVar1 == *param_5)) {
    *param_3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145303f50 FUN_145303f50 body=29 status=ok
// SIG undefined FUN_145303f50(void)

undefined4 *
FUN_145303f50(undefined8 param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  uint uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (ulonglong)
             (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145303f70 FUN_145303f70 body=87 status=ok
// SIG undefined FUN_145303f70(void)

undefined8 FUN_145303f70(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145303fd0 FUN_145303fd0 body=37 status=ok
// SIG undefined FUN_145303fd0(void)

undefined4 *
FUN_145303fd0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  if (*(char *)(param_5 + 1) == '\0') {
    *param_3 = *param_5;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145304000 FUN_145304000 body=25 status=ok
// SIG undefined FUN_145304000(void)

undefined4 *
FUN_145304000(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 145304020 FUN_145304020 body=87 status=ok
// SIG undefined FUN_145304020(void)

undefined8 FUN_145304020(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145304080 FUN_145304080 body=40 status=ok
// SIG undefined FUN_145304080(void)

undefined4 *
FUN_145304080(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  if ((char)param_5[1] == '\0') {
    uVar1 = *param_5;
    *param_3 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18
               | (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 |
               (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1453040b0 FUN_1453040b0 body=28 status=ok
// SIG undefined FUN_1453040b0(void)

undefined4 *
FUN_1453040b0(undefined8 param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  
  uVar1 = *param_3;
  *param_2 = 0;
  *param_5 = uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
             (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 |
             (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  *(undefined1 *)(param_5 + 1) = 0;
  return param_2;
}



// FUNCTION 1453040d0 FUN_1453040d0 body=87 status=ok
// SIG undefined FUN_1453040d0(void)

undefined8 FUN_1453040d0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145304130 FUN_145304130 body=31 status=ok
// SIG undefined FUN_145304130(void)

undefined4 *
FUN_145304130(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined8 param_4,
             double param_5)

{
  *param_2 = 0;
  *param_3 = (short)((uint)(float)param_5 >> 0x10);
  return param_2;
}



// FUNCTION 145304150 FUN_145304150 body=33 status=ok
// SIG undefined FUN_145304150(void)

undefined4 *
FUN_145304150(undefined8 param_1,undefined4 *param_2,short *param_3,undefined8 param_4,
             double *param_5)

{
  short sVar1;
  
  sVar1 = *param_3;
  *param_2 = 0;
  *param_5 = (double)(float)((int)sVar1 << 0x10);
  return param_2;
}



// FUNCTION 145304180 FUN_145304180 body=97 status=ok
// SIG undefined FUN_145304180(void)

undefined8 * FUN_145304180(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkReflect::Detail::EndianFloatImplN<hkHalf16,hkEndian::EndianType<hkHalf16,1>_>::
             vftable;
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453041f0 FUN_1453041f0 body=305 status=ok
// SIG undefined FUN_1453041f0(void)

int FUN_1453041f0(undefined8 param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined1 local_res10 [8];
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  if ((((*(longlong *)(param_2 + 0x14) == 0) && (*(longlong *)(param_2 + 0x16) == 0)) ||
      ((*(longlong *)(param_3 + 0x14) == 0 && (*(longlong *)(param_3 + 0x16) == 0)))) &&
     ((DAT_14c783c70 == (longlong *)0x0 ||
      (pcVar3 = (char *)(**(code **)(*DAT_14c783c70 + 0x28))(DAT_14c783c70,local_res10,0),
      *pcVar3 != '\0')))) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,
                  "The time of allocations was not captured, sorting by allocation number only");
    FUN_144bfc0d0(0,local_208,"Memory\\Debug\\hkMemorySnapshot.cpp",0x7ff);
    if (DAT_14c783c70 != (longlong *)0x0) {
      (**(code **)(*DAT_14c783c70 + 0x20))(DAT_14c783c70,0,0);
    }
    FUN_144bde6e0(local_218);
  }
  if ((*(longlong *)(param_2 + 0x14) != 0) && (*(longlong *)(param_3 + 0x14) != 0)) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x14) + 0x18);
    uVar2 = *(ulonglong *)(*(longlong *)(param_3 + 0x14) + 0x18);
    if (uVar2 < uVar1) {
      return 1;
    }
    if (uVar1 < uVar2) {
      return -(uint)(uVar1 < uVar2);
    }
  }
  return *param_2 - *param_3;
}



// FUNCTION 1453043b0 FUN_1453043b0 body=31 status=ok
// SIG undefined FUN_1453043b0(void)

undefined8 * FUN_1453043b0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkStreamReader::vftable;
  return param_1;
}



// FUNCTION 1453043d0 FUN_1453043d0 body=11 status=ok
// SIG undefined FUN_1453043d0(void)

void FUN_1453043d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1453043e0 FUN_1453043e0 body=117 status=ok
// SIG undefined FUN_1453043e0(void)

longlong FUN_1453043e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_208 [512];
  
  for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 - lVar1) {
    uVar3 = uVar2;
    if (0x200 < uVar2) {
      uVar3 = 0x200;
    }
    lVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_208,uVar3);
    if (lVar1 == 0) break;
  }
  return param_2 - uVar2;
}



// FUNCTION 145304460 FUN_145304460 body=3 status=ok
// SIG undefined FUN_145304460(void)

undefined8 FUN_145304460(void)

{
  return 0;
}



// FUNCTION 145304470 FUN_145304470 body=3 status=ok
// SIG undefined FUN_145304470(void)

undefined8 FUN_145304470(void)

{
  return 0;
}



// FUNCTION 145304480 FUN_145304480 body=3 status=ok
// SIG undefined FUN_145304480(void)

undefined8 FUN_145304480(void)

{
  return 0;
}



// FUNCTION 145304490 FUN_145304490 body=71 status=ok
// SIG undefined FUN_145304490(void)

undefined8 * FUN_145304490(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453044e0 FUN_1453044e0 body=31 status=ok
// SIG undefined FUN_1453044e0(void)

undefined8 * FUN_1453044e0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkSeekableStreamReader::vftable;
  return param_1;
}



// FUNCTION 145304500 FUN_145304500 body=11 status=ok
// SIG undefined FUN_145304500(void)

void FUN_145304500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145304510 FUN_145304510 body=4 status=ok
// SIG undefined FUN_145304510(void)

undefined8 FUN_145304510(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 145304520 FUN_145304520 body=71 status=ok
// SIG undefined FUN_145304520(void)

undefined8 * FUN_145304520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 145304570 FUN_145304570 body=666 status=ok
// SIG undefined FUN_145304570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_145304570(float *param_1,undefined4 *param_2,undefined1 (*param_3) [16],float *param_4)

{
  float fVar1;
  float fVar2;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  fVar18 = *(float *)param_3[1];
  fVar20 = *(float *)(param_3[1] + 4);
  fVar21 = *(float *)(param_3[1] + 8);
  fVar22 = *(float *)(param_3[1] + 0xc);
  auVar19 = *param_3;
  fVar1 = auVar19._0_4_;
  fVar2 = auVar19._4_4_;
  fVar3 = auVar19._8_4_;
  fVar4 = auVar19._12_4_;
  fVar5 = *(float *)param_3[2];
  fVar6 = *(float *)(param_3[2] + 4);
  fVar7 = *(float *)(param_3[2] + 8);
  fVar8 = *(float *)(param_3[2] + 0xc);
  fVar9 = *(float *)param_3[3];
  fVar10 = *(float *)(param_3[3] + 4);
  fVar11 = *(float *)(param_3[3] + 8);
  fVar12 = *(float *)(param_3[3] + 0xc);
  fVar47 = fVar10 * fVar8 - fVar12 * fVar6;
  fVar48 = fVar11 * fVar5 - fVar9 * fVar7;
  fVar49 = fVar12 * fVar6 - fVar10 * fVar8;
  fVar50 = fVar9 * fVar7 - fVar11 * fVar5;
  fVar39 = fVar11 * fVar6 - fVar7 * fVar10;
  fVar40 = fVar12 * fVar7 - fVar8 * fVar11;
  fVar41 = fVar9 * fVar8 - fVar5 * fVar12;
  fVar42 = fVar10 * fVar5 - fVar6 * fVar9;
  fVar43 = fVar12 * fVar7 - fVar8 * fVar11;
  fVar44 = fVar9 * fVar8 - fVar5 * fVar12;
  fVar45 = fVar10 * fVar5 - fVar6 * fVar9;
  fVar46 = fVar11 * fVar6 - fVar7 * fVar10;
  fVar35 = fVar20 * fVar43 + fVar21 * fVar47 + fVar22 * fVar39;
  fVar36 = fVar21 * fVar44 + fVar22 * fVar48 + fVar18 * fVar40;
  fVar37 = fVar22 * fVar45 + fVar18 * fVar49 + fVar20 * fVar41;
  fVar38 = fVar18 * fVar46 + fVar20 * fVar50 + fVar21 * fVar42;
  fVar14 = fVar2 * fVar36;
  fVar16 = fVar4 * fVar38;
  fVar13 = -(fVar1 * fVar35);
  fVar15 = -(fVar3 * fVar37);
  fVar17 = fVar14 + fVar13;
  fVar13 = fVar13 + fVar14;
  fVar14 = fVar16 + fVar15;
  fVar15 = fVar15 + fVar16;
  fVar16 = fVar14 + fVar17;
  if (*param_4 < ABS(fVar16)) {
    *param_2 = 0;
    fVar23 = fVar4 * fVar20 - fVar2 * fVar22;
    fVar24 = fVar1 * fVar21 - fVar3 * fVar18;
    fVar25 = fVar2 * fVar22 - fVar4 * fVar20;
    fVar26 = fVar3 * fVar18 - fVar1 * fVar21;
    fVar31 = fVar2 * fVar21 - fVar3 * fVar20;
    fVar32 = fVar3 * fVar22 - fVar4 * fVar21;
    fVar33 = fVar4 * fVar18 - fVar1 * fVar22;
    fVar34 = fVar1 * fVar20 - fVar2 * fVar18;
    fVar27 = fVar3 * fVar22 - fVar4 * fVar21;
    fVar28 = fVar4 * fVar18 - fVar1 * fVar22;
    fVar29 = fVar1 * fVar20 - fVar2 * fVar18;
    fVar30 = fVar2 * fVar21 - fVar3 * fVar20;
    auVar19._4_4_ = fVar15 + fVar13;
    auVar19._0_4_ = fVar16;
    auVar19._8_4_ = fVar17 + fVar14;
    auVar19._12_4_ = fVar13 + fVar15;
    auVar19 = divps(_DAT_14c6daca0,auVar19);
    fVar18 = auVar19._0_4_;
    fVar20 = auVar19._4_4_;
    fVar21 = auVar19._8_4_;
    fVar22 = auVar19._12_4_;
    *param_1 = -fVar35 * fVar18;
    param_1[1] = (fVar3 * fVar47 + fVar2 * fVar43 + fVar4 * fVar39) * fVar18;
    param_1[2] = -(fVar11 * fVar23 + fVar10 * fVar27 + fVar12 * fVar31) * fVar18;
    param_1[3] = (fVar7 * fVar23 + fVar27 * fVar6 + fVar8 * fVar31) * fVar18;
    param_1[8] = -fVar37 * fVar21;
    param_1[9] = (fVar1 * fVar49 + fVar4 * fVar45 + fVar2 * fVar41) * fVar21;
    param_1[10] = -(fVar9 * fVar25 + fVar12 * fVar29 + fVar10 * fVar33) * fVar21;
    param_1[0xb] = (fVar5 * fVar25 + fVar29 * fVar8 + fVar6 * fVar33) * fVar21;
    param_1[4] = fVar36 * fVar20;
    param_1[5] = -(fVar4 * fVar48 + fVar3 * fVar44 + fVar1 * fVar40) * fVar20;
    param_1[6] = (fVar12 * fVar24 + fVar11 * fVar28 + fVar9 * fVar32) * fVar20;
    param_1[7] = -(fVar8 * fVar24 + fVar28 * fVar7 + fVar5 * fVar32) * fVar20;
    param_1[0xc] = fVar38 * fVar22;
    param_1[0xd] = -(fVar2 * fVar50 + fVar1 * fVar46 + fVar3 * fVar42) * fVar22;
    param_1[0xe] = (fVar10 * fVar26 + fVar9 * fVar30 + fVar11 * fVar34) * fVar22;
    param_1[0xf] = -(fVar6 * fVar26 + fVar30 * fVar5 + fVar7 * fVar34) * fVar22;
  }
  else {
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 145304810 FUN_145304810 body=1256 status=ok
// SIG undefined FUN_145304810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_145304810(double *param_1,undefined4 *param_2,undefined1 (*param_3) [16],double *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [12];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar53;
  undefined1 auVar49 [16];
  double dVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar61;
  undefined1 auVar60 [16];
  double dVar62;
  double dStack_1b8;
  double dStack_178;
  double dStack_158;
  double dStack_148;
  double dStack_138;
  double dStack_128;
  double local_100;
  double dStack_f8;
  undefined4 local_f0;
  undefined1 auStack_ec [12];
  
  dVar27 = *(double *)param_3[7];
  dVar34 = *(double *)(param_3[7] + 8);
  dVar35 = *(double *)param_3[6];
  dVar37 = *(double *)(param_3[6] + 8);
  dVar4 = *(double *)param_3[2];
  dVar13 = *(double *)(param_3[2] + 8);
  dVar5 = *(double *)param_3[3];
  dVar15 = *(double *)(param_3[3] + 8);
  auVar1 = param_3[5];
  dVar38 = *(double *)*(undefined1 (*) [12])(param_3[4] + 8);
  auVar36 = *(undefined1 (*) [12])(param_3[4] + 8);
  dVar19 = auVar1._0_8_;
  dVar45 = *(double *)param_3[4];
  dVar21 = auVar1._8_8_;
  dVar44 = dVar27 * dVar38;
  dVar9 = dVar34 * dVar19;
  auVar46._8_4_ = SUB84(dVar9,0);
  auVar46._0_8_ = dVar44;
  auVar46._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar43 = auVar46._8_8_ - dVar27 * dVar21;
  dVar52 = dVar35 * dVar21 - dVar34 * dVar45;
  auVar16._8_4_ = SUB84(dVar45,0);
  auVar16._0_8_ = dVar21;
  auVar16._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  local_f0 = auVar1._8_4_;
  auStack_ec = auVar16._4_12_;
  dVar18 = dVar37 * dVar21 - dVar34 * dVar38;
  dVar20 = dVar27 * dVar45 - dVar35 * dVar19;
  auVar60._12_4_ = auVar1._4_4_;
  auVar60._0_12_ = auVar36;
  local_100 = auVar36._0_8_;
  dStack_f8 = auVar60._8_8_;
  dVar12 = dVar35 * dVar21 - dVar34 * dVar45;
  dVar14 = dVar37 * dVar45 - dVar35 * dVar38;
  uVar57 = SUB84(dVar14,0);
  uVar58 = (undefined4)((ulonglong)dVar14 >> 0x20);
  auVar17._8_4_ = SUB84(dVar20,0);
  auVar17._0_8_ = dVar18;
  auVar17._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  dVar8 = dVar44 - dVar37 * dVar19;
  dVar9 = dVar9 - dVar27 * dVar21;
  uVar55 = SUB84(dVar9,0);
  uVar56 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar24 = dVar37 * dVar45 - dVar35 * dVar38;
  dVar44 = dVar44 - dVar37 * dVar19;
  dVar34 = dVar34 * dVar38 - dVar37 * dVar21;
  dVar35 = dVar35 * dVar19 - dVar27 * dVar45;
  auVar10._8_4_ = uVar57;
  auVar10._0_8_ = dVar12;
  auVar10._12_4_ = uVar58;
  auVar22._8_4_ = SUB84(dVar44,0);
  auVar22._0_8_ = dVar24;
  auVar22._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar47._8_4_ = uVar55;
  auVar47._0_8_ = dVar8;
  auVar47._12_4_ = uVar56;
  dVar27 = dVar13 * dVar43 + dVar5 * dVar18 + dVar8 * dVar15;
  dVar20 = dVar5 * dVar52 + dVar15 * dVar20 + auVar47._8_8_ * dVar4;
  auVar48._8_4_ = uVar57;
  auVar48._0_8_ = dVar12;
  auVar48._12_4_ = uVar58;
  auVar6._8_4_ = uVar55;
  auVar6._0_8_ = dVar8;
  auVar6._12_4_ = uVar56;
  auVar60 = *param_3;
  dVar37 = *(double *)param_3[1];
  dVar38 = *(double *)(param_3[1] + 8);
  dVar9 = auVar60._0_8_;
  dVar14 = auVar60._8_8_;
  dVar19 = dVar15 * dVar24 + dVar4 * dVar34 + dVar12 * dVar13;
  dVar21 = dVar4 * dVar44 + dVar13 * dVar35 + auVar48._8_8_ * dVar5;
  dVar44 = -(dVar9 * dVar27) + dVar14 * dVar20;
  dVar53 = dVar38 * dVar21 + -(dVar37 * dVar19);
  dVar45 = dVar53 + dVar44;
  dVar44 = dVar44 + dVar53;
  auVar2._8_4_ = SUB84(dVar44,0);
  auVar2._0_8_ = dVar45;
  auVar2._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  if (*param_4 < ABS(dVar45)) {
    dVar44 = dVar14 * *(double *)param_3[2];
    dVar53 = dVar37 * *(double *)(param_3[2] + 8);
    dVar31 = dVar5 * dVar14;
    dVar32 = dVar15 * dVar37;
    auVar30._8_4_ = SUB84(dVar32,0);
    auVar30._0_8_ = dVar31;
    auVar30._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    dStack_1b8 = auVar30._8_8_;
    auVar49._8_4_ = auVar60._0_4_;
    auVar49._0_8_ = dVar38;
    auVar49._12_4_ = auVar60._4_4_;
    dVar45 = dVar38 * *(double *)param_3[3];
    dVar54 = auVar49._8_8_ * *(double *)(param_3[3] + 8);
    dVar39 = *(double *)param_3[7];
    dVar40 = *(double *)(param_3[7] + 8);
    dVar32 = dVar32 - dVar45;
    dVar33 = dVar4 * dVar38 - dVar54;
    auVar23._8_4_ = auVar60._0_4_;
    auVar23._0_8_ = dVar38;
    auVar23._12_4_ = auVar60._4_4_;
    dVar25 = dVar38 * dVar13 - dVar14 * dVar15;
    dVar26 = dVar9 * dVar5 - dVar37 * dVar4;
    dVar28 = dVar14 * dVar15 - dVar38 * dVar13;
    dVar29 = dVar37 * dVar4 - dVar9 * dVar5;
    dVar54 = dVar4 * dVar38 - dVar54;
    dVar61 = dVar13 * dVar9 - dVar44;
    dVar41 = *(double *)(param_3[6] + 8);
    auVar60 = divpd(_DAT_14c6db120,auVar2);
    dVar5 = dVar31 - dVar53;
    dStack_1b8 = dStack_1b8 - dVar45;
    dVar59 = auVar60._0_8_;
    dVar62 = auVar60._8_8_;
    dStack_158 = auVar6._8_8_;
    dStack_178 = auVar17._8_8_;
    dStack_128 = auVar10._8_8_;
    dVar45 = *(double *)param_3[6];
    dVar44 = dVar13 * dVar9 - dVar44;
    dVar31 = dVar31 - dVar53;
    dStack_148 = auVar23._8_8_;
    dStack_138 = auVar22._8_8_;
    auVar3._8_4_ = SUB84(dStack_1b8,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = (int)((ulonglong)dStack_1b8 >> 0x20);
    dStack_1b8 = auVar3._8_8_;
    dVar13 = -(dVar39 * dVar25 + dVar41 * dVar32 + dVar40 * dVar5) * dVar59;
    dVar15 = (dVar40 * dVar26 + dVar39 * dVar33 + dVar45 * dStack_1b8) * dVar62;
    auVar42._4_12_ = auStack_ec;
    auVar42._0_4_ = local_f0;
    auVar50._8_4_ = local_f0;
    auVar50._0_8_ = dStack_f8;
    auVar50._12_4_ = auVar1._12_4_;
    dVar4 = auVar16._8_8_;
    auVar36._4_8_ = dVar4 * dStack_1b8;
    auVar36._0_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar51._0_8_ = auVar36._0_8_ << 0x20;
    auVar51._8_4_ = SUB84(dVar15,0);
    auVar51._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar53 = (dVar32 * local_100 + dStack_f8 * dVar25 + auVar50._8_8_ * dVar5) * dVar59;
    dVar5 = (dVar44 * auVar42._0_8_ + dVar28 * dVar4 + local_100 * dVar54) * dVar59;
    dVar15 = -(dVar31 * dVar4 + dVar29 * local_100 + dStack_f8 * dVar61) * dVar62;
    *param_1 = -dVar27 * dVar59;
    param_1[1] = (dVar37 * dVar18 + dVar14 * dVar43 + dVar38 * dVar8) * dVar59;
    auVar11._8_4_ = SUB84(dVar53,0);
    auVar11._0_8_ = dVar13;
    auVar11._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 2) = auVar11;
    *param_2 = 0;
    param_1[4] = dVar20 * dVar62;
    param_1[5] = -(dVar38 * dStack_178 + dVar37 * dVar52 + dVar9 * dStack_158) * dVar62;
    param_1[8] = -dVar19 * dVar59;
    param_1[9] = (dVar9 * dVar34 + dVar38 * dVar24 + dVar14 * dVar12) * dVar59;
    param_1[0xc] = dVar21 * dVar62;
    param_1[0xd] = -(dVar14 * dVar35 + dStack_148 * dStack_138 + dVar37 * dStack_128) * dVar62;
    param_1[6] = auVar51._8_8_;
    param_1[7] = -(dVar33 * dStack_f8 + auVar42._0_8_ * dVar26 + dVar4 * dStack_1b8) * dVar62;
    auVar7._8_4_ = SUB84(dVar5,0);
    auVar7._0_8_ = -(dVar45 * dVar28 + dVar40 * dVar44 + dVar41 * dVar54) * dVar59;
    auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 10) = auVar7;
    auVar1._8_4_ = SUB84(dVar15,0);
    auVar1._0_8_ = (dVar41 * dVar29 + dVar45 * dVar31 + dVar39 * dVar61) * dVar62;
    auVar1._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0xe) = auVar1;
  }
  else {
    *param_2 = 0x80040200;
  }
  return param_2;
}



// FUNCTION 145304d00 FUN_145304d00 body=152 status=ok
// SIG undefined FUN_145304d00(void)

void FUN_145304d00(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *(int *)(*(longlong *)*param_1 + 0x10 + (longlong)(int)param_1[1] * 0x18) =
       (int)((longlong *)*param_1)[0x1b];
  *(int *)(*(longlong *)*param_1 + 0x14 + (longlong)(int)param_1[1] * 0x18) =
       (int)((longlong *)*param_1)[0x1b];
  lVar1 = *param_1;
  iVar4 = *(int *)(lVar1 + 0xd8) + 1;
  if ((int)(*(uint *)(lVar1 + 0xdc) & 0x7fffffff) < iVar4) {
    FUN_144bfbfc0((longlong *)(lVar1 + 0xd0),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(lVar1 + 0xd8) * 0x10 + *(longlong *)(lVar1 + 0xd0));
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar2;
  }
  *(int *)(lVar1 + 0xd8) = iVar4;
  return;
}



// FUNCTION 145304da0 FUN_145304da0 body=234 status=ok
// SIG undefined FUN_145304da0(void)

void FUN_145304da0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  
  *(int *)(*(longlong *)*param_1 + 0x10 + (longlong)(int)param_1[1] * 0x18) =
       (int)((longlong *)*param_1)[0x1b];
  *(int *)(*(longlong *)*param_1 + 0x14 + (longlong)(int)param_1[1] * 0x18) =
       (int)(param_2[1] - *param_2 >> 4) + (int)((longlong *)*param_1)[0x1b];
  lVar2 = *param_1;
  puVar7 = (undefined8 *)*param_2;
  uVar8 = param_2[1] - (longlong)puVar7 >> 4;
  iVar1 = *(int *)(lVar2 + 0xd8);
  iVar3 = (int)uVar8;
  iVar9 = iVar1 + iVar3;
  if ((int)(*(uint *)(lVar2 + 0xdc) & 0x7fffffff) < iVar9) {
    FUN_144f5a870((longlong *)(lVar2 + 0xd0),&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  if (0 < iVar3) {
    uVar8 = uVar8 & 0xffffffff;
    puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar2 + 0xd0));
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = *puVar7;
        uVar5 = puVar7[1];
        puVar7 = puVar7 + 2;
        *puVar6 = uVar4;
        puVar6[1] = uVar5;
      }
      uVar8 = uVar8 - 1;
      puVar6 = puVar6 + 2;
    } while (uVar8 != 0);
  }
  *(int *)(lVar2 + 0xd8) = iVar9;
  return;
}



// FUNCTION 145304e90 FUN_145304e90 body=125 status=ok
// SIG undefined FUN_145304e90(void)

undefined8 * FUN_145304e90(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      iVar1 = FUN_144bfb930(*(undefined8 *)(lVar3 + *param_1),param_3);
      if (iVar1 == 0) {
        *(int *)(param_2 + 1) = iVar2;
        goto LAB_145304ee6;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (iVar2 < (int)param_1[1]);
  }
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
LAB_145304ee6:
  *param_2 = param_1;
  return param_2;
}



// FUNCTION 145304f10 FUN_145304f10 body=28 status=ok
// SIG undefined FUN_145304f10(void)

undefined8 * FUN_145304f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 145304f30 FUN_145304f30 body=304 status=ok
// SIG undefined FUN_145304f30(void)

ulonglong FUN_145304f30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong in_RAX;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  longlong local_18;
  longlong lStack_10;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == lVar2) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_18 = *param_1;
  lStack_10 = param_1[1];
  lVar4 = FUN_145305f60(&local_18,0x2c);
  local_18 = lVar1;
  lStack_10 = lVar4;
  pcVar5 = (char *)FUN_145305f60(&local_18,0x28);
  if (lVar4 == lVar2) {
    local_18 = 0;
    lStack_10 = 0;
  }
  else {
    local_18 = lVar4 + 1;
    lStack_10 = lVar2;
  }
  *param_1 = local_18;
  param_1[1] = lStack_10;
  param_1[2] = lVar1;
  param_1[3] = (longlong)pcVar5;
  pcVar7 = (char *)param_1[2];
  pcVar6 = (char *)param_1[3];
  if (pcVar6 != pcVar7) {
    do {
      pcVar3 = pcVar6;
      if ((*pcVar7 != ' ') && (1 < (byte)(*pcVar7 - 9U))) break;
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 != pcVar6);
    do {
      pcVar6 = pcVar3;
      if (pcVar6 == pcVar7) break;
      pcVar3 = pcVar6 + -1;
    } while ((pcVar6[-1] == ' ') || ((byte)(pcVar6[-1] - 9U) < 2));
  }
  param_1[2] = (longlong)pcVar7;
  param_1[3] = (longlong)pcVar6;
  if (*pcVar5 != '\0') {
    param_1[4] = (longlong)pcVar5;
    param_1[5] = lVar4;
    while (lVar4 != param_1[4]) {
      if ((*(char *)(lVar4 + -1) != ' ') &&
         (pcVar6 = (char *)0x0, 1 < (byte)(*(char *)(lVar4 + -1) - 9U))) break;
      pcVar6 = (char *)0x0;
      lVar4 = lVar4 + -1;
    }
    param_1[4] = param_1[4];
    param_1[5] = lVar4;
  }
  return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
}



// FUNCTION 145305060 FUN_145305060 body=602 status=ok
// SIG undefined FUN_145305060(void)

undefined4 *
FUN_145305060(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uStack_2c;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  if (*(char **)(param_1 + 0x10) == pcVar9) {
    FUN_144be06b0(param_4,"Empty attribute name",0xffffffff);
    *param_2 = 0x80040200;
    return param_2;
  }
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  iVar11 = auVar1._8_4_;
  uStack_2c = auVar1._12_4_;
  pcVar7 = auVar1._0_8_;
  if (pcVar7 != pcVar9) {
    do {
      cVar2 = *pcVar7;
      if (((cVar2 != '_') && (0x19 < (byte)(cVar2 + 0xbfU))) && (0x19 < (byte)(cVar2 + 0x9fU))) {
        pcVar7 = (char *)0x0;
        pcVar12 = (char *)0x0;
LAB_14530525a:
        FUN_144be06b0(param_4,"Invalid attribute identifier in attribute name: ",0xffffffff);
        FUN_144be0720(param_4,pcVar7,(int)pcVar12 - (int)pcVar7);
        *param_2 = 0x80040200;
        return param_2;
      }
      iVar14 = 1;
      iVar8 = (int)pcVar9;
      iVar10 = iVar8 - (int)pcVar7;
      lVar13 = 1;
      if (1 < (longlong)iVar10) {
        do {
          uVar6 = (byte)pcVar7[lVar13] - 0x41;
          if (((0x39 < (byte)uVar6) || ((0x3ffffff43ffffffU >> ((ulonglong)uVar6 & 0x3f) & 1) == 0))
             && (9 < (byte)(pcVar7[lVar13] - 0x30U))) {
            pcVar12 = pcVar9 + -(longlong)(iVar10 - iVar14);
            goto LAB_14530514a;
          }
          iVar14 = iVar14 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar10);
      }
      auVar1._8_4_ = iVar11;
      auVar1._0_8_ = pcVar7;
      auVar1._12_4_ = uStack_2c;
      pcVar12 = auVar1._8_8_;
LAB_14530514a:
      if (pcVar7 == pcVar12) goto LAB_14530525a;
      iVar11 = (int)pcVar12 - (int)pcVar7;
      pcVar12 = pcVar7 + iVar11;
      uStack_2c = (undefined4)((ulonglong)pcVar9 >> 0x20);
      if (((iVar8 - (int)pcVar12 < 3) || (*pcVar12 != ':')) || (pcVar12[1] != ':')) {
        if ((iVar8 - (int)pcVar12 < 2) || (*pcVar12 != '.')) {
          if (pcVar12 != pcVar9) {
            FUN_144be06b0(param_4,"Invalid attribute name: ",0xffffffff);
            FUN_144be0720(param_4,pcVar7,iVar11);
            *param_2 = 0x80040200;
            return param_2;
          }
          break;
        }
        do {
          pcVar12 = pcVar12 + 1;
          pcVar7 = pcVar12;
          if (pcVar12 == pcVar9) break;
        } while ((*pcVar12 == ' ') || ((byte)(*pcVar12 - 9U) < 2));
      }
      else {
        for (pcVar7 = pcVar12 + 2;
            (pcVar7 != pcVar9 && ((*pcVar7 == ' ' || ((byte)(*pcVar7 - 9U) < 2))));
            pcVar7 = pcVar7 + 1) {
        }
      }
      auVar3._8_4_ = iVar8;
      auVar3._0_8_ = pcVar7;
      auVar3._12_4_ = uStack_2c;
      pcVar9 = auVar3._8_8_;
      iVar11 = iVar8;
    } while (pcVar7 != pcVar9);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = 0;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  return param_2;
}



// FUNCTION 1453052c0 FUN_1453052c0 body=106 status=ok
// SIG undefined FUN_1453052c0(void)

int * FUN_1453052c0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  piVar1 = (int *)FUN_145305060(0,local_res20,&local_18,param_3);
  if (*piVar1 < 0) {
    *param_2 = *piVar1;
    return param_2;
  }
  FUN_144be06b0(param_3,local_18,(int)uStack_10 - (int)local_18);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145305330 FUN_145305330 body=3120 status=ok
// SIG undefined FUN_145305330(void)

int * FUN_145305330(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  char *pcVar20;
  uint local_res8 [2];
  int *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  char *local_648;
  char *pcStack_640;
  int local_638 [2];
  longlong local_630;
  char *local_628;
  char *pcStack_620;
  char *local_618;
  char *pcStack_610;
  char *local_608;
  char *pcStack_600;
  longlong *local_5f8;
  int local_5f0;
  char *local_5e8;
  char *pcStack_5e0;
  char *local_5d8;
  char *local_5d0;
  char *local_5c8;
  undefined8 *local_5b8;
  undefined8 uStack_5b0;
  char *local_5a8;
  char *pcStack_5a0;
  char *local_598;
  char *pcStack_590;
  char *local_588;
  char *pcStack_580;
  char *local_578;
  uint local_570;
  uint local_56c;
  char local_568 [512];
  undefined1 *local_368;
  uint local_360;
  uint local_35c;
  undefined1 local_358 [512];
  char *local_158;
  int local_150;
  uint local_14c;
  char local_148 [264];
  
  pcVar13 = *(char **)(param_1 + 0x20);
  uVar14 = 0;
  pcVar8 = *(char **)(param_1 + 0x28);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (pcVar13 == pcVar8) {
LAB_145305d72:
    piVar6 = local_res10;
    iVar7 = 0;
    if (0 < (int)param_3[1]) {
      do {
        puVar4 = (undefined8 *)(*param_3 + (longlong)iVar7 * 0x18);
        if ((((*(byte *)(*param_3 + 0xc + (longlong)iVar7 * 0x18) & 1) == 0) &&
            (*(int *)(puVar4 + 1) != -1)) && (*(int *)(puVar4 + 2) < 0)) {
          FUN_144bdff80(param_4,"Missing value for field \'%s\'",*puVar4);
          *piVar6 = -0x7ffbfe00;
          return piVar6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_3[1]);
    }
    *local_res10 = 0;
    param_2 = local_res10;
  }
  else {
    if (*pcVar13 == '(') {
      pcVar20 = pcVar13 + 1;
      local_628 = pcVar20;
      pcStack_620 = pcVar8;
      local_618 = pcVar20;
      pcStack_610 = pcVar8;
      local_5d8 = pcVar20;
      pcVar2 = (char *)FUN_145305f60(&local_628,0x29);
      if (pcVar2 != pcVar8) {
        if (pcVar2 != pcVar8 + -1) goto LAB_1453053c9;
        pcVar8 = pcVar13 + (longlong)(((int)pcVar8 - (int)pcVar13) + -2) + 1;
        goto LAB_1453053d9;
      }
    }
    else {
LAB_1453053c9:
      pcVar20 = *(char **)(param_1 + 0x20);
      local_5d8 = pcVar20;
LAB_1453053d9:
      if (pcVar20 != (char *)0x0) {
        local_360 = 0;
        local_368 = local_358;
        local_35c = 0x80000020;
        pcVar3 = pcVar8;
        uVar16 = uVar14;
        pcVar13 = pcVar20;
        pcVar2 = pcStack_620;
        while (pcStack_620 = pcVar3, pcVar13 != pcVar8) {
          uVar15 = (uint)uVar16;
          local_628 = pcVar13;
          local_618 = pcVar13;
          pcStack_610 = pcStack_620;
          pcVar3 = (char *)FUN_145305f60(&local_628,0x2c);
          uVar10 = uVar15 + 1;
          local_608 = pcVar13;
          pcStack_600 = pcVar3;
          if ((int)(local_35c & 0x7fffffff) < (int)uVar10) {
            FUN_144bfbfc0(&local_368,&PTR_vftable_14c6e47a0,(longlong)(int)uVar10);
            uVar15 = local_360;
          }
          puVar4 = (undefined8 *)(local_368 + (longlong)(int)uVar15 * 0x10);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = local_608;
            puVar4[1] = pcStack_600;
          }
          local_360 = uVar10;
          uVar16 = (ulonglong)uVar10;
          pcVar2 = pcStack_620;
          if (pcVar3 == pcVar8) break;
          pcVar13 = pcVar3 + 1;
          pcVar3 = pcStack_610;
        }
        pcStack_620 = pcVar2;
        local_570 = 0;
        pcVar13 = local_568;
        local_56c = 0x80000020;
        local_res8[0] = 0;
        iVar7 = (int)uVar16;
        local_578 = pcVar13;
        if (0 < iVar7) {
          local_630 = 0;
          uVar17 = uVar14;
          do {
            lVar19 = local_630;
            uVar15 = (uint)uVar17;
            puVar4 = (undefined8 *)(local_368 + local_630);
            local_5b8 = (undefined8 *)*puVar4;
            uStack_5b0 = puVar4[1];
            pcVar2 = (char *)FUN_145305f60(&local_5b8,0x3d);
            pcVar20 = (char *)puVar4[1];
            if (pcVar2 == pcVar20) {
              local_628 = (char *)*puVar4;
              if (pcVar20 != local_628) {
                do {
                  pcVar2 = pcVar20;
                  if ((*local_628 != ' ') && (1 < (byte)(*local_628 - 9U))) break;
                  local_628 = local_628 + 1;
                } while (local_628 != pcVar20);
                do {
                  pcVar20 = pcVar2;
                  if (pcVar20 == local_628) break;
                  pcVar2 = pcVar20 + -1;
                } while ((pcVar20[-1] == ' ') || ((byte)(pcVar20[-1] - 9U) < 2));
              }
              uVar12 = (uint)uVar14 + 1;
              uVar10 = (uint)uVar14;
              pcStack_620 = pcVar20;
              if ((int)(local_56c & 0x7fffffff) < (int)uVar12) {
                FUN_144bfbfc0(&local_578,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
                uVar16 = (ulonglong)local_360;
                pcVar13 = local_578;
                uVar10 = local_570;
              }
              plVar5 = (longlong *)(pcVar13 + (longlong)(int)uVar10 * 0x10);
              local_570 = uVar12;
              if (plVar5 != (longlong *)0x0) {
                *plVar5 = (longlong)local_628;
                plVar5[1] = (longlong)pcStack_620;
                uVar16 = (ulonglong)local_360;
                pcVar13 = local_578;
              }
            }
            else {
              local_608 = (char *)*puVar4;
              pcStack_600 = pcVar2;
              if (pcVar2 != local_608) {
                do {
                  pcVar13 = pcVar2;
                  if ((*local_608 != ' ') && (1 < (byte)(*local_608 - 9U))) break;
                  local_608 = local_608 + 1;
                } while (local_608 != pcVar2);
                do {
                  pcStack_600 = pcVar13;
                  if (pcStack_600 == local_608) break;
                  pcVar13 = pcStack_600 + -1;
                } while ((pcStack_600[-1] == ' ') || ((byte)(pcStack_600[-1] - 9U) < 2));
              }
              local_648 = pcVar2 + 1;
              if (pcVar20 != local_648) {
                do {
                  pcVar13 = pcVar20;
                  if ((*local_648 != ' ') && (1 < (byte)(*local_648 - 9U))) break;
                  local_648 = local_648 + 1;
                } while (local_648 != pcVar20);
                do {
                  pcVar20 = pcVar13;
                  if (pcVar20 == local_648) break;
                  pcVar13 = pcVar20 + -1;
                } while ((pcVar20[-1] == ' ') || ((byte)(pcVar20[-1] - 9U) < 2));
              }
              pcStack_640 = pcVar20;
              cVar1 = FUN_1453062b0(&local_608);
              if (cVar1 == '\0') {
                puVar4 = (undefined8 *)FUN_144bdfbf0(&local_158,&local_608);
                FUN_144bdff80(local_res20,"Invalid field name: \'%s\'",*puVar4);
                FUN_144bdf2f0(&local_158);
                *local_res10 = -0x7ffbfe00;
                piVar6 = local_res10;
LAB_145305c15:
                local_570 = 0;
                if ((-1 < (int)local_56c) && (local_578 != (char *)0x0)) {
                  (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                            (&PTR_vftable_14c6e47a0,local_578,
                             (ulonglong)(local_56c & 0x7fffffff) << 4);
                }
                goto LAB_145305f02;
              }
              iVar11 = 0;
              uVar9 = local_res20;
              iVar7 = 0;
              if (0 < (int)param_3[1]) {
LAB_1453055f0:
                iVar11 = iVar7;
                lVar19 = (longlong)iVar11 * 0x18;
                puVar4 = (undefined8 *)(*param_3 + lVar19);
                local_5f8 = param_3;
                local_5f0 = iVar11;
                local_5b8 = puVar4;
                cVar1 = FUN_144bfbf10(local_608,(longlong)pcStack_600 - (longlong)local_608,*puVar4)
                ;
                uVar9 = local_res20;
                if (cVar1 == '\0') goto code_r0x00014530562a;
                if (*(int *)(*param_3 + 0x10 + lVar19) < 0) {
                  if (*(int *)(puVar4 + 1) == 0) {
                    if (local_648 == pcStack_640) {
                      FUN_144bdff80(local_res20,"Found empty value");
                      pcVar13 = " in value for field \'%s\'";
                      goto LAB_145305ab9;
                    }
                    *(int *)(*param_3 + 0x10 + lVar19) = (int)param_3[0x1b];
                    *(int *)(lVar19 + 0x14 + *param_3) = (int)param_3[0x1b];
                    iVar7 = (int)param_3[0x1b] + 1;
                    if ((int)(*(uint *)((longlong)param_3 + 0xdc) & 0x7fffffff) < iVar7) {
                      FUN_144bfbfc0(param_3 + 0x1a,&PTR_vftable_14c6e47a0,(longlong)iVar7);
                    }
                    plVar5 = (longlong *)((longlong)(int)param_3[0x1b] * 0x10 + param_3[0x1a]);
                    if (plVar5 != (longlong *)0x0) {
                      *plVar5 = (longlong)local_648;
                      plVar5[1] = (longlong)pcStack_640;
                    }
                    *(int *)(param_3 + 0x1b) = iVar7;
                    uVar9 = local_res20;
                    lVar19 = local_630;
                  }
                  else {
                    if (*local_648 == '{') {
                      pcVar13 = local_648 + 1;
                      pcStack_5a0 = pcStack_640;
                      pcStack_5e0 = pcStack_640;
                      pcVar20 = pcStack_640;
                      pcVar2 = local_648;
                      local_5e8 = pcVar13;
                      local_5a8 = pcVar13;
                      pcVar3 = (char *)FUN_145305f60(&local_5e8,0x7d);
                      if (pcVar3 != pcVar20) {
                        if (pcVar3 != pcVar20 + -1) goto LAB_145305749;
                        pcStack_610 = pcVar2 + (longlong)(((int)pcVar20 - (int)pcVar2) + -2) + 1;
                        local_618 = pcVar13;
                        goto LAB_145305759;
                      }
                      local_618 = (char *)0x0;
                      pcStack_610 = (char *)0x0;
LAB_145305b59:
                      pcVar13 = "Can\'t find matching braces in value for field \'%s\'";
                      uVar9 = local_res20;
                      goto LAB_145305ab9;
                    }
LAB_145305749:
                    pcStack_610 = pcStack_640;
                    local_618 = local_648;
LAB_145305759:
                    if (local_618 == (char *)0x0) goto LAB_145305b59;
                    cVar1 = FUN_144f5a730(&local_648,&local_618);
                    pcVar13 = pcStack_610;
                    if (cVar1 != '\0') {
                      pcVar13 = "Value for field \'%s\' needs braces";
                      uVar9 = local_res20;
                      goto LAB_145305ab9;
                    }
                    pcVar20 = local_148;
                    local_5e8 = local_618;
                    pcStack_5e0 = pcStack_610;
                    local_150 = 0;
                    local_14c = 0x80000010;
                    local_158 = pcVar20;
                    if (local_618 != pcStack_610) {
                      pcStack_590 = pcStack_610;
                      pcVar2 = local_618;
                      do {
                        pcStack_5e0 = pcStack_590;
                        pcVar3 = pcVar2;
                        iVar7 = local_150;
                        local_5e8 = pcVar2;
                        local_598 = pcVar2;
                        pcVar2 = (char *)FUN_145305f60(&local_5e8,0x2c);
                        iVar18 = iVar7 + 1;
                        local_588 = pcVar3;
                        pcStack_580 = pcVar2;
                        if ((int)(local_14c & 0x7fffffff) < iVar18) {
                          FUN_144bfbfc0(&local_158,&PTR_vftable_14c6e47a0,(longlong)iVar18);
                          pcVar20 = local_158;
                          iVar7 = local_150;
                        }
                        plVar5 = (longlong *)(pcVar20 + (longlong)iVar7 * 0x10);
                        if (plVar5 != (longlong *)0x0) {
                          *plVar5 = (longlong)local_588;
                          plVar5[1] = (longlong)pcStack_580;
                          pcVar20 = local_158;
                        }
                        if (pcVar2 != pcVar13) {
                          pcVar2 = pcVar2 + 1;
                        }
                        param_3 = local_res18;
                        puVar4 = local_5b8;
                        local_150 = iVar18;
                      } while (pcVar2 != pcVar13);
                    }
                    uVar9 = local_res20;
                    local_5c8 = pcVar20 + (longlong)local_150 * 0x10;
                    local_5d0 = pcVar20;
                    FUN_145306040(local_638,&local_5f8,&local_5d0,local_res20);
                    if (local_638[0] < 0) {
                      FUN_144bdff80(uVar9," in value for field \'%s\'",*puVar4);
                      FUN_144be0720(uVar9," (value: \'",0xffffffff);
                      FUN_144be0720(uVar9,local_648,(int)pcStack_640 - (int)local_648);
                      FUN_144be0720(uVar9,&DAT_149d3c290,0xffffffff);
                      piVar6 = local_res10;
                      local_150 = 0;
                      *local_res10 = -0x7ffbfe00;
                      if ((-1 < (int)local_14c) && (local_158 != (char *)0x0)) {
                        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                                  (&PTR_vftable_14c6e47a0,local_158,
                                   (ulonglong)(local_14c & 0x7fffffff) << 4);
                      }
                      local_158 = (char *)0x0;
                      local_14c = 0x80000000;
                      goto LAB_145305c15;
                    }
                    local_150 = 0;
                    lVar19 = local_630;
                    uVar15 = local_res8[0];
                    if ((-1 < (int)local_14c) && (local_158 != (char *)0x0)) {
                      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                                (&PTR_vftable_14c6e47a0,local_158,
                                 (ulonglong)(local_14c & 0x7fffffff) << 4);
                      lVar19 = local_630;
                      uVar15 = local_res8[0];
                    }
                  }
                  goto LAB_14530563e;
                }
                pcVar13 = "Found value for field \'%s\' which has already been set";
LAB_145305ab9:
                FUN_144bdff80(uVar9,pcVar13,*puVar4);
                FUN_144be0720(uVar9," (value: \'",0xffffffff);
                FUN_144be0720(uVar9,local_648,(int)pcStack_640 - (int)local_648);
                FUN_144be0720(uVar9,&DAT_149d3c290,0xffffffff);
                goto LAB_145305b03;
              }
LAB_14530563e:
              if (iVar11 == (int)param_3[1]) {
                puVar4 = (undefined8 *)FUN_144bdfbf0(&local_158,&local_608);
                FUN_144bdff80(uVar9,"Field \'%s\' not found",*puVar4);
                FUN_144bdf2f0(&local_158);
LAB_145305b03:
                piVar6 = local_res10;
                local_570 = 0;
                *local_res10 = -0x7ffbfe00;
                if ((-1 < (int)local_56c) && (local_578 != (char *)0x0)) {
                  (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                            (&PTR_vftable_14c6e47a0,local_578,
                             (ulonglong)(local_56c & 0x7fffffff) << 4);
                }
                goto LAB_145305f02;
              }
              uVar16 = (ulonglong)local_360;
              pcVar13 = local_578;
            }
            uVar14 = (ulonglong)local_570;
            local_res8[0] = uVar15 + 1;
            uVar17 = (ulonglong)local_res8[0];
            local_630 = lVar19 + 0x10;
            iVar7 = (int)uVar16;
            pcVar20 = local_5d8;
          } while ((int)local_res8[0] < iVar7);
        }
        param_4 = local_res20;
        iVar11 = (int)uVar14;
        if (((((int)param_3[1] == 1) && ((*(byte *)(*param_3 + 0xc) & 2) == 0)) && (iVar11 == iVar7)
            ) && (0 < iVar11)) {
          pcStack_620 = pcVar13 + (longlong)iVar11 * 0x10;
          local_res8[0] = 0;
          local_5f0 = 0;
          if (pcVar8 != pcVar20) {
            do {
              pcVar2 = pcVar8;
              if ((*pcVar20 != ' ') && (1 < (byte)(*pcVar20 - 9U))) break;
              pcVar20 = pcVar20 + 1;
            } while (pcVar20 != pcVar8);
            do {
              pcVar8 = pcVar2;
              if (pcVar8 == pcVar20) break;
              pcVar2 = pcVar8 + -1;
            } while ((pcVar8[-1] == ' ') || ((byte)(pcVar8[-1] - 9U) < 2));
          }
          local_628 = pcVar13;
          local_5f8 = param_3;
          local_5d0 = pcVar20;
          local_5c8 = pcVar8;
          piVar6 = (int *)FUN_145306390(local_638,&local_5d0,&local_5f8,local_res20,&local_628,
                                        local_res8);
          iVar11 = *piVar6;
          pcVar13 = local_578;
          if (iVar11 < 0) {
LAB_145305a8e:
            *local_res10 = iVar11;
LAB_145305ec7:
            piVar6 = local_res10;
            local_570 = 0;
            if ((-1 < (int)local_56c) && (local_578 != (char *)0x0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_578,(ulonglong)(local_56c & 0x7fffffff) << 4);
            }
LAB_145305f02:
            local_360 = 0;
            local_578 = (char *)0x0;
            local_56c = 0x80000000;
            if ((int)local_35c < 0) {
              return piVar6;
            }
            if (local_368 == (undefined1 *)0x0) {
              return piVar6;
            }
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_368,(ulonglong)(local_35c & 0x7fffffff) << 4);
            return piVar6;
          }
        }
        else {
          iVar7 = 0;
          local_res8[0] = 0;
          if (0 < iVar11) {
            do {
              iVar11 = (int)param_3[1];
              if (iVar7 < iVar11) {
                do {
                  if ((*(int *)(*param_3 + 0x10 + (longlong)iVar7 * 0x18) < 0) &&
                     ((*(byte *)(*param_3 + 0xc + (longlong)iVar7 * 0x18) & 2) == 0)) break;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar11);
              }
              if (iVar7 == iVar11) {
                FUN_144bdff80(param_4,"Too many positional arguments");
                *local_res10 = -0x7ffbfe00;
                goto LAB_145305ec7;
              }
              local_5e8 = *(char **)(pcVar13 + (longlong)(int)local_res8[0] * 0x10);
              pcStack_5e0 = *(char **)((longlong)(pcVar13 + (longlong)(int)local_res8[0] * 0x10) + 8
                                      );
              pcStack_620 = pcVar13 + (longlong)(int)uVar14 * 0x10;
              local_628 = pcVar13;
              local_5f8 = param_3;
              local_5f0 = iVar7;
              piVar6 = (int *)FUN_145306390(local_638,&local_5e8,&local_5f8,param_4,&local_628,
                                            local_res8);
              iVar11 = *piVar6;
              if (iVar11 < 0) goto LAB_145305a8e;
              iVar7 = iVar7 + 1;
              uVar14 = (ulonglong)local_570;
              local_res8[0] = local_res8[0] + 1;
              pcVar13 = local_578;
            } while ((int)local_res8[0] < (int)local_570);
          }
        }
        local_570 = 0;
        if ((-1 < (int)local_56c) && (pcVar13 != (char *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,pcVar13,(ulonglong)(local_56c & 0x7fffffff) << 4);
        }
        local_578 = (char *)0x0;
        local_56c = 0x80000000;
        local_360 = 0;
        if ((-1 < (int)local_35c) && (local_368 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_368,(ulonglong)(local_35c & 0x7fffffff) << 4);
        }
        goto LAB_145305d72;
      }
    }
    FUN_144bdff80(param_4,"Cannot find matching \')\'");
    *param_2 = -0x7ffbfe00;
  }
  return param_2;
code_r0x00014530562a:
  iVar11 = iVar11 + 1;
  lVar19 = local_630;
  iVar7 = iVar11;
  if ((int)param_3[1] <= iVar11) goto LAB_14530563e;
  goto LAB_1453055f0;
}



// FUNCTION 145305f60 FUN_145305f60 body=214 status=ok
// SIG undefined FUN_145305f60(void)

/* WARNING: Removing unreachable block (ram,0x000145305fc1) */

char * FUN_145305f60(undefined8 *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char local_res8 [32];
  
  pcVar4 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  do {
    if ((pcVar4 == pcVar2) || (*pcVar4 == param_2)) {
      return pcVar4;
    }
    cVar1 = *pcVar4;
    if (cVar1 == ')') {
      lVar3 = 1;
LAB_145305fd1:
      cVar1 = local_res8[lVar3];
      if (cVar1 != '\0') {
        local_res8[lVar3] = cVar1 + -1;
      }
    }
    else {
      if (cVar1 == '}') {
        lVar3 = 2;
        goto LAB_145305fd1;
      }
      if (cVar1 == ']') {
        lVar3 = 3;
        goto LAB_145305fd1;
      }
      if ((cVar1 != '\"') && (cVar1 == '>')) {
        lVar3 = 5;
        goto LAB_145305fd1;
      }
      if (cVar1 == '(') {
        lVar3 = 1;
LAB_145306022:
        local_res8[lVar3] = local_res8[lVar3] + '\x01';
      }
      else {
        if (cVar1 == '{') {
          lVar3 = 2;
          goto LAB_145306022;
        }
        if (cVar1 == '[') {
          lVar3 = 3;
          goto LAB_145306022;
        }
        if (cVar1 == '\"') {
          lVar3 = 4;
          goto LAB_145306022;
        }
        if (cVar1 == '<') {
          lVar3 = 5;
          goto LAB_145306022;
        }
      }
    }
    pcVar4 = pcVar4 + 1;
  } while( true );
}



// FUNCTION 145306040 FUN_145306040 body=622 status=ok
// SIG undefined FUN_145306040(void)

undefined4 *
FUN_145306040(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 local_248;
  undefined8 uStack_240;
  char *local_238;
  int local_230;
  uint local_22c;
  char local_228 [512];
  
  iVar4 = *(int *)(*(longlong *)*param_2 + 8 + (longlong)*(int *)(param_2 + 1) * 0x18);
  if ((iVar4 < 1) || ((int)(param_3[1] - *param_3 >> 4) <= iVar4)) {
    lVar3 = *param_3;
    local_238 = local_228;
    local_230 = 0;
    local_22c = 0x80000020;
    iVar4 = (int)(param_3[1] - lVar3 >> 4);
    if (0x20 < iVar4) {
      FUN_144f5a870(&local_238,&PTR_vftable_14c6e47a0);
      lVar3 = *param_3;
    }
    uVar5 = 0;
    if (local_230 < iVar4) {
      pcVar2 = local_238 + (longlong)local_230 * 0x10;
      local_230 = iVar4;
      if (pcVar2 != local_238 + (longlong)iVar4 * 0x10) {
        do {
          if (pcVar2 != (char *)0x0) {
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
            pcVar2[2] = '\0';
            pcVar2[3] = '\0';
            pcVar2[4] = '\0';
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            pcVar2[8] = '\0';
            pcVar2[9] = '\0';
            pcVar2[10] = '\0';
            pcVar2[0xb] = '\0';
            pcVar2[0xc] = '\0';
            pcVar2[0xd] = '\0';
            pcVar2[0xe] = '\0';
            pcVar2[0xf] = '\0';
          }
          pcVar2 = pcVar2 + 0x10;
        } while (pcVar2 != local_238 + (longlong)iVar4 * 0x10);
        lVar3 = *param_3;
      }
    }
    else if (iVar4 < local_230) {
      local_230 = iVar4;
    }
    uVar7 = uVar5;
    if (0 < (int)(param_3[1] - lVar3 >> 4)) {
      do {
        pcVar1 = *(char **)(uVar5 + 8 + lVar3);
        pcVar2 = (char *)(uVar5 + lVar3);
        for (local_248 = *(char **)(uVar5 + lVar3);
            (local_248 != pcVar1 && ((*local_248 == ' ' || ((byte)(*local_248 - 9U) < 2))));
            local_248 = local_248 + 1) {
        }
        do {
          uStack_240 = pcVar1;
          if (uStack_240 == local_248) break;
          pcVar2 = uStack_240 + -1;
          pcVar1 = pcVar2;
        } while ((uStack_240[-1] == ' ') || ((byte)(uStack_240[-1] - 9U) < 2));
        if (local_248 == uStack_240) {
          FUN_144bdff80(param_4,"Found empty value",pcVar2);
          *param_1 = 0x80040200;
          goto LAB_145306246;
        }
        local_248._4_4_ = (undefined4)((ulonglong)local_248 >> 0x20);
        uStack_240._4_4_ = (undefined4)((ulonglong)uStack_240 >> 0x20);
        uVar6 = (int)uVar7 + 1;
        pcVar2 = local_238 + uVar5;
        *(undefined4 *)pcVar2 = (undefined4)local_248;
        *(undefined4 *)(pcVar2 + 4) = local_248._4_4_;
        *(undefined4 *)(pcVar2 + 8) = (undefined4)uStack_240;
        *(undefined4 *)(pcVar2 + 0xc) = uStack_240._4_4_;
        lVar3 = *param_3;
        uVar5 = uVar5 + 0x10;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)(param_3[1] - lVar3 >> 4));
    }
    uStack_240 = local_238 + (longlong)local_230 * 0x10;
    local_248 = local_238;
    FUN_145304da0(param_2,&local_248);
    *param_1 = 0;
LAB_145306246:
    local_230 = 0;
    if ((-1 < (int)local_22c) && (local_238 != (char *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_238,(ulonglong)(local_22c & 0x7fffffff) << 4);
    }
  }
  else {
    FUN_144bdff80(param_4,"Found %d elements for a %d-element array");
    *param_1 = 0x80040200;
  }
  return param_1;
}



// FUNCTION 1453062b0 FUN_1453062b0 body=222 status=ok
// SIG undefined FUN_1453062b0(void)

undefined8 FUN_1453062b0(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *local_18;
  longlong lStack_10;
  
  local_18 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if (local_18 != pcVar1) {
    cVar2 = *local_18;
    if (((cVar2 == '_') || (('@' < cVar2 && (cVar2 < '[')))) || (('`' < cVar2 && (cVar2 < '{')))) {
      iVar6 = (int)pcVar1 - (int)local_18;
      iVar5 = 1;
      if (1 < iVar6) {
        lVar4 = 1;
        do {
          uVar3 = (byte)local_18[lVar4] - 0x41;
          if (((0x39 < (byte)uVar3) || ((0x3ffffff43ffffffU >> ((ulonglong)uVar3 & 0x3f) & 1) == 0))
             && (9 < (byte)(local_18[lVar4] - 0x30U))) {
            lStack_10 = (longlong)pcVar1 - (longlong)(iVar6 - iVar5);
            goto LAB_145306358;
          }
          iVar5 = iVar5 + 1;
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar6);
      }
      local_18 = (char *)*param_1;
      lStack_10 = param_1[1];
    }
    else {
      local_18 = (char *)0x0;
      lStack_10 = 0;
    }
LAB_145306358:
    cVar2 = FUN_144f5a730(&local_18,param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145306390 FUN_145306390 body=985 status=ok
// SIG undefined FUN_145306390(void)

undefined4 *
FUN_145306390(undefined4 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             longlong *param_5,int *param_6)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *local_res18;
  char *local_188;
  char *pcStack_180;
  char *local_178;
  char *pcStack_170;
  char *local_168;
  char *pcStack_160;
  undefined8 *local_158;
  char *local_148;
  char *pcStack_140;
  char *local_138;
  int local_130;
  uint local_12c;
  char local_128 [256];
  
  puVar9 = (undefined8 *)(*(longlong *)*param_3 + (longlong)*(int *)(param_3 + 1) * 0x18);
  local_res18 = param_3;
  local_158 = puVar9;
  if (*(int *)(*(longlong *)*param_3 + 8 + (longlong)*(int *)(param_3 + 1) * 0x18) == 0) {
    if (*param_2 != param_2[1]) {
      FUN_145304d00(param_3);
      goto LAB_14530673e;
    }
    FUN_144bdff80(param_4,"Found empty value");
    FUN_144bdff80(param_4," in value for field \'%s\'",*puVar9);
    goto LAB_145306413;
  }
  pcVar8 = (char *)*param_2;
  if (*pcVar8 == '{') {
    pcVar3 = (char *)param_2[1];
    pcVar6 = pcVar8 + 1;
    local_188 = pcVar6;
    pcStack_180 = pcVar3;
    local_168 = pcVar6;
    pcStack_160 = pcVar3;
    pcVar2 = (char *)FUN_145305f60(&local_188,0x7d);
    if (pcVar2 != pcVar3) {
      if (pcVar2 != pcVar3 + -1) goto LAB_1453064d1;
      pcStack_170 = pcVar8 + (longlong)(((int)pcVar3 - (int)pcVar8) + -2) + 1;
      goto LAB_1453064df;
    }
    local_178 = (char *)0x0;
    pcStack_170 = (char *)0x0;
  }
  else {
LAB_1453064d1:
    pcVar6 = (char *)*param_2;
    pcStack_170 = (char *)param_2[1];
LAB_1453064df:
    local_178 = pcVar6;
    if (pcVar6 != (char *)0x0) {
      cVar1 = FUN_144f5a730(&local_178,param_2);
      pcVar8 = pcStack_170;
      if (cVar1 == '\0') {
        pcVar6 = local_128;
        local_188 = local_178;
        pcStack_180 = pcStack_170;
        local_130 = 0;
        local_12c = 0x80000010;
        local_138 = pcVar6;
        if (local_178 != pcStack_170) {
          pcStack_160 = pcStack_170;
          pcVar3 = local_178;
          do {
            pcStack_140 = pcStack_160;
            pcVar2 = pcVar3;
            iVar7 = local_130;
            local_168 = pcVar3;
            local_148 = pcVar3;
            pcVar3 = (char *)FUN_145305f60(&local_148,0x2c);
            iVar5 = iVar7 + 1;
            local_188 = pcVar2;
            pcStack_180 = pcVar3;
            if ((int)(local_12c & 0x7fffffff) < iVar5) {
              FUN_144bfbfc0(&local_138,&PTR_vftable_14c6e47a0,(longlong)iVar5);
              pcVar6 = local_138;
              iVar7 = local_130;
            }
            plVar4 = (longlong *)(pcVar6 + (longlong)iVar7 * 0x10);
            if (plVar4 != (longlong *)0x0) {
              *plVar4 = (longlong)local_188;
              plVar4[1] = (longlong)pcStack_180;
              pcVar6 = local_138;
            }
            if (pcVar3 != pcVar8) {
              pcVar3 = pcVar3 + 1;
            }
            puVar9 = local_158;
            local_130 = iVar5;
          } while (pcVar3 != pcVar8);
        }
        pcStack_180 = pcVar6 + (longlong)local_130 * 0x10;
        local_188 = pcVar6;
        FUN_145306040(&local_res18,local_res18,&local_188,param_4);
        if ((int)local_res18 < 0) {
          FUN_144bdff80(param_4," when assigning positional argument %d to field \'%s\'",*param_6,
                        *puVar9);
          *param_1 = 0x80040200;
          local_130 = 0;
          if ((int)local_12c < 0) {
            return param_1;
          }
          if (local_138 == (char *)0x0) {
            return param_1;
          }
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 4);
          return param_1;
        }
        local_130 = 0;
        if ((-1 < (int)local_12c) && (local_138 != (char *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 4);
        }
      }
      else {
        local_188 = (char *)((longlong)*param_6 * 0x10 + *param_5);
        pcStack_180 = (char *)param_5[1];
        FUN_145306040(&local_res18,param_3,&local_188,param_4);
        if ((int)local_res18 < 0) {
          FUN_144bdff80(param_4," when assigning positional arguments to field \'%s\'",*puVar9);
          *param_1 = 0x80040200;
          return param_1;
        }
        *param_6 = (int)(param_5[1] - *param_5 >> 4);
      }
LAB_14530673e:
      *param_1 = 0;
      return param_1;
    }
  }
  FUN_144bdff80(param_4,"Cannot find matching braces in positional argument %d",*param_6);
LAB_145306413:
  FUN_144be0720(param_4," (value: \'",0xffffffff);
  FUN_144be0720(param_4,*param_2,(int)param_2[1] - (int)*param_2);
  FUN_144be0720(param_4,&DAT_149d3c290,0xffffffff);
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 145306770 FUN_145306770 body=120 status=ok
// SIG undefined FUN_145306770(void)

undefined8 *
FUN_145306770(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             undefined **param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  
  param_1[5] = param_4;
  *param_1 = 0;
  param_1[3] = 0;
  ppuVar1 = &PTR_vftable_14c6e47a0;
  if (param_5 != (undefined **)0x0) {
    ppuVar1 = param_5;
  }
  param_1[4] = 0;
  param_1[10] = ppuVar1;
  param_1[0xb] = param_6;
  param_1[6] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_3 <= param_2) {
    param_3 = ~(param_3 - 1) & (param_3 - 1) + param_2;
  }
  param_1[1] = param_3;
  param_1[7] = param_4 / param_3;
  return param_1;
}



// FUNCTION 1453067f0 FUN_1453067f0 body=53 status=ok
// SIG undefined FUN_1453067f0(void)

undefined8 * FUN_1453067f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 145306830 FUN_145306830 body=389 status=ok
// SIG undefined FUN_145306830(void)

void FUN_145306830(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined **param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar1 = param_1 + 0xc;
  puVar3 = (undefined8 *)param_1[3];
  while (puVar3 != (undefined8 *)0x0) {
    *plVar1 = *plVar1 - puVar3[3];
    param_1[0xd] = param_1[0xd] - puVar3[3];
    plVar6 = (longlong *)param_1[10];
    puVar2 = (undefined8 *)*puVar3;
    uVar7 = param_1[5];
    lVar4 = *plVar6;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar4 + 0x18))(plVar6,puVar3[1],uVar7);
      plVar6 = (longlong *)param_1[0xb];
      uVar7 = 0x20;
      lVar4 = *plVar6;
    }
    (**(code **)(lVar4 + 0x18))(plVar6,puVar3,uVar7);
    puVar3 = puVar2;
  }
  param_1[3] = 0;
  puVar3 = (undefined8 *)param_1[4];
  while (puVar3 != (undefined8 *)0x0) {
    *plVar1 = *plVar1 - puVar3[3];
    param_1[0xd] = param_1[0xd] - puVar3[3];
    plVar6 = (longlong *)param_1[10];
    puVar2 = (undefined8 *)*puVar3;
    uVar7 = param_1[5];
    lVar4 = *plVar6;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar4 + 0x18))(plVar6,puVar3[1],uVar7);
      plVar6 = (longlong *)param_1[0xb];
      uVar7 = 0x20;
      lVar4 = *plVar6;
    }
    (**(code **)(lVar4 + 0x18))(plVar6,puVar3,uVar7);
    puVar3 = puVar2;
  }
  param_1[3] = 0;
  ppuVar5 = &PTR_vftable_14c6e47a0;
  if (param_5 != (undefined **)0x0) {
    ppuVar5 = param_5;
  }
  param_1[0xc] = 0;
  param_1[10] = ppuVar5;
  param_1[0xb] = param_6;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[5] = param_4;
  param_1[6] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[2] = 0;
  if (param_3 <= param_2) {
    param_3 = ~(param_3 - 1) & (param_3 - 1) + param_2;
  }
  param_1[1] = param_3;
  param_1[7] = param_4 / param_3;
  return;
}



// FUNCTION 1453069c0 FUN_1453069c0 body=274 status=ok
// SIG undefined FUN_1453069c0(void)

void FUN_1453069c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar1 = param_1 + 0xc;
  puVar3 = (undefined8 *)param_1[3];
  while (puVar3 != (undefined8 *)0x0) {
    *plVar1 = *plVar1 - puVar3[3];
    param_1[0xd] = param_1[0xd] - puVar3[3];
    plVar5 = (longlong *)param_1[10];
    puVar2 = (undefined8 *)*puVar3;
    uVar6 = param_1[5];
    lVar4 = *plVar5;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar4 + 0x18))(plVar5,puVar3[1],uVar6);
      plVar5 = (longlong *)param_1[0xb];
      uVar6 = 0x20;
      lVar4 = *plVar5;
    }
    (**(code **)(lVar4 + 0x18))(plVar5,puVar3,uVar6);
    puVar3 = puVar2;
  }
  param_1[3] = 0;
  puVar3 = (undefined8 *)param_1[4];
  while (puVar3 != (undefined8 *)0x0) {
    *plVar1 = *plVar1 - puVar3[3];
    param_1[0xd] = param_1[0xd] - puVar3[3];
    plVar5 = (longlong *)param_1[10];
    puVar2 = (undefined8 *)*puVar3;
    uVar6 = param_1[5];
    lVar4 = *plVar5;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar4 + 0x18))(plVar5,puVar3[1],uVar6);
      plVar5 = (longlong *)param_1[0xb];
      uVar6 = 0x20;
      lVar4 = *plVar5;
    }
    (**(code **)(lVar4 + 0x18))(plVar5,puVar3,uVar6);
    puVar3 = puVar2;
  }
  param_1[4] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 145306ae0 FUN_145306ae0 body=167 status=ok
// SIG undefined FUN_145306ae0(void)

void FUN_145306ae0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (plVar2 == (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    else {
      do {
        plVar2 = (longlong *)*plVar2;
        lVar3 = lVar3 + *(longlong *)(param_1 + 0x28);
      } while (plVar2 != (longlong *)0x0);
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    lVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      do {
        plVar2 = (longlong *)*plVar2;
        lVar1 = lVar1 + *(longlong *)(param_1 + 0x28);
      } while (plVar2 != (longlong *)0x0);
    }
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      do {
        plVar2 = (longlong *)*plVar2;
        lVar3 = lVar3 + 0x20 + *(longlong *)(param_1 + 0x28);
      } while (plVar2 != (longlong *)0x0);
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    lVar1 = 0;
    if (plVar2 != (longlong *)0x0) {
      do {
        plVar2 = (longlong *)*plVar2;
        lVar1 = lVar1 + 0x20 + *(longlong *)(param_1 + 0x28);
      } while (plVar2 != (longlong *)0x0);
    }
  }
  param_2[3] = lVar1 + lVar3;
  lVar3 = *(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x68);
  *param_2 = lVar3;
  param_2[1] = lVar3 * *(longlong *)(param_1 + 8);
  return;
}



// FUNCTION 145306b90 FUN_145306b90 body=569 status=ok
// SIG undefined FUN_145306b90(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 ******* FUN_145306b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  uint uVar5;
  int iVar6;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  int iVar13;
  undefined8 *******local_res8;
  undefined8 *******local_38;
  undefined8 *******local_30 [5];
  undefined8 *******pppppppuVar7;
  
  if (param_1[3] == 0) {
    return (undefined8 *******)0x0;
  }
  uVar1 = FUN_145307670();
  pppppppuVar3 = (undefined8 *******)*param_1;
  param_1[3] = uVar1;
  pppppppuVar11 = (undefined8 *******)param_1[8];
  pppppppuVar4 = pppppppuVar3;
  if ((undefined8 *******)param_1[8] < (undefined8 *******)param_1[9]) {
    do {
      pppppppuVar3 = pppppppuVar11;
      *pppppppuVar3 = pppppppuVar4;
      pppppppuVar11 = (undefined8 *******)((longlong)pppppppuVar3 + param_1[1]);
      pppppppuVar4 = pppppppuVar3;
    } while ((undefined8 *******)((longlong)pppppppuVar3 + param_1[1]) <
             (undefined8 *******)param_1[9]);
  }
  pppppppuVar11 = (undefined8 *******)0x0;
  *param_1 = pppppppuVar3;
  param_1[9] = 0;
  param_1[8] = 0;
  local_res8 = pppppppuVar11;
  if (pppppppuVar3 == (undefined8 *******)0x0) {
LAB_145306ce4:
    local_30[0] = (undefined8 *******)param_1[3];
    *param_1 = local_res8;
    pppppppuVar3 = &local_38;
    local_38 = local_res8;
    pppppppuVar4 = local_30[0];
    pppppppuVar2 = local_30;
    do {
      pppppppuVar7 = pppppppuVar4;
      if (pppppppuVar7 == (undefined8 *******)0x0) {
        param_1[2] = 0;
        *param_1 = local_38;
        param_1[3] = local_30[0];
        return pppppppuVar11;
      }
      pppppppuVar4 = (undefined8 *******)pppppppuVar7[2];
      pppppppuVar9 = (undefined8 *******)
                     (param_1[1] * (longlong)pppppppuVar7[3] + (longlong)pppppppuVar4);
      if (pppppppuVar4 == local_res8) {
        do {
          if (pppppppuVar9 <= pppppppuVar4) break;
          local_res8 = (undefined8 *******)*local_res8;
          pppppppuVar4 = (undefined8 *******)((longlong)pppppppuVar4 + param_1[1]);
        } while (pppppppuVar4 == local_res8);
      }
      if (pppppppuVar4 == pppppppuVar9) {
        pppppppuVar11 = (undefined8 *******)(ulonglong)((int)pppppppuVar11 + 1);
        *pppppppuVar2 = *pppppppuVar7;
        *pppppppuVar7 = (undefined8 ******)param_1[4];
        param_1[4] = pppppppuVar7;
        pppppppuVar4 = (undefined8 *******)*pppppppuVar2;
        *pppppppuVar3 = local_res8;
      }
      else {
        for (; (local_res8 != (undefined8 *******)0x0 && (local_res8 < pppppppuVar9));
            local_res8 = (undefined8 *******)*local_res8) {
        }
        pppppppuVar4 = (undefined8 *******)*pppppppuVar3;
        while (pppppppuVar2 = pppppppuVar4, pppppppuVar2 != local_res8) {
          pppppppuVar3 = pppppppuVar2;
          pppppppuVar4 = (undefined8 *******)*pppppppuVar2;
        }
        pppppppuVar4 = (undefined8 *******)*pppppppuVar7;
        pppppppuVar2 = pppppppuVar7;
      }
    } while( true );
  }
  iVar13 = 1;
  do {
    local_res8 = (undefined8 *******)0x0;
    uVar10 = 0;
    pppppppuVar4 = &local_res8;
    pppppppuVar2 = pppppppuVar11;
    if (pppppppuVar3 != (undefined8 *******)0x0) {
LAB_145306c30:
      uVar10 = (int)pppppppuVar2 + 1;
      pppppppuVar2 = pppppppuVar3;
      pppppppuVar7 = pppppppuVar11;
      if (0 < iVar13) {
        do {
          if (pppppppuVar2 == (undefined8 *******)0x0) break;
          pppppppuVar2 = (undefined8 *******)*pppppppuVar2;
          uVar5 = (int)pppppppuVar7 + 1;
          pppppppuVar7 = (undefined8 *******)(ulonglong)uVar5;
        } while ((int)uVar5 < iVar13);
      }
      iVar6 = (int)pppppppuVar7;
      iVar12 = iVar13;
      while( true ) {
        pppppppuVar9 = pppppppuVar3;
        pppppppuVar3 = pppppppuVar2;
        pppppppuVar2 = pppppppuVar3;
        if (iVar6 < 1) goto joined_r0x000145306ca2;
        if (iVar12 < 1) goto LAB_145306c90;
        if (pppppppuVar3 == (undefined8 *******)0x0) break;
        if (pppppppuVar3 < pppppppuVar9) {
          iVar12 = iVar12 + -1;
          pppppppuVar2 = (undefined8 *******)*pppppppuVar3;
          pppppppuVar8 = pppppppuVar9;
          pppppppuVar9 = pppppppuVar3;
        }
        else {
          pppppppuVar7 = (undefined8 *******)(ulonglong)((int)pppppppuVar7 - 1);
          pppppppuVar8 = (undefined8 *******)*pppppppuVar9;
        }
        *pppppppuVar4 = pppppppuVar9;
        iVar6 = (int)pppppppuVar7;
        pppppppuVar3 = pppppppuVar8;
        pppppppuVar4 = pppppppuVar9;
      }
      if ((int)pppppppuVar7 == 0) goto LAB_145306ca4;
LAB_145306c90:
      do {
        pppppppuVar3 = pppppppuVar9;
        *pppppppuVar4 = pppppppuVar3;
        uVar5 = (int)pppppppuVar7 - 1;
        pppppppuVar7 = (undefined8 *******)(ulonglong)uVar5;
        pppppppuVar9 = (undefined8 *******)*pppppppuVar3;
        pppppppuVar4 = pppppppuVar3;
      } while (0 < (int)uVar5);
joined_r0x000145306ca2:
      do {
        pppppppuVar3 = pppppppuVar2;
        if (iVar12 < 1) goto LAB_145306cba;
LAB_145306ca4:
        if (pppppppuVar3 == (undefined8 *******)0x0) goto LAB_145306cba;
        *pppppppuVar4 = pppppppuVar3;
        iVar12 = iVar12 + -1;
        pppppppuVar2 = (undefined8 *******)*pppppppuVar3;
        pppppppuVar4 = pppppppuVar3;
      } while( true );
    }
LAB_145306cc6:
    *pppppppuVar4 = (undefined8 ******)0x0;
    if ((int)uVar10 < 2) goto LAB_145306ce4;
    iVar13 = iVar13 * 2;
    pppppppuVar3 = local_res8;
  } while( true );
LAB_145306cba:
  pppppppuVar2 = (undefined8 *******)(ulonglong)uVar10;
  if (pppppppuVar3 == (undefined8 *******)0x0) goto LAB_145306cc6;
  goto LAB_145306c30;
}



// FUNCTION 145306dd0 FUN_145306dd0 body=931 status=ok
// SIG undefined FUN_145306dd0(void)

undefined1 * FUN_145306dd0(undefined8 *param_1,undefined1 *param_2,int param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  longlong local_58;
  ulonglong local_50;
  longlong *local_48;
  
  iVar16 = 0;
  if (0 < param_3) {
    local_48 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((longlong *)param_1[2] == (longlong *)0x0) {
        puVar1 = (undefined8 *)param_1[3];
        if (puVar1 == (undefined8 *)0x0) goto LAB_145307153;
        iVar12 = FUN_145307440(param_1,puVar1);
        if (iVar12 == 0) {
          param_1[2] = puVar1;
        }
        else {
          param_1[3] = *puVar1;
          *puVar1 = param_1[4];
          param_1[4] = puVar1;
        }
      }
      else {
        puVar1 = *(undefined8 **)param_1[2];
        if (puVar1 == (undefined8 *)0x0) {
LAB_145307153:
          *param_4 = iVar16;
          param_1[2] = 0;
          *param_2 = 1;
          return param_2;
        }
        lVar3 = *local_48;
        lVar15 = (longlong)*(int *)(puVar1 + 3);
        pcVar9 = (char *)(lVar3 + 0x114);
        if (*pcVar9 == '\0') {
          __dyn_tls_on_demand_init();
        }
        plVar11 = (longlong *)(lVar3 + 0xf0);
        lVar3 = *plVar11;
        if (lVar3 == 0) {
          if (*pcVar9 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar3 = FUN_144b3f4a0();
          *plVar11 = lVar3;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x3d0) + 0x10);
        if (*(longlong *)(lVar3 + 8) == 0) {
          lVar5 = lVar15 * 8;
          if (lVar3 == 0) goto LAB_145306ee5;
          local_50 = lVar5 + 0x3fU & 0xffffffffffffffc0;
          local_58 = lVar5;
          if (*(ulonglong *)(lVar3 + 0x28) < local_50) {
LAB_145306ec8:
            puVar4 = (undefined8 *)FUN_144b454a0(lVar3,&local_50);
          }
          else {
            puVar4 = *(undefined8 **)(lVar3 + 0x38);
            if (*(ulonglong *)(lVar3 + 0x40) < (longlong)puVar4 + local_50) goto LAB_145306ec8;
            *(ulonglong *)(lVar3 + 0x38) = (longlong)puVar4 + local_50;
          }
        }
        else {
          lVar3 = 0;
          lVar5 = lVar15 << 3;
LAB_145306ee5:
          local_58 = lVar5;
          puVar4 = (undefined8 *)(*DAT_14c787670)(1,&local_58);
        }
        iVar12 = 0;
        puVar8 = (undefined8 *)puVar1[2];
        lVar10 = 0;
        puVar14 = (undefined8 *)(puVar1[3] * param_1[1] + (longlong)puVar8);
        puVar2 = param_1;
        for (puVar6 = (undefined8 *)*param_1; puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)*puVar6) {
          puVar7 = puVar6;
          if ((puVar8 <= puVar6) && (puVar6 < puVar14)) {
            puVar4[lVar10] = puVar6;
            iVar12 = iVar12 + 1;
            lVar10 = lVar10 + 1;
            *puVar2 = *puVar6;
            puVar7 = puVar2;
          }
          puVar2 = puVar7;
        }
        puVar6 = (undefined8 *)param_1[8];
        if ((puVar6 < puVar8) || (puVar14 <= puVar6)) {
          if (iVar12 == *(int *)(puVar1 + 3)) {
            lVar5 = lVar15 << 3;
            if (lVar3 != 0) goto LAB_145306f90;
LAB_145306fc8:
            (*DAT_14c787678)(CONCAT71((int7)((ulonglong)puVar6 >> 8),1),puVar4);
            goto LAB_145306fd3;
          }
        }
        else if ((int)((ulonglong)(param_1[9] - (longlong)puVar6) / (ulonglong)param_1[1]) + iVar12
                 == *(int *)(puVar1 + 3)) {
          param_1[8] = 0;
          param_1[9] = 0;
          if (lVar3 == 0) goto LAB_145306fc8;
LAB_145306f90:
          uVar13 = lVar5 + 0x3fU & 0xffffffffffffffc0;
          if ((*(ulonglong *)(lVar3 + 0x28) < uVar13) ||
             (uVar13 + (longlong)puVar4 != *(longlong *)(lVar3 + 0x38))) {
            FUN_144be8550(lVar3,puVar4);
          }
          else {
            *(undefined8 **)(lVar3 + 0x38) = puVar4;
            if (*(undefined8 **)(lVar3 + 0x48) == puVar4) {
              FUN_144be8430(lVar3);
            }
          }
LAB_145306fd3:
          *(undefined8 *)param_1[2] = *puVar1;
          *puVar1 = param_1[4];
          param_1[4] = puVar1;
          goto LAB_145307100;
        }
        if (0 < lVar10) {
          if (1 < lVar10) {
            FUN_1453077a0(puVar4,0,iVar12 + -1,&LAB_145307430);
            lVar5 = 1;
            puVar8 = (undefined8 *)*puVar4;
            do {
              puVar6 = (undefined8 *)puVar4[lVar5];
              lVar5 = lVar5 + 1;
              *puVar8 = puVar6;
              puVar8 = puVar6;
            } while (lVar5 < lVar10);
          }
          puVar6 = (undefined8 *)puVar4[lVar10 + -1];
          *puVar6 = *param_1;
          *param_1 = *puVar4;
        }
        if (lVar3 == 0) {
          (*DAT_14c787678)(CONCAT71((int7)((ulonglong)puVar6 >> 8),1),puVar4);
LAB_1453070c5:
          param_1[2] = puVar1;
        }
        else {
          uVar13 = lVar15 * 8 + 0x3fU & 0xffffffffffffffc0;
          if ((*(ulonglong *)(lVar3 + 0x28) < uVar13) ||
             (uVar13 + (longlong)puVar4 != *(longlong *)(lVar3 + 0x38))) {
            FUN_144be8550(lVar3,puVar4);
            param_1[2] = puVar1;
          }
          else {
            *(undefined8 **)(lVar3 + 0x38) = puVar4;
            if (*(undefined8 **)(lVar3 + 0x48) != puVar4) goto LAB_1453070c5;
            FUN_144be8430(lVar3);
            param_1[2] = puVar1;
          }
        }
      }
LAB_145307100:
      iVar16 = iVar16 + 1;
    } while (iVar16 < param_3);
  }
  *param_4 = iVar16;
  *param_2 = param_1[2] == 0;
  return param_2;
}



// FUNCTION 145307180 FUN_145307180 body=168 status=ok
// SIG undefined FUN_145307180(void)

int FUN_145307180(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  iVar3 = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  do {
    iVar3 = iVar3 + 1;
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) - plVar4[3];
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) - plVar4[3];
    plVar1 = (longlong *)*plVar4;
    plVar2 = *(longlong **)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar4,*(undefined8 *)(param_1 + 0x28));
    }
    else {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar4[1]);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                (*(longlong **)(param_1 + 0x58),plVar4,0x20);
    }
    plVar4 = plVar1;
  } while (plVar1 != (longlong *)0x0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return iVar3;
}



// FUNCTION 145307230 FUN_145307230 body=504 status=ok
// SIG undefined FUN_145307230(void)

longlong FUN_145307230(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = (ulonglong *)(param_1 + 8);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = *puVar6;
    *(undefined8 *)(param_1 + 0x40) = puVar6[2];
    *(ulonglong *)(param_1 + 0x48) = puVar6[3] * *puVar1 + puVar6[2];
    *puVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + -1;
    *(undefined8 **)(param_1 + 0x18) = puVar6;
    *(ulonglong *)(param_1 + 0x40) = *puVar1 + lVar5;
    return lVar5;
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *puVar1;
    lVar5 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x100)) / auVar4,0);
    if (lVar5 == 0) {
      lVar5 = 1;
    }
    if (*(ulonglong *)(param_1 + 0x30) < 0x11) {
      lVar5 = lVar5 * *puVar1 + 0x20;
    }
    else {
      lVar5 = *(ulonglong *)(param_1 + 0x30) + 0x10 + lVar5 * *puVar1;
    }
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 == (longlong *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    puVar6[1] = 0;
    uVar7 = lVar3 + 0x1f + (longlong)puVar6 & -lVar3;
    uVar8 = (longlong)puVar6 + (lVar5 - uVar7);
  }
  else {
    local_res8 = 0;
    puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,&local_res8);
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    if (uVar7 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))
                (*(longlong **)(param_1 + 0x58),puVar6,0x20);
      return 0;
    }
    puVar6[1] = uVar7;
    uVar9 = *(longlong *)(param_1 + 0x30) + -1 + uVar7 & -*(longlong *)(param_1 + 0x30);
    if ((uVar9 == uVar7) && (lVar5 == *(longlong *)(param_1 + 0x28))) {
      uVar8 = *(ulonglong *)(param_1 + 0x38);
      goto LAB_1453073bc;
    }
    uVar8 = lVar5 + (uVar7 - uVar9);
    uVar7 = uVar9;
  }
  uVar8 = uVar8 / *(ulonglong *)(param_1 + 8);
LAB_1453073bc:
  puVar6[3] = uVar8;
  puVar6[2] = uVar7;
  *(ulonglong *)(param_1 + 0x40) = uVar7;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 8) * puVar6[3] + puVar6[2];
  *puVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + puVar6[3];
  *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + puVar6[3] + -1;
  lVar5 = *(longlong *)(param_1 + 0x40);
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 8) + lVar5;
  return lVar5;
}



// FUNCTION 145307440 FUN_145307440 body=555 status=ok
// SIG undefined FUN_145307440(void)

ulonglong FUN_145307440(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong local_res10;
  
  iVar9 = *(int *)(param_2 + 0x18);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = (longlong)iVar9 * 8;
  uVar10 = 0;
  uVar12 = *(ulonglong *)(*(longlong *)(lVar3 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar12 + 8) != 0) {
    uVar12 = uVar10;
  }
  local_res10 = lVar1;
  if (uVar12 == 0) {
    puVar5 = (undefined8 *)(*DAT_14c787670)(1,&local_res10,0x40);
  }
  else {
    uVar4 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if (uVar4 <= *(ulonglong *)(uVar12 + 0x28)) {
      puVar5 = *(undefined8 **)(uVar12 + 0x38);
      uVar4 = uVar4 + (longlong)puVar5;
      if (uVar4 <= *(ulonglong *)(uVar12 + 0x40)) {
        *(ulonglong *)(uVar12 + 0x38) = uVar4;
        goto LAB_145307521;
      }
    }
    puVar5 = (undefined8 *)FUN_144b454a0();
  }
LAB_145307521:
  iVar9 = 0;
  puVar6 = *(undefined8 **)(param_2 + 0x10);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x18) * param_1[1] + (longlong)puVar6);
  puVar8 = puVar5;
  uVar4 = uVar10;
  puVar2 = param_1;
  for (puVar7 = (undefined8 *)*param_1; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7)
  {
    puVar13 = puVar7;
    if ((puVar6 <= puVar7) && (puVar7 < puVar14)) {
      *puVar8 = puVar7;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      puVar8 = puVar8 + 1;
      *puVar2 = *puVar7;
      puVar13 = puVar2;
    }
    iVar9 = (int)uVar4;
    puVar2 = puVar13;
  }
  puVar7 = (undefined8 *)param_1[8];
  if ((puVar7 < puVar6) || (puVar14 <= puVar7)) {
    if (iVar9 == *(int *)(param_2 + 0x18)) {
      uVar10 = 1;
      goto LAB_145307606;
    }
  }
  else if ((int)((ulonglong)(param_1[9] - (longlong)puVar7) / (ulonglong)param_1[1]) + iVar9 ==
           *(int *)(param_2 + 0x18)) {
    param_1[8] = 0;
    uVar10 = 1;
    param_1[9] = 0;
    goto LAB_145307606;
  }
  if (0 < iVar9) {
    if (1 < iVar9) {
      FUN_1453077a0(puVar5,0,iVar9 + -1,&LAB_145307430);
    }
    lVar3 = (longlong)iVar9;
    if (1 < lVar3) {
      lVar11 = 1;
      puVar6 = (undefined8 *)*puVar5;
      do {
        puVar7 = (undefined8 *)puVar5[lVar11];
        lVar11 = lVar11 + 1;
        *puVar6 = puVar7;
        puVar6 = puVar7;
      } while (lVar11 < lVar3);
    }
    puVar7 = (undefined8 *)puVar5[lVar3 + -1];
    *puVar7 = *param_1;
    *param_1 = *puVar5;
  }
LAB_145307606:
  if (uVar12 == 0) {
    (*DAT_14c787678)(CONCAT71((int7)((ulonglong)puVar7 >> 8),1),puVar5,lVar1);
  }
  else {
    uVar4 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar12 + 0x28) < uVar4) ||
       (uVar4 + (longlong)puVar5 != *(longlong *)(uVar12 + 0x38))) {
      FUN_144be8550(uVar12,puVar5);
    }
    else {
      *(undefined8 **)(uVar12 + 0x38) = puVar5;
      if (*(undefined8 **)(uVar12 + 0x48) == puVar5) {
        FUN_144be8430(uVar12);
      }
    }
  }
  return uVar10;
}



// FUNCTION 145307670 FUN_145307670 body=299 status=ok
// SIG undefined FUN_145307670(void)

undefined8 * FUN_145307670(undefined8 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 *local_28 [4];
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar8 = 1;
  do {
    local_28[0] = (undefined8 *)0x0;
    iVar7 = 0;
    ppuVar11 = local_28;
    while (param_1 != (undefined8 *)0x0) {
      iVar7 = iVar7 + 1;
      puVar4 = param_1;
      iVar6 = 0;
      if (0 < iVar8) {
        do {
          if (puVar4 == (undefined8 *)0x0) break;
          puVar4 = (undefined8 *)*puVar4;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar8);
      }
      iVar10 = iVar8;
      if (0 < iVar6) {
        do {
          if (iVar10 < 1) goto LAB_145307730;
          puVar9 = param_1;
          if (puVar4 == (undefined8 *)0x0) break;
          uVar1 = puVar4[1];
          uVar2 = param_1[1];
          if (uVar1 < uVar2) {
            puVar5 = (undefined8 *)*puVar4;
            puVar12 = puVar4;
          }
          else {
            puVar5 = puVar4;
            puVar9 = (undefined8 *)*param_1;
            puVar12 = param_1;
          }
          *ppuVar11 = puVar12;
          iVar3 = iVar6 + -1;
          if (uVar1 < uVar2) {
            iVar10 = iVar10 + -1;
            iVar3 = iVar6;
          }
          iVar6 = iVar3;
          puVar4 = puVar5;
          param_1 = puVar9;
          ppuVar11 = (undefined8 **)puVar12;
        } while (0 < iVar6);
        for (; param_1 = puVar9, 0 < iVar6; iVar6 = iVar6 + -1) {
LAB_145307730:
          *ppuVar11 = param_1;
          puVar9 = (undefined8 *)*param_1;
          ppuVar11 = (undefined8 **)param_1;
        }
      }
      while ((param_1 = puVar4, 0 < iVar10 && (param_1 != (undefined8 *)0x0))) {
        *ppuVar11 = param_1;
        ppuVar11 = (undefined8 **)param_1;
        iVar10 = iVar10 + -1;
        puVar4 = (undefined8 *)*param_1;
      }
    }
    *ppuVar11 = (undefined8 *)0x0;
    if (iVar7 < 2) {
      return local_28[0];
    }
    iVar8 = iVar8 * 2;
    param_1 = local_28[0];
  } while( true );
}



// FUNCTION 1453077a0 FUN_1453077a0 body=295 status=ok
// SIG undefined FUN_1453077a0(void)

void FUN_1453077a0(longlong param_1,uint param_2,ulonglong param_3,code *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined1 local_res20 [8];
  
  local_res18 = (int)param_3;
  uVar5 = (ulonglong)(int)param_2;
  uVar7 = (ulonglong)local_res18;
  uVar8 = uVar5;
  local_res10 = param_2;
  do {
    uVar10 = uVar5 & 0xffffffff;
    uVar12 = param_3 & 0xffffffff;
    uVar3 = *(undefined8 *)(param_1 + ((longlong)((int)uVar5 + (int)param_3) >> 1) * 8);
    do {
      uVar11 = (uint)uVar12;
      uVar9 = (uint)uVar10;
      pcVar6 = (char *)(*param_4)(local_res8,*(undefined8 *)(param_1 + uVar8 * 8),uVar3);
      cVar2 = *pcVar6;
      while (cVar2 != '\0') {
        lVar1 = uVar8 * 8;
        uVar8 = uVar8 + 1;
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        pcVar6 = (char *)(*param_4)(local_res8,*(undefined8 *)(param_1 + 8 + lVar1),uVar3);
        cVar2 = *pcVar6;
      }
      pcVar6 = (char *)(*param_4)(local_res20,uVar3,*(undefined8 *)(param_1 + uVar7 * 8));
      cVar2 = *pcVar6;
      while (cVar2 != '\0') {
        lVar1 = uVar7 * 8;
        uVar7 = uVar7 - 1;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
        pcVar6 = (char *)(*param_4)(local_res20,uVar3,*(undefined8 *)(param_1 + -8 + lVar1));
        cVar2 = *pcVar6;
      }
      if ((longlong)uVar7 < (longlong)uVar8) break;
      if (uVar7 != uVar8) {
        uVar4 = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = *(undefined8 *)(param_1 + uVar8 * 8);
        *(undefined8 *)(param_1 + uVar8 * 8) = uVar4;
      }
      uVar11 = uVar11 - 1;
      uVar12 = (ulonglong)uVar11;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)uVar7);
    if ((int)local_res10 < (int)uVar11) {
      FUN_1453077a0(param_1,local_res10,uVar11,param_4);
    }
    uVar7 = (ulonglong)local_res18;
    if (local_res18 <= (int)uVar9) {
      return;
    }
    uVar5 = (ulonglong)uVar9;
    param_3 = uVar7;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 1453078d0 FUN_1453078d0 body=12 status=ok
// SIG undefined FUN_1453078d0(void)

longlong FUN_1453078d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1453078e0 FUN_1453078e0 body=43 status=ok
// SIG undefined FUN_1453078e0(void)

void FUN_1453078e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (*DAT_14c787678)(0,*(longlong *)(param_1 + 8),0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 145307910 FUN_145307910 body=164 status=ok
// SIG undefined FUN_145307910(void)

void FUN_145307910(undefined2 *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 4) == 0) {
    local_res8 = 0x9c0;
    uVar3 = (*DAT_14c787670)(0,&local_res8,0);
    *(undefined8 *)(param_1 + 4) = uVar3;
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(uVar3,"MT19937_buffer");
    }
  }
  uVar4 = 1;
  **(undefined4 **)(param_1 + 4) = param_2;
  lVar5 = 4;
  lVar6 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 4);
    iVar2 = (*(uint *)(lVar6 + lVar1) >> 0x1e ^ *(uint *)(lVar6 + lVar1)) * 0x6c078965 + uVar4;
    uVar4 = uVar4 + 1;
    *(int *)(lVar5 + lVar1) = iVar2;
    lVar5 = lVar5 + 4;
    lVar6 = lVar6 + 4;
  } while (uVar4 < 0x270);
  *param_1 = 0;
  return;
}



// FUNCTION 1453079c0 FUN_1453079c0 body=76 status=ok
// SIG undefined FUN_1453079c0(void)

undefined8 * FUN_1453079c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,0x180);
  *param_1 = uVar1;
  FUN_144bfbef0(uVar1,0xff,0x180);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf;
  return param_1;
}



// FUNCTION 145307a10 FUN_145307a10 body=20 status=ok
// SIG undefined FUN_145307a10(void)

void FUN_145307a10(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145307a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(DAT_14c6e47a8,*param_1,0);
  return;
}



// FUNCTION 145307a30 FUN_145307a30 body=41 status=ok
// SIG undefined FUN_145307a30(void)

longlong FUN_145307a30(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    plVar2 = (longlong *)*param_1;
    lVar3 = 0;
    do {
      if (*plVar2 != -1) break;
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 3;
    } while (lVar3 <= *(int *)((longlong)param_1 + 0xc));
  }
  return (longlong)iVar1;
}



// FUNCTION 145307a60 FUN_145307a60 body=16 status=ok
// SIG undefined FUN_145307a60(void)

undefined8 FUN_145307a60(longlong *param_1,int param_2)

{
  return *(undefined8 *)(*param_1 + 8 + (longlong)param_2 * 0x18);
}



// FUNCTION 145307a70 FUN_145307a70 body=16 status=ok
// SIG undefined FUN_145307a70(void)

undefined8 FUN_145307a70(longlong *param_1,int param_2)

{
  return *(undefined8 *)(*param_1 + 0x10 + (longlong)param_2 * 0x18);
}



// FUNCTION 145307a80 FUN_145307a80 body=55 status=ok
// SIG undefined FUN_145307a80(void)

longlong FUN_145307a80(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_2 = param_2 + 1;
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    lVar1 = (longlong)param_2;
    plVar2 = (longlong *)(*param_1 + lVar1 * 0x18);
    do {
      if (*plVar2 != -1) break;
      param_2 = param_2 + 1;
      lVar1 = lVar1 + 1;
      plVar2 = plVar2 + 3;
    } while (lVar1 <= *(int *)((longlong)param_1 + 0xc));
  }
  return (longlong)param_2;
}



// FUNCTION 145307ac0 FUN_145307ac0 body=9 status=ok
// SIG undefined FUN_145307ac0(void)

bool FUN_145307ac0(longlong param_1,int param_2)

{
  return param_2 <= *(int *)(param_1 + 0xc);
}



// FUNCTION 145307ad0 FUN_145307ad0 body=245 status=ok
// SIG undefined FUN_145307ad0(void)

bool FUN_145307ad0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = FUN_144bea740(param_2);
  uVar7 = (ulonglong)uVar2;
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_145307d00(param_1,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
  }
  lVar1 = param_1[1];
  uVar6 = (longlong)*(int *)((longlong)param_1 + 0xc) & uVar7;
  lVar5 = uVar6 * 0x18;
  lVar4 = *param_1;
  iVar3 = (int)lVar1;
  if (*(longlong *)(lVar4 + lVar5) != -1) {
    do {
      if ((*(ulonglong *)(lVar5 + lVar4) == uVar7) &&
         (iVar3 = FUN_144bfb930(param_2,*(undefined8 *)(lVar5 + 8 + lVar4)), iVar3 == 0))
      goto LAB_145307b80;
      uVar6 = uVar6 + 1 & (longlong)*(int *)((longlong)param_1 + 0xc);
      lVar5 = uVar6 * 0x18;
      lVar4 = *param_1;
    } while (*(longlong *)(lVar4 + lVar5) != -1);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
LAB_145307b80:
  lVar5 = uVar6 * 0x18;
  *(ulonglong *)(lVar5 + *param_1) = uVar7;
  *(undefined8 *)(*param_1 + 8 + lVar5) = param_2;
  *(undefined8 *)(*param_1 + 0x10 + lVar5) = param_3;
  return (int)lVar1 != (int)param_1[1];
}



// FUNCTION 145307bd0 FUN_145307bd0 body=155 status=ok
// SIG undefined FUN_145307bd0(void)

ulonglong FUN_145307bd0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar4 = FUN_144bea740(param_2);
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  uVar6 = (longlong)iVar5 & (ulonglong)uVar4;
  lVar1 = uVar6 * 0x18;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + lVar1);
  while( true ) {
    if (lVar3 == -1) {
      return (longlong)(iVar5 + 1);
    }
    if ((*(ulonglong *)(lVar1 + lVar2) == (ulonglong)uVar4) &&
       (iVar5 = FUN_144bfb930(param_2,*(undefined8 *)(lVar1 + 8 + lVar2)), iVar5 == 0)) break;
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    uVar6 = uVar6 + 1 & (longlong)iVar5;
    lVar1 = uVar6 * 0x18;
    lVar2 = *param_1;
    lVar3 = *(longlong *)(lVar2 + lVar1);
  }
  return uVar6;
}



// FUNCTION 145307c70 FUN_145307c70 body=65 status=ok
// SIG undefined FUN_145307c70(void)

undefined8 FUN_145307c70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_145307bd0();
  if (iVar1 <= *(int *)((longlong)param_1 + 0xc)) {
    return *(undefined8 *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18);
  }
  return param_3;
}



// FUNCTION 145307cc0 FUN_145307cc0 body=52 status=ok
// SIG undefined FUN_145307cc0(void)

void FUN_145307cc0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc) + 1) {
    lVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined8 *)(lVar1 + *param_1) = 0xffffffffffffffff;
      lVar1 = lVar1 + 0x18;
    } while (iVar2 < *(int *)((longlong)param_1 + 0xc) + 1);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145307d00 FUN_145307d00 body=192 status=ok
// SIG undefined FUN_145307d00(void)

void FUN_145307d00(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar2 = *param_1;
  lVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)param_2 * 0x18);
  *param_1 = lVar3;
  FUN_144bfbef0(lVar3,0xff,(longlong)param_2 * 0x18);
  lVar3 = (longlong)(iVar1 + 1);
  *(int *)((longlong)param_1 + 0xc) = param_2 + -1;
  *(undefined4 *)(param_1 + 1) = 0;
  if (0 < lVar3) {
    puVar4 = (undefined8 *)(lVar2 + 8);
    do {
      if (puVar4[-1] != -1) {
        FUN_145307ad0(param_1,*puVar4,puVar4[1]);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000145307db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
  return;
}



// FUNCTION 145307dc0 FUN_145307dc0 body=3 status=ok
// SIG undefined FUN_145307dc0(void)

undefined8 FUN_145307dc0(void)

{
  return 0;
}



// FUNCTION 145307dd0 FUN_145307dd0 body=897 status=ok
// SIG undefined FUN_145307dd0(void)

void FUN_145307dd0(longlong *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulonglong *local_2a8;
  int local_2a0;
  uint local_29c;
  longlong local_298;
  longlong lStack_290;
  ulonglong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [8];
  undefined1 local_260 [24];
  undefined1 local_248 [520];
  
  local_2a8 = (ulonglong *)0x0;
  local_2a0 = 0;
  local_29c = 0x80000000;
  (**(code **)(*param_1 + 0x58))(param_1,&local_2a8);
  lVar14 = (longlong)(local_2a0 + -1);
  if (-1 < local_2a0 + -1) {
    local_270 = lVar14 * 0x28;
    do {
      puVar12 = (undefined8 *)((longlong)local_2a8 + local_270);
      lVar4 = (**(code **)*param_2)(param_2,puVar12[1],&local_280);
      if (lVar4 != 0) {
        uVar13 = 0;
        local_298 = 0;
        lStack_290 = 0;
        if ((puVar12[3] == 0) ||
           (puVar5 = (undefined4 *)FUN_144bef800(puVar12[3],local_res18),
           ((byte)*puVar5 & 0x1f) != 6)) {
          local_278 = local_298;
          lVar10 = lStack_290;
        }
        else {
          local_278 = puVar12[2];
          lVar10 = puVar12[3];
          if ((*(byte *)(puVar12 + 4) & 1) != 0) {
            FUN_144be6b20(puVar12[4] & 0xfffffffffffffffe);
          }
          uVar13 = puVar12[4];
        }
        local_288 = 0;
        local_298 = 0;
        lStack_290 = 0;
        plVar15 = (longlong *)(uVar13 & 0xfffffffffffffffe);
        (**(code **)(*plVar15 + 0x48))(plVar15,local_res20,local_278,lVar10,&local_298);
        lVar9 = lStack_290;
        if ((local_288 & 1) != 0) {
          FUN_144be6b30(local_288 & 0xfffffffffffffffe);
        }
        cVar3 = FUN_144b45dd0(local_280,lVar9);
        if (cVar3 == '\0') {
          FUN_144bde670(local_260,local_248,0x200);
          uVar6 = FUN_144beee40(lVar9);
          uVar7 = FUN_144beee40(local_280);
          uVar8 = FUN_144be6160(local_260,"Class mismatch, cannot resolve link: ");
          uVar7 = FUN_144be6160(uVar8,uVar7);
          uVar7 = FUN_144be6160(uVar7,&DAT_149d3c7f0);
          FUN_144be6160(uVar7,uVar6);
          FUN_144bfc0d0(0xf034ed21,local_248,"ResourceHandle\\hkResourceHandle.cpp",0xb6);
          FUN_144bde6e0(local_260);
        }
        else {
          lVar9 = (**(code **)(*param_1 + 0x30))(param_1);
          if (lVar4 == lVar9) {
            if ((uVar13 & 1) != 0) {
              FUN_144be6b30(plVar15);
            }
            break;
          }
          lStack_290 = local_280;
          local_298 = lVar4;
          if (local_280 == 0) {
            local_288 = 0;
          }
          else {
            local_288 = FUN_144befdb0();
          }
          if ((local_288 & 1) != 0) {
            FUN_144be6b20(local_288 & 0xfffffffffffffffe);
          }
          (**(code **)(*plVar15 + 0x40))(plVar15,local_268,local_278,lVar10,&local_298);
          if ((local_288 & 1) != 0) {
            FUN_144be6b30(local_288 & 0xfffffffffffffffe);
          }
          (**(code **)(*param_1 + 0x50))(param_1,*puVar12);
        }
        if ((uVar13 & 1) != 0) {
          FUN_144be6b30(plVar15);
        }
      }
      local_270 = local_270 + -0x28;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  puVar2 = local_2a8;
  if (local_2a8 + (longlong)local_2a0 * 5 != local_2a8) {
    puVar11 = local_2a8 + (longlong)local_2a0 * 5 + 4;
    do {
      if ((puVar11[-5] & 1) != 0) {
        FUN_144be6b30(puVar11[-5] & 0xfffffffffffffffe);
      }
      puVar1 = puVar11 + -9;
      puVar11 = puVar11 + -5;
    } while (puVar1 != puVar2);
  }
  local_2a0 = 0;
  if ((-1 < (int)local_29c) && (local_2a8 != (ulonglong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2a8,(ulonglong)(local_29c & 0x7fffffff) * 0x28);
  }
  return;
}



// FUNCTION 145308160 FUN_145308160 body=3 status=ok
// SIG undefined FUN_145308160(void)

undefined8 FUN_145308160(void)

{
  return 0;
}



// FUNCTION 145308170 FUN_145308170 body=214 status=ok
// SIG undefined FUN_145308170(void)

void FUN_145308170(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  for (lVar2 = (**(code **)(*param_1 + 0x70))(param_1,0,0); lVar2 != 0;
      lVar2 = (**(code **)(*param_1 + 0x70))(param_1,0,lVar2)) {
    FUN_145308170(lVar2,param_2);
  }
  for (lVar2 = (**(code **)(*param_1 + 0x40))(param_1,0,0,0); lVar2 != 0;
      lVar2 = (**(code **)(*param_1 + 0x40))(param_1,0,0,lVar2)) {
    iVar3 = (int)param_2[1] + 1;
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_145309b20(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    plVar1 = (longlong *)(*param_2 + (longlong)(int)param_2[1] * 8);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = lVar2;
    }
    *(int *)(param_2 + 1) = iVar3;
  }
  return;
}



// FUNCTION 145308250 FUN_145308250 body=184 status=ok
// SIG undefined FUN_145308250(void)

void FUN_145308250(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  FUN_145308170(param_1,&local_18);
  iVar2 = 0;
  if (0 < local_10) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + local_18) + 0x68))
                (*(longlong **)(lVar1 + local_18),param_2);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < local_10);
  }
  local_10 = 0;
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_18,(ulonglong)(local_c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 145308310 FUN_145308310 body=55 status=ok
// SIG undefined FUN_145308310(void)

undefined8 * FUN_145308310(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkMemoryResourceHandle::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  return param_1;
}



// FUNCTION 145308350 FUN_145308350 body=20 status=ok
// SIG undefined FUN_145308350(void)

undefined * FUN_145308350(longlong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  puVar1 = &DAT_149993060;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  return puVar1;
}



// FUNCTION 145308370 FUN_145308370 body=9 status=ok
// SIG undefined FUN_145308370(void)

void FUN_145308370(longlong param_1)

{
  FUN_144be3730(param_1 + 0x20);
  return;
}



// FUNCTION 145308380 FUN_145308380 body=5 status=ok
// SIG undefined FUN_145308380(void)

undefined8 FUN_145308380(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 145308390 FUN_145308390 body=9 status=ok
// SIG undefined FUN_145308390(void)

void FUN_145308390(longlong param_1)

{
  FUN_14551dd10(param_1 + 0x18);
  return;
}



// FUNCTION 1453083a0 FUN_1453083a0 body=9 status=ok
// SIG undefined FUN_1453083a0(void)

void FUN_1453083a0(longlong param_1)

{
  FUN_14551dcd0(param_1 + 0x18);
  return;
}



// FUNCTION 1453083b0 FUN_1453083b0 body=131 status=ok
// SIG undefined FUN_1453083b0(void)

void FUN_1453083b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30) + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
    FUN_1453099c0((longlong *)(param_1 + 0x28),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined8 *)((longlong)*(int *)(param_1 + 0x30) * 0x10 + *(longlong *)(param_1 + 0x28))
  ;
  *(int *)(param_1 + 0x30) = iVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  FUN_144be3730(puVar1,param_2);
  FUN_144be3730(puVar1 + 1,param_3);
  return;
}



// FUNCTION 145308440 FUN_145308440 body=240 status=ok
// SIG undefined FUN_145308440(void)

void FUN_145308440(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    do {
      iVar2 = FUN_144bfb930(*(ulonglong *)(lVar4 + *(longlong *)(param_1 + 0x28)) &
                            0xfffffffffffffffe,param_2);
      if (iVar2 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x10;
        FUN_144b49dd0(lVar4 + 8);
        FUN_144b49dd0(lVar4);
        iVar2 = *(int *)(param_1 + 0x30);
        iVar3 = iVar2 + -1;
        *(int *)(param_1 + 0x30) = iVar3;
        if (iVar3 == iVar6) {
          return;
        }
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + -0x10 + (longlong)iVar2 * 0x10);
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x10);
        if (puVar1 == puVar5) {
          return;
        }
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = *puVar5;
          *puVar5 = 0;
          puVar1[1] = puVar5[1];
          puVar5[1] = 0;
        }
        FUN_144b49dd0();
        FUN_144b49dd0(puVar5);
        return;
      }
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 145308530 FUN_145308530 body=1447 status=ok
// SIG undefined FUN_145308530(void)

void FUN_145308530(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *_Str;
  int local_res18;
  undefined1 local_res20 [8];
  longlong local_4c8;
  longlong lStack_4c0;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  undefined1 local_498 [8];
  longlong local_490;
  ulonglong uStack_488;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [512];
  undefined1 local_248 [520];
  
  lVar3 = *param_2;
  lVar4 = lVar3 + (longlong)(int)param_2[1] * 0x28;
  while (lVar15 = lVar4, lVar15 != lVar3) {
    lVar4 = lVar15 + -0x28;
    if ((*(byte *)(lVar15 + -8) & 1) != 0) {
      FUN_144be6b30(*(ulonglong *)(lVar15 + -8) & 0xfffffffffffffffe);
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < *(int *)(param_1 + 0x30)) {
    FUN_145309840(param_2,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x30));
  }
  local_res18 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    local_4b0 = 0;
    do {
      uVar6 = 0;
      lVar3 = param_2[1];
      iVar13 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar13;
      plVar2 = (longlong *)(*param_2 + (longlong)(int)lVar3 * 0x28);
      plVar9 = (longlong *)(*param_2 + (longlong)iVar13 * 0x28);
      if (plVar2 != plVar9) {
        plVar12 = plVar2 + 4;
        do {
          if (plVar12 != (longlong *)&DAT_00000020) {
            plVar12[-2] = 0;
            plVar12[-1] = 0;
            *plVar12 = 0;
          }
          plVar1 = plVar12 + 1;
          plVar12 = plVar12 + 5;
        } while (plVar1 != plVar9);
      }
      plVar9 = *(longlong **)(param_1 + 0x18);
      _Str = (char *)(*(ulonglong *)(local_4b0 + *(longlong *)(param_1 + 0x28)) & 0xfffffffffffffffe
                     );
      if (plVar9 == (longlong *)0x0) {
        local_4a8 = 0;
        lStack_4a0 = 0;
      }
      else if ((undefined8 *)*plVar9 == (undefined8 *)0x0) {
        plVar9 = (longlong *)FUN_144beec10(local_458,plVar9,&DAT_14c6dc390);
        local_4a8 = *plVar9;
        lStack_4a0 = plVar9[1];
      }
      else {
        (**(code **)*plVar9)(plVar9,&local_4a8);
      }
      lVar4 = lStack_4a0;
      lVar3 = local_4a8;
      if (lStack_4a0 != 0) {
        uVar6 = FUN_144befdb0(lStack_4a0);
      }
      if ((uVar6 & 1) != 0) {
        FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
      }
      local_4b8 = 0;
      local_4c8 = 0;
      lStack_4c0 = 0;
      uVar5 = local_4b8;
      if ((lVar4 != 0) &&
         (puVar7 = (undefined4 *)FUN_144bef800(lVar4,local_res20), uVar5 = local_4b8,
         ((byte)*puVar7 & 0x1f) == 7)) {
        local_4c8 = lVar3;
        lStack_4c0 = lVar4;
        if ((uVar6 & 1) != 0) {
          FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
        }
        uVar5 = uVar6;
        if ((local_4b8 & 1) != 0) {
          FUN_144be6b30(local_4b8 & 0xfffffffffffffffe);
        }
      }
      local_4b8 = uVar5;
      if ((uVar6 & 1) != 0) {
        FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
      }
      pcVar8 = strchr(_Str,0x2e);
      uVar6 = 0;
      while (pcVar8 != (char *)0x0) {
        lVar15 = 0;
        iVar13 = (int)pcVar8 - (int)_Str;
        FUN_144bfbed0(local_448,_Str,(longlong)iVar13);
        local_448[iVar13] = 0;
        _Str = _Str + (iVar13 + 1);
        plVar9 = (longlong *)FUN_144bebf10(&local_4c8,local_498,local_448);
        uVar5 = plVar9[2];
        lVar3 = *plVar9;
        lVar4 = plVar9[1];
        plVar9[2] = 0;
        *plVar9 = 0;
        plVar9[1] = 0;
        if ((uVar6 & 1) != 0) {
          FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
        }
        if ((uStack_488 & 1) != 0) {
          FUN_144be6b30(uStack_488 & 0xfffffffffffffffe);
        }
        uVar16 = uVar5;
        if (lVar3 == 0) goto LAB_1453089d4;
        puVar7 = (undefined4 *)FUN_144bef800(lVar4);
        lVar10 = lVar15;
        if (((byte)*puVar7 & 0x1f) == 7) {
          lVar10 = lVar4;
        }
        if (lVar10 == 0) {
          FUN_144bde670(local_478,local_248,0x200);
          uVar11 = FUN_144be6160(local_478,"Member is not a record : ");
          FUN_144be6160(uVar11,local_448);
          FUN_144bfc0d0(0xf032edfe,local_248,"ResourceHandle\\hkResourceHandle.cpp",0x85);
          FUN_144bde6e0(local_478);
          uVar16 = 0;
          if ((uVar5 & 1) != 0) {
            FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
          }
          goto LAB_1453089d4;
        }
        local_490 = 0;
        uStack_488 = 0;
        if ((lVar4 == 0) ||
           (puVar7 = (undefined4 *)FUN_144bef800(lVar4), ((byte)*puVar7 & 0x1f) != 7)) {
          uVar14 = 0;
          uVar6 = 0;
          lStack_4c0 = local_490;
          uVar16 = uStack_488;
        }
        else {
          if ((uVar5 & 1) != 0) {
            FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
          }
          uVar14 = uVar5 & 0xff;
          uVar6 = uVar5;
          lStack_4c0 = lVar4;
          lVar15 = lVar3;
        }
        local_4c8 = lVar15;
        if ((uVar14 & 1) != 0) {
          FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
        }
        if ((local_4b8 & 1) != 0) {
          FUN_144be6b30(local_4b8 & 0xfffffffffffffffe);
        }
        local_4b8 = uVar16;
        if ((uVar16 & 1) != 0) {
          FUN_144be6b30(uVar16 & 0xfffffffffffffffe);
        }
        pcVar8 = strchr(_Str,0x2e);
        uVar6 = uVar5;
      }
      plVar9 = (longlong *)FUN_144bebf10(&local_4c8,local_498,_Str);
      uVar16 = plVar9[2];
      lVar3 = *plVar9;
      lVar4 = plVar9[1];
      plVar9[2] = 0;
      *plVar9 = 0;
      plVar9[1] = 0;
      if ((uVar6 & 1) != 0) {
        FUN_144be6b30(uVar6 & 0xfffffffffffffffe);
      }
      if ((uStack_488 & 1) != 0) {
        FUN_144be6b30(uStack_488 & 0xfffffffffffffffe);
      }
      if (lVar3 == 0) {
LAB_1453089d4:
        lVar3 = *param_2 + (longlong)(int)param_2[1] * 0x28;
        lVar4 = lVar3;
        while (lVar15 = lVar4, lVar15 != lVar3 + -0x28) {
          lVar4 = lVar15 + -0x28;
          if ((*(byte *)(lVar15 + -8) & 1) != 0) {
            FUN_144be6b30(*(ulonglong *)(lVar15 + -8) & 0xfffffffffffffffe);
          }
        }
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        FUN_144bde670(local_468,local_248,0x200);
        uVar11 = FUN_144be6160(local_468,"Cannot find member : ");
        FUN_144be6160(uVar11,_Str);
        FUN_144bfc0d0(0xf032edf1,local_248,"ResourceHandle\\hkResourceHandle.cpp",0x96);
        FUN_144bde6e0(local_468);
      }
      else {
        *plVar2 = (longlong)_Str;
        plVar2[3] = lVar4;
        plVar2[2] = lVar3;
        if ((uVar16 & 1) != 0) {
          FUN_144be6b20(uVar16 & 0xfffffffffffffffe);
        }
        if ((*(byte *)(plVar2 + 4) & 1) != 0) {
          FUN_144be6b30(plVar2[4] & 0xfffffffffffffffe);
        }
        plVar2[4] = uVar16;
        plVar2[1] = *(ulonglong *)(local_4b0 + 8 + *(longlong *)(param_1 + 0x28)) &
                    0xfffffffffffffffe;
      }
      lVar3 = local_4b0;
      if ((uVar16 & 1) != 0) {
        FUN_144be6b30(uVar16 & 0xfffffffffffffffe);
      }
      if ((local_4b8 & 1) != 0) {
        FUN_144be6b30(local_4b8 & 0xfffffffffffffffe);
      }
      local_4b0 = lVar3 + 0x10;
      local_res18 = local_res18 + 1;
    } while (local_res18 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 145308af0 FUN_145308af0 body=120 status=ok
// SIG undefined FUN_145308af0(void)

void FUN_145308af0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x10 + lVar1;
  if (lVar2 == lVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  do {
    lVar3 = lVar2 + -0x10;
    FUN_144b49dd0(lVar2 + -8);
    FUN_144b49dd0(lVar3);
    lVar2 = lVar3;
  } while (lVar3 != lVar1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 145308b70 FUN_145308b70 body=249 status=ok
// SIG undefined FUN_145308b70(void)

undefined8 * FUN_145308b70(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = hkMemoryResourceHandle::vftable;
  lVar1 = param_1[5];
  lVar2 = (longlong)*(int *)(param_1 + 6) * 0x10 + lVar1;
  while (lVar2 != lVar1) {
    FUN_144b49dd0(lVar2 + -8);
    FUN_144b49dd0(lVar2 + -0x10);
    lVar2 = lVar2 + -0x10;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144b49dd0(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 145308c70 FUN_145308c70 body=94 status=ok
// SIG undefined FUN_145308c70(void)

undefined8 * FUN_145308c70(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkMemoryResourceContainer::vftable;
  FUN_144be36a0(param_1 + 3,param_2,0xffffffff);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  return param_1;
}



// FUNCTION 145308d00 FUN_145308d00 body=9 status=ok
// SIG undefined FUN_145308d00(void)

ulonglong FUN_145308d00(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffe;
}



// FUNCTION 145308d10 FUN_145308d10 body=343 status=ok
// SIG undefined FUN_145308d10(void)

longlong * FUN_145308d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_res8;
  
  local_res8 = 0x38;
  plVar2 = (longlong *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar2,"hkMemoryResourceHandle");
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2[2] = 1;
    plVar2[1] = 0xffffffff;
    *plVar2 = (longlong)hkMemoryResourceHandle::vftable;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x34) = 0x80000000;
  }
  if (*(code **)(*plVar2 + 0x28) == FUN_145308370) {
    FUN_144be3730(plVar2 + 4);
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  if (*(code **)(*plVar2 + 0x40) == FUN_1453083a0) {
    FUN_14551dcd0(plVar2 + 3);
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_3,param_4);
  }
  FUN_144b3d910(plVar2);
  iVar3 = *(int *)(param_1 + 0x30) + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar3) {
    FUN_145309d50(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 8);
  if (puVar1 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x30) = iVar3;
    if (plVar2 != (longlong *)0x0) {
      FUN_144b3f230(plVar2);
    }
  }
  else {
    *puVar1 = plVar2;
    *(int *)(param_1 + 0x30) = iVar3;
  }
  FUN_144b3f230(plVar2);
  return plVar2;
}



// FUNCTION 145308e70 FUN_145308e70 body=4 status=ok
// SIG undefined FUN_145308e70(void)

undefined4 FUN_145308e70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 145308e80 FUN_145308e80 body=448 status=ok
// SIG undefined FUN_145308e80(void)

longlong * FUN_145308e80(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_238 [16];
  undefined1 local_228 [512];
  
  uVar9 = 0;
  uVar10 = uVar9;
  if (param_4 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) <= (int)uVar9) break;
      uVar9 = (ulonglong)((int)uVar9 + 1);
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + uVar10);
      uVar10 = uVar10 + 8;
    } while (*plVar7 != param_4);
  }
  if ((int)uVar9 < *(int *)(param_1 + 0x30)) {
    lVar11 = (longlong)(int)uVar9 * 8;
    do {
      plVar7 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x28));
      if (param_2 == 0) {
LAB_145308f35:
        if (param_3 == 0) {
          return plVar7;
        }
        lVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
        if ((lVar4 != 0) && (cVar1 = FUN_144b45dd0(lVar4,param_3), cVar1 != '\0')) {
          return plVar7;
        }
        if (param_2 != 0) {
          FUN_144bde670(local_238,local_228,0x200);
          if (lVar4 == 0) {
            pcVar5 = "(null)";
          }
          else {
            pcVar5 = (char *)FUN_144beee40(lVar4);
          }
          uVar3 = FUN_144beee40(param_3);
          uVar6 = FUN_144be6160(local_238,"Class mismatch, cannot resolve link: ");
          uVar3 = FUN_144be6160(uVar6,uVar3);
          uVar3 = FUN_144be6160(uVar3,&DAT_149d3c7f0);
          FUN_144be6160(uVar3,pcVar5);
          FUN_144bfc0d0(0xf034ed22,local_228,"ResourceHandle\\hkResourceHandle.cpp",0x134);
          FUN_144bde6e0(local_238);
          return (longlong *)0x0;
        }
      }
      else {
        FUN_144bdf360(local_228);
        uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,local_228);
        iVar2 = FUN_144bfb930(param_2,uVar3);
        if (iVar2 == 0) {
          FUN_144bdf2f0(local_228);
          goto LAB_145308f35;
        }
        FUN_144bdf2f0(local_228);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      lVar11 = lVar11 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x30));
  }
  return (longlong *)0x0;
}



// FUNCTION 145309040 FUN_145309040 body=154 status=ok
// SIG undefined FUN_145309040(void)

longlong * FUN_145309040(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar7 = uVar5;
  if (param_3 != 0) {
    do {
      if (*(int *)(param_1 + 0x30) <= (int)uVar5) break;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x28) + uVar7);
      uVar7 = uVar7 + 8;
    } while (*plVar3 != param_3);
  }
  if ((int)uVar5 < *(int *)(param_1 + 0x30)) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      plVar3 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x28));
      lVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if ((lVar2 != 0) && (cVar1 = FUN_144b45dd0(lVar2,param_2), cVar1 != '\0')) {
        return plVar3;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x30));
  }
  return (longlong *)0x0;
}



// FUNCTION 1453090e0 FUN_1453090e0 body=238 status=ok
// SIG undefined FUN_1453090e0(void)

void FUN_1453090e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    uVar6 = uVar4;
    do {
      iVar5 = (int)uVar6;
      if (*plVar2 == param_2) goto LAB_145309138;
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x30));
  }
  iVar5 = -1;
LAB_145309138:
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
  if (-1 < iVar5) {
    if (*(longlong *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x28)) != 0) {
      FUN_144b3f230();
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    uVar3 = *(int *)(param_1 + 0x30) - iVar5;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 8);
    plVar2 = plVar1 + 1;
    if (((uVar3 != 0) && (plVar1 != plVar2)) && (0 < (int)uVar3)) {
      lVar7 = (longlong)plVar1 - (longlong)plVar2;
      uVar4 = (ulonglong)uVar3;
      do {
        plVar1 = (longlong *)(lVar7 + (longlong)plVar2);
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = *plVar2;
          *plVar2 = 0;
        }
        if (*plVar2 != 0) {
          FUN_144b3f230();
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1453091d0 FUN_1453091d0 body=5 status=ok
// SIG undefined FUN_1453091d0(void)

undefined8 FUN_1453091d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1453091e0 FUN_1453091e0 body=318 status=ok
// SIG undefined FUN_1453091e0(void)

undefined8 * FUN_1453091e0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_res8;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x70))(param_1,param_2,0);
  if (puVar2 == (undefined8 *)0x0) {
    local_res8 = 0x48;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"hkMemoryResourceContainer");
    }
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[2] = 1;
      puVar2[1] = 0xffffffff;
      *puVar2 = hkMemoryResourceContainer::vftable;
      FUN_144be36a0(puVar2 + 3,param_2,0xffffffff);
      *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80000000;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x44) = 0x80000000;
      FUN_144b3d910(puVar2);
    }
    iVar3 = (int)param_1[8] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar3) {
      FUN_145309c10(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined8 *)(param_1[7] + (longlong)(int)param_1[8] * 8);
    if (puVar1 == (undefined8 *)0x0) {
      *(int *)(param_1 + 8) = iVar3;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_144b3f230(puVar2);
      }
    }
    else {
      *puVar1 = puVar2;
      *(int *)(param_1 + 8) = iVar3;
    }
    puVar2[4] = param_1;
    FUN_144b3f230(puVar2);
  }
  return puVar2;
}



// FUNCTION 145309320 FUN_145309320 body=205 status=ok
// SIG undefined FUN_145309320(void)

void FUN_145309320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_2 != 0) {
    FUN_144b3d910();
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar5 = 0;
    plVar4 = *(longlong **)(param_1 + 0x38);
    do {
      if (*plVar4 == param_2) goto LAB_14530936d;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar4 = plVar4 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  iVar6 = -1;
LAB_14530936d:
  if (param_2 != 0) {
    FUN_144b3f230(param_2);
  }
  if (-1 < iVar6) {
    if (*(longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0x38)) != 0) {
      FUN_144b3f230();
    }
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = iVar2 + -1;
    *(int *)(param_1 + 0x40) = iVar3;
    if (iVar3 != iVar6) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x38) + ((longlong)iVar2 + -1) * 8);
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 8);
      if (plVar1 != plVar4) {
        if (plVar1 != (longlong *)0x0) {
          *plVar1 = *plVar4;
          *plVar4 = 0;
        }
        if (*plVar4 != 0) {
          FUN_144b3f230();
        }
      }
    }
  }
  return;
}



// FUNCTION 1453093f0 FUN_1453093f0 body=4 status=ok
// SIG undefined FUN_1453093f0(void)

undefined4 FUN_1453093f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 145309400 FUN_145309400 body=563 status=ok
// SIG undefined FUN_145309400(void)

undefined4 * FUN_145309400(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  
  for (plVar2 = param_3; plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))()) {
    if (plVar2 == param_1) {
      FUN_144bde670(local_228,local_218,0x200);
      uVar4 = FUN_144be6160(local_228,"Cannot parent \'");
      uVar4 = FUN_144be6330(uVar4,param_1 + 3);
      uVar4 = FUN_144be6160(uVar4,"\' to \'");
      uVar4 = FUN_144be6330(uVar4,param_3 + 3);
      FUN_144be6160(uVar4,"\' as this would create a circular dependency ");
      FUN_144bfc0d0(0xabba4554,local_218,"ResourceHandle\\hkResourceHandle.cpp",0x1b0);
      FUN_144bde6e0(local_228);
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  FUN_144b3d910(param_1);
  if (param_1 != (longlong *)0x0) {
    FUN_144b3d910(param_1);
  }
  uVar6 = 0;
  iVar7 = *(int *)(param_1[4] + 0x40);
  if (0 < iVar7) {
    puVar3 = *(undefined8 **)(param_1[4] + 0x38);
    uVar9 = uVar6;
    do {
      iVar8 = (int)uVar9;
      if ((longlong *)*puVar3 == param_1) goto LAB_145309499;
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while ((longlong)uVar6 < (longlong)iVar7);
  }
  iVar8 = -1;
LAB_145309499:
  FUN_144b3f230(param_1);
  lVar10 = param_1[4];
  if (*(longlong *)((longlong)iVar8 * 8 + *(longlong *)(lVar10 + 0x38)) != 0) {
    FUN_144b3f230();
  }
  *(int *)(lVar10 + 0x40) = *(int *)(lVar10 + 0x40) + -1;
  uVar5 = *(int *)(lVar10 + 0x40) - iVar8;
  plVar1 = (longlong *)((longlong)iVar8 * 8 + *(longlong *)(lVar10 + 0x38));
  plVar2 = plVar1 + 1;
  if (((uVar5 != 0) && (plVar1 != plVar2)) && (0 < (int)uVar5)) {
    lVar10 = (longlong)plVar1 - (longlong)plVar2;
    uVar6 = (ulonglong)uVar5;
    do {
      plVar1 = (longlong *)(lVar10 + (longlong)plVar2);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = *plVar2;
        *plVar2 = 0;
      }
      if (*plVar2 != 0) {
        FUN_144b3f230();
      }
      plVar2 = plVar2 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_144b3d910(param_1);
  iVar7 = (int)param_3[8] + 1;
  if ((int)(*(uint *)((longlong)param_3 + 0x44) & 0x7fffffff) < iVar7) {
    FUN_145309c10(param_3 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar3 = (undefined8 *)(param_3[7] + (longlong)(int)param_3[8] * 8);
  if (puVar3 == (undefined8 *)0x0) {
    *(int *)(param_3 + 8) = iVar7;
    if (param_1 != (longlong *)0x0) {
      FUN_144b3f230(param_1);
    }
  }
  else {
    *puVar3 = param_1;
    *(int *)(param_3 + 8) = iVar7;
  }
  param_1[4] = (longlong)param_3;
  FUN_144b3f230(param_1);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145309640 FUN_145309640 body=151 status=ok
// SIG undefined FUN_145309640(void)

longlong FUN_145309640(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar7 = uVar5;
  if (param_3 != 0) {
    do {
      if (*(int *)(param_1 + 0x40) <= (int)uVar5) break;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar7);
      uVar7 = uVar7 + 8;
    } while (*plVar3 != param_3);
  }
  if ((int)uVar5 < *(int *)(param_1 + 0x40)) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      lVar1 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x38));
      if (param_2 == 0) {
        return lVar1;
      }
      iVar2 = FUN_144bfb930(param_2,*(ulonglong *)(lVar1 + 0x18) & 0xfffffffffffffffe);
      if (iVar2 == 0) {
        return lVar1;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x40));
  }
  return 0;
}



// FUNCTION 1453096e0 FUN_1453096e0 body=349 status=ok
// SIG undefined FUN_1453096e0(void)

undefined8 * FUN_1453096e0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkMemoryResourceContainer::vftable;
  lVar2 = param_1[7];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 8) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 3);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar2 = param_1[5];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 6) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144b49dd0(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 145309840 FUN_145309840 body=376 status=ok
// SIG undefined FUN_145309840(void)

ulonglong FUN_145309840(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar8) {
    uVar9 = uVar8;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar9 * 0x28;
  lVar4 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar5 = puVar2 + 3;
    uVar11 = (ulonglong)uVar1;
    puVar6 = (undefined8 *)(lVar4 + 0x20);
    puVar10 = puVar2;
    do {
      if (puVar6 + -4 != (undefined8 *)0x0) {
        puVar6[-4] = *puVar10;
        puVar6[-3] = puVar5[-2];
        puVar6[-2] = puVar5[-1];
        puVar6[-1] = *puVar5;
        *puVar6 = puVar5[1];
        puVar5[1] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
      }
      puVar6 = puVar6 + 5;
      puVar10 = puVar10 + 5;
      puVar5 = puVar5 + 5;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar7 = puVar2 + 4;
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar9 * 0x28 + 0x28;
  uVar11 = uVar9;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar11 = uVar9 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x28;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9;
      uVar8 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar3,0);
      uVar11 = uVar11 + uVar9 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 1453099c0 FUN_1453099c0 body=339 status=ok
// SIG undefined FUN_1453099c0(void)

void FUN_1453099c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar7 = param_3;
  if (param_3 < uVar3) {
    uVar7 = uVar3;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  puVar4 = puVar5;
  puVar8 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = *puVar4;
        *puVar4 = 0;
        puVar8[1] = puVar4[1];
        puVar4[1] = 0;
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar3 != 0);
    do {
      FUN_144b49dd0(puVar5 + 1);
      FUN_144b49dd0(puVar5);
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = uVar7 * 0x10 + 0x10;
  uVar6 = uVar7;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar6 = uVar7 + 1;
    if (uVar3 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 << 4);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 145309b20 FUN_145309b20 body=235 status=ok
// SIG undefined FUN_145309b20(void)

void FUN_145309b20(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 145309c10 FUN_145309c10 body=310 status=ok
// SIG undefined FUN_145309c10(void)

void FUN_145309c10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145309d50 FUN_145309d50 body=310 status=ok
// SIG undefined FUN_145309d50(void)

void FUN_145309d50(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar6 * 8;
  plVar2 = (longlong *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145309e90 FUN_145309e90 body=154 status=ok
// SIG undefined FUN_145309e90(void)

undefined8 * FUN_145309e90(undefined8 *param_1,undefined8 param_2)

{
  param_1[7] = param_2;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  *param_1 = hkParserBuffer::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14039ab22(param_1 + 5,&PTR_vftable_14c6e47a0,1);
  if ((*(int *)(param_1 + 6) < 1) || (1 < *(int *)(param_1 + 6))) {
    *(undefined4 *)(param_1 + 6) = 1;
  }
  *(undefined1 *)param_1[5] = 0;
  if ((*(int *)(param_1 + 6) < 0) || (0 < *(int *)(param_1 + 6))) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  param_1[4] = param_1[5];
  param_1[3] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 145309f30 FUN_145309f30 body=98 status=ok
// SIG undefined FUN_145309f30(void)

void FUN_145309f30(undefined8 *param_1)

{
  *param_1 = hkParserBuffer::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145309fa0 FUN_145309fa0 body=113 status=ok
// SIG undefined FUN_145309fa0(void)

undefined1 * FUN_145309fa0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_res20 [8];
  
  iVar1 = FUN_144bfbbb0(param_3);
  pcVar2 = (char *)FUN_14530a020(param_1,local_res20,param_3,iVar1);
  if (*pcVar2 == '\0') {
    *param_2 = 0;
  }
  else {
    if (iVar1 <= (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x28)) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)iVar1;
    }
    *param_2 = 1;
  }
  return param_2;
}



// FUNCTION 14530a020 FUN_14530a020 body=337 status=ok
// SIG undefined FUN_14530a020(void)

undefined1 * FUN_14530a020(longlong param_1,undefined1 *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x30);
  iVar8 = (iVar5 - *(int *)(param_1 + 0x20)) + *(int *)(param_1 + 0x28);
  if (iVar8 < param_4) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar4 = param_4 - iVar8;
    if (param_4 - iVar8 < 0x100) {
      uVar4 = 0x100;
    }
    uVar7 = (ulonglong)uVar4;
    iVar6 = *(int *)(param_1 + 0x30);
    iVar8 = iVar5 + 1 + uVar4;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar8) {
      FUN_14039ab22(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    *(int *)(param_1 + 0x30) = iVar8;
    plVar2 = *(longlong **)(param_1 + 0x38);
    if (plVar2[1] - *plVar2 < (longlong)uVar7) {
      uVar4 = FUN_144f89560(plVar2,(longlong)iVar5 + *(longlong *)(param_1 + 0x28),uVar7);
    }
    else {
      FUN_144b3d470();
      *plVar2 = *plVar2 + uVar7;
    }
    iVar6 = iVar6 + uVar4;
    *(undefined1 *)((longlong)iVar6 + *(longlong *)(param_1 + 0x28)) = 0;
    iVar8 = *(int *)(param_1 + 0x30);
    if ((iVar8 < iVar6) || (iVar6 < iVar8)) {
      *(int *)(param_1 + 0x30) = iVar6;
      iVar8 = iVar6;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (lVar3 != lVar1) {
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (lVar3 - lVar1);
    }
    iVar8 = ((int)lVar3 - *(int *)(param_1 + 0x20)) + iVar8;
  }
  if (iVar8 < param_4) {
    *param_2 = 0;
    return param_2;
  }
  iVar5 = FUN_144bfbad0(*(undefined8 *)(param_1 + 0x20),param_3,param_4);
  *param_2 = iVar5 == 0;
  return param_2;
}



// FUNCTION 14530a180 FUN_14530a180 body=228 status=ok
// SIG undefined FUN_14530a180(void)

int FUN_14530a180(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar4 = 0x100;
  if (0xff < param_2) {
    iVar4 = param_2;
  }
  iVar5 = iVar1 + 1 + iVar4;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar5) {
    FUN_14039ab22(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  *(int *)(param_1 + 0x30) = iVar5;
  plVar3 = *(longlong **)(param_1 + 0x38);
  lVar6 = (longlong)iVar4;
  if (plVar3[1] - *plVar3 < lVar6) {
    iVar4 = FUN_144f89560(plVar3,(longlong)iVar1 + *(longlong *)(param_1 + 0x28),lVar6);
  }
  else {
    FUN_144b3d470();
    *plVar3 = *plVar3 + lVar6;
  }
  iVar4 = iVar4 + iVar1;
  *(undefined1 *)((longlong)iVar4 + *(longlong *)(param_1 + 0x28)) = 0;
  iVar5 = *(int *)(param_1 + 0x30);
  if ((iVar5 < iVar4) || (iVar4 < iVar5)) {
    *(int *)(param_1 + 0x30) = iVar4;
    iVar5 = iVar4;
  }
  if (*(longlong *)(param_1 + 0x28) != lVar2) {
    *(longlong *)(param_1 + 0x20) =
         *(longlong *)(param_1 + 0x20) + (*(longlong *)(param_1 + 0x28) - lVar2);
  }
  return iVar5 - iVar1;
}



// FUNCTION 14530a270 FUN_14530a270 body=58 status=ok
// SIG undefined FUN_14530a270(void)

void FUN_14530a270(longlong param_1)

{
  char *pcVar1;
  
  for (pcVar1 = (char *)((longlong)*(int *)(param_1 + 0x1c) + *(longlong *)(param_1 + 0x28));
      pcVar1 < *(char **)(param_1 + 0x20); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28);
  return;
}



// FUNCTION 14530a2b0 FUN_14530a2b0 body=95 status=ok
// SIG undefined FUN_14530a2b0(void)

void FUN_14530a2b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = iVar1;
  if (0x400 < iVar1) {
    FUN_144bfbee0(*(longlong *)(param_1 + 0x28),(longlong)iVar1 + *(longlong *)(param_1 + 0x28),
                  (longlong)(*(int *)(param_1 + 0x30) - iVar1));
    iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x18);
    if ((*(int *)(param_1 + 0x30) < iVar1) || (iVar1 < *(int *)(param_1 + 0x30))) {
      *(int *)(param_1 + 0x30) = iVar1;
    }
    *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x28)) = 0;
    *(longlong *)(param_1 + 0x20) =
         *(longlong *)(param_1 + 0x20) - (longlong)*(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14530a310 FUN_14530a310 body=165 status=ok
// SIG undefined FUN_14530a310(void)

undefined8 * FUN_14530a310(undefined8 *param_1,uint param_2)

{
  *param_1 = hkParserBuffer::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14530a3c0 FUN_14530a3c0 body=61 status=ok
// SIG undefined FUN_14530a3c0(void)

undefined8 * FUN_14530a3c0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkXmlLexAnalyzer::vftable;
  FUN_145309e90(param_1 + 3);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14530a400 FUN_14530a400 body=44 status=ok
// SIG undefined FUN_14530a400(void)

void FUN_14530a400(undefined8 *param_1)

{
  *param_1 = hkXmlLexAnalyzer::vftable;
  FUN_145309f30(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14530a430 FUN_14530a430 body=47 status=ok
// SIG undefined FUN_14530a430(void)

void FUN_14530a430(longlong param_1)

{
  FUN_14530a270(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    FUN_14530a460();
    return;
  }
  FUN_14530a760(param_1);
  return;
}



// FUNCTION 14530a460 FUN_14530a460 body=660 status=ok
// SIG undefined FUN_14530a460(void)

undefined8 FUN_14530a460(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  
  do {
    lVar3 = *(longlong *)(param_1 + 0x40);
    pcVar1 = *(char **)(param_1 + 0x38);
    if (pcVar1 < (char *)(*(int *)(param_1 + 0x48) + lVar3)) {
LAB_14530a4bb:
      cVar2 = *pcVar1;
      pcVar1 = pcVar1 + 1;
      *(char **)(param_1 + 0x38) = pcVar1;
    }
    else {
      FUN_14530a180(param_1 + 0x18,0x100);
      lVar3 = *(longlong *)(param_1 + 0x40);
      pcVar1 = *(char **)(param_1 + 0x38);
      if (pcVar1 < (char *)(*(int *)(param_1 + 0x48) + lVar3)) goto LAB_14530a4bb;
      cVar2 = '\0';
    }
    switch(cVar2) {
    case '\0':
      return 5;
    default:
      if ((((0x19 < (byte)(cVar2 + 0x9fU)) && (0x19 < (byte)(cVar2 + 0xbfU))) && (cVar2 != '_')) &&
         (cVar2 != ':')) {
        return 0xc;
      }
      goto LAB_14530a670;
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      FUN_14530a9d0(param_1);
      FUN_14530a270(param_1 + 0x18);
      break;
    case '\"':
      goto switchD_14530a4e5_caseD_22;
    case '/':
      return 0xb;
    case '=':
      return 9;
    case '>':
      if ((*(uint *)(param_1 + 0x60) & 2) != 0) {
        return 0xc;
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffe;
      return 6;
    case '?':
      if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
        if (pcVar1 < (char *)(*(int *)(param_1 + 0x48) + lVar3)) {
LAB_14530a52b:
          cVar2 = *pcVar1;
          pcVar1 = pcVar1 + 1;
          *(char **)(param_1 + 0x38) = pcVar1;
          if (cVar2 == '>') {
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfffffffc;
            return 7;
          }
        }
        else {
          FUN_14530a180(param_1 + 0x18,0x100);
          pcVar1 = *(char **)(param_1 + 0x38);
          if (pcVar1 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)))
          goto LAB_14530a52b;
        }
        if ((char *)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)) < pcVar1) {
          *(char **)(param_1 + 0x38) = pcVar1 + -1;
        }
      }
    }
  } while( true );
LAB_14530a670:
  cVar2 = *pcVar1;
  if (cVar2 == '\0') {
    FUN_14530a180(param_1 + 0x18,0x100);
    pcVar1 = *(char **)(param_1 + 0x38);
    cVar2 = *pcVar1;
  }
  if (((0x19 < (byte)(cVar2 + 0x9fU)) && (0x19 < (byte)(cVar2 + 0xbfU))) &&
     ((9 < (byte)(cVar2 - 0x30U) && ((cVar2 != '_' && (cVar2 != ':')))))) {
    return 8;
  }
  if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar1)
  goto code_r0x00014530a6be;
  goto LAB_14530a6e0;
code_r0x00014530a6be:
  FUN_14530a180(param_1 + 0x18,0x100);
  pcVar1 = *(char **)(param_1 + 0x38);
  if (pcVar1 < (char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_14530a6e0:
    pcVar1 = pcVar1 + 1;
    *(char **)(param_1 + 0x38) = pcVar1;
  }
  goto LAB_14530a670;
switchD_14530a4e5_caseD_22:
  while( true ) {
    if ((char *)(*(int *)(param_1 + 0x48) + lVar3) <= pcVar1) {
      FUN_14530a180(param_1 + 0x18,0x100);
      lVar3 = *(longlong *)(param_1 + 0x40);
      pcVar1 = *(char **)(param_1 + 0x38);
      if ((char *)(*(int *)(param_1 + 0x48) + lVar3) <= pcVar1) {
        return 0xc;
      }
    }
    cVar2 = *pcVar1;
    pcVar1 = pcVar1 + 1;
    *(char **)(param_1 + 0x38) = pcVar1;
    if (cVar2 == '\0') break;
    if (cVar2 == '\"') {
      return 10;
    }
  }
  return 0xc;
}



// FUNCTION 14530a760 FUN_14530a760 body=620 status=ok
// SIG undefined FUN_14530a760(void)

ulonglong FUN_14530a760(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte *pbVar8;
  longlong lVar9;
  char local_res8 [8];
  
  lVar1 = param_1 + 0x18;
  pbVar8 = *(byte **)(param_1 + 0x38);
  if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8) {
    FUN_14530a180(lVar1,0x100);
    pbVar8 = *(byte **)(param_1 + 0x38);
    if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8) {
      return 5;
    }
  }
  bVar5 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  *(byte **)(param_1 + 0x38) = pbVar8;
  if (bVar5 == 0) {
    return 5;
  }
  if (bVar5 != 0x3c) {
    if ((bVar5 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar5 & 0x3fU) & 1) != 0)) {
      uVar6 = FUN_14530a9d0(param_1);
      return uVar6;
    }
    if ((ulonglong)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)) <
        *(ulonglong *)(param_1 + 0x38)) {
      *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) - 1;
    }
    do {
      pbVar8 = *(byte **)(param_1 + 0x38);
      if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8) {
        FUN_14530a180(lVar1,0x100);
        pbVar8 = *(byte **)(param_1 + 0x38);
        if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8)
        {
          return 2;
        }
      }
      bVar5 = *pbVar8;
      pbVar2 = pbVar8 + 1;
      *(byte **)(param_1 + 0x38) = pbVar2;
      if (bVar5 == 0) {
        return 2;
      }
      if (bVar5 == 0x3c) {
        if (pbVar2 <= (byte *)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40)))
        {
          return 2;
        }
        *(byte **)(param_1 + 0x38) = pbVar8;
        return 2;
      }
    } while ((0x20 < bVar5) || ((0x100002600U >> ((longlong)(char)bVar5 & 0x3fU) & 1) == 0));
    if (pbVar2 <= (byte *)((longlong)*(int *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x40))) {
      return 2;
    }
    *(byte **)(param_1 + 0x38) = pbVar8;
    return 2;
  }
  bVar5 = *pbVar8;
  if (bVar5 == 0) {
    FUN_14530a180(lVar1,0x100);
    pbVar8 = *(byte **)(param_1 + 0x38);
    bVar5 = *pbVar8;
  }
  if (bVar5 != 0x3f) {
    pcVar7 = (char *)FUN_145309fa0(lVar1,local_res8,&DAT_149d3c980);
    if (*pcVar7 == '\0') {
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
      return 0;
    }
    builtin_strncpy(local_res8,"-->",4);
    do {
      lVar4 = 0;
      while( true ) {
        lVar9 = lVar4;
        pcVar7 = *(char **)(param_1 + 0x38);
        if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar7)
        {
          FUN_14530a180(lVar1,0x100);
          pcVar7 = *(char **)(param_1 + 0x38);
          if ((char *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pcVar7
             ) {
            return 0xc;
          }
        }
        cVar3 = *pcVar7;
        *(char **)(param_1 + 0x38) = pcVar7 + 1;
        if (cVar3 == '\0') {
          return 0xc;
        }
        if (local_res8[lVar9] != cVar3) break;
        lVar4 = lVar9 + 1;
        if (lVar9 + 1 == 3) {
          return (ulonglong)((int)lVar9 + 2);
        }
      }
    } while( true );
  }
  if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8) {
    FUN_14530a180(lVar1,0x100);
    pbVar8 = *(byte **)(param_1 + 0x38);
    if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar8)
    goto LAB_14530a8ff;
  }
  *(byte **)(param_1 + 0x38) = pbVar8 + 1;
LAB_14530a8ff:
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 3;
  return 1;
}



// FUNCTION 14530a9d0 FUN_14530a9d0 body=142 status=ok
// SIG undefined FUN_14530a9d0(void)

undefined8 FUN_14530a9d0(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  
LAB_14530a9f0:
  pbVar2 = *(byte **)(param_1 + 0x38);
  bVar1 = *pbVar2;
  if (bVar1 == 0) {
    FUN_14530a180(param_1 + 0x18,0x100);
    pbVar2 = *(byte **)(param_1 + 0x38);
    bVar1 = *pbVar2;
  }
  if ((0x20 < bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
    return 3;
  }
  if ((byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40)) <= pbVar2)
  goto code_r0x00014530aa26;
  goto LAB_14530aa44;
code_r0x00014530aa26:
  FUN_14530a180(param_1 + 0x18,0x100);
  pbVar2 = *(byte **)(param_1 + 0x38);
  if (pbVar2 < (byte *)((longlong)*(int *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40))) {
LAB_14530aa44:
    *(byte **)(param_1 + 0x38) = pbVar2 + 1;
  }
  goto LAB_14530a9f0;
}



// FUNCTION 14530aa60 FUN_14530aa60 body=111 status=ok
// SIG undefined FUN_14530aa60(void)

undefined8 * FUN_14530aa60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkXmlLexAnalyzer::vftable;
  FUN_145309f30(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14530aad0 FUN_14530aad0 body=902 status=ok
// SIG undefined FUN_14530aad0(void)

void FUN_14530aad0(undefined1 (*param_1) [16])

{
  double dVar1;
  double dVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  int iVar17;
  uint uVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong local_b8;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 auVar19 [16];
  
  auVar10 = *param_1;
  auVar8._0_8_ = auVar10._0_8_ >> 0xe;
  auVar8._8_8_ = auVar10._8_8_ >> 0xe;
  iVar17 = auVar10._4_4_ >> 0x1f;
  auVar19._0_8_ = CONCAT44(iVar17,iVar17);
  auVar19._8_4_ = auVar10._12_4_ >> 0x1f;
  auVar19._12_4_ = auVar19._8_4_;
  auVar20._0_8_ = auVar19._0_8_ << 0x32;
  auVar20._8_8_ = auVar19._8_8_ << 0x32;
  auVar20 = auVar20 | auVar8;
  auVar10 = param_1[1];
  uVar4 = *(ulonglong *)(param_1[1] + 8) >> 0xb;
  uVar7 = *(longlong *)param_1[1] << 0x35 | uVar4;
  auVar9._0_8_ = auVar10._0_8_ >> 0xe;
  auVar9._8_8_ = auVar10._8_8_ >> 0xe;
  iVar17 = auVar10._4_4_ >> 0x1f;
  auVar14._0_8_ = CONCAT44(iVar17,iVar17);
  auVar14._8_4_ = auVar10._12_4_ >> 0x1f;
  auVar14._12_4_ = auVar14._8_4_;
  uVar5 = (longlong)uVar7 >> 0x3f;
  uVar4 = (*(ulonglong *)(param_1[1] + 8) & 0x7ff | uVar4 << 0xb) ^ uVar5;
  auVar15._0_8_ = auVar14._0_8_ << 0x32;
  auVar15._8_8_ = auVar14._8_8_ << 0x32;
  local_b8 = uVar4 - uVar5;
  uVar23 = (int)auVar20._4_4_ >> 0x1f;
  uVar24 = (int)auVar20._12_4_ >> 0x1f;
  auVar15 = auVar15 | auVar9;
  uVar25 = (int)auVar15._4_4_ >> 0x1f;
  uVar26 = (int)auVar15._12_4_ >> 0x1f;
  local_b0 = (((longlong)uVar7 >> 0x35 ^ uVar5) - uVar5) - (ulonglong)(uVar4 < uVar5);
  auVar22._0_4_ = (uint)-auVar20._0_8_ & uVar23;
  auVar22._4_4_ = (uint)((ulonglong)-auVar20._0_8_ >> 0x20) & uVar23;
  auVar22._8_4_ = (uint)-auVar20._8_8_ & uVar24;
  auVar22._12_4_ = (uint)((ulonglong)-auVar20._8_8_ >> 0x20) & uVar24;
  auVar21._0_4_ = (uint)-auVar15._0_8_ & uVar25;
  auVar21._4_4_ = (uint)((ulonglong)-auVar15._0_8_ >> 0x20) & uVar25;
  auVar21._8_4_ = (uint)-auVar15._8_8_ & uVar26;
  auVar21._12_4_ = (uint)((ulonglong)-auVar15._8_8_ >> 0x20) & uVar26;
  auVar10._0_4_ = ~uVar23 & auVar20._0_4_;
  auVar10._4_4_ = ~uVar23 & auVar20._4_4_;
  auVar10._8_4_ = ~uVar24 & auVar20._8_4_;
  auVar10._12_4_ = ~uVar24 & auVar20._12_4_;
  auVar12._0_4_ = ~uVar25 & auVar15._0_4_;
  auVar12._4_4_ = ~uVar25 & auVar15._4_4_;
  auVar12._8_4_ = ~uVar26 & auVar15._8_4_;
  auVar12._12_4_ = ~uVar26 & auVar15._12_4_;
  auVar22 = auVar22 | auVar10;
  auVar21 = auVar21 | auVar12;
  local_98 = auVar22;
  local_88 = auVar21;
  FUN_14530ae60(local_98,&local_a8);
  uVar26 = auVar21._0_4_ | (uint)(auVar21._0_8_ >> 1) & 0x7fffffff;
  uVar26 = uVar26 | uVar26 >> 2;
  uVar26 = uVar26 | uVar26 >> 4;
  uVar26 = uVar26 | uVar26 >> 8;
  iVar17 = (*(code *)PTR_FUN_14c6da350)(uVar26 >> 0x10 | uVar26);
  uVar26 = auVar21._4_4_ | auVar21._4_4_ >> 1;
  uVar26 = uVar26 | uVar26 >> 2;
  uVar26 = uVar26 | uVar26 >> 4;
  uVar26 = uVar26 | uVar26 >> 8;
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar26 >> 0x10 | uVar26);
  uVar26 = 0x20U - iVar3;
  if (0x1f < (int)(0x20U - iVar3)) {
    uVar26 = 0x40 - iVar17;
  }
  uVar18 = ~-(uint)((int)local_a8 < (int)uStack_a4) & uStack_a4 |
           -(uint)((int)local_a8 < (int)uStack_a4) & local_a8;
  uVar11 = -(uint)((int)uVar18 < (int)uVar26);
  uVar11 = (uVar11 & uVar18 | ~uVar11 & uVar26) - 0xf;
  iVar17 = FUN_14551e5f0(&local_b8,2);
  uVar26 = iVar17 - 0x36U;
  if ((int)uVar11 < (int)(iVar17 - 0x36U)) {
    uVar26 = uVar11;
  }
  uVar4 = (ulonglong)uVar26;
  bVar6 = (byte)uVar26;
  if (uVar26 < 0x40) {
    uVar5 = local_b0 << (bVar6 & 0x3f) | local_b8 >> 0x40 - (bVar6 & 0x3f);
    local_b8 = local_b8 << (bVar6 & 0x3f);
  }
  else {
    uVar5 = local_b8 << (bVar6 - 0x40 & 0x3f);
    local_b8 = 0;
  }
  uVar26 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar7 >> 0x3f) & 6) * 8);
  dVar1 = (double)(longlong)((auVar21._0_8_ << uVar4) << 4) * 1.1102230246251565e-16;
  dVar2 = (double)(longlong)
                  ((local_b8 & 0xfffffffffffffff) >> 0x15 | (uVar5 << 4 | local_b8 >> 0x3c) << 0x27)
          * 3.725290298461914e-09;
  dVar13 = (double)((auVar22._0_8_ << uVar4) << 4) * 1.1102230246251565e-16;
  dVar16 = (double)((auVar22._8_8_ << uVar4) << 4) * 1.1102230246251565e-16;
  *(int *)param_1[2] = SUB84(dVar13,0);
  *(uint *)(param_1[2] + 4) = (uint)((ulonglong)dVar13 >> 0x20) ^ uVar23 & 0x80000000;
  *(int *)(param_1[2] + 8) = SUB84(dVar16,0);
  *(uint *)(param_1[2] + 0xc) = (uint)((ulonglong)dVar16 >> 0x20) ^ uVar24 & 0x80000000;
  *(int *)param_1[3] = SUB84(dVar1,0);
  *(uint *)(param_1[3] + 4) =
       (uint)(((ulonglong)(uVar25 >> 0x1f) << 0x3f) >> 0x20) ^ (uint)((ulonglong)dVar1 >> 0x20);
  *(int *)(param_1[3] + 8) = SUB84(dVar2,0);
  *(uint *)(param_1[3] + 0xc) =
       (uint)((ulonglong)dVar2 >> 0x20) ^ (uint)(((ulonglong)(uVar26 >> 0x1f) << 0x3f) >> 0x20);
  return;
}



// FUNCTION 14530ae60 FUN_14530ae60 body=330 status=ok
// SIG undefined FUN_14530ae60(void)

void FUN_14530ae60(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar4 = (uint)uVar1 | (uint)(uVar1 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = 0x20U - iVar3;
  if (0x1f < (int)(0x20U - iVar3)) {
    uVar4 = 0x40 - iVar2;
  }
  *param_2 = *param_2 & 0xffffffff00000000 | (ulonglong)uVar4 & 0xffff |
             (ulonglong)(ushort)(uVar4 >> 0x10) << 0x10;
  param_2[1] = param_2[1];
  uVar1 = param_1[1];
  uVar4 = (uint)uVar1 | (uint)(uVar1 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = 0x20U - iVar3;
  if (0x1f < (int)(0x20U - iVar3)) {
    uVar4 = 0x40 - iVar2;
  }
  *param_2 = *param_2 & 0xffffffff | ((ulonglong)uVar4 & 0xffff) << 0x20 |
             (ulonglong)(ushort)(uVar4 >> 0x10) << 0x30;
  param_2[1] = param_2[1];
  return;
}



// FUNCTION 14530afb0 FUN_14530afb0 body=355 status=ok
// SIG undefined FUN_14530afb0(void)

void FUN_14530afb0(longlong param_1)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if ((*(int *)(param_1 + 0x20) < 0) || (0 < *(int *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((*(uint *)(param_1 + 0x24) & 0x7fffffff) < 8) {
    FUN_141807aa8(param_1 + 0x18,&PTR_vftable_14c6e47a0,8);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 8) {
    *(undefined4 *)(param_1 + 0x20) = 8;
    if (0 < (int)(8U - iVar1)) {
      uVar4 = (ulonglong)(8U - iVar1);
      puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 4);
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
        }
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  else if (8 < iVar1) {
    *(undefined4 *)(param_1 + 0x20) = 8;
  }
  puVar2 = *(uint **)(param_1 + 0x18);
  lVar6 = 0x1a;
  puVar2[2] = 4;
  puVar2[3] = puVar2[3] | 0x40000000;
  puVar2[6] = 4;
  puVar2[7] = puVar2[7] | 0x40000000;
  *puVar2 = *puVar2 & 0x7fffffff;
  puVar2[puVar2[2] - 1] = puVar2[puVar2[2] - 1] & 0x7fffffff;
  puVar2[4] = puVar2[4] & 0x7fffffff;
  puVar2[(ulonglong)(puVar2[6] - 1) + 4] = puVar2[(ulonglong)(puVar2[6] - 1) + 4] & 0x7fffffff;
  lVar3 = param_1 + 0x98;
  puVar2[1] = 0;
  puVar2[5] = 0;
  *puVar2 = *puVar2 & 0xe0000000;
  puVar2[4] = puVar2[4] & 0xe0000000;
  puVar5 = (undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    *(undefined8 *)(lVar3 + -4) = 0;
    *(undefined8 *)(lVar3 + 4) = 0;
    *(undefined8 *)(lVar3 + 0xc) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined8 *)(lVar3 + 0x1c) = 0;
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x34) = 0;
    *(undefined8 *)(lVar3 + 0x3c) = 0;
    *(undefined8 *)(lVar3 + 0x44) = 0;
    *(undefined8 *)(lVar3 + 0x4c) = 0;
    *(undefined8 *)(lVar3 + 0x54) = 0;
    *(undefined8 *)(lVar3 + 0x5c) = 0;
    *(undefined8 *)(lVar3 + 100) = 0;
    *(undefined8 *)(lVar3 + 0x6c) = 0;
    *(undefined8 *)(lVar3 + 0x74) = 0;
    lVar3 = lVar3 + 0x80;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 14530b120 FUN_14530b120 body=66 status=ok
// SIG undefined FUN_14530b120(void)

undefined8 * FUN_14530b120(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = hkcdPlanarGeometryPolygonCollection::vftable;
  FUN_14530afb0();
  return param_1;
}



// FUNCTION 14530b170 FUN_14530b170 body=470 status=ok
// SIG undefined FUN_14530b170(void)

undefined8 * FUN_14530b170(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = hkcdPlanarGeometryPolygonCollection::vftable;
  iVar1 = *(int *)(param_2 + 0x20);
  puVar3 = *(undefined4 **)(param_2 + 0x18);
  puVar4 = puVar3 + iVar1;
  if (0 < iVar1) {
    FUN_141807aa8(param_1 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  puVar2 = (undefined4 *)param_1[3];
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar3;
    }
    puVar2 = puVar2 + 1;
  }
  *(int *)(param_1 + 4) = iVar1;
  puVar4 = (undefined4 *)((longlong)param_1 + 0x2c);
  lVar5 = 0x1a;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_2 = param_2 - (longlong)param_1;
  puVar3 = (undefined4 *)((longlong)param_1 + 0x94);
  do {
    *puVar4 = *(undefined4 *)((longlong)puVar4 + param_2);
    puVar4 = puVar4 + 1;
    *puVar3 = *(undefined4 *)((longlong)puVar3 + param_2);
    puVar3[1] = *(undefined4 *)((longlong)puVar3 + param_2 + 4);
    puVar3[2] = *(undefined4 *)((longlong)puVar3 + param_2 + 8);
    puVar3[3] = *(undefined4 *)((longlong)puVar3 + param_2 + 0xc);
    puVar3[4] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x10);
    puVar3[5] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x14);
    puVar3[6] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x18);
    puVar3[7] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x1c);
    puVar3[8] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x20);
    puVar3[9] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x24);
    puVar3[10] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x28);
    puVar3[0xb] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x2c);
    puVar3[0xc] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x30);
    puVar3[0xd] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x34);
    puVar3[0xe] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x38);
    puVar3[0xf] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x3c);
    puVar3[0x10] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x40);
    puVar3[0x11] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x44);
    puVar3[0x12] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x48);
    puVar3[0x13] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x4c);
    puVar3[0x14] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x50);
    puVar3[0x15] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x54);
    puVar3[0x16] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x58);
    puVar3[0x17] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x5c);
    puVar3[0x18] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x60);
    puVar3[0x19] = *(undefined4 *)((longlong)puVar3 + param_2 + 100);
    puVar3[0x1a] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x68);
    puVar3[0x1b] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x6c);
    puVar3[0x1c] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x70);
    puVar3[0x1d] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x74);
    puVar3[0x1e] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x78);
    puVar3[0x1f] = *(undefined4 *)((longlong)puVar3 + param_2 + 0x7c);
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 0x20;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 14530b350 FUN_14530b350 body=276 status=ok
// SIG undefined FUN_14530b350(void)

ulonglong FUN_14530b350(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_FUN_14c6da350)((-(uint)param_1 & (uint)param_1) - 1);
      uVar2 = (uint)(param_1 >> 0x20);
      iVar3 = (*(code *)PTR_FUN_14c6da350)((-uVar2 & uVar2) - 1);
      if (0x1f < iVar1) {
        iVar1 = iVar3 + 0x20;
      }
      iVar3 = (*(code *)PTR_FUN_14c6da350)((-(uint)param_2 & (uint)param_2) - 1);
      uVar2 = (uint)(param_2 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)((-uVar2 & uVar2) - 1);
      if (0x1f < iVar3) {
        iVar3 = iVar4 + 0x20;
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      param_2 = param_2 >> ((byte)iVar3 & 0x3f);
      uVar6 = param_1 >> ((byte)iVar1 & 0x3f);
      do {
        iVar1 = (*(code *)PTR_FUN_14c6da350)((-(uint)param_2 & (uint)param_2) - 1);
        uVar2 = (uint)(param_2 >> 0x20);
        iVar4 = (*(code *)PTR_FUN_14c6da350)((-uVar2 & uVar2) - 1);
        if (0x1f < iVar1) {
          iVar1 = iVar4 + 0x20;
        }
        uVar5 = param_2 >> ((byte)iVar1 & 0x3f);
        param_1 = uVar5;
        param_2 = uVar6 - uVar5;
        if (uVar6 <= uVar5) {
          param_1 = uVar6;
          param_2 = uVar5 - uVar6;
        }
        uVar6 = param_1;
      } while (param_2 != 0);
      param_1 = param_1 << ((byte)iVar3 & 0x3f);
    }
    return param_1;
  }
  return param_2;
}



// FUNCTION 14530b470 FUN_14530b470 body=195 status=ok
// SIG undefined FUN_14530b470(void)

void FUN_14530b470(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_14530ae60();
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = (uint)uVar1 | (uint)(uVar1 >> 1) & 0x7fffffff;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar4 >> 0x10 | uVar4);
  uVar4 = 0x20U - iVar3;
  if (0x1f < (int)(0x20U - iVar3)) {
    uVar4 = 0x40 - iVar2;
  }
  *param_2 = *param_2;
  param_2[1] = param_2[1] & 0xffffffff00000000 | (ulonglong)uVar4 & 0xffff |
               (ulonglong)(ushort)(uVar4 >> 0x10) << 0x10;
  return;
}



// FUNCTION 14530b540 FUN_14530b540 body=171 status=ok
// SIG undefined FUN_14530b540(void)

undefined8 * FUN_14530b540(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  uVar2 = 0;
  param_1[2] = 1;
  param_1[6] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  local_res8 = 0x28;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"hkCriticalSection");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144bdde80(lVar1);
  }
  param_1[9] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_14530bc60(param_1);
  return param_1;
}



// FUNCTION 14530b5f0 FUN_14530b5f0 body=323 status=ok
// SIG undefined FUN_14530b5f0(void)

undefined8 * FUN_14530b5f0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 local_res8;
  
  param_1[2] = 1;
  uVar7 = 0;
  local_res8 = 0x28;
  param_1[1] = 0xffffffff;
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"hkCriticalSection");
  }
  if (lVar6 != 0) {
    uVar7 = FUN_144bdde80(lVar6);
  }
  param_1[9] = uVar7;
  puVar8 = *(undefined8 **)(param_2 + 0x30);
  iVar1 = *(int *)(param_1 + 7);
  puVar10 = puVar8 + (longlong)*(int *)(param_2 + 0x38) * 8;
  iVar9 = *(int *)(param_2 + 0x38) + iVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) < iVar9) {
    FUN_14530e0a0(param_1 + 6,&PTR_vftable_14c6e4800,(longlong)iVar9);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x40 + param_1[6]);
  for (; puVar8 != puVar10; puVar8 = puVar8 + 8) {
    if (puVar5 != (undefined8 *)0x0) {
      uVar7 = puVar8[1];
      *puVar5 = *puVar8;
      puVar5[1] = uVar7;
      uVar7 = puVar8[3];
      puVar5[2] = puVar8[2];
      puVar5[3] = uVar7;
      uVar7 = puVar8[5];
      puVar5[4] = puVar8[4];
      puVar5[5] = uVar7;
      uVar7 = puVar8[7];
      puVar5[6] = puVar8[6];
      puVar5[7] = uVar7;
    }
    puVar5 = puVar5 + 8;
  }
  *(int *)(param_1 + 7) = iVar9;
  return param_1;
}



// FUNCTION 14530b740 FUN_14530b740 body=1061 status=ok
// SIG undefined FUN_14530b740(void)

void FUN_14530b740(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 local_e0 [8];
  ulonglong uStack_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  
  iVar3 = *(int *)(param_1 + 0x38) + -1;
  lVar12 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar9 = lVar12 << 6;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar7 = *(ulonglong *)(lVar9 + 0x18 + lVar2);
      auVar15 = *(undefined1 (*) [16])(lVar9 + lVar2);
      uVar5 = uVar7 >> 0xb;
      uVar11 = *(longlong *)(lVar9 + 0x10 + lVar2) << 0x35 | uVar5;
      auVar13._0_8_ = auVar15._0_8_ >> 0xe;
      auVar13._8_8_ = auVar15._8_8_ >> 0xe;
      iVar3 = auVar15._4_4_ >> 0x1f;
      auVar22._0_8_ = CONCAT44(iVar3,iVar3);
      auVar22._8_4_ = auVar15._12_4_ >> 0x1f;
      auVar22._12_4_ = auVar22._8_4_;
      uVar8 = (longlong)uVar11 >> 0x3f;
      uVar7 = (uVar7 & 0x7ff | uVar5 << 0xb) ^ uVar8;
      auVar23._0_8_ = auVar22._0_8_ << 0x32;
      auVar23._8_8_ = auVar22._8_8_ << 0x32;
      local_f8 = uVar7 - uVar8;
      auVar23 = auVar23 | auVar13;
      auVar15 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar2);
      auVar14._0_8_ = auVar15._0_8_ >> 0xe;
      auVar14._8_8_ = auVar15._8_8_ >> 0xe;
      iVar3 = auVar15._4_4_ >> 0x1f;
      auVar19._0_8_ = CONCAT44(iVar3,iVar3);
      auVar19._8_4_ = auVar15._12_4_ >> 0x1f;
      auVar19._12_4_ = auVar19._8_4_;
      auVar20._0_8_ = auVar19._0_8_ << 0x32;
      auVar20._8_8_ = auVar19._8_8_ << 0x32;
      auVar20 = auVar20 | auVar14;
      uVar27 = (int)auVar23._4_4_ >> 0x1f;
      uVar28 = (int)auVar23._12_4_ >> 0x1f;
      local_f0 = (((longlong)uVar11 >> 0x35 ^ uVar8) - uVar8) - (ulonglong)(uVar7 < uVar8);
      uVar29 = (int)auVar20._4_4_ >> 0x1f;
      uVar30 = (int)auVar20._12_4_ >> 0x1f;
      auVar26._0_4_ = (uint)-auVar23._0_8_ & uVar27;
      auVar26._4_4_ = (uint)((ulonglong)-auVar23._0_8_ >> 0x20) & uVar27;
      auVar26._8_4_ = (uint)-auVar23._8_8_ & uVar28;
      auVar26._12_4_ = (uint)((ulonglong)-auVar23._8_8_ >> 0x20) & uVar28;
      auVar24._0_4_ = (uint)-auVar20._0_8_ & uVar29;
      auVar24._4_4_ = (uint)((ulonglong)-auVar20._0_8_ >> 0x20) & uVar29;
      auVar24._8_4_ = (uint)-auVar20._8_8_ & uVar30;
      auVar24._12_4_ = (uint)((ulonglong)-auVar20._8_8_ >> 0x20) & uVar30;
      auVar15._0_4_ = ~uVar27 & auVar23._0_4_;
      auVar15._4_4_ = ~uVar27 & auVar23._4_4_;
      auVar15._8_4_ = ~uVar28 & auVar23._8_4_;
      auVar15._12_4_ = ~uVar28 & auVar23._12_4_;
      auVar17._0_4_ = ~uVar29 & auVar20._0_4_;
      auVar17._4_4_ = ~uVar29 & auVar20._4_4_;
      auVar17._8_4_ = ~uVar30 & auVar20._8_4_;
      auVar17._12_4_ = ~uVar30 & auVar20._12_4_;
      auVar26 = auVar26 | auVar15;
      auVar24 = auVar24 | auVar17;
      local_d0 = auVar26;
      local_c0 = auVar24;
      FUN_14530ae60(local_d0,local_e0);
      uVar30 = auVar24._0_4_ | (uint)(auVar24._0_8_ >> 1) & 0x7fffffff;
      uVar30 = uVar30 | uVar30 >> 2;
      uVar30 = uVar30 | uVar30 >> 4;
      uVar30 = uVar30 | uVar30 >> 8;
      iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar30 >> 0x10 | uVar30);
      uVar30 = auVar24._4_4_ | auVar24._4_4_ >> 1;
      uVar30 = uVar30 | uVar30 >> 2;
      uVar30 = uVar30 | uVar30 >> 4;
      uVar30 = uVar30 | uVar30 >> 8;
      iVar4 = (*(code *)PTR_FUN_14c6da350)(uVar30 >> 0x10 | uVar30);
      uVar30 = 0x20U - iVar4;
      if (0x1f < (int)(0x20U - iVar4)) {
        uVar30 = 0x40 - iVar3;
      }
      uStack_d8 = uStack_d8 & 0xffffffff00000000 | (ulonglong)uVar30 & 0xffff |
                  (ulonglong)(ushort)(uVar30 >> 0x10) << 0x10;
      uVar30 = -(uint)((int)local_e0._0_4_ < (int)local_e0._4_4_);
      uVar21 = ~uVar30 & local_e0._4_4_ | uVar30 & local_e0._0_4_;
      uVar30 = -(uint)((int)uVar21 < (int)(uint)uStack_d8);
      uVar21 = (uVar30 & uVar21 | ~uVar30 & (uint)uStack_d8) - 0xf;
      iVar3 = FUN_14551e5f0(&local_f8,2);
      uVar30 = iVar3 - 0x36U;
      if ((int)uVar21 < (int)(iVar3 - 0x36U)) {
        uVar30 = uVar21;
      }
      uVar7 = (ulonglong)uVar30;
      bVar10 = (byte)uVar30;
      if (uVar30 < 0x40) {
        uVar8 = local_f0 << (bVar10 & 0x3f) | local_f8 >> 0x40 - (bVar10 & 0x3f);
        uVar5 = local_f8 << (bVar10 & 0x3f);
      }
      else {
        uVar8 = local_f8 << (bVar10 - 0x40 & 0x3f);
        uVar5 = 0;
      }
      local_100 = (uVar5 & 0xfffffffffffffff) >> 0x15 | (uVar8 << 4 | uVar5 >> 0x3c) << 0x27;
      dVar25 = (double)(longlong)((auVar24._0_8_ << uVar7) << 4) * 1.1102230246251565e-16;
      uVar30 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar11 >> 0x3f) & 6) * 8);
      dVar16 = (double)((auVar26._0_8_ << uVar7) << 4) * 1.1102230246251565e-16;
      dVar18 = (double)((auVar26._8_8_ << uVar7) << 4) * 1.1102230246251565e-16;
      puVar1 = (undefined4 *)(lVar9 + 0x20 + lVar2);
      *puVar1 = SUB84(dVar16,0);
      puVar1[1] = (uint)((ulonglong)dVar16 >> 0x20) ^ uVar27 & 0x80000000;
      puVar1[2] = SUB84(dVar18,0);
      puVar1[3] = (uint)((ulonglong)dVar18 >> 0x20) ^ uVar28 & 0x80000000;
      puVar1 = (undefined4 *)(lVar9 + 0x30 + lVar2);
      *puVar1 = SUB84(dVar25,0);
      puVar1[1] = (uint)((ulonglong)dVar25 >> 0x20) ^ uVar29 & 0x80000000;
      puVar1[2] = SUB84((double)(longlong)local_100 * 3.725290298461914e-09,0);
      puVar1[3] = (uint)((ulonglong)((double)(longlong)local_100 * 3.725290298461914e-09) >> 0x20) ^
                  (uint)(((ulonglong)(uVar30 >> 0x1f) << 0x3f) >> 0x20);
      lVar9 = lVar9 + -0x40;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  local_100 = 0x28;
  lVar12 = (*DAT_14c787670)(0,&local_100,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar12,"hkCriticalSection");
  }
  if (lVar12 == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar6 = FUN_144bdde80(lVar12);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
  }
  return;
}



// FUNCTION 14530bb70 FUN_14530bb70 body=234 status=ok
// SIG undefined FUN_14530bb70(void)

void FUN_14530bb70(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[9];
  *param_1 = hkcdPlanarGeometryPlanesCollection::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
    param_1[9] = 0;
  }
  plVar1 = (longlong *)param_1[8];
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar1 + 0xc)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) << 4);
    }
    *plVar1 = 0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = 0x80000000;
    (*DAT_14c787678)(0,plVar1,0);
    param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e4800 + 0x18))
              (&PTR_vftable_14c6e4800,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 6);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14530bc60 FUN_14530bc60 body=9269 status=ok
// SIG undefined FUN_14530bc60(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14530bc60(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar45;
  uint uVar46;
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
  undefined1 auVar44 [16];
  uint uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar70;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar92;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar93;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  uint uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  longlong lVar124;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  uint uVar151;
  undefined1 auVar150 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong uStack_200;
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
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148 [3];
  undefined8 local_130;
  ulonglong local_128 [3];
  undefined8 local_110;
  ulonglong local_108 [3];
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined1 auVar71 [16];
  
  plVar1 = (longlong *)(param_1 + 0x30);
  if ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) < 6) {
    FUN_14530e0a0(plVar1,&PTR_vftable_14c6e4800,6);
  }
  if ((*(int *)(param_1 + 0x38) < 6) || (6 < *(int *)(param_1 + 0x38))) {
    *(undefined4 *)(param_1 + 0x38) = 6;
  }
  plVar3 = (longlong *)*plVar1;
  *plVar3 = 0x4000;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  uVar16 = plVar3[3] | 0xffffffffff800001;
  uVar14 = plVar3[2];
  plVar3[2] = uVar14 | 0x7ff;
  plVar3[3] = uVar16;
  uVar17 = plVar3[3];
  auVar48._0_8_ = uVar14 >> 0xe;
  auVar48._8_8_ = uVar16 >> 0xe;
  iVar70 = (int)((longlong)uVar14 >> 0x3f);
  auVar71._0_8_ = CONCAT44(iVar70,iVar70);
  auVar71._8_4_ = (int)((longlong)uVar16 >> 0x3f);
  auVar71._12_4_ = auVar71._8_4_;
  uVar14 = uVar17 >> 0xb;
  uVar21 = plVar3[2] << 0x35 | uVar14;
  auVar72._0_8_ = auVar71._0_8_ << 0x32;
  auVar72._8_8_ = auVar71._8_8_ << 0x32;
  auVar72 = auVar72 | auVar48;
  auVar95 = ZEXT816(0) | ZEXT816(1);
  uVar45 = (int)auVar72._4_4_ >> 0x1f;
  uVar46 = (int)auVar72._12_4_ >> 0x1f;
  uVar151 = (int)auVar95._12_4_ >> 0x1f;
  auVar49._4_4_ = 0;
  auVar49._0_4_ = auVar95._0_4_;
  auVar49._8_4_ = ~uVar151 & auVar95._8_4_;
  auVar49._12_4_ = ~uVar151 & auVar95._12_4_;
  auVar2._4_4_ = (uint)((ulonglong)-auVar95._8_8_ >> 0x20) & uVar151;
  auVar2._0_4_ = (uint)-auVar95._8_8_ & uVar151;
  auVar2._8_8_ = 0;
  auVar49 = auVar2 << 0x40 | auVar49;
  auVar129._0_4_ = (uint)-auVar72._0_8_ & uVar45;
  auVar129._4_4_ = (uint)((ulonglong)-auVar72._0_8_ >> 0x20) & uVar45;
  auVar129._8_4_ = (uint)-auVar72._8_8_ & uVar46;
  auVar129._12_4_ = (uint)((ulonglong)-auVar72._8_8_ >> 0x20) & uVar46;
  uVar19 = auVar49._0_8_;
  auVar24._0_4_ = ~uVar45 & auVar72._0_4_;
  auVar24._4_4_ = ~uVar45 & auVar72._4_4_;
  auVar24._8_4_ = ~uVar46 & auVar72._8_4_;
  auVar24._12_4_ = ~uVar46 & auVar72._12_4_;
  uVar16 = auVar49._8_8_;
  uVar22 = (longlong)uVar21 >> 0x35;
  uVar13 = FUN_14530b350(uVar19,uVar16);
  uVar18 = SUB168(auVar129 | auVar24,0);
  local_148[0] = FUN_14530b350(uVar13,uVar18);
  uVar21 = (longlong)uVar21 >> 0x3f;
  uVar14 = uVar21 ^ (uVar17 & 0x7ff | uVar14 << 0xb);
  local_1a8 = uVar14 - uVar21;
  uStack_1a0 = ((uVar22 ^ uVar21) - uVar21) - (ulonglong)(uVar14 < uVar21);
  uVar21 = 0;
  local_148[1] = 0;
  FUN_14551de30(local_148,&local_1a8,local_148);
  FUN_14551dd70(&local_1a8,&local_1a8,local_148);
  local_218 = (undefined1 (*) [16])(uVar19 / local_148[0]);
  uVar16 = uVar16 / local_148[0];
  uVar18 = uVar18 / local_148[0];
  auVar95._4_4_ = (uint)(-uVar16 >> 0x20) & uVar151;
  auVar95._0_4_ = (uint)-uVar16 & uVar151;
  auVar95._8_8_ = 0;
  uStack_210._0_4_ = (uint)uVar16;
  uStack_210._4_4_ = (uint)(uVar16 >> 0x20);
  auVar96._8_4_ = ~uVar151 & (uint)uStack_210;
  auVar96._0_8_ = local_218;
  auVar96._12_4_ = ~uVar151 & uStack_210._4_4_;
  auVar96 = auVar95 << 0x40 | auVar96;
  uStack_200 = SUB168(auVar129 | auVar24,8) / local_148[0];
  local_208._0_4_ = (uint)uVar18;
  local_208._4_4_ = (uint)(uVar18 >> 0x20);
  uVar14 = uStack_1a0;
  uVar17 = local_1a8;
  if ((longlong)uVar22 < 0) {
    uVar14 = ~uStack_1a0 + (ulonglong)(0xfffffffffffffffe < ~local_1a8);
    uVar17 = ~local_1a8 + 1;
  }
  auVar73._0_8_ = auVar96._0_8_;
  uVar22 = auVar96._8_8_;
  lVar124 = uVar22 << 0xe;
  *plVar3 = auVar73._0_8_ << 0xe;
  plVar3[1] = lVar124;
  plVar3[2] = (CONCAT44((uint)(-uVar18 >> 0x20) & uVar45,(uint)-uVar18 & uVar45) |
              CONCAT44(~uVar45 & local_208._4_4_,~uVar45 & (uint)local_208)) << 0xe;
  plVar3[3] = 0;
  uVar19 = plVar3[2];
  uVar17 = uVar17 | plVar3[3];
  plVar3[2] = uVar14 & 0x7ff | uVar19;
  plVar3[3] = uVar17;
  uVar14 = (ulonglong)plVar3[3] >> 0xb;
  uVar23 = plVar3[2] << 0x35 | uVar14;
  auVar73._8_8_ = uVar22 & 0x3ffffffffffff;
  iVar70 = (int)(lVar124 >> 0x3f);
  uVar22 = (longlong)uVar23 >> 0x3f;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = CONCAT44(iVar70,iVar70) << 0x32;
  auVar73 = auVar11 << 0x40 | auVar73;
  uVar14 = uVar22 ^ (plVar3[3] & 0x7ffU | uVar14 << 0xb);
  local_1f8 = uVar14 - uVar22;
  auVar50._0_8_ = uVar19 >> 0xe;
  auVar50._8_8_ = uVar17 >> 0xe;
  iVar70 = (int)((longlong)uVar19 >> 0x3f);
  auVar97._0_8_ = CONCAT44(iVar70,iVar70);
  auVar97._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar97._12_4_ = auVar97._8_4_;
  auVar98._0_8_ = auVar97._0_8_ << 0x32;
  auVar98._8_8_ = auVar97._8_8_ << 0x32;
  auVar98 = auVar98 | auVar50;
  uVar46 = (int)auVar73._12_4_ >> 0x1f;
  uVar151 = (int)auVar98._4_4_ >> 0x1f;
  uVar45 = (int)auVar98._12_4_ >> 0x1f;
  local_1f0 = (((longlong)uVar23 >> 0x35 ^ uVar22) - uVar22) - (ulonglong)(uVar14 < uVar22);
  auVar10._4_4_ = (uint)((ulonglong)-auVar73._8_8_ >> 0x20) & uVar46;
  auVar10._0_4_ = (uint)-auVar73._8_8_ & uVar46;
  auVar10._8_8_ = 0;
  auVar130._0_4_ = (uint)-auVar98._0_8_ & uVar151;
  auVar130._4_4_ = (uint)((ulonglong)-auVar98._0_8_ >> 0x20) & uVar151;
  auVar130._8_4_ = (uint)-auVar98._8_8_ & uVar45;
  auVar130._12_4_ = (uint)((ulonglong)-auVar98._8_8_ >> 0x20) & uVar45;
  auVar140._4_4_ = 0;
  auVar140._0_4_ = auVar73._0_4_;
  auVar140._8_4_ = ~uVar46 & auVar73._8_4_;
  auVar140._12_4_ = ~uVar46 & auVar73._12_4_;
  auVar51._0_4_ = ~uVar151 & auVar98._0_4_;
  auVar51._4_4_ = ~uVar151 & auVar98._4_4_;
  auVar51._8_4_ = ~uVar45 & auVar98._8_4_;
  auVar51._12_4_ = ~uVar45 & auVar98._12_4_;
  auVar140 = auVar10 << 0x40 | auVar140;
  auVar130 = auVar130 | auVar51;
  local_238 = auVar140;
  local_228 = auVar130;
  uStack_210 = uVar16;
  local_208 = uVar18;
  FUN_14530ae60(local_238,&local_218);
  uVar45 = auVar130._0_4_ | (uint)(auVar130._0_8_ >> 1) & 0x7fffffff;
  uVar45 = uVar45 | uVar45 >> 2;
  uVar45 = uVar45 | uVar45 >> 4;
  uVar45 = uVar45 | uVar45 >> 8;
  iVar70 = (*(code *)PTR_FUN_14c6da350)(uVar45 >> 0x10 | uVar45);
  uVar45 = auVar130._4_4_ | auVar130._4_4_ >> 1;
  uVar45 = uVar45 | uVar45 >> 2;
  uVar45 = uVar45 | uVar45 >> 4;
  uVar45 = uVar45 | uVar45 >> 8;
  iVar12 = (*(code *)PTR_FUN_14c6da350)(uVar45 >> 0x10 | uVar45);
  uVar45 = 0x20U - iVar12;
  if (0x1f < (int)(0x20U - iVar12)) {
    uVar45 = 0x40 - iVar70;
  }
  uVar94 = ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_ |
           -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218;
  uVar47 = -(uint)((int)uVar94 < (int)uVar45);
  uVar47 = (uVar47 & uVar94 | ~uVar47 & uVar45) - 0xf;
  iVar70 = FUN_14551e5f0(&local_1f8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar47 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar47;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    local_1f0 = local_1f0 << (bVar20 & 0x3f) | local_1f8 >> 0x40 - (bVar20 & 0x3f);
    local_1f8 = local_1f8 << (bVar20 & 0x3f);
  }
  else {
    local_1f0 = local_1f8 << (bVar20 - 0x40 & 0x3f);
    local_1f8 = uVar21;
  }
  dVar4 = (double)(longlong)((auVar130._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar5 = (double)(longlong)
                  ((local_1f8 & 0xfffffffffffffff) >> 0x15 |
                  (local_1f0 << 4 | local_1f8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  uVar45 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar23 >> 0x3f) & 6) * 8);
  dVar92 = (double)((auVar140._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  plVar3[4] = (longlong)((double)((auVar140._0_8_ << uVar14) << 4) * 1.1102230246251565e-16);
  *(int *)(plVar3 + 5) = SUB84(dVar92,0);
  *(uint *)((longlong)plVar3 + 0x2c) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar46 & 0x80000000;
  *(int *)(plVar3 + 6) = SUB84(dVar4,0);
  *(uint *)((longlong)plVar3 + 0x34) = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(plVar3 + 7) = SUB84(dVar5,0);
  *(uint *)((longlong)plVar3 + 0x3c) =
       (uint)(((ulonglong)(uVar45 >> 0x1f) << 0x3f) >> 0x20) ^ (uint)((ulonglong)dVar5 >> 0x20);
  lVar124 = *plVar1;
  local_218 = (undefined1 (*) [16])(lVar124 + 0x40);
  *(undefined8 *)*local_218 = 0xffffffffffffc000;
  *(undefined8 *)(lVar124 + 0x48) = 0;
  *(undefined8 *)(lVar124 + 0x50) = 0;
  *(undefined8 *)(lVar124 + 0x58) = 0;
  uVar14 = *(ulonglong *)(lVar124 + 0x58);
  uVar17 = *(ulonglong *)(lVar124 + 0x50);
  *(ulonglong *)(lVar124 + 0x50) = uVar17;
  *(ulonglong *)(lVar124 + 0x58) = uVar14;
  auVar2 = *local_218;
  uVar16 = *(ulonglong *)(lVar124 + 0x58);
  auVar25._0_8_ = auVar2._0_8_ >> 0xe;
  auVar25._8_8_ = auVar2._8_8_ >> 0xe;
  auVar52._0_8_ = uVar17 >> 0xe;
  auVar52._8_8_ = uVar14 >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar99._0_8_ = CONCAT44(iVar70,iVar70);
  auVar99._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar99._12_4_ = auVar99._8_4_;
  iVar70 = (int)((longlong)uVar17 >> 0x3f);
  auVar74._0_8_ = CONCAT44(iVar70,iVar70);
  auVar74._8_4_ = (int)((longlong)uVar14 >> 0x3f);
  auVar74._12_4_ = auVar74._8_4_;
  uVar14 = uVar16 >> 0xb;
  uVar22 = *(longlong *)(lVar124 + 0x50) << 0x35 | uVar14;
  auVar100._0_8_ = auVar99._0_8_ << 0x32;
  auVar100._8_8_ = auVar99._8_8_ << 0x32;
  auVar100 = auVar100 | auVar25;
  auVar75._0_8_ = auVar74._0_8_ << 0x32;
  auVar75._8_8_ = auVar74._8_8_ << 0x32;
  auVar75 = auVar75 | auVar52;
  uVar46 = (int)auVar100._4_4_ >> 0x1f;
  uVar151 = (int)auVar100._12_4_ >> 0x1f;
  uVar45 = (int)auVar75._4_4_ >> 0x1f;
  auVar26._0_4_ = ~uVar46 & auVar100._0_4_;
  auVar26._4_4_ = ~uVar46 & auVar100._4_4_;
  auVar26._8_4_ = ~uVar151 & auVar100._8_4_;
  auVar26._12_4_ = ~uVar151 & auVar100._12_4_;
  auVar53._0_4_ = (uint)-auVar100._0_8_ & uVar46;
  auVar53._4_4_ = (uint)((ulonglong)-auVar100._0_8_ >> 0x20) & uVar46;
  auVar53._8_4_ = (uint)-auVar100._8_8_ & uVar151;
  auVar53._12_4_ = (uint)((ulonglong)-auVar100._8_8_ >> 0x20) & uVar151;
  uVar17 = SUB168(auVar53 | auVar26,0);
  uVar19 = CONCAT44((uint)((ulonglong)-auVar75._0_8_ >> 0x20) & uVar45,(uint)-auVar75._0_8_ & uVar45
                   ) | CONCAT44(~uVar45 & auVar75._4_4_,~uVar45 & auVar75._0_4_);
  uVar18 = SUB168(auVar53 | auVar26,8);
  uVar23 = (longlong)uVar22 >> 0x35;
  uVar13 = FUN_14530b350(uVar17,uVar18);
  local_148[2] = FUN_14530b350(uVar13,uVar19);
  uVar22 = (longlong)uVar22 >> 0x3f;
  local_130 = 0;
  uVar14 = uVar22 ^ (uVar16 & 0x7ff | uVar14 << 0xb);
  local_198 = uVar14 - uVar22;
  uStack_190 = ((uVar23 ^ uVar22) - uVar22) - (ulonglong)(uVar14 < uVar22);
  FUN_14551de30(local_148 + 2,&local_198,local_148 + 2);
  FUN_14551dd70(&local_198,&local_198,local_148 + 2);
  pauVar15 = local_218;
  uVar17 = uVar17 / local_148[2];
  uVar18 = uVar18 / local_148[2];
  uVar19 = uVar19 / local_148[2];
  auVar101._0_4_ = (uint)-uVar17 & uVar46;
  auVar101._4_4_ = (uint)(-uVar17 >> 0x20) & uVar46;
  auVar101._8_4_ = (uint)-uVar18 & uVar151;
  auVar101._12_4_ = (uint)(-uVar18 >> 0x20) & uVar151;
  local_238._0_4_ = (undefined4)uVar17;
  local_238._4_4_ = (undefined4)(uVar17 >> 0x20);
  local_238._8_4_ = (undefined4)uVar18;
  local_238._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar141._0_4_ = ~uVar46 & local_238._0_4_;
  auVar141._4_4_ = ~uVar46 & local_238._4_4_;
  auVar141._8_4_ = ~uVar151 & local_238._8_4_;
  auVar141._12_4_ = ~uVar151 & local_238._12_4_;
  local_228._0_4_ = (undefined4)uVar19;
  local_228._4_4_ = (undefined4)(uVar19 >> 0x20);
  uVar14 = uStack_190;
  uVar17 = local_198;
  if ((longlong)uVar23 < 0) {
    uVar14 = ~uStack_190 + (ulonglong)(0xfffffffffffffffe < ~local_198);
    uVar17 = ~local_198 + 1;
  }
  *(longlong *)*local_218 = SUB168(auVar101 | auVar141,0) << 0xe;
  *(longlong *)(*local_218 + 8) = SUB168(auVar101 | auVar141,8) << 0xe;
  *(ulonglong *)local_218[1] =
       (CONCAT44((uint)(-uVar19 >> 0x20) & uVar45,(uint)-uVar19 & uVar45) |
       CONCAT44(~uVar45 & local_228._4_4_,~uVar45 & local_228._0_4_)) << 0xe;
  *(undefined8 *)(local_218[1] + 8) = 0;
  uVar16 = *(ulonglong *)local_218[1];
  uVar17 = uVar17 | *(ulonglong *)(local_218[1] + 8);
  *(ulonglong *)local_218[1] = uVar14 & 0x7ff | uVar16;
  *(ulonglong *)(local_218[1] + 8) = uVar17;
  auVar2 = *local_218;
  uVar14 = *(ulonglong *)(local_218[1] + 8) >> 0xb;
  uVar19 = *(longlong *)local_218[1] << 0x35 | uVar14;
  auVar54._0_8_ = uVar16 >> 0xe;
  auVar54._8_8_ = uVar17 >> 0xe;
  auVar27._0_8_ = auVar2._0_8_ >> 0xe;
  auVar27._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar76._0_8_ = CONCAT44(iVar70,iVar70);
  auVar76._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar76._12_4_ = auVar76._8_4_;
  uVar18 = (longlong)uVar19 >> 0x3f;
  iVar70 = (int)((longlong)uVar16 >> 0x3f);
  auVar102._0_8_ = CONCAT44(iVar70,iVar70);
  auVar102._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar102._12_4_ = auVar102._8_4_;
  uVar14 = uVar18 ^ (*(ulonglong *)(local_218[1] + 8) & 0x7ff | uVar14 << 0xb);
  auVar77._0_8_ = auVar76._0_8_ << 0x32;
  auVar77._8_8_ = auVar76._8_8_ << 0x32;
  local_1e8 = uVar14 - uVar18;
  auVar103._0_8_ = auVar102._0_8_ << 0x32;
  auVar103._8_8_ = auVar102._8_8_ << 0x32;
  auVar103 = auVar103 | auVar54;
  auVar77 = auVar77 | auVar27;
  uVar151 = (int)auVar77._4_4_ >> 0x1f;
  uVar47 = (int)auVar77._12_4_ >> 0x1f;
  uVar94 = (int)auVar103._4_4_ >> 0x1f;
  uVar45 = (int)auVar103._12_4_ >> 0x1f;
  local_1e0 = (((longlong)uVar19 >> 0x35 ^ uVar18) - uVar18) - (ulonglong)(uVar14 < uVar18);
  auVar142._0_4_ = (uint)-auVar77._0_8_ & uVar151;
  auVar142._4_4_ = (uint)((ulonglong)-auVar77._0_8_ >> 0x20) & uVar151;
  auVar142._8_4_ = (uint)-auVar77._8_8_ & uVar47;
  auVar142._12_4_ = (uint)((ulonglong)-auVar77._8_8_ >> 0x20) & uVar47;
  auVar131._0_4_ = (uint)-auVar103._0_8_ & uVar94;
  auVar131._4_4_ = (uint)((ulonglong)-auVar103._0_8_ >> 0x20) & uVar94;
  auVar131._8_4_ = (uint)-auVar103._8_8_ & uVar45;
  auVar131._12_4_ = (uint)((ulonglong)-auVar103._8_8_ >> 0x20) & uVar45;
  auVar28._0_4_ = ~uVar151 & auVar77._0_4_;
  auVar28._4_4_ = ~uVar151 & auVar77._4_4_;
  auVar28._8_4_ = ~uVar47 & auVar77._8_4_;
  auVar28._12_4_ = ~uVar47 & auVar77._12_4_;
  auVar55._0_4_ = ~uVar94 & auVar103._0_4_;
  auVar55._4_4_ = ~uVar94 & auVar103._4_4_;
  auVar55._8_4_ = ~uVar45 & auVar103._8_4_;
  auVar55._12_4_ = ~uVar45 & auVar103._12_4_;
  auVar142 = auVar142 | auVar28;
  local_238 = auVar142;
  local_228 = auVar131 | auVar55;
  FUN_14530b470(local_238,&local_218);
  uVar46 = ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_ |
           -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218;
  uVar45 = -(uint)((int)uVar46 < (int)(uint)uStack_210);
  uVar46 = (uVar45 & uVar46 | ~uVar45 & (uint)uStack_210) - 0xf;
  iVar70 = FUN_14551e5f0(&local_1e8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar46 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar46;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    local_1e0 = local_1e0 << (bVar20 & 0x3f) | local_1e8 >> 0x40 - (bVar20 & 0x3f);
    local_1e8 = local_1e8 << (bVar20 & 0x3f);
  }
  else {
    local_1e0 = local_1e8 << (bVar20 - 0x40 & 0x3f);
    local_1e8 = uVar21;
  }
  uVar17 = (local_1e8 & 0xfffffffffffffff) >> 0x15 | (local_1e0 << 4 | local_1e8 >> 0x3c) << 0x27;
  dVar4 = (double)((SUB168(auVar131 | auVar55,0) << uVar14) << 4) * 1.1102230246251565e-16;
  uVar46 = (uint)((ulonglong)dVar4 >> 0x20);
  dVar5 = (double)(longlong)uVar17 * 3.725290298461914e-09;
  lVar124 = (ulonglong)((uint)((longlong)uVar19 >> 0x3f) & 6) * 8;
  uVar45 = *(uint *)(&UNK_149d3c624 + lVar124);
  auVar6._4_8_ = uVar17;
  auVar6._0_4_ = uVar45;
  auVar132._0_8_ = auVar6._0_8_ << 0x20;
  auVar132._8_4_ = *(undefined4 *)(&UNK_149d3c628 + lVar124);
  auVar132._12_4_ = *(undefined4 *)(&UNK_149d3c62c + lVar124);
  dVar92 = (double)((auVar142._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar93 = (double)((auVar142._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  *(int *)pauVar15[2] = SUB84(dVar92,0);
  *(uint *)(pauVar15[2] + 4) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(pauVar15[2] + 8) = SUB84(dVar93,0);
  *(uint *)(pauVar15[2] + 0xc) = (uint)((ulonglong)dVar93 >> 0x20) ^ uVar47 & 0x80000000;
  uVar14 = auVar132._8_8_ & 0x8000000000000000;
  auVar7._4_8_ = uVar14;
  auVar7._0_4_ = uVar45 & 0x80000000 ^ uVar46;
  auVar133._0_8_ = auVar7._0_8_ << 0x20;
  auVar133._8_4_ = SUB84(dVar5,0);
  auVar133._12_4_ = (uint)(uVar14 >> 0x20) ^ (uint)((ulonglong)dVar5 >> 0x20);
  *(ulonglong *)pauVar15[3] = CONCAT44(uVar94 & 0x80000000 ^ uVar46,SUB84(dVar4,0));
  *(longlong *)(pauVar15[3] + 8) = auVar133._8_8_;
  lVar124 = *plVar1;
  local_218 = (undefined1 (*) [16])(lVar124 + 0x80);
  *(undefined8 *)*local_218 = 0;
  *(undefined8 *)(lVar124 + 0x88) = 0x4000;
  *(undefined8 *)(lVar124 + 0x90) = 0;
  *(undefined8 *)(lVar124 + 0x98) = 0;
  uVar18 = *(ulonglong *)(lVar124 + 0x98) | 0xffffffffff800001;
  uVar14 = *(ulonglong *)(lVar124 + 0x90);
  *(ulonglong *)(lVar124 + 0x90) = uVar14 | 0x7ff;
  *(ulonglong *)(lVar124 + 0x98) = uVar18;
  auVar2 = *local_218;
  uVar17 = *(ulonglong *)(lVar124 + 0x98);
  auVar29._0_8_ = auVar2._0_8_ >> 0xe;
  auVar29._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar125._0_8_ = CONCAT44(iVar70,iVar70);
  auVar125._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar125._12_4_ = auVar125._8_4_;
  iVar70 = (int)((longlong)uVar14 >> 0x3f);
  auVar104._0_8_ = CONCAT44(iVar70,iVar70);
  auVar104._8_4_ = (int)((longlong)uVar18 >> 0x3f);
  auVar104._12_4_ = auVar104._8_4_;
  uVar16 = uVar17 >> 0xb;
  uVar22 = *(longlong *)(lVar124 + 0x90) << 0x35 | uVar16;
  auVar126._0_8_ = auVar125._0_8_ << 0x32;
  auVar126._8_8_ = auVar125._8_8_ << 0x32;
  auVar126 = auVar126 | auVar29;
  auVar105._0_8_ = auVar104._0_8_ << 0x32;
  auVar105._8_8_ = auVar104._8_8_ << 0x32;
  auVar78._0_8_ = uVar14 >> 0xe;
  auVar78._8_8_ = uVar18 >> 0xe;
  auVar105 = auVar105 | auVar78;
  uVar46 = (int)auVar126._4_4_ >> 0x1f;
  uVar151 = (int)auVar126._12_4_ >> 0x1f;
  uVar45 = (int)auVar105._4_4_ >> 0x1f;
  auVar30._0_4_ = ~uVar46 & auVar126._0_4_;
  auVar30._4_4_ = ~uVar46 & auVar126._4_4_;
  auVar30._8_4_ = ~uVar151 & auVar126._8_4_;
  auVar30._12_4_ = ~uVar151 & auVar126._12_4_;
  auVar56._0_4_ = (uint)-auVar126._0_8_ & uVar46;
  auVar56._4_4_ = (uint)((ulonglong)-auVar126._0_8_ >> 0x20) & uVar46;
  auVar56._8_4_ = (uint)-auVar126._8_8_ & uVar151;
  auVar56._12_4_ = (uint)((ulonglong)-auVar126._8_8_ >> 0x20) & uVar151;
  uVar14 = SUB168(auVar56 | auVar30,0);
  uVar19 = CONCAT44((uint)((ulonglong)-auVar105._0_8_ >> 0x20) & uVar45,
                    (uint)-auVar105._0_8_ & uVar45) |
           CONCAT44(~uVar45 & auVar105._4_4_,~uVar45 & auVar105._0_4_);
  uVar18 = SUB168(auVar56 | auVar30,8);
  uVar23 = (longlong)uVar22 >> 0x35;
  uVar13 = FUN_14530b350(uVar14,uVar18);
  local_128[0] = FUN_14530b350(uVar13,uVar19);
  uVar22 = (longlong)uVar22 >> 0x3f;
  uVar17 = (uVar17 & 0x7ff | uVar16 << 0xb) ^ uVar22;
  local_128[1] = 0;
  local_188 = uVar17 - uVar22;
  uStack_180 = ((uVar23 ^ uVar22) - uVar22) - (ulonglong)(uVar17 < uVar22);
  FUN_14551de30(local_128,&local_188,local_128);
  FUN_14551dd70(&local_188,&local_188,local_128);
  pauVar15 = local_218;
  uVar14 = uVar14 / local_128[0];
  uVar18 = uVar18 / local_128[0];
  uVar19 = uVar19 / local_128[0];
  auVar106._0_4_ = (uint)-uVar14 & uVar46;
  auVar106._4_4_ = (uint)(-uVar14 >> 0x20) & uVar46;
  auVar106._8_4_ = (uint)-uVar18 & uVar151;
  auVar106._12_4_ = (uint)(-uVar18 >> 0x20) & uVar151;
  local_238._0_4_ = (undefined4)uVar14;
  local_238._4_4_ = (undefined4)(uVar14 >> 0x20);
  local_238._8_4_ = (undefined4)uVar18;
  local_238._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar143._0_4_ = ~uVar46 & local_238._0_4_;
  auVar143._4_4_ = ~uVar46 & local_238._4_4_;
  auVar143._8_4_ = ~uVar151 & local_238._8_4_;
  auVar143._12_4_ = ~uVar151 & local_238._12_4_;
  local_228._0_4_ = (undefined4)uVar19;
  local_228._4_4_ = (undefined4)(uVar19 >> 0x20);
  uVar14 = uStack_180;
  uVar17 = local_188;
  if ((longlong)uVar23 < 0) {
    uVar14 = ~uStack_180 + (ulonglong)(0xfffffffffffffffe < ~local_188);
    uVar17 = ~local_188 + 1;
  }
  *(longlong *)*local_218 = SUB168(auVar106 | auVar143,0) << 0xe;
  *(longlong *)(*local_218 + 8) = SUB168(auVar106 | auVar143,8) << 0xe;
  *(ulonglong *)local_218[1] =
       (CONCAT44((uint)(-uVar19 >> 0x20) & uVar45,(uint)-uVar19 & uVar45) |
       CONCAT44(~uVar45 & local_228._4_4_,~uVar45 & local_228._0_4_)) << 0xe;
  *(undefined8 *)(local_218[1] + 8) = 0;
  uVar17 = uVar17 | *(ulonglong *)(local_218[1] + 8);
  uVar16 = *(ulonglong *)local_218[1];
  *(ulonglong *)local_218[1] = uVar14 & 0x7ff | uVar16;
  *(ulonglong *)(local_218[1] + 8) = uVar17;
  auVar2 = *local_218;
  uVar14 = *(ulonglong *)(local_218[1] + 8) >> 0xb;
  uVar19 = *(longlong *)local_218[1] << 0x35 | uVar14;
  auVar57._0_8_ = uVar16 >> 0xe;
  auVar57._8_8_ = uVar17 >> 0xe;
  auVar31._0_8_ = auVar2._0_8_ >> 0xe;
  auVar31._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar79._0_8_ = CONCAT44(iVar70,iVar70);
  auVar79._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar79._12_4_ = auVar79._8_4_;
  uVar18 = (longlong)uVar19 >> 0x3f;
  uVar14 = (*(ulonglong *)(local_218[1] + 8) & 0x7ff | uVar14 << 0xb) ^ uVar18;
  iVar70 = (int)((longlong)uVar16 >> 0x3f);
  auVar107._0_8_ = CONCAT44(iVar70,iVar70);
  auVar107._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar107._12_4_ = auVar107._8_4_;
  local_1d8 = uVar14 - uVar18;
  auVar80._0_8_ = auVar79._0_8_ << 0x32;
  auVar80._8_8_ = auVar79._8_8_ << 0x32;
  auVar80 = auVar80 | auVar31;
  auVar108._0_8_ = auVar107._0_8_ << 0x32;
  auVar108._8_8_ = auVar107._8_8_ << 0x32;
  auVar108 = auVar108 | auVar57;
  uVar151 = (int)auVar80._4_4_ >> 0x1f;
  uVar47 = (int)auVar80._12_4_ >> 0x1f;
  uVar94 = (int)auVar108._4_4_ >> 0x1f;
  uVar45 = (int)auVar108._12_4_ >> 0x1f;
  auVar144._0_4_ = (uint)-auVar80._0_8_ & uVar151;
  auVar144._4_4_ = (uint)((ulonglong)-auVar80._0_8_ >> 0x20) & uVar151;
  auVar144._8_4_ = (uint)-auVar80._8_8_ & uVar47;
  auVar144._12_4_ = (uint)((ulonglong)-auVar80._8_8_ >> 0x20) & uVar47;
  local_1d0 = (((longlong)uVar19 >> 0x35 ^ uVar18) - uVar18) - (ulonglong)(uVar14 < uVar18);
  auVar134._0_4_ = (uint)-auVar108._0_8_ & uVar94;
  auVar134._4_4_ = (uint)((ulonglong)-auVar108._0_8_ >> 0x20) & uVar94;
  auVar134._8_4_ = (uint)-auVar108._8_8_ & uVar45;
  auVar134._12_4_ = (uint)((ulonglong)-auVar108._8_8_ >> 0x20) & uVar45;
  auVar32._0_4_ = ~uVar151 & auVar80._0_4_;
  auVar32._4_4_ = ~uVar151 & auVar80._4_4_;
  auVar32._8_4_ = ~uVar47 & auVar80._8_4_;
  auVar32._12_4_ = ~uVar47 & auVar80._12_4_;
  auVar58._0_4_ = ~uVar94 & auVar108._0_4_;
  auVar58._4_4_ = ~uVar94 & auVar108._4_4_;
  auVar58._8_4_ = ~uVar45 & auVar108._8_4_;
  auVar58._12_4_ = ~uVar45 & auVar108._12_4_;
  auVar144 = auVar144 | auVar32;
  local_238 = auVar144;
  local_228 = auVar134 | auVar58;
  FUN_14530b470(local_238,&local_218);
  uVar46 = ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_ |
           -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218;
  uVar45 = -(uint)((int)uVar46 < (int)(uint)uStack_210);
  uVar46 = (uVar45 & uVar46 | ~uVar45 & (uint)uStack_210) - 0xf;
  iVar70 = FUN_14551e5f0(&local_1d8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar46 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar46;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    local_1d0 = local_1d0 << (bVar20 & 0x3f) | local_1d8 >> 0x40 - (bVar20 & 0x3f);
    local_1d8 = local_1d8 << (bVar20 & 0x3f);
  }
  else {
    local_1d0 = local_1d8 << (bVar20 - 0x40 & 0x3f);
    local_1d8 = uVar21;
  }
  dVar4 = (double)((SUB168(auVar134 | auVar58,0) << uVar14) << 4) * 1.1102230246251565e-16;
  dVar5 = (double)(longlong)
                  ((local_1d8 & 0xfffffffffffffff) >> 0x15 |
                  (local_1d0 << 4 | local_1d8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  uVar45 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar19 >> 0x3f) & 6) * 8);
  dVar92 = (double)((auVar144._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar93 = (double)((auVar144._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  *(int *)pauVar15[2] = SUB84(dVar92,0);
  *(uint *)(pauVar15[2] + 4) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(pauVar15[2] + 8) = SUB84(dVar93,0);
  *(uint *)(pauVar15[2] + 0xc) = (uint)((ulonglong)dVar93 >> 0x20) ^ uVar47 & 0x80000000;
  *(int *)pauVar15[3] = SUB84(dVar4,0);
  *(uint *)(pauVar15[3] + 4) = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar94 & 0x80000000;
  *(int *)(pauVar15[3] + 8) = SUB84(dVar5,0);
  *(uint *)(pauVar15[3] + 0xc) =
       (uint)((ulonglong)dVar5 >> 0x20) ^ (uint)(((ulonglong)(uVar45 >> 0x1f) << 0x3f) >> 0x20);
  lVar124 = *plVar1;
  local_218 = (undefined1 (*) [16])(lVar124 + 0xc0);
  *(undefined8 *)*local_218 = 0;
  *(undefined8 *)(lVar124 + 200) = 0xffffffffffffc000;
  *(undefined8 *)(lVar124 + 0xd0) = 0;
  *(undefined8 *)(lVar124 + 0xd8) = 0;
  uVar14 = *(ulonglong *)(lVar124 + 0xd8);
  uVar17 = *(ulonglong *)(lVar124 + 0xd0);
  *(ulonglong *)(lVar124 + 0xd0) = uVar17;
  *(ulonglong *)(lVar124 + 0xd8) = uVar14;
  auVar2 = *local_218;
  uVar16 = *(ulonglong *)(lVar124 + 0xd8);
  auVar33._0_8_ = auVar2._0_8_ >> 0xe;
  auVar33._8_8_ = auVar2._8_8_ >> 0xe;
  auVar59._0_8_ = uVar17 >> 0xe;
  auVar59._8_8_ = uVar14 >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar109._0_8_ = CONCAT44(iVar70,iVar70);
  auVar109._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar109._12_4_ = auVar109._8_4_;
  iVar70 = (int)((longlong)uVar17 >> 0x3f);
  auVar81._0_8_ = CONCAT44(iVar70,iVar70);
  auVar81._8_4_ = (int)((longlong)uVar14 >> 0x3f);
  auVar81._12_4_ = auVar81._8_4_;
  uVar14 = uVar16 >> 0xb;
  uVar22 = *(longlong *)(lVar124 + 0xd0) << 0x35 | uVar14;
  auVar110._0_8_ = auVar109._0_8_ << 0x32;
  auVar110._8_8_ = auVar109._8_8_ << 0x32;
  auVar110 = auVar110 | auVar33;
  auVar82._0_8_ = auVar81._0_8_ << 0x32;
  auVar82._8_8_ = auVar81._8_8_ << 0x32;
  auVar82 = auVar82 | auVar59;
  uVar46 = (int)auVar110._4_4_ >> 0x1f;
  uVar151 = (int)auVar110._12_4_ >> 0x1f;
  uVar45 = (int)auVar82._4_4_ >> 0x1f;
  auVar34._0_4_ = ~uVar46 & auVar110._0_4_;
  auVar34._4_4_ = ~uVar46 & auVar110._4_4_;
  auVar34._8_4_ = ~uVar151 & auVar110._8_4_;
  auVar34._12_4_ = ~uVar151 & auVar110._12_4_;
  auVar60._0_4_ = (uint)-auVar110._0_8_ & uVar46;
  auVar60._4_4_ = (uint)((ulonglong)-auVar110._0_8_ >> 0x20) & uVar46;
  auVar60._8_4_ = (uint)-auVar110._8_8_ & uVar151;
  auVar60._12_4_ = (uint)((ulonglong)-auVar110._8_8_ >> 0x20) & uVar151;
  uVar17 = SUB168(auVar60 | auVar34,0);
  uVar19 = CONCAT44((uint)((ulonglong)-auVar82._0_8_ >> 0x20) & uVar45,(uint)-auVar82._0_8_ & uVar45
                   ) | CONCAT44(~uVar45 & auVar82._4_4_,~uVar45 & auVar82._0_4_);
  uVar18 = SUB168(auVar60 | auVar34,8);
  uVar23 = (longlong)uVar22 >> 0x35;
  uVar13 = FUN_14530b350(uVar17,uVar18);
  local_128[2] = FUN_14530b350(uVar13,uVar19);
  uVar22 = (longlong)uVar22 >> 0x3f;
  local_110 = 0;
  uVar14 = uVar22 ^ (uVar16 & 0x7ff | uVar14 << 0xb);
  local_178 = uVar14 - uVar22;
  uStack_170 = ((uVar22 ^ uVar23) - uVar22) - (ulonglong)(uVar14 < uVar22);
  FUN_14551de30(local_128 + 2,&local_178,local_128 + 2);
  FUN_14551dd70(&local_178,&local_178,local_128 + 2);
  pauVar15 = local_218;
  uVar17 = uVar17 / local_128[2];
  uVar18 = uVar18 / local_128[2];
  uVar19 = uVar19 / local_128[2];
  auVar111._0_4_ = (uint)-uVar17 & uVar46;
  auVar111._4_4_ = (uint)(-uVar17 >> 0x20) & uVar46;
  auVar111._8_4_ = (uint)-uVar18 & uVar151;
  auVar111._12_4_ = (uint)(-uVar18 >> 0x20) & uVar151;
  local_238._0_4_ = (undefined4)uVar17;
  local_238._4_4_ = (undefined4)(uVar17 >> 0x20);
  local_238._8_4_ = (undefined4)uVar18;
  local_238._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar145._0_4_ = ~uVar46 & local_238._0_4_;
  auVar145._4_4_ = ~uVar46 & local_238._4_4_;
  auVar145._8_4_ = ~uVar151 & local_238._8_4_;
  auVar145._12_4_ = ~uVar151 & local_238._12_4_;
  local_228._0_4_ = (undefined4)uVar19;
  local_228._4_4_ = (undefined4)(uVar19 >> 0x20);
  uVar14 = uStack_170;
  uVar17 = local_178;
  if ((longlong)uVar23 < 0) {
    uVar14 = ~uStack_170 + (ulonglong)(0xfffffffffffffffe < ~local_178);
    uVar17 = ~local_178 + 1;
  }
  *(longlong *)*local_218 = SUB168(auVar111 | auVar145,0) << 0xe;
  *(longlong *)(*local_218 + 8) = SUB168(auVar111 | auVar145,8) << 0xe;
  *(ulonglong *)local_218[1] =
       (CONCAT44((uint)(-uVar19 >> 0x20) & uVar45,(uint)-uVar19 & uVar45) |
       CONCAT44(~uVar45 & local_228._4_4_,~uVar45 & local_228._0_4_)) << 0xe;
  *(undefined8 *)(local_218[1] + 8) = 0;
  uVar17 = uVar17 | *(ulonglong *)(local_218[1] + 8);
  uVar16 = *(ulonglong *)local_218[1];
  *(ulonglong *)local_218[1] = uVar14 & 0x7ff | uVar16;
  *(ulonglong *)(local_218[1] + 8) = uVar17;
  auVar2 = *local_218;
  uVar14 = *(ulonglong *)(local_218[1] + 8) >> 0xb;
  uVar19 = *(longlong *)local_218[1] << 0x35 | uVar14;
  auVar61._0_8_ = uVar16 >> 0xe;
  auVar61._8_8_ = uVar17 >> 0xe;
  auVar35._0_8_ = auVar2._0_8_ >> 0xe;
  auVar35._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar83._0_8_ = CONCAT44(iVar70,iVar70);
  auVar83._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar83._12_4_ = auVar83._8_4_;
  uVar18 = (longlong)uVar19 >> 0x3f;
  uVar14 = (*(ulonglong *)(local_218[1] + 8) & 0x7ff | uVar14 << 0xb) ^ uVar18;
  iVar70 = (int)((longlong)uVar16 >> 0x3f);
  auVar112._0_8_ = CONCAT44(iVar70,iVar70);
  auVar112._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar112._12_4_ = auVar112._8_4_;
  local_1c8 = uVar14 - uVar18;
  auVar84._0_8_ = auVar83._0_8_ << 0x32;
  auVar84._8_8_ = auVar83._8_8_ << 0x32;
  auVar84 = auVar84 | auVar35;
  auVar113._0_8_ = auVar112._0_8_ << 0x32;
  auVar113._8_8_ = auVar112._8_8_ << 0x32;
  auVar113 = auVar113 | auVar61;
  uVar151 = (int)auVar84._4_4_ >> 0x1f;
  uVar47 = (int)auVar84._12_4_ >> 0x1f;
  uVar94 = (int)auVar113._4_4_ >> 0x1f;
  uVar45 = (int)auVar113._12_4_ >> 0x1f;
  auVar146._0_4_ = (uint)-auVar84._0_8_ & uVar151;
  auVar146._4_4_ = (uint)((ulonglong)-auVar84._0_8_ >> 0x20) & uVar151;
  auVar146._8_4_ = (uint)-auVar84._8_8_ & uVar47;
  auVar146._12_4_ = (uint)((ulonglong)-auVar84._8_8_ >> 0x20) & uVar47;
  local_1c0 = (((longlong)uVar19 >> 0x35 ^ uVar18) - uVar18) - (ulonglong)(uVar14 < uVar18);
  auVar135._0_4_ = (uint)-auVar113._0_8_ & uVar94;
  auVar135._4_4_ = (uint)((ulonglong)-auVar113._0_8_ >> 0x20) & uVar94;
  auVar135._8_4_ = (uint)-auVar113._8_8_ & uVar45;
  auVar135._12_4_ = (uint)((ulonglong)-auVar113._8_8_ >> 0x20) & uVar45;
  auVar36._0_4_ = ~uVar151 & auVar84._0_4_;
  auVar36._4_4_ = ~uVar151 & auVar84._4_4_;
  auVar36._8_4_ = ~uVar47 & auVar84._8_4_;
  auVar36._12_4_ = ~uVar47 & auVar84._12_4_;
  auVar62._0_4_ = ~uVar94 & auVar113._0_4_;
  auVar62._4_4_ = ~uVar94 & auVar113._4_4_;
  auVar62._8_4_ = ~uVar45 & auVar113._8_4_;
  auVar62._12_4_ = ~uVar45 & auVar113._12_4_;
  auVar146 = auVar146 | auVar36;
  local_238 = auVar146;
  local_228 = auVar135 | auVar62;
  FUN_14530b470(local_238,&local_218);
  uVar46 = -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218 |
           ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_;
  uVar45 = -(uint)((int)uVar46 < (int)(uint)uStack_210);
  uVar46 = (uVar45 & uVar46 | ~uVar45 & (uint)uStack_210) - 0xf;
  iVar70 = FUN_14551e5f0(&local_1c8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar46 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar46;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    local_1c0 = local_1c0 << (bVar20 & 0x3f) | local_1c8 >> 0x40 - (bVar20 & 0x3f);
    local_1c8 = local_1c8 << (bVar20 & 0x3f);
  }
  else {
    local_1c0 = local_1c8 << (bVar20 - 0x40 & 0x3f);
    local_1c8 = uVar21;
  }
  uVar17 = (local_1c8 & 0xfffffffffffffff) >> 0x15 | (local_1c0 << 4 | local_1c8 >> 0x3c) << 0x27;
  lVar124 = (ulonglong)((uint)((longlong)uVar19 >> 0x3f) & 6) * 8;
  uVar45 = *(uint *)(&UNK_149d3c624 + lVar124);
  auVar8._4_8_ = uVar17;
  auVar8._0_4_ = uVar45;
  auVar136._0_8_ = auVar8._0_8_ << 0x20;
  auVar136._8_4_ = *(undefined4 *)(&UNK_149d3c628 + lVar124);
  auVar136._12_4_ = *(undefined4 *)(&UNK_149d3c62c + lVar124);
  dVar4 = (double)((SUB168(auVar135 | auVar62,0) << uVar14) << 4) * 1.1102230246251565e-16;
  uVar46 = (uint)((ulonglong)dVar4 >> 0x20);
  dVar5 = (double)(longlong)uVar17 * 3.725290298461914e-09;
  dVar92 = (double)((auVar146._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar93 = (double)((auVar146._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  uVar14 = auVar136._8_8_ & 0x8000000000000000;
  *(int *)pauVar15[2] = SUB84(dVar92,0);
  *(uint *)(pauVar15[2] + 4) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(pauVar15[2] + 8) = SUB84(dVar93,0);
  *(uint *)(pauVar15[2] + 0xc) = (uint)((ulonglong)dVar93 >> 0x20) ^ uVar47 & 0x80000000;
  auVar9._4_8_ = uVar14;
  auVar9._0_4_ = uVar45 & 0x80000000 ^ uVar46;
  auVar137._0_8_ = auVar9._0_8_ << 0x20;
  auVar137._8_4_ = SUB84(dVar5,0);
  auVar137._12_4_ = (uint)(uVar14 >> 0x20) ^ (uint)((ulonglong)dVar5 >> 0x20);
  *(ulonglong *)pauVar15[3] = CONCAT44(uVar94 & 0x80000000 ^ uVar46,SUB84(dVar4,0));
  *(longlong *)(pauVar15[3] + 8) = auVar137._8_8_;
  lVar124 = *plVar1;
  pauVar15 = (undefined1 (*) [16])(lVar124 + 0x100);
  *(undefined8 *)*pauVar15 = 0;
  *(undefined8 *)(lVar124 + 0x108) = 0;
  *(undefined8 *)(lVar124 + 0x110) = 0x4000;
  *(undefined8 *)(lVar124 + 0x118) = 0;
  uVar18 = *(ulonglong *)(lVar124 + 0x118) | 0xffffffffff800001;
  uVar14 = *(ulonglong *)(lVar124 + 0x110);
  *(ulonglong *)(lVar124 + 0x110) = uVar14 | 0x7ff;
  *(ulonglong *)(lVar124 + 0x118) = uVar18;
  auVar2 = *pauVar15;
  uVar17 = *(ulonglong *)(lVar124 + 0x118);
  auVar37._0_8_ = auVar2._0_8_ >> 0xe;
  auVar37._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar127._0_8_ = CONCAT44(iVar70,iVar70);
  auVar127._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar127._12_4_ = auVar127._8_4_;
  iVar70 = (int)((longlong)uVar14 >> 0x3f);
  auVar114._0_8_ = CONCAT44(iVar70,iVar70);
  auVar114._8_4_ = (int)((longlong)uVar18 >> 0x3f);
  auVar114._12_4_ = auVar114._8_4_;
  uVar16 = uVar17 >> 0xb;
  uVar22 = *(longlong *)(lVar124 + 0x110) << 0x35 | uVar16;
  auVar128._0_8_ = auVar127._0_8_ << 0x32;
  auVar128._8_8_ = auVar127._8_8_ << 0x32;
  auVar128 = auVar128 | auVar37;
  auVar115._0_8_ = auVar114._0_8_ << 0x32;
  auVar115._8_8_ = auVar114._8_8_ << 0x32;
  auVar85._0_8_ = uVar14 >> 0xe;
  auVar85._8_8_ = uVar18 >> 0xe;
  auVar115 = auVar115 | auVar85;
  uVar46 = (int)auVar128._4_4_ >> 0x1f;
  uVar151 = (int)auVar128._12_4_ >> 0x1f;
  uVar45 = (int)auVar115._4_4_ >> 0x1f;
  auVar38._0_4_ = ~uVar46 & auVar128._0_4_;
  auVar38._4_4_ = ~uVar46 & auVar128._4_4_;
  auVar38._8_4_ = ~uVar151 & auVar128._8_4_;
  auVar38._12_4_ = ~uVar151 & auVar128._12_4_;
  auVar63._0_4_ = (uint)-auVar128._0_8_ & uVar46;
  auVar63._4_4_ = (uint)((ulonglong)-auVar128._0_8_ >> 0x20) & uVar46;
  auVar63._8_4_ = (uint)-auVar128._8_8_ & uVar151;
  auVar63._12_4_ = (uint)((ulonglong)-auVar128._8_8_ >> 0x20) & uVar151;
  uVar14 = SUB168(auVar63 | auVar38,0);
  uVar19 = CONCAT44((uint)((ulonglong)-auVar115._0_8_ >> 0x20) & uVar45,
                    (uint)-auVar115._0_8_ & uVar45) |
           CONCAT44(~uVar45 & auVar115._4_4_,~uVar45 & auVar115._0_4_);
  uVar18 = SUB168(auVar63 | auVar38,8);
  uVar23 = (longlong)uVar22 >> 0x35;
  uVar13 = FUN_14530b350(uVar14,uVar18);
  local_108[0] = FUN_14530b350(uVar13,uVar19);
  uVar22 = (longlong)uVar22 >> 0x3f;
  uVar17 = (uVar17 & 0x7ff | uVar16 << 0xb) ^ uVar22;
  local_108[1] = 0;
  local_168 = uVar17 - uVar22;
  uStack_160 = ((uVar22 ^ uVar23) - uVar22) - (ulonglong)(uVar17 < uVar22);
  FUN_14551de30(local_108,&local_168,local_108);
  FUN_14551dd70(&local_168,&local_168,local_108);
  uVar14 = uVar14 / local_108[0];
  uVar18 = uVar18 / local_108[0];
  uVar19 = uVar19 / local_108[0];
  auVar116._0_4_ = (uint)-uVar14 & uVar46;
  auVar116._4_4_ = (uint)(-uVar14 >> 0x20) & uVar46;
  auVar116._8_4_ = (uint)-uVar18 & uVar151;
  auVar116._12_4_ = (uint)(-uVar18 >> 0x20) & uVar151;
  local_238._0_4_ = (undefined4)uVar14;
  local_238._4_4_ = (undefined4)(uVar14 >> 0x20);
  local_238._8_4_ = (undefined4)uVar18;
  local_238._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar147._0_4_ = ~uVar46 & local_238._0_4_;
  auVar147._4_4_ = ~uVar46 & local_238._4_4_;
  auVar147._8_4_ = ~uVar151 & local_238._8_4_;
  auVar147._12_4_ = ~uVar151 & local_238._12_4_;
  local_228._0_4_ = (undefined4)uVar19;
  local_228._4_4_ = (undefined4)(uVar19 >> 0x20);
  uVar14 = uStack_160;
  uVar17 = local_168;
  if ((longlong)uVar23 < 0) {
    uVar14 = ~uStack_160 + (ulonglong)(0xfffffffffffffffe < ~local_168);
    uVar17 = ~local_168 + 1;
  }
  *(longlong *)*pauVar15 = SUB168(auVar116 | auVar147,0) << 0xe;
  *(longlong *)(lVar124 + 0x108) = SUB168(auVar116 | auVar147,8) << 0xe;
  *(ulonglong *)(lVar124 + 0x110) =
       (CONCAT44((uint)(-uVar19 >> 0x20) & uVar45,(uint)-uVar19 & uVar45) |
       CONCAT44(~uVar45 & local_228._4_4_,~uVar45 & local_228._0_4_)) << 0xe;
  *(undefined8 *)(lVar124 + 0x118) = 0;
  uVar17 = uVar17 | *(ulonglong *)(lVar124 + 0x118);
  uVar16 = *(ulonglong *)(lVar124 + 0x110);
  *(ulonglong *)(lVar124 + 0x110) = uVar14 & 0x7ff | uVar16;
  *(ulonglong *)(lVar124 + 0x118) = uVar17;
  auVar2 = *pauVar15;
  uVar14 = *(ulonglong *)(lVar124 + 0x118) >> 0xb;
  uVar19 = *(longlong *)(lVar124 + 0x110) << 0x35 | uVar14;
  auVar64._0_8_ = uVar16 >> 0xe;
  auVar64._8_8_ = uVar17 >> 0xe;
  auVar39._0_8_ = auVar2._0_8_ >> 0xe;
  auVar39._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar86._0_8_ = CONCAT44(iVar70,iVar70);
  auVar86._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar86._12_4_ = auVar86._8_4_;
  uVar18 = (longlong)uVar19 >> 0x3f;
  uVar14 = (*(ulonglong *)(lVar124 + 0x118) & 0x7ff | uVar14 << 0xb) ^ uVar18;
  iVar70 = (int)((longlong)uVar16 >> 0x3f);
  auVar117._0_8_ = CONCAT44(iVar70,iVar70);
  auVar117._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar117._12_4_ = auVar117._8_4_;
  local_1b8 = uVar14 - uVar18;
  auVar87._0_8_ = auVar86._0_8_ << 0x32;
  auVar87._8_8_ = auVar86._8_8_ << 0x32;
  auVar87 = auVar87 | auVar39;
  auVar118._0_8_ = auVar117._0_8_ << 0x32;
  auVar118._8_8_ = auVar117._8_8_ << 0x32;
  auVar118 = auVar118 | auVar64;
  uVar151 = (int)auVar87._4_4_ >> 0x1f;
  uVar47 = (int)auVar87._12_4_ >> 0x1f;
  uVar94 = (int)auVar118._4_4_ >> 0x1f;
  uVar45 = (int)auVar118._12_4_ >> 0x1f;
  auVar148._0_4_ = (uint)-auVar87._0_8_ & uVar151;
  auVar148._4_4_ = (uint)((ulonglong)-auVar87._0_8_ >> 0x20) & uVar151;
  auVar148._8_4_ = (uint)-auVar87._8_8_ & uVar47;
  auVar148._12_4_ = (uint)((ulonglong)-auVar87._8_8_ >> 0x20) & uVar47;
  local_1b0 = (((longlong)uVar19 >> 0x35 ^ uVar18) - uVar18) - (ulonglong)(uVar14 < uVar18);
  auVar138._0_4_ = (uint)-auVar118._0_8_ & uVar94;
  auVar138._4_4_ = (uint)((ulonglong)-auVar118._0_8_ >> 0x20) & uVar94;
  auVar138._8_4_ = (uint)-auVar118._8_8_ & uVar45;
  auVar138._12_4_ = (uint)((ulonglong)-auVar118._8_8_ >> 0x20) & uVar45;
  auVar40._0_4_ = ~uVar151 & auVar87._0_4_;
  auVar40._4_4_ = ~uVar151 & auVar87._4_4_;
  auVar40._8_4_ = ~uVar47 & auVar87._8_4_;
  auVar40._12_4_ = ~uVar47 & auVar87._12_4_;
  auVar65._0_4_ = ~uVar94 & auVar118._0_4_;
  auVar65._4_4_ = ~uVar94 & auVar118._4_4_;
  auVar65._8_4_ = ~uVar45 & auVar118._8_4_;
  auVar65._12_4_ = ~uVar45 & auVar118._12_4_;
  auVar148 = auVar148 | auVar40;
  local_238 = auVar148;
  local_228 = auVar138 | auVar65;
  FUN_14530b470(local_238,&local_218);
  uVar46 = ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_ |
           -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218;
  uVar45 = -(uint)((int)uVar46 < (int)(uint)uStack_210);
  uVar46 = (uVar45 & uVar46 | ~uVar45 & (uint)uStack_210) - 0xf;
  iVar70 = FUN_14551e5f0(&local_1b8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar46 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar46;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    local_1b0 = local_1b0 << (bVar20 & 0x3f) | local_1b8 >> 0x40 - (bVar20 & 0x3f);
    local_1b8 = local_1b8 << (bVar20 & 0x3f);
  }
  else {
    local_1b0 = local_1b8 << (bVar20 - 0x40 & 0x3f);
    local_1b8 = uVar21;
  }
  dVar4 = (double)((SUB168(auVar138 | auVar65,0) << uVar14) << 4) * 1.1102230246251565e-16;
  dVar5 = (double)(longlong)
                  ((local_1b8 & 0xfffffffffffffff) >> 0x15 |
                  (local_1b0 << 4 | local_1b8 >> 0x3c) << 0x27) * 3.725290298461914e-09;
  uVar45 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar19 >> 0x3f) & 6) * 8);
  dVar92 = (double)((auVar148._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar93 = (double)((auVar148._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  *(int *)(lVar124 + 0x120) = SUB84(dVar92,0);
  *(uint *)(lVar124 + 0x124) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(lVar124 + 0x128) = SUB84(dVar93,0);
  *(uint *)(lVar124 + 300) = (uint)((ulonglong)dVar93 >> 0x20) ^ uVar47 & 0x80000000;
  *(int *)(lVar124 + 0x130) = SUB84(dVar4,0);
  *(uint *)(lVar124 + 0x134) = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar94 & 0x80000000;
  *(int *)(lVar124 + 0x138) = SUB84(dVar5,0);
  *(uint *)(lVar124 + 0x13c) =
       (uint)((ulonglong)dVar5 >> 0x20) ^ (uint)(((ulonglong)(uVar45 >> 0x1f) << 0x3f) >> 0x20);
  lVar124 = *plVar1;
  pauVar15 = (undefined1 (*) [16])(lVar124 + 0x140);
  *(undefined8 *)*pauVar15 = 0;
  *(undefined8 *)(lVar124 + 0x148) = 0;
  *(undefined8 *)(lVar124 + 0x150) = 0xffffffffffffc000;
  *(undefined8 *)(lVar124 + 0x158) = 0;
  uVar14 = *(ulonglong *)(lVar124 + 0x158);
  uVar17 = *(ulonglong *)(lVar124 + 0x150);
  *(ulonglong *)(lVar124 + 0x150) = uVar17;
  *(ulonglong *)(lVar124 + 0x158) = uVar14;
  auVar2 = *pauVar15;
  uVar16 = *(ulonglong *)(lVar124 + 0x158);
  auVar41._0_8_ = auVar2._0_8_ >> 0xe;
  auVar41._8_8_ = auVar2._8_8_ >> 0xe;
  auVar66._0_8_ = uVar17 >> 0xe;
  auVar66._8_8_ = uVar14 >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar119._0_8_ = CONCAT44(iVar70,iVar70);
  auVar119._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar119._12_4_ = auVar119._8_4_;
  iVar70 = (int)((longlong)uVar17 >> 0x3f);
  auVar88._0_8_ = CONCAT44(iVar70,iVar70);
  auVar88._8_4_ = (int)((longlong)uVar14 >> 0x3f);
  auVar88._12_4_ = auVar88._8_4_;
  uVar14 = uVar16 >> 0xb;
  uVar22 = *(longlong *)(lVar124 + 0x150) << 0x35 | uVar14;
  auVar120._0_8_ = auVar119._0_8_ << 0x32;
  auVar120._8_8_ = auVar119._8_8_ << 0x32;
  auVar120 = auVar120 | auVar41;
  auVar89._0_8_ = auVar88._0_8_ << 0x32;
  auVar89._8_8_ = auVar88._8_8_ << 0x32;
  auVar89 = auVar89 | auVar66;
  uVar46 = (int)auVar120._4_4_ >> 0x1f;
  uVar151 = (int)auVar120._12_4_ >> 0x1f;
  uVar45 = (int)auVar89._4_4_ >> 0x1f;
  auVar42._0_4_ = ~uVar46 & auVar120._0_4_;
  auVar42._4_4_ = ~uVar46 & auVar120._4_4_;
  auVar42._8_4_ = ~uVar151 & auVar120._8_4_;
  auVar42._12_4_ = ~uVar151 & auVar120._12_4_;
  auVar67._0_4_ = (uint)-auVar120._0_8_ & uVar46;
  auVar67._4_4_ = (uint)((ulonglong)-auVar120._0_8_ >> 0x20) & uVar46;
  auVar67._8_4_ = (uint)-auVar120._8_8_ & uVar151;
  auVar67._12_4_ = (uint)((ulonglong)-auVar120._8_8_ >> 0x20) & uVar151;
  uVar17 = SUB168(auVar67 | auVar42,0);
  uVar19 = CONCAT44((uint)((ulonglong)-auVar89._0_8_ >> 0x20) & uVar45,(uint)-auVar89._0_8_ & uVar45
                   ) | CONCAT44(~uVar45 & auVar89._4_4_,~uVar45 & auVar89._0_4_);
  uVar18 = SUB168(auVar67 | auVar42,8);
  uVar23 = (longlong)uVar22 >> 0x35;
  uVar13 = FUN_14530b350(uVar17,uVar18);
  local_108[2] = FUN_14530b350(uVar13,uVar19);
  uVar22 = (longlong)uVar22 >> 0x3f;
  uVar14 = (uVar16 & 0x7ff | uVar14 << 0xb) ^ uVar22;
  local_f0 = 0;
  local_158 = uVar14 - uVar22;
  uStack_150 = ((uVar22 ^ uVar23) - uVar22) - (ulonglong)(uVar14 < uVar22);
  FUN_14551de30(local_108 + 2,&local_158,local_108 + 2);
  FUN_14551dd70(&local_158,&local_158,local_108 + 2);
  uVar17 = uVar17 / local_108[2];
  uVar18 = uVar18 / local_108[2];
  uVar19 = uVar19 / local_108[2];
  auVar121._0_4_ = (uint)-uVar17 & uVar46;
  auVar121._4_4_ = (uint)(-uVar17 >> 0x20) & uVar46;
  auVar121._8_4_ = (uint)-uVar18 & uVar151;
  auVar121._12_4_ = (uint)(-uVar18 >> 0x20) & uVar151;
  local_238._0_4_ = (undefined4)uVar17;
  local_238._4_4_ = (undefined4)(uVar17 >> 0x20);
  local_238._8_4_ = (undefined4)uVar18;
  local_238._12_4_ = (undefined4)(uVar18 >> 0x20);
  auVar149._0_4_ = ~uVar46 & local_238._0_4_;
  auVar149._4_4_ = ~uVar46 & local_238._4_4_;
  auVar149._8_4_ = ~uVar151 & local_238._8_4_;
  auVar149._12_4_ = ~uVar151 & local_238._12_4_;
  local_228._0_4_ = (undefined4)uVar19;
  local_228._4_4_ = (undefined4)(uVar19 >> 0x20);
  uVar14 = uStack_150;
  uVar17 = local_158;
  if ((longlong)uVar23 < 0) {
    uVar14 = ~uStack_150 + (ulonglong)(0xfffffffffffffffe < ~local_158);
    uVar17 = ~local_158 + 1;
  }
  *(longlong *)*pauVar15 = SUB168(auVar121 | auVar149,0) << 0xe;
  *(longlong *)(lVar124 + 0x148) = SUB168(auVar121 | auVar149,8) << 0xe;
  *(ulonglong *)(lVar124 + 0x150) =
       (CONCAT44((uint)(-uVar19 >> 0x20) & uVar45,(uint)-uVar19 & uVar45) |
       CONCAT44(~uVar45 & local_228._4_4_,~uVar45 & local_228._0_4_)) << 0xe;
  *(undefined8 *)(lVar124 + 0x158) = 0;
  uVar17 = uVar17 | *(ulonglong *)(lVar124 + 0x158);
  uVar16 = *(ulonglong *)(lVar124 + 0x150);
  *(ulonglong *)(lVar124 + 0x150) = uVar14 & 0x7ff | uVar16;
  *(ulonglong *)(lVar124 + 0x158) = uVar17;
  auVar2 = *pauVar15;
  uVar14 = *(ulonglong *)(lVar124 + 0x158) >> 0xb;
  uVar19 = *(longlong *)(lVar124 + 0x150) << 0x35 | uVar14;
  auVar68._0_8_ = uVar16 >> 0xe;
  auVar68._8_8_ = uVar17 >> 0xe;
  auVar43._0_8_ = auVar2._0_8_ >> 0xe;
  auVar43._8_8_ = auVar2._8_8_ >> 0xe;
  iVar70 = auVar2._4_4_ >> 0x1f;
  auVar90._0_8_ = CONCAT44(iVar70,iVar70);
  auVar90._8_4_ = auVar2._12_4_ >> 0x1f;
  auVar90._12_4_ = auVar90._8_4_;
  uVar18 = (longlong)uVar19 >> 0x3f;
  uVar14 = (*(ulonglong *)(lVar124 + 0x158) & 0x7ff | uVar14 << 0xb) ^ uVar18;
  iVar70 = (int)((longlong)uVar16 >> 0x3f);
  auVar122._0_8_ = CONCAT44(iVar70,iVar70);
  auVar122._8_4_ = (int)((longlong)uVar17 >> 0x3f);
  auVar122._12_4_ = auVar122._8_4_;
  local_e8 = uVar14 - uVar18;
  auVar91._0_8_ = auVar90._0_8_ << 0x32;
  auVar91._8_8_ = auVar90._8_8_ << 0x32;
  auVar91 = auVar91 | auVar43;
  auVar123._0_8_ = auVar122._0_8_ << 0x32;
  auVar123._8_8_ = auVar122._8_8_ << 0x32;
  auVar123 = auVar123 | auVar68;
  uVar151 = (int)auVar91._4_4_ >> 0x1f;
  uVar47 = (int)auVar91._12_4_ >> 0x1f;
  uVar94 = (int)auVar123._4_4_ >> 0x1f;
  uVar45 = (int)auVar123._12_4_ >> 0x1f;
  auVar150._0_4_ = (uint)-auVar91._0_8_ & uVar151;
  auVar150._4_4_ = (uint)((ulonglong)-auVar91._0_8_ >> 0x20) & uVar151;
  auVar150._8_4_ = (uint)-auVar91._8_8_ & uVar47;
  auVar150._12_4_ = (uint)((ulonglong)-auVar91._8_8_ >> 0x20) & uVar47;
  local_e0 = (((longlong)uVar19 >> 0x35 ^ uVar18) - uVar18) - (ulonglong)(uVar14 < uVar18);
  auVar139._0_4_ = (uint)-auVar123._0_8_ & uVar94;
  auVar139._4_4_ = (uint)((ulonglong)-auVar123._0_8_ >> 0x20) & uVar94;
  auVar139._8_4_ = (uint)-auVar123._8_8_ & uVar45;
  auVar139._12_4_ = (uint)((ulonglong)-auVar123._8_8_ >> 0x20) & uVar45;
  auVar44._0_4_ = ~uVar151 & auVar91._0_4_;
  auVar44._4_4_ = ~uVar151 & auVar91._4_4_;
  auVar44._8_4_ = ~uVar47 & auVar91._8_4_;
  auVar44._12_4_ = ~uVar47 & auVar91._12_4_;
  auVar69._0_4_ = ~uVar94 & auVar123._0_4_;
  auVar69._4_4_ = ~uVar94 & auVar123._4_4_;
  auVar69._8_4_ = ~uVar45 & auVar123._8_4_;
  auVar69._12_4_ = ~uVar45 & auVar123._12_4_;
  auVar150 = auVar150 | auVar44;
  local_238 = auVar150;
  local_228 = auVar139 | auVar69;
  FUN_14530b470(local_238,&local_218);
  uVar46 = ~-(uint)((int)(uint)local_218 < (int)local_218._4_4_) & local_218._4_4_ |
           -(uint)((int)(uint)local_218 < (int)local_218._4_4_) & (uint)local_218;
  uVar45 = -(uint)((int)uVar46 < (int)(uint)uStack_210);
  uVar46 = (uVar45 & uVar46 | ~uVar45 & (uint)uStack_210) - 0xf;
  iVar70 = FUN_14551e5f0(&local_e8,2);
  uVar45 = iVar70 - 0x36U;
  if ((int)uVar46 < (int)(iVar70 - 0x36U)) {
    uVar45 = uVar46;
  }
  uVar14 = (ulonglong)uVar45;
  bVar20 = (byte)uVar45;
  if (uVar45 < 0x40) {
    uVar17 = local_e0 << (bVar20 & 0x3f) | local_e8 >> 0x40 - (bVar20 & 0x3f);
    uVar21 = local_e8 << (bVar20 & 0x3f);
  }
  else {
    uVar17 = local_e8 << (bVar20 - 0x40 & 0x3f);
  }
  uVar45 = *(uint *)(&UNK_149d3c62c + (ulonglong)((uint)((longlong)uVar19 >> 0x3f) & 6) * 8);
  dVar4 = (double)((SUB168(auVar139 | auVar69,0) << uVar14) << 4) * 1.1102230246251565e-16;
  dVar5 = (double)(longlong)
                  ((uVar21 & 0xfffffffffffffff) >> 0x15 | (uVar17 << 4 | uVar21 >> 0x3c) << 0x27) *
          3.725290298461914e-09;
  dVar92 = (double)((auVar150._0_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  dVar93 = (double)((auVar150._8_8_ << uVar14) << 4) * 1.1102230246251565e-16;
  *(int *)(lVar124 + 0x160) = SUB84(dVar92,0);
  *(uint *)(lVar124 + 0x164) = (uint)((ulonglong)dVar92 >> 0x20) ^ uVar151 & 0x80000000;
  *(int *)(lVar124 + 0x168) = SUB84(dVar93,0);
  *(uint *)(lVar124 + 0x16c) = (uint)((ulonglong)dVar93 >> 0x20) ^ uVar47 & 0x80000000;
  *(int *)(lVar124 + 0x170) = SUB84(dVar4,0);
  *(uint *)(lVar124 + 0x174) = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar94 & 0x80000000;
  *(int *)(lVar124 + 0x178) = SUB84(dVar5,0);
  *(uint *)(lVar124 + 0x17c) =
       (uint)((ulonglong)dVar5 >> 0x20) ^ (uint)(((ulonglong)(uVar45 >> 0x1f) << 0x3f) >> 0x20);
  return;
}



// FUNCTION 14530e0a0 FUN_14530e0a0 body=297 status=ok
// SIG undefined FUN_14530e0a0(void)

void FUN_14530e0a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar10 * 2;
  uVar8 = param_3;
  if (param_3 < uVar12) {
    uVar8 = uVar12;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x40,&local_res8);
  uVar12 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar11 = puVar7 + 4;
    puVar6 = puVar5;
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
        uVar2 = *(undefined4 *)(puVar11 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
        *(undefined4 *)(puVar6 + 5) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
        uVar4 = puVar11[3];
        puVar6[6] = puVar11[2];
        puVar6[7] = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      puVar11 = puVar11 + 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar8 * 0x40 + 0x40;
  uVar9 = uVar8;
  if (uVar12 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar9 = uVar8 + 1;
    if (uVar12 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 6);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = (longlong)puVar5;
  return;
}



// FUNCTION 14530e1d0 FUN_14530e1d0 body=493 status=ok
// SIG undefined FUN_14530e1d0(void)

void FUN_14530e1d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  
  if ((*(int *)(param_1 + 0x20) < 0) || (0 < *(int *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar12 = param_2 + 8;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar12) {
    FUN_141807aa8(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 < iVar12) {
    *(int *)(param_1 + 0x20) = iVar12;
    uVar11 = (ulonglong)(uint)(iVar12 - iVar3);
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 4);
    if (0 < iVar12 - iVar3) {
      do {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
        }
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar11 != 0);
    }
  }
  else if (iVar12 < iVar3) {
    *(int *)(param_1 + 0x20) = iVar12;
  }
  puVar4 = *(uint **)(param_1 + 0x18);
  puVar2 = puVar4 + (int)(param_2 + 4);
  puVar4[2] = 4;
  puVar4[3] = puVar4[3] | 0x40000000;
  puVar4[6] = param_2;
  puVar4[(longlong)(int)param_2 + 3] = puVar4[(longlong)(int)param_2 + 3] | 0x40000000;
  puVar4[(longlong)(int)param_2 + 2] = param_2;
  puVar2[2] = 4;
  puVar2[3] = puVar2[3] | 0x40000000;
  *puVar4 = *puVar4 & 0x7fffffff;
  puVar4[puVar4[2] - 1] = puVar4[puVar4[2] - 1] & 0x7fffffff;
  puVar4[4] = puVar4[4] | 0x80000000;
  puVar4[(ulonglong)(puVar4[6] - 1) + 4] = puVar4[(ulonglong)(puVar4[6] - 1) + 4] | 0x80000000;
  *puVar2 = *puVar2 & 0x7fffffff;
  puVar2[puVar2[2] - 1] = puVar2[puVar2[2] - 1] & 0x7fffffff;
  puVar4[1] = 0;
  puVar4[5] = 0;
  puVar2[1] = 0;
  *puVar4 = *puVar4 & 0xe0000000;
  puVar4[4] = puVar4[4] & 0xe0000000;
  *puVar2 = *puVar2 & 0xe0000000;
  lVar5 = *(longlong *)(param_1 + 0x18);
  uVar13 = *(uint *)(lVar5 + 0x18);
  uVar10 = uVar13 >> 1 | uVar13;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  iVar12 = (*(code *)PTR_FUN_14c6da350)(uVar10 >> 0x10 | uVar10);
  bVar9 = (char)iVar12 - 1;
  uVar10 = iVar12 - 3;
  uVar7 = 5;
  if (uVar10 < 5) {
    uVar7 = uVar10;
  }
  uVar13 = (~(1 << (bVar9 & 0x1f)) & uVar13) >> (bVar9 - (char)uVar7 & 0x1f);
  lVar6 = *(longlong *)(param_1 + 0x18);
  lVar1 = param_1 + ((ulonglong)uVar10 * 0x20 + (ulonglong)uVar13) * 4;
  iVar12 = *(int *)(lVar1 + 0x94);
  *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) & 0xe0000000;
  *(int *)(lVar5 + 0x14) = iVar12;
  puVar2 = (uint *)(lVar6 + (longlong)iVar12 * 4);
  *puVar2 = *puVar2 & 0xe0000004;
  puVar2 = (uint *)(lVar6 + (longlong)iVar12 * 4);
  *puVar2 = *puVar2 | 4;
  *(undefined4 *)(lVar1 + 0x94) = 4;
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << ((byte)uVar10 & 0x1f);
  puVar2 = (uint *)(param_1 + 0x2c + (ulonglong)uVar10 * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
  return;
}



// FUNCTION 14530e3c0 FUN_14530e3c0 body=32 status=ok
// SIG undefined FUN_14530e3c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14530e3c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  _DAT_14c736968 = &DAT_14c6dc390;
  param_2[1] = &DAT_14c736960;
  return param_2;
}



// FUNCTION 14530e3e0 FUN_14530e3e0 body=169 status=ok
// SIG undefined FUN_14530e3e0(void)

undefined8 * FUN_14530e3e0(undefined8 *param_1,uint param_2)

{
  *param_1 = hkcdPlanarGeometry::VertexStorage::vftable;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e4800 + 0x18))
              (&PTR_vftable_14c6e4800,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 5);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14530e490 FUN_14530e490 body=364 status=ok
// SIG undefined FUN_14530e490(void)

undefined8 * FUN_14530e490(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  
  param_1[2] = 1;
  *param_1 = hkcdPlanarEntity::vftable;
  param_1[3] = param_4;
  param_1[1] = 0xffffffff;
  if (param_4 != 0) {
    FUN_144b3d910(param_4);
  }
  *param_1 = hkcdPlanarGeometry::vftable;
  param_1[4] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  puVar4 = (undefined8 *)0x0;
  local_res8 = 0xd98;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"hkcdPlanarGeometryPolygonCollection");
  }
  puVar3 = puVar4;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14530b120(lVar2);
  }
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar3 != puVar1) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  local_res8 = 0x28;
  puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar3,"VertexStorage");
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = 0;
    *puVar3 = hkcdPlanarGeometry::VertexStorage::vftable;
    puVar3[1] = 0xffffffff;
    puVar3[2] = 1;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000000;
    puVar4 = puVar3;
  }
  puVar3 = (undefined8 *)param_1[6];
  if ((puVar4 != puVar3) && (param_1[6] = puVar4, puVar3 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  if (param_3 != 0) {
    FUN_14530e1d0(param_1[5],param_3);
  }
  return param_1;
}



// FUNCTION 14530e600 FUN_14530e600 body=903 status=ok
// SIG undefined FUN_14530e600(void)

undefined8 * FUN_14530e600(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined8 local_res8;
  
  param_1[2] = 1;
  *param_1 = hkcdPlanarEntity::vftable;
  param_1[1] = 0xffffffff;
  lVar4 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  *param_1 = hkcdPlanarGeometry::vftable;
  lVar4 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    FUN_144b3d910();
  }
  puVar8 = (undefined8 *)0x0;
  local_res8 = 0xd98;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar4 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar4,"hkcdPlanarGeometryPolygonCollection");
  }
  puVar5 = puVar8;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_14530b120(lVar4);
  }
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar5 != puVar1) && (param_1[5] = puVar5, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  local_res8 = 0x28;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"VertexStorage");
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[4] = 0;
    *puVar5 = hkcdPlanarGeometry::VertexStorage::vftable;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
    puVar8 = puVar5;
  }
  puVar5 = (undefined8 *)param_1[6];
  if ((puVar8 != puVar5) && (param_1[6] = puVar8, puVar5 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  lVar4 = param_1[5];
  lVar9 = *(longlong *)(param_2 + 0x28);
  iVar12 = *(int *)(lVar4 + 0x20);
  if ((iVar12 < 0) || (0 < iVar12)) {
    *(undefined4 *)(lVar4 + 0x20) = 0;
    iVar12 = 0;
  }
  puVar6 = *(undefined4 **)(lVar9 + 0x18);
  iVar10 = iVar12 + *(int *)(lVar9 + 0x20);
  local_res8 = CONCAT44(local_res8._4_4_,iVar10);
  puVar7 = puVar6 + *(int *)(lVar9 + 0x20);
  if ((int)(*(uint *)(lVar4 + 0x24) & 0x7fffffff) < iVar10) {
    FUN_141807aa8(lVar4 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    iVar10 = (int)local_res8;
  }
  puVar3 = (undefined4 *)(*(longlong *)(lVar4 + 0x18) + (longlong)iVar12 * 4);
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar6;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(lVar4 + 0x20) = iVar10;
  puVar7 = (undefined4 *)(lVar4 + 0x2c);
  lVar11 = 0x1a;
  *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar9 + 0x28);
  lVar9 = lVar9 - lVar4;
  puVar6 = (undefined4 *)(lVar4 + 0x94);
  do {
    *puVar7 = *(undefined4 *)((longlong)puVar7 + lVar9);
    puVar7 = puVar7 + 1;
    *puVar6 = *(undefined4 *)(lVar9 + -0x80 + (longlong)(puVar6 + 0x20));
    puVar6[1] = *(undefined4 *)((longlong)puVar6 + lVar9 + 4);
    puVar6[2] = *(undefined4 *)((longlong)puVar6 + lVar9 + 8);
    puVar6[3] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0xc);
    puVar6[4] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x10);
    puVar6[5] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x14);
    puVar6[6] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x18);
    puVar6[7] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x1c);
    puVar6[8] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x20);
    puVar6[9] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x24);
    puVar6[10] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x28);
    puVar6[0xb] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x2c);
    puVar6[0xc] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x30);
    puVar6[0xd] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x34);
    puVar6[0xe] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x38);
    puVar6[0xf] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x3c);
    puVar6[0x10] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x40);
    puVar6[0x11] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x44);
    puVar6[0x12] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x48);
    puVar6[0x13] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x4c);
    puVar6[0x14] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x50);
    puVar6[0x15] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x54);
    puVar6[0x16] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x58);
    puVar6[0x17] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x5c);
    puVar6[0x18] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x60);
    puVar6[0x19] = *(undefined4 *)((longlong)puVar6 + lVar9 + 100);
    puVar6[0x1a] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x68);
    puVar6[0x1b] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x6c);
    puVar6[0x1c] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x70);
    puVar6[0x1d] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x74);
    puVar6[0x1e] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x78);
    puVar6[0x1f] = *(undefined4 *)((longlong)puVar6 + lVar9 + 0x7c);
    lVar11 = lVar11 + -1;
    puVar6 = puVar6 + 0x20;
  } while (lVar11 != 0);
  lVar4 = param_1[6];
  iVar12 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x20);
  puVar8 = *(undefined8 **)(*(longlong *)(param_2 + 0x30) + 0x18);
  iVar10 = *(int *)(lVar4 + 0x20);
  puVar5 = puVar8 + (longlong)iVar12 * 4;
  iVar12 = iVar10 + iVar12;
  if ((int)(*(uint *)(lVar4 + 0x24) & 0x7fffffff) < iVar12) {
    FUN_14530ff00(lVar4 + 0x18,&PTR_vftable_14c6e4800,(longlong)iVar12);
  }
  puVar1 = (undefined8 *)((longlong)iVar10 * 0x20 + *(longlong *)(lVar4 + 0x18));
  for (; puVar8 != puVar5; puVar8 = puVar8 + 4) {
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = puVar8[1];
      *puVar1 = *puVar8;
      puVar1[1] = uVar2;
      uVar2 = puVar8[3];
      puVar1[2] = puVar8[2];
      puVar1[3] = uVar2;
    }
    puVar1 = puVar1 + 4;
  }
  *(int *)(lVar4 + 0x20) = iVar12;
  return param_1;
}



// FUNCTION 14530e9a0 FUN_14530e9a0 body=2218 status=ok
// SIG undefined FUN_14530e9a0(void)

void FUN_14530e9a0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined4 *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint local_258;
  undefined4 *local_250;
  uint local_248;
  uint local_244;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  uint *local_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a0;
  ulonglong uStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  ulonglong uStack_178;
  undefined4 local_170;
  uint uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  ulonglong local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  undefined4 local_140;
  uint uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  undefined4 local_130;
  uint uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  ulonglong local_120;
  ulonglong uStack_118;
  ulonglong local_110;
  ulonglong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [56];
  ulonglong uVar17;
  
  puVar18 = (undefined4 *)0x0;
  local_258 = 0x80000000;
  local_240 = 0;
  local_238 = 0;
  local_234 = 0x80000000;
  local_230 = 0;
  local_228 = 0;
  local_224 = 0xffffffff;
  local_220 = 0;
  local_218 = 0;
  local_214 = 0x80000000;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  uVar19 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x20) - 4;
  local_250 = (undefined4 *)0x0;
  local_248 = 0;
  local_244 = 0x80000000;
  puVar11 = puVar18;
  do {
    iVar4 = (int)puVar11;
    if (*(int *)(lVar20 + (longlong)iVar4 * 4) < 0) {
      puVar11 = (undefined4 *)(ulonglong)(uint)(iVar4 + *(int *)(lVar20 + 8 + (longlong)iVar4 * 4));
    }
    else {
      do {
        iVar4 = (int)puVar11;
        puVar11 = (undefined4 *)(ulonglong)(iVar4 + 1);
      } while ((*(uint *)(lVar20 + (longlong)iVar4 * 4) & 0x40000000) == 0);
    }
    uVar10 = (uint)puVar11;
  } while ((uVar10 < uVar19) && (*(int *)(lVar20 + (longlong)(int)uVar10 * 4) < 0));
  puVar13 = puVar18;
  if (uVar10 < uVar19) {
    puVar13 = puVar11;
  }
  uVar19 = (uint)puVar13;
  puVar11 = puVar18;
  while (uVar19 != 0) {
    uVar21 = 0;
    uVar16 = 0;
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    local_210 = (uint *)(lVar20 + (longlong)(int)puVar13 * 4);
    lVar9 = (longlong)((int)puVar13 + 2);
    puVar22 = (uint *)(lVar20 + lVar9 * 4);
    uVar10 = *(uint *)(lVar20 + lVar9 * 4);
    uVar17 = uVar21;
    while ((uVar10 & 0x20000000) == 0) {
      uVar16 = (int)uVar17 + 2;
      uVar17 = (ulonglong)uVar16;
      puVar22 = puVar22 + 2;
      uVar10 = *puVar22;
    }
    uVar16 = (int)uVar16 >> 1;
    uVar10 = (uint)puVar18;
    if ((int)(local_258 & 0x7fffffff) < (int)uVar16) {
      FUN_141807aa8(&local_250,&PTR_vftable_14c6e47a0,(longlong)(int)uVar16);
      local_258 = local_244;
      puVar11 = local_250;
      uVar10 = local_248;
    }
    if (((int)uVar10 < (int)uVar16) || ((int)uVar16 < (int)uVar10)) {
      local_248 = uVar16;
    }
    puVar12 = (ulonglong *)
              ((ulonglong)(local_210[2] & 0xfffffff) * 0x40 +
              *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
    if ((local_210[2] >> 0x1c & 1) == 0) {
      local_1a0 = *puVar12;
      uStack_198 = puVar12[1];
      local_190 = puVar12[2];
      uStack_188 = puVar12[3];
      local_180 = puVar12[4];
      uStack_178 = puVar12[5];
      local_170 = (undefined4)puVar12[6];
      uStack_16c = *(uint *)((longlong)puVar12 + 0x34);
      uStack_168 = (undefined4)puVar12[7];
      uStack_164 = *(uint *)((longlong)puVar12 + 0x3c);
    }
    else {
      uVar17 = puVar12[3] >> 0xb;
      uVar8 = ~(puVar12[3] & 0x7ff | uVar17 << 0xb);
      local_208 = uVar8 + 1;
      local_1a0 = (*puVar12 >> 0xe) * -0x4000;
      uStack_198 = (puVar12[1] >> 0xe) * -0x4000;
      uStack_1d0 = (puVar12[2] >> 0xe) * -0x4000;
      local_1d8 = 0;
      uStack_200 = ~((longlong)(puVar12[2] << 0x35 | uVar17) >> 0x35) +
                   (ulonglong)(0xfffffffffffffffe < uVar8) & 0x7ff | uStack_1d0;
      local_180 = puVar12[4] ^ 0x8000000000000000;
      uStack_178 = puVar12[5] ^ 0x8000000000000000;
      local_170 = (undefined4)puVar12[6];
      uStack_168 = (undefined4)puVar12[7];
      uStack_16c = *(uint *)((longlong)puVar12 + 0x34) ^ 0x80000000;
      uStack_164 = *(uint *)((longlong)puVar12 + 0x3c) ^ 0x80000000;
      local_190 = uStack_200;
      uStack_188 = local_208;
    }
    puVar12 = (ulonglong *)
              ((ulonglong)(local_210[(longlong)(int)(uVar16 * 2) + 1] & 0xfffffff) * 0x40 +
              *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
    if ((local_210[(longlong)(int)(uVar16 * 2) + 1] >> 0x1c & 1) == 0) {
      local_160 = *puVar12;
      uStack_158 = puVar12[1];
      local_150 = puVar12[2];
      uStack_148 = puVar12[3];
      local_140 = (undefined4)puVar12[4];
      uStack_13c = *(uint *)((longlong)puVar12 + 0x24);
      uStack_138 = (undefined4)puVar12[5];
      uStack_134 = *(uint *)((longlong)puVar12 + 0x2c);
      local_130 = (undefined4)puVar12[6];
      uStack_12c = *(uint *)((longlong)puVar12 + 0x34);
      uStack_128 = (undefined4)puVar12[7];
      uStack_124 = *(uint *)((longlong)puVar12 + 0x3c);
    }
    else {
      uVar17 = puVar12[3] >> 0xb;
      uVar8 = ~(puVar12[3] & 0x7ff | uVar17 << 0xb);
      local_1f8 = uVar8 + 1;
      local_160 = (*puVar12 >> 0xe) * -0x4000;
      uStack_158 = (puVar12[1] >> 0xe) * -0x4000;
      uStack_1c0 = (puVar12[2] >> 0xe) * -0x4000;
      local_1c8 = 0;
      uStack_1f0 = ~((longlong)(puVar12[2] << 0x35 | uVar17) >> 0x35) +
                   (ulonglong)(0xfffffffffffffffe < uVar8) & 0x7ff | uStack_1c0;
      local_140 = (undefined4)puVar12[4];
      uStack_138 = (undefined4)puVar12[5];
      uStack_13c = *(uint *)((longlong)puVar12 + 0x24) ^ 0x80000000;
      uStack_134 = *(uint *)((longlong)puVar12 + 0x2c) ^ 0x80000000;
      local_130 = (undefined4)puVar12[6];
      uStack_128 = (undefined4)puVar12[7];
      uStack_12c = *(uint *)((longlong)puVar12 + 0x34) ^ 0x80000000;
      uStack_124 = *(uint *)((longlong)puVar12 + 0x3c) ^ 0x80000000;
      local_150 = uStack_1f0;
      uStack_148 = local_1f8;
    }
    lVar20 = (longlong)(int)uVar16;
    if (0 < (int)uVar16) {
      puVar22 = local_210 + 3;
      do {
        puVar12 = (ulonglong *)
                  ((ulonglong)(*puVar22 & 0xfffffff) * 0x40 +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30));
        if ((*puVar22 >> 0x1c & 1) == 0) {
          local_120 = *puVar12;
          uStack_118 = puVar12[1];
          local_110 = puVar12[2];
          uStack_108 = puVar12[3];
          local_100 = puVar12[4];
          uStack_f8 = puVar12[5];
          local_f0 = (undefined4)puVar12[6];
          uStack_ec = *(uint *)((longlong)puVar12 + 0x34);
          uStack_e8 = (undefined4)puVar12[7];
          uStack_e4 = *(uint *)((longlong)puVar12 + 0x3c);
        }
        else {
          uVar17 = puVar12[3] >> 0xb;
          uVar8 = ~(puVar12[3] & 0x7ff | uVar17 << 0xb);
          local_1e8 = uVar8 + 1;
          local_120 = (*puVar12 >> 0xe) * -0x4000;
          uStack_118 = (puVar12[1] >> 0xe) * -0x4000;
          uStack_1b0 = (puVar12[2] >> 0xe) * -0x4000;
          local_1b8 = 0;
          uStack_1e0 = ~((longlong)(puVar12[2] << 0x35 | uVar17) >> 0x35) +
                       (ulonglong)(0xfffffffffffffffe < uVar8) & 0x7ff | uStack_1b0;
          local_100 = puVar12[4] ^ 0x8000000000000000;
          uStack_f8 = puVar12[5] ^ 0x8000000000000000;
          local_f0 = (undefined4)puVar12[6];
          uStack_e8 = (undefined4)puVar12[7];
          uStack_ec = *(uint *)((longlong)puVar12 + 0x34) ^ 0x80000000;
          uStack_e4 = *(uint *)((longlong)puVar12 + 0x3c) ^ 0x80000000;
          local_110 = uStack_1e0;
          uStack_108 = local_1e8;
        }
        FUN_14551ff20(&local_1a0,local_b0,local_90,local_70,local_d0);
        iVar4 = thunk_FUN_14551ed00(local_b0,local_d0);
        iVar5 = thunk_FUN_14551ed00(local_90,local_d0);
        iVar6 = thunk_FUN_14551ed00(local_70,local_d0);
        auVar1 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x20) + 0x20);
        fStack_d4 = auVar1._12_4_;
        auVar23._0_4_ = (float)iVar4;
        auVar23._4_4_ = (float)iVar5;
        auVar23._8_4_ = (float)iVar6;
        auVar23._12_4_ = (float)iVar6;
        auVar24._4_4_ = fStack_d4;
        auVar24._0_4_ = fStack_d4;
        auVar24._8_4_ = fStack_d4;
        auVar24._12_4_ = fStack_d4;
        auVar24 = divps(auVar23,auVar24);
        local_e0 = auVar24._0_4_ + auVar1._0_4_;
        fStack_dc = auVar24._4_4_ + auVar1._4_4_;
        fStack_d8 = auVar24._8_4_ + auVar1._8_4_;
        fStack_d4 = auVar24._12_4_ + fStack_d4;
        uVar7 = FUN_145520510(&local_240,&local_e0);
        puVar11[uVar21] = uVar7;
        puVar22 = puVar22 + 2;
        local_160 = local_120;
        uStack_158 = uStack_118;
        uVar21 = uVar21 + 1;
        local_150 = local_110;
        uStack_148 = uStack_108;
        local_140 = (undefined4)local_100;
        uStack_13c = local_100._4_4_;
        uStack_138 = (undefined4)uStack_f8;
        uStack_134 = uStack_f8._4_4_;
        local_130 = local_f0;
        uStack_12c = uStack_ec;
        uStack_128 = uStack_e8;
        uStack_124 = uStack_e4;
      } while ((longlong)uVar21 < lVar20);
      puVar13 = (undefined4 *)(ulonglong)uVar19;
    }
    uVar19 = *local_210;
    lVar9 = 2;
    uVar10 = local_210[1];
    uVar16 = *local_210;
    if (2 < lVar20) {
      do {
        iVar4 = *(int *)(param_2 + 0x30) + 1;
        if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar4) {
          FUN_141805702(param_2 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar4);
        }
        iVar5 = *(int *)(param_2 + 0x30);
        *(int *)(param_2 + 0x30) = iVar4;
        uVar7 = puVar11[lVar9];
        uVar2 = puVar11[lVar9 + -1];
        lVar9 = lVar9 + 1;
        puVar18 = (undefined4 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_2 + 0x28));
        *puVar18 = *puVar11;
        puVar18[1] = uVar2;
        puVar18[2] = uVar7;
        puVar18[3] = (((uVar19 & 0x1fffffff) >> 0x17 & 1) << 0xf | uVar16) << 0x10 | uVar10 & 0xffff
        ;
      } while (lVar9 < lVar20);
    }
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    uVar19 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x20) - 4;
    do {
      iVar4 = (int)puVar13;
      if (*(int *)(lVar20 + (longlong)iVar4 * 4) < 0) {
        puVar13 = (undefined4 *)
                  (ulonglong)(uint)(iVar4 + *(int *)(lVar20 + 8 + (longlong)iVar4 * 4));
      }
      else {
        do {
          iVar4 = (int)puVar13;
          puVar13 = (undefined4 *)(ulonglong)(iVar4 + 1);
        } while ((*(uint *)(lVar20 + (longlong)iVar4 * 4) & 0x40000000) == 0);
      }
      uVar10 = (uint)puVar13;
    } while ((uVar10 < uVar19) && (*(int *)(lVar20 + (longlong)(int)uVar10 * 4) < 0));
    puVar18 = (undefined4 *)(ulonglong)local_248;
    puVar14 = (undefined4 *)0x0;
    if (uVar10 < uVar19) {
      puVar14 = puVar13;
    }
    puVar13 = puVar14;
    uVar19 = (uint)puVar14;
  }
  puVar15 = (undefined8 *)(param_2 + 0x18);
  if (&local_240 != puVar15) {
    FUN_147e4a87c(puVar15,&PTR_vftable_14c6e47a0);
    FUN_147e4a87c(&local_240,&PTR_vftable_14c6e47a0);
    uVar3 = *puVar15;
    *puVar15 = local_240;
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = local_238;
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = local_234;
    local_240 = uVar3;
    local_238 = uVar7;
    local_234 = uVar2;
  }
  if ((-1 < (int)local_258) && (puVar11 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar11,(ulonglong)(local_258 & 0x7fffffff) << 2);
  }
  FUN_14530fd50(&local_240);
  return;
}



// FUNCTION 14530f250 FUN_14530f250 body=2586 status=ok
// SIG undefined FUN_14530f250(void)

void FUN_14530f250(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  int iVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  undefined1 (*pauVar22) [16];
  uint *puVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6 [16];
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
  longlong local_2c0;
  uint local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  ulonglong uStack_298;
  ulonglong local_290;
  ulonglong uStack_288;
  longlong local_280;
  ulonglong uStack_278;
  undefined8 local_270;
  ulonglong uStack_268;
  undefined8 local_260;
  ulonglong uStack_258;
  undefined8 local_250;
  ulonglong uStack_248;
  longlong local_240;
  longlong lStack_238;
  ulonglong local_230;
  longlong lStack_228;
  ulonglong local_220;
  ulonglong uStack_218;
  undefined4 local_210;
  uint uStack_20c;
  undefined4 uStack_208;
  uint uStack_204;
  longlong local_200;
  longlong lStack_1f8;
  ulonglong local_1f0;
  ulonglong uStack_1e8;
  ulonglong local_1e0;
  ulonglong uStack_1d8;
  undefined4 local_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  longlong local_1c0;
  longlong lStack_1b8;
  ulonglong local_1b0;
  longlong lStack_1a8;
  ulonglong local_1a0;
  ulonglong uStack_198;
  undefined4 local_190;
  uint uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  lVar18 = *(longlong *)(param_1 + 0x20);
  puVar16 = (undefined8 *)0x0;
  local_2a8 = lVar18;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_2c0 = 0x28;
    puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_2c0,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar9,"VertexStorage");
    }
    puVar19 = puVar16;
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[4] = 0;
      puVar9[1] = 0xffffffff;
      *puVar9 = hkcdPlanarGeometry::VertexStorage::vftable;
      puVar9[2] = 1;
      puVar9[3] = 0;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x24) = 0x80000000;
      puVar19 = puVar9;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x30);
    if ((puVar19 != puVar9) &&
       (*(undefined8 **)(param_1 + 0x30) = puVar19, puVar9 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
  }
  iVar20 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x20);
  if ((iVar20 < 0) || (0 < iVar20)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x20) = 0;
  }
  if ((0 < param_2) &&
     ((int)(*(uint *)(*(longlong *)(param_1 + 0x30) + 0x24) & 0x7fffffff) < param_2)) {
    FUN_14530fe10(*(longlong *)(param_1 + 0x30) + 0x18,&PTR_vftable_14c6e4800,(longlong)param_2);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
  uVar21 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x20) - 4;
  puVar9 = puVar16;
  do {
    iVar20 = (int)puVar9;
    if (*(int *)(lVar2 + (longlong)iVar20 * 4) < 0) {
      puVar9 = (undefined8 *)(ulonglong)(uint)(iVar20 + *(int *)(lVar2 + 8 + (longlong)iVar20 * 4));
    }
    else {
      do {
        iVar20 = (int)puVar9;
        puVar9 = (undefined8 *)(ulonglong)(iVar20 + 1);
      } while ((*(uint *)(lVar2 + (longlong)iVar20 * 4) & 0x40000000) == 0);
    }
    uVar17 = (uint)puVar9;
  } while ((uVar17 < uVar21) && (*(int *)(lVar2 + (longlong)(int)uVar17 * 4) < 0));
  if (uVar17 < uVar21) {
    puVar16 = puVar9;
  }
  local_2b8 = (uint)puVar16;
  lVar2 = local_2a8;
  while (local_2b8 != 0) {
    iVar20 = 0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    lVar1 = lVar3 + (longlong)(int)puVar16 * 4;
    lVar14 = (longlong)((int)puVar16 + 2);
    puVar23 = (uint *)(lVar3 + lVar14 * 4);
    uVar21 = *(uint *)(lVar3 + lVar14 * 4);
    while ((uVar21 & 0x20000000) == 0) {
      iVar20 = iVar20 + 2;
      puVar23 = puVar23 + 2;
      uVar21 = *puVar23;
    }
    iVar20 = iVar20 >> 1;
    uVar21 = *(uint *)(lVar1 + 8) & 0x1fffffff;
    pauVar22 = (undefined1 (*) [16])
               (((ulonglong)uVar21 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar18 + 0x30));
    if (uVar21 >> 0x1c == 0) {
      local_240 = *(longlong *)*pauVar22;
      lStack_238 = *(longlong *)(*pauVar22 + 8);
      local_230 = *(ulonglong *)pauVar22[1];
      lStack_228 = *(longlong *)(pauVar22[1] + 8);
      local_220 = *(ulonglong *)pauVar22[2];
      uStack_218 = *(ulonglong *)(pauVar22[2] + 8);
      local_210 = *(undefined4 *)pauVar22[3];
      uStack_20c = *(uint *)(pauVar22[3] + 4);
      uStack_208 = *(undefined4 *)(pauVar22[3] + 8);
      uStack_204 = *(uint *)(pauVar22[3] + 0xc);
    }
    else {
      uVar4 = *(ulonglong *)(pauVar22[1] + 8) >> 0xb;
      local_240 = (SUB168(*pauVar22,0) >> 0xe) * -0x4000;
      lStack_238 = (SUB168(*pauVar22,8) >> 0xe) * -0x4000;
      uVar15 = ~(*(ulonglong *)(pauVar22[1] + 8) & 0x7ff | uVar4 << 0xb);
      local_2a0 = uVar15 + 1;
      uStack_268 = (*(ulonglong *)pauVar22[1] >> 0xe) * -0x4000;
      local_270 = 0;
      uStack_298 = ~((longlong)(*(longlong *)pauVar22[1] << 0x35 | uVar4) >> 0x35) +
                   (ulonglong)(0xfffffffffffffffe < uVar15) & 0x7ff | uStack_268;
      local_220 = *(ulonglong *)pauVar22[2] ^ 0x8000000000000000;
      uStack_218 = *(ulonglong *)(pauVar22[2] + 8) ^ 0x8000000000000000;
      local_210 = *(undefined4 *)pauVar22[3];
      uStack_208 = *(undefined4 *)(pauVar22[3] + 8);
      uStack_20c = *(uint *)(pauVar22[3] + 4) ^ 0x80000000;
      uStack_204 = *(uint *)(pauVar22[3] + 0xc) ^ 0x80000000;
      local_230 = uStack_298;
      lStack_228 = local_2a0;
    }
    local_2c0 = (longlong)iVar20;
    local_2a8 = lVar2;
    if (0 < iVar20) {
      puVar23 = (uint *)(lVar1 + 0x10);
      local_2b0 = 0x3ff0000000000000;
      uVar21 = *(uint *)(lVar1 + 4 + (longlong)(iVar20 * 2) * 4) & 0x1fffffff;
      do {
        uVar17 = puVar23[-1] & 0x1fffffff;
        pauVar22 = (undefined1 (*) [16])
                   (((ulonglong)uVar21 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar2 + 0x30));
        if (uVar21 >> 0x1c == 0) {
          local_200 = *(longlong *)*pauVar22;
          lStack_1f8 = *(longlong *)(*pauVar22 + 8);
          local_1f0 = *(ulonglong *)pauVar22[1];
          uStack_1e8 = *(ulonglong *)(pauVar22[1] + 8);
          local_1e0 = *(ulonglong *)pauVar22[2];
          uStack_1d8 = *(ulonglong *)(pauVar22[2] + 8);
          local_1d0 = *(undefined4 *)pauVar22[3];
          uStack_1cc = *(uint *)(pauVar22[3] + 4);
          uStack_1c8 = *(undefined4 *)(pauVar22[3] + 8);
          uStack_1c4 = *(uint *)(pauVar22[3] + 0xc);
        }
        else {
          uVar4 = *(ulonglong *)(pauVar22[1] + 8) >> 0xb;
          local_200 = (SUB168(*pauVar22,0) >> 0xe) * -0x4000;
          lStack_1f8 = (SUB168(*pauVar22,8) >> 0xe) * -0x4000;
          uVar15 = ~(*(ulonglong *)(pauVar22[1] + 8) & 0x7ff | uVar4 << 0xb);
          local_2b0 = uVar15 + 1;
          uStack_258 = (*(ulonglong *)pauVar22[1] >> 0xe) * -0x4000;
          local_260 = 0;
          uStack_288 = ~((longlong)(*(longlong *)pauVar22[1] << 0x35 | uVar4) >> 0x35) +
                       (ulonglong)(0xfffffffffffffffe < uVar15) & 0x7ff | uStack_258;
          local_1e0 = *(ulonglong *)pauVar22[2] ^ 0x8000000000000000;
          uStack_1d8 = *(ulonglong *)(pauVar22[2] + 8) ^ 0x8000000000000000;
          local_1d0 = *(undefined4 *)pauVar22[3];
          uStack_1c8 = *(undefined4 *)(pauVar22[3] + 8);
          uStack_1cc = *(uint *)(pauVar22[3] + 4) ^ 0x80000000;
          uStack_1c4 = *(uint *)(pauVar22[3] + 0xc) ^ 0x80000000;
          local_290 = local_2b0;
          local_1f0 = uStack_288;
          uStack_1e8 = local_2b0;
        }
        pauVar22 = (undefined1 (*) [16])
                   (((ulonglong)uVar17 & 0xffffffffefffffff) * 0x40 + *(longlong *)(lVar2 + 0x30));
        if (uVar17 >> 0x1c == 0) {
          local_1c0 = *(longlong *)*pauVar22;
          lStack_1b8 = *(longlong *)(*pauVar22 + 8);
          local_1b0 = *(ulonglong *)pauVar22[1];
          lStack_1a8 = *(longlong *)(pauVar22[1] + 8);
          local_1a0 = *(ulonglong *)pauVar22[2];
          uStack_198 = *(ulonglong *)(pauVar22[2] + 8);
          local_190 = *(undefined4 *)pauVar22[3];
          uStack_18c = *(uint *)(pauVar22[3] + 4);
          uStack_188 = *(undefined4 *)(pauVar22[3] + 8);
          uStack_184 = *(uint *)(pauVar22[3] + 0xc);
        }
        else {
          uVar4 = *(ulonglong *)(pauVar22[1] + 8) >> 0xb;
          local_1c0 = (SUB168(*pauVar22,0) >> 0xe) * -0x4000;
          lStack_1b8 = (SUB168(*pauVar22,8) >> 0xe) * -0x4000;
          uVar15 = ~(*(ulonglong *)(pauVar22[1] + 8) & 0x7ff | uVar4 << 0xb);
          local_280 = uVar15 + 1;
          uStack_248 = (*(ulonglong *)pauVar22[1] >> 0xe) * -0x4000;
          local_250 = 0;
          local_2b0 = ~((longlong)(*(longlong *)pauVar22[1] << 0x35 | uVar4) >> 0x35) +
                      (ulonglong)(0xfffffffffffffffe < uVar15) & 0x7ff | uStack_248;
          local_1a0 = *(ulonglong *)pauVar22[2] ^ 0x8000000000000000;
          uStack_198 = *(ulonglong *)(pauVar22[2] + 8) ^ 0x8000000000000000;
          local_190 = *(undefined4 *)pauVar22[3];
          uStack_188 = *(undefined4 *)(pauVar22[3] + 8);
          uStack_18c = *(uint *)(pauVar22[3] + 4) ^ 0x80000000;
          uStack_184 = *(uint *)(pauVar22[3] + 0xc) ^ 0x80000000;
          uStack_278 = local_2b0;
          local_1b0 = local_2b0;
          lStack_1a8 = local_280;
        }
        lVar18 = *(longlong *)(param_1 + 0x30);
        iVar20 = *(int *)(lVar18 + 0x20) + 1;
        if ((int)(*(uint *)(lVar18 + 0x24) & 0x7fffffff) < iVar20) {
          FUN_14530ff00(lVar18 + 0x18,&PTR_vftable_14c6e4800,(longlong)iVar20);
        }
        pauVar22 = (undefined1 (*) [16])
                   ((longlong)*(int *)(lVar18 + 0x20) * 0x20 + *(longlong *)(lVar18 + 0x18));
        *(int *)(lVar18 + 0x20) = iVar20;
        FUN_14551eeb0(&local_220,&local_1e0,&local_1a0,&local_100);
        auVar33._0_8_ = local_f0._0_8_;
        auVar6._4_8_ = extraout_XMM0_Qb;
        auVar6._0_4_ = local_f0._4_4_;
        auVar34._0_8_ = auVar6._0_8_ << 0x20;
        auVar34._8_4_ = local_f0._8_4_;
        auVar34._12_4_ = local_f0._12_4_;
        auVar7._4_8_ = unaff_XMM6._8_8_;
        auVar7._0_4_ = uStack_cc;
        auVar31._0_8_ = auVar7._0_8_ << 0x20;
        auVar31._8_4_ = uStack_c8;
        auVar31._12_4_ = uStack_c4;
        auVar25._8_8_ = local_f0._8_8_;
        auVar25._0_8_ = auVar34._8_8_;
        auVar39._8_8_ = local_100;
        auVar39._0_8_ = local_100;
        auVar36 = divpd(auVar39,auVar25);
        auVar38._8_8_ = uStack_f8;
        auVar38._0_8_ = uStack_f8;
        auVar39 = divpd(auVar38,auVar25);
        auVar33._8_8_ = auVar33._0_8_;
        auVar34 = divpd(auVar33,auVar25);
        auVar37._0_8_ = auVar36._0_8_;
        dVar28 = auVar39._0_8_;
        auVar36._8_8_ = auVar31._8_8_;
        auVar36._0_8_ = auVar36._8_8_;
        unaff_XMM6 = divpd(auVar36,auVar25);
        dVar10 = (double)(((ulonglong)auVar37._0_8_ & 0x7ff0000000000000) + 0xfcc0000000000000);
        if (((ulonglong)auVar37._0_8_ & 0x7ff0000000000000) < 0x340000000000000) {
          dVar10 = 0.0;
        }
        auVar30._8_4_ = 0;
        auVar30._0_8_ = dVar10;
        auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar31 = divpd(auVar30,auVar25);
        dVar11 = (double)(((ulonglong)dVar28 & 0x7ff0000000000000) + 0xfcc0000000000000);
        if (((ulonglong)dVar28 & 0x7ff0000000000000) < 0x340000000000000) {
          dVar11 = 0.0;
        }
        auVar35._0_8_ = auVar34._0_8_;
        auVar29._8_4_ = 0;
        auVar29._0_8_ = dVar11;
        auVar29._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar34 = divpd(auVar29,auVar25);
        dVar12 = (double)(((ulonglong)auVar35._0_8_ & 0x7ff0000000000000) + 0xfcc0000000000000);
        if (((ulonglong)auVar35._0_8_ & 0x7ff0000000000000) < 0x340000000000000) {
          dVar12 = 0.0;
        }
        auVar24._8_4_ = 0;
        auVar24._0_8_ = dVar12;
        auVar24._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar25 = divpd(auVar24,auVar25);
        dVar5 = unaff_XMM6._0_8_;
        dVar12 = ABS(auVar25._0_8_) + dVar12 + ABS(auVar35._0_8_ * dVar5);
        auVar26._8_8_ = -(ulonglong)(dVar12 < 1.0);
        auVar26._0_8_ = -(ulonglong)(dVar12 < 1.0);
        auVar32._8_8_ = -(ulonglong)(ABS(auVar34._0_8_) + dVar11 + ABS(dVar28 * dVar5) < 1.0);
        auVar32._0_8_ =
             -(ulonglong)
              (ABS(auVar31._0_8_) + dVar10 +
               (double)CONCAT44((uint)((ulonglong)((longlong)(dVar5 * auVar37._0_8_) << 1) >> 0x21),
                                SUB84(dVar5 * auVar37._0_8_,0)) < 1.0);
        iVar13 = movmskpd(0,auVar32);
        iVar20 = movmskpd(0,auVar26);
        if (iVar13 == 0 && iVar20 == 0) {
          FUN_14551ff20(&local_240,local_160,local_140,local_120,local_180);
          iVar20 = thunk_FUN_14551ed00(local_160,local_180);
          iVar13 = thunk_FUN_14551ed00(local_140,local_180);
          iVar8 = thunk_FUN_14551ed00(local_120,local_180);
          *(double *)*pauVar22 = (double)iVar20;
          *(double *)(*pauVar22 + 8) = (double)iVar13;
          auVar27._0_8_ = (double)iVar8;
          auVar27._8_8_ = (double)iVar8;
          pauVar22[1] = auVar27;
        }
        else {
          auVar37._8_8_ = dVar28;
          auVar35._8_8_ = auVar35._0_8_;
          *pauVar22 = auVar37;
          pauVar22[1] = auVar35;
        }
        *puVar23 = *puVar23 ^
                   (*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) - 1U ^ *puVar23) & 0x1fffffff;
        puVar23 = puVar23 + 2;
        local_2c0 = local_2c0 + -1;
        uVar21 = uVar17;
      } while (local_2c0 != 0);
      puVar16 = (undefined8 *)(ulonglong)local_2b8;
      lVar18 = local_2a8;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18);
    uVar21 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x20) - 4;
    do {
      iVar20 = (int)puVar16;
      if (*(int *)(lVar2 + (longlong)iVar20 * 4) < 0) {
        puVar16 = (undefined8 *)
                  (ulonglong)(uint)(iVar20 + *(int *)(lVar2 + 8 + (longlong)iVar20 * 4));
      }
      else {
        do {
          iVar20 = (int)puVar16;
          puVar16 = (undefined8 *)(ulonglong)(iVar20 + 1);
        } while ((*(uint *)(lVar2 + (longlong)iVar20 * 4) & 0x40000000) == 0);
      }
      uVar17 = (uint)puVar16;
    } while ((uVar17 < uVar21) && (*(int *)(lVar2 + (longlong)(int)uVar17 * 4) < 0));
    puVar9 = (undefined8 *)0x0;
    if (uVar17 < uVar21) {
      puVar9 = puVar16;
    }
    puVar16 = puVar9;
    lVar2 = local_2a8;
    local_2b8 = (uint)puVar9;
  }
  return;
}



// FUNCTION 14530fc70 FUN_14530fc70 body=224 status=ok
// SIG undefined FUN_14530fc70(void)

undefined8 * FUN_14530fc70(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = hkcdPlanarGeometry::vftable;
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14530fd50 FUN_14530fd50 body=177 status=ok
// SIG undefined FUN_14530fd50(void)

void FUN_14530fd50(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_144f5ff60(param_1 + 2,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14530fe10 FUN_14530fe10 body=236 status=ok
// SIG undefined FUN_14530fe10(void)

void FUN_14530fe10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 0x20;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 14530ff00 FUN_14530ff00 body=243 status=ok
// SIG undefined FUN_14530ff00(void)

void FUN_14530ff00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x20,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 5);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145310000 FUN_145310000 body=407 status=ok
// SIG undefined FUN_145310000(void)

undefined8 * FUN_145310000(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  param_1[2] = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *param_1 = hkcdPlanarSolid::NodeStorage::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  iVar1 = *(int *)(param_1 + 4);
  puVar5 = puVar4 + (longlong)*(int *)(param_2 + 0x20) * 5;
  iVar6 = (int)(((longlong)*(int *)(param_2 + 0x20) * 0x28) / 0x28) + iVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) < iVar6) {
    FUN_144fa8e40(param_1 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar3 = (undefined8 *)(param_1[3] + (longlong)iVar1 * 0x28);
  for (; puVar4 != puVar5; puVar4 = puVar4 + 5) {
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar2;
      uVar2 = puVar4[3];
      puVar3[2] = puVar4[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar4[4];
    }
    puVar3 = puVar3 + 5;
  }
  *(int *)(param_1 + 4) = iVar6;
  iVar1 = *(int *)(param_1 + 6);
  puVar5 = *(undefined8 **)(param_2 + 0x28);
  puVar4 = puVar5 + (longlong)*(int *)(param_2 + 0x30) * 4;
  iVar6 = *(int *)(param_2 + 0x30) + iVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar6) {
    FUN_141807cf8(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + param_1[5]);
  for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
    if (puVar3 != (undefined8 *)0x0) {
      uVar2 = puVar5[1];
      *puVar3 = *puVar5;
      puVar3[1] = uVar2;
      uVar2 = puVar5[3];
      puVar3[2] = puVar5[2];
      puVar3[3] = uVar2;
    }
    puVar3 = puVar3 + 4;
  }
  *(int *)(param_1 + 6) = iVar6;
  return param_1;
}



// FUNCTION 1453101a0 FUN_1453101a0 body=266 status=ok
// SIG undefined FUN_1453101a0(void)

undefined8 * FUN_1453101a0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  param_1[2] = 1;
  *param_1 = hkcdPlanarEntity::vftable;
  param_1[3] = param_4;
  param_1[1] = 0xffffffff;
  if (param_4 != 0) {
    FUN_144b3d910(param_4);
  }
  puVar2 = (undefined8 *)0x0;
  *param_1 = hkcdPlanarSolid::vftable;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  local_res8 = 0x40;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"NodeStorage");
  }
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = hkcdPlanarSolid::NodeStorage::vftable;
    puVar1[2] = 1;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80000000;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff80000000;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)param_1[4];
  if ((puVar2 != puVar1) && (param_1[4] = puVar2, puVar1 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 1453102b0 FUN_1453102b0 body=230 status=ok
// SIG undefined FUN_1453102b0(void)

undefined8 * FUN_1453102b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkcdPlanarEntity::vftable;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  lVar2 = 0;
  *param_1 = hkcdPlanarSolid::vftable;
  param_1[4] = 0;
  lVar1 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  local_res8 = 0x40;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"NodeStorage");
  }
  if (lVar1 != 0) {
    lVar2 = FUN_145310000(lVar1,*(undefined8 *)(param_2 + 0x20));
  }
  lVar1 = param_1[4];
  if ((lVar2 != lVar1) && (param_1[4] = lVar2, lVar1 != 0)) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 1453103a0 FUN_1453103a0 body=99 status=ok
// SIG undefined FUN_1453103a0(void)

void FUN_1453103a0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = hkcdPlanarSolid::vftable;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145310410 FUN_145310410 body=45 status=ok
// SIG undefined FUN_145310410(void)

undefined8 * FUN_145310410(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkcdPlanarCsgOperand::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 145310460 FUN_145310460 body=143 status=ok
// SIG undefined FUN_145310460(void)

void FUN_145310460(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = hkcdPlanarCsgOperand::vftable;
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1453104f0 FUN_1453104f0 body=203 status=ok
// SIG undefined FUN_1453104f0(void)

void FUN_1453104f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  plVar5 = *(longlong **)(param_1 + 0x18);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x20) * 0x18;
  for (; plVar5 != plVar4; plVar5 = plVar5 + 0x18) {
    lVar1 = *plVar5;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x60) == 0)) {
      local_res8 = 0x40;
      lVar2 = (*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar2,"hkReferencedObject");
      }
      if (lVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_145520840(lVar2);
      }
      lVar2 = *(longlong *)(lVar1 + 0x60);
      *(undefined8 *)(lVar1 + 0x60) = uVar3;
      if (lVar2 != 0) {
        FUN_144b3f230();
      }
      FUN_145520880(*(undefined8 *)(lVar1 + 0x60),lVar1 + 0x48);
    }
  }
  return;
}



// FUNCTION 1453105c0 FUN_1453105c0 body=276 status=ok
// SIG undefined FUN_1453105c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1453105c0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkgpMeshMerge::vftable;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 0x24) = 10;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[6] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[7] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 8) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x44) = uVar2;
  *(uint *)(param_1 + 9) = uVar3;
  *(uint *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0x19) = 1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3dcccccd;
  param_1[0x1a] = 0x40000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



// FUNCTION 1453106e0 FUN_1453106e0 body=165 status=ok
// SIG undefined FUN_1453106e0(void)

void FUN_1453106e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145310790 FUN_145310790 body=165 status=ok
// SIG undefined FUN_145310790(void)

void FUN_145310790(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145310840 FUN_145310840 body=8 status=ok
// SIG undefined FUN_145310840(void)

undefined8 FUN_145310840(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x478);
}



// FUNCTION 145310850 FUN_145310850 body=8 status=ok
// SIG undefined FUN_145310850(void)

undefined8 FUN_145310850(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x438);
}



// FUNCTION 145310860 FUN_145310860 body=56 status=ok
// SIG undefined FUN_145310860(void)

void FUN_145310860(longlong param_1,undefined8 param_2)

{
  FUN_144fbc170(*(undefined8 *)(param_1 + 0x438));
  FUN_1453106e0(param_1 + 0x128,param_1,param_2);
  return;
}



// FUNCTION 1453108a0 FUN_1453108a0 body=56 status=ok
// SIG undefined FUN_1453108a0(void)

void FUN_1453108a0(longlong param_1,undefined8 param_2)

{
  FUN_144fad0b0(*(undefined8 *)(param_1 + 0x478));
  FUN_145310790(param_1 + 0x138,param_1,param_2);
  return;
}



// FUNCTION 1453108e0 FUN_1453108e0 body=151 status=ok
// SIG undefined FUN_1453108e0(void)

void FUN_1453108e0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = *param_4;
  local_res10[0] = *param_2;
  FUN_145310980(param_1,local_res10,local_res8,0x10,8,param_6);
  uVar2 = *param_3;
  iVar4 = *(int *)(param_1 + 0x50) + 1;
  uVar3 = *param_5;
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < iVar4) {
    FUN_145312b00(param_1 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
  }
  *(int *)(param_1 + 0x50) = iVar4;
  return;
}



// FUNCTION 145310980 FUN_145310980 body=208 status=ok
// SIG undefined FUN_145310980(void)

void FUN_145310980(longlong param_1,undefined4 *param_2,undefined4 *param_3,byte param_4,
                  byte param_5,undefined1 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [16];
  ushort local_res20 [4];
  
  local_res20[0] = local_res20[0] & 0xff00;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_res8 = *param_2;
  local_resc = *param_3;
  FUN_145310b70(plVar1,local_res10,&local_res8,local_res20);
  iVar4 = (int)local_res10._0_8_;
  lVar2 = *plVar1 + (longlong)iVar4 * 0xc;
  bVar3 = *(byte *)(*plVar1 + 8 + (longlong)iVar4 * 0xc);
  if ((bVar3 & param_4) == 0) {
    *(byte *)(lVar2 + 8) = bVar3 | param_5;
  }
  else {
    *(byte *)(lVar2 + 8) = ~param_4 & bVar3;
    if ((~param_4 & bVar3) == 0) {
      uVar6 = SUB84(local_res10._0_8_,4);
      if ((*(uint *)(param_1 + 0x30) < uVar6) ||
         (lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar6 * 8,
         *(int *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)(int)uVar6 * 8) != iVar4)) {
        lVar5 = FUN_145015980(plVar1,*plVar1 + (longlong)iVar4 * 0xc);
      }
      FUN_145310a50(plVar1,lVar5);
      *(undefined1 *)(lVar2 + 9) = param_6;
      return;
    }
  }
  *(undefined1 *)(lVar2 + 9) = param_6;
  return;
}



// FUNCTION 145310a50 FUN_145310a50 body=288 status=ok
// SIG undefined FUN_145310a50(void)

void FUN_145310a50(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_145015980(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0xc);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar1 = (undefined4 *)(*param_1 + ((longlong)(int)lVar7 + -1) * 0xc);
    puVar2 = (undefined4 *)(*param_1 + (longlong)(int)uVar4 * 0xc);
    if ((puVar2 != puVar1) && (puVar2 != (undefined4 *)0x0)) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar1 + 2);
    }
  }
  lVar7 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar9;
  puVar3 = (uint *)(lVar7 + uVar8 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar9;
    puVar3 = (uint *)(lVar7 + uVar8 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 145310b70 FUN_145310b70 body=154 status=ok
// SIG undefined FUN_145310b70(void)

int * FUN_145310b70(longlong *param_1,int *param_2,undefined4 *param_3,undefined2 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_145312470();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_145312d00(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      *(undefined2 *)(puVar1 + 2) = *param_4;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 145310c10 FUN_145310c10 body=74 status=ok
// SIG undefined FUN_145310c10(void)

void FUN_145310c10(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145310c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_145311294 + (ulonglong)*(ushort *)(param_1 + 4) * 4)))();
  return;
}



// FUNCTION 1453112d0 FUN_1453112d0 body=425 status=ok
// SIG undefined FUN_1453112d0(void)

void FUN_1453112d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  int local_res10 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_144be90e0(0x41758ba4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_144ca2de0(param_3,param_1,&local_48,3);
  FUN_144be90e0(0x311e2299);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144b43240(&local_38,param_1 + 0x60);
  local_28 = *(undefined8 *)(param_1 + 0x90);
  uStack_20 = *(undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar4 = 0;
    local_res8 = 0;
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_144fd5980(*(longlong *)(param_1 + 0xf0),&local_48);
    lVar4 = *plVar2;
    *plVar2 = 0;
    lVar3 = CONCAT44(uStack_44,local_48);
  }
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  local_res10[0] = *(int *)(lVar3 + 0x17c);
  local_res8._0_4_ = *(undefined4 *)(lVar3 + 0x180);
  FUN_144faf6b0(param_4,local_res10,*(undefined8 *)(lVar3 + 0x68),lVar4,lVar3 + 400,&local_38,
                &local_res8);
  FUN_144be90e0(0xe53c1507);
  lVar3 = CONCAT62(param_5._2_6_,CONCAT11(param_5._1_1_,(undefined1)param_5));
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x17c));
  FUN_144fb7290(lVar3,&local_res8,param_1);
  FUN_144be90e0(0xadfa23a0);
  lVar3 = *(longlong *)(lVar3 + 0x160);
  param_5._0_1_ = 0;
  local_res8 = CONCAT44(0xffffffff,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x17c));
  FUN_145310b70(lVar3 + 0x18,local_res10,&local_res8,&param_5);
  lVar3 = *(longlong *)(lVar3 + 0x18);
  pbVar1 = (byte *)(lVar3 + 8 + (longlong)local_res10[0] * 0xc);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)(lVar3 + 9 + (longlong)local_res10[0] * 0xc) = 1;
  FUN_144be90e0(0xda54497a);
  if (lVar4 != 0) {
    FUN_144b3f230(lVar4);
  }
  return;
}



// FUNCTION 145311480 FUN_145311480 body=717 status=ok
// SIG undefined FUN_145311480(void)

void FUN_145311480(int *param_1,char param_2,longlong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  
  FUN_144be90e0(0x8a43661);
  local_res10[0] = *param_1;
  lVar4 = CONCAT44(param_5._4_4_,(int)param_5);
  FUN_144fb9230(lVar4,local_res10);
  FUN_144be90e0(0x4ecbf7d2);
  local_res10[0] = *param_1;
  FUN_144fb83e0(lVar4,local_res10);
  FUN_144be90e0(0x6cb8ea63);
  local_res10[0] = *param_1;
  FUN_144faf9a0(param_4,local_res10);
  FUN_144be90e0(0x94a3a18b);
  lVar5 = *(longlong *)((longlong)*param_1 * 0x120 + *(longlong *)(param_3 + 0x38));
  local_res18 = lVar5;
  if (lVar5 != 0) {
    FUN_144b3d910(lVar5);
  }
  local_res10[0] = *param_1;
  uVar2 = *(undefined4 *)((longlong)local_res10[0] * 0x120 + 0x24 + *(longlong *)(param_3 + 0x38));
  FUN_144ca30d0(param_3,local_res10);
  lVar4 = *(longlong *)(lVar4 + 0x160);
  local_res8[0] = *param_1;
  local_res10[0] = -1;
  FUN_145310980(lVar4,local_res8,local_res10,1,2,1);
  iVar7 = *(int *)(lVar4 + 0x40) + 1;
  if ((int)(*(uint *)(lVar4 + 0x44) & 0x7fffffff) < iVar7) {
    FUN_145312c10(lVar4 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x38) + (longlong)*(int *)(lVar4 + 0x40) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = uVar2;
  }
  *(int *)(lVar4 + 0x40) = iVar7;
  if (*(char *)(lVar5 + 0x30) == '\x01') {
    lVar4 = *(longlong *)(lVar5 + 0x20);
  }
  else {
    lVar4 = FUN_147e4bb26();
  }
  *(undefined4 *)(lVar4 + 0x17c) = 0xffffffff;
  FUN_144c3efb0(lVar5);
  if (param_2 != '\0') {
    lVar4 = CONCAT44(param_5._4_4_,(int)param_5);
    uVar6 = 0;
    do {
      lVar5 = (longlong)*param_1 * 0x120;
      iVar7 = (int)uVar6;
      if ((iVar7 < *(int *)(*(longlong *)(param_3 + 0x38) + 0x18 + lVar5)) &&
         (lVar5 = *(longlong *)
                   (*(longlong *)(*(longlong *)(param_3 + 0x38) + 0x10 + lVar5) + uVar6 * 8),
         lVar5 != 0)) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + 0x60);
        local_res10[0] = iVar7;
        param_5._0_4_ = *param_1;
        FUN_144ca33b0(param_3,&param_5,local_res10);
        lVar5 = *(longlong *)(lVar4 + 0x160);
        param_5._0_4_ = *param_1;
        local_res10[0] = iVar7;
        FUN_145310980(lVar5,&param_5,local_res10,0x10,8,1);
        iVar8 = *(int *)(lVar5 + 0x50) + 1;
        if ((int)(*(uint *)(lVar5 + 0x54) & 0x7fffffff) < iVar8) {
          FUN_145312b00(lVar5 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar1 = (undefined4 *)(*(longlong *)(lVar5 + 0x48) + (longlong)*(int *)(lVar5 + 0x50) * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
        }
        *(int *)(lVar5 + 0x50) = iVar8;
      }
      uVar6 = (ulonglong)(iVar7 + 1U);
      lVar5 = local_res18;
    } while ((int)(iVar7 + 1U) < 0x10);
  }
  FUN_144be90e0(0x584b9c28);
  if (lVar5 == 0) {
    return;
  }
  FUN_144b3f230(lVar5);
  return;
}



// FUNCTION 145311750 FUN_145311750 body=460 status=ok
// SIG undefined FUN_145311750(void)

void FUN_145311750(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *local_28;
  int local_20;
  uint local_1c;
  uint *local_18;
  uint *puStack_10;
  
  FUN_144be90e0(0x84dd9089);
  local_18 = (uint *)*param_2;
  puStack_10 = (uint *)param_2[1];
  local_28 = (uint *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  FUN_144c51080(&local_18,param_3,&local_28,0x3d4ccccd);
  FUN_144be90e0(0xf4fab4e);
  puStack_10 = local_28 + (longlong)local_20 * 0x24;
  local_18 = local_28;
  if (param_1 == -1) {
    FUN_144fb89a0(param_4,&local_18);
  }
  else {
    FUN_144fb8900(param_4,param_1,&local_18);
  }
  FUN_144be90e0(0xcc38c1cb);
  puVar3 = local_28;
  if (local_28 + (longlong)local_20 * 0x24 != local_28) {
    puVar4 = local_28 + (longlong)local_20 * 0x24 + 0x1b;
    do {
      puVar2 = puVar4 + -0x24;
      puVar4[-0x25] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)(puVar4 + -0x27) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x27),
                   (ulonglong)(*puVar2 & 0x7fffffff) << 2);
      }
      puVar4[-0x27] = 0;
      puVar4[-0x26] = 0;
      *puVar2 = 0x80000000;
      puVar4[-0x2d] = 0;
      if ((-1 < (int)puVar4[-0x2c]) && (*(longlong *)(puVar4 + -0x2f) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x2f),
                   (ulonglong)(puVar4[-0x2c] & 0x7fffffff) << 2);
      }
      puVar1 = puVar4 + -0x3f;
      puVar4[-0x2f] = 0;
      puVar4[-0x2e] = 0;
      puVar4[-0x2c] = 0x80000000;
      puVar4 = puVar2;
    } while (puVar1 != puVar3);
  }
  local_20 = 0;
  if ((-1 < (int)local_1c) && (local_28 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_28,(ulonglong)(local_1c & 0x7fffffff) * 0x90);
  }
  return;
}



// FUNCTION 145311920 FUN_145311920 body=1377 status=ok
// SIG undefined FUN_145311920(void)

void FUN_145311920(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  
  plVar9 = param_5;
  lVar13 = *param_3;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (lVar13 != 0) {
    pbVar5 = *(byte **)(lVar13 + 0x18);
    iVar2 = *(int *)(lVar13 + 0x20);
    if (pbVar5 != pbVar5 + (longlong)iVar2 * 0xc) {
      pbVar15 = pbVar5 + 8;
      do {
        uVar3 = *(undefined4 *)(pbVar15 + -8);
        uVar4 = *(undefined4 *)(pbVar15 + -4);
        if (pbVar15[1] != 0) {
          if ((*pbVar15 & 2) != 0) {
            param_5._0_4_ = uVar3;
            FUN_145311e90(param_1 + 0x48,param_1,&param_5);
          }
          if ((*pbVar15 & 1) != 0) {
            param_5._0_4_ = uVar3;
            FUN_145311e90(param_1 + 0x40,param_1,&param_5);
          }
          if ((*pbVar15 & 8) != 0) {
            local_res8[0] = uVar3;
            param_5._0_4_ = uVar4;
            FUN_145312010(param_1 + 0x78,param_1,local_res8,&param_5);
          }
          if ((*pbVar15 & 4) != 0) {
            local_res8[0] = uVar3;
            param_5._0_4_ = uVar4;
            FUN_145312010(param_1 + 0x70,param_1,local_res8,&param_5);
          }
          if ((*pbVar15 & 0x20) != 0) {
            param_5._0_4_ = uVar3;
            FUN_145311e90(param_1 + 0x60,param_1,&param_5);
          }
          if ((*pbVar15 & 0x10) != 0) {
            param_5._0_4_ = uVar3;
            FUN_145311e90(param_1 + 0x58,param_1,&param_5);
          }
        }
        pbVar1 = pbVar15 + 4;
        pbVar15 = pbVar15 + 0xc;
      } while (pbVar1 != pbVar5 + (longlong)iVar2 * 0xc);
    }
    puVar12 = *(undefined4 **)(*param_3 + 0x38);
    puVar14 = puVar12 + *(int *)(*param_3 + 0x40);
    for (; puVar12 != puVar14; puVar12 = puVar12 + 1) {
      param_5._0_4_ = *puVar12;
      FUN_145311f50(param_1 + 0x50,param_1,&param_5);
    }
    puVar12 = *(undefined4 **)(*param_3 + 0x48);
    puVar14 = puVar12 + (longlong)*(int *)(*param_3 + 0x50) * 2;
    for (; puVar12 != puVar14; puVar12 = puVar12 + 2) {
      param_5._0_4_ = puVar12[1];
      local_res8[0] = *puVar12;
      FUN_1453120e0(param_1 + 0x80,param_1,local_res8,&param_5);
    }
    puVar12 = *(undefined4 **)(*param_3 + 0x58);
    puVar14 = puVar12 + *(int *)(*param_3 + 0x60);
    for (; puVar12 != puVar14; puVar12 = puVar12 + 1) {
      param_5._0_4_ = *puVar12;
      FUN_145311f50(param_1 + 0x68,param_1,&param_5);
    }
  }
  plVar8 = local_res20;
  plVar7 = local_res10;
  if ((*local_res10 != 0) || (*local_res20 != 0)) {
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar13 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(lVar13 + 0xf0);
    if (lVar11 == 0) {
      if (*(char *)(lVar13 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar11 = FUN_144b3f4a0();
      *(longlong *)(lVar13 + 0xf0) = lVar11;
    }
    lVar13 = *(longlong *)(lVar11 + 0x3e0);
    local_78 = "TtdynamicNavMeshModifiedCallback";
    pcStack_70 = "";
    if (lVar13 != 0) {
      local_78 = "TtdynamicNavMeshModifiedCallback";
      pcStack_70 = "";
      FUN_144b3f370(lVar13,&local_78);
    }
    local_68 = *plVar7;
    local_60 = *plVar8;
    FUN_1453121b0(param_1 + 0x88,param_1,&local_68);
    if (lVar13 != 0) {
      local_78 = "Et";
      pcStack_70 = "";
      FUN_144b3f260(lVar13,&local_78);
    }
  }
  lVar13 = *plVar9;
  lVar11 = (longlong)(int)plVar9[1] * 0x20 + lVar13;
  for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar13 + 0x10));
    local_60 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x18);
    local_58 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x18) + 0x20) * 0x90 + local_60;
    FUN_145312310(param_1 + 0xe0,param_1,&local_68);
    FUN_144fadc30(lVar13);
  }
  *(undefined4 *)(plVar9 + 1) = 0;
  lVar13 = plVar9[2];
  lVar11 = (longlong)(int)plVar9[3] * 0x20 + lVar13;
  for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar13 + 0x10));
    local_60 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x18);
    local_58 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x18) + 0x20) * 0x120 + local_60;
    FUN_1453123c0(param_1 + 0xe8,param_1,&local_68);
    FUN_144fadc40(lVar13);
  }
  *(undefined4 *)(plVar9 + 3) = 0;
  lVar13 = plVar9[4];
  lVar11 = (longlong)(int)plVar9[5] * 0x20 + lVar13;
  if (lVar13 != lVar11) {
    puVar14 = (undefined4 *)(lVar13 + 0x10);
    do {
      FUN_144c4ede0(param_1 + 0xf0,param_1,*puVar14);
      FUN_144fadc50(lVar13);
      lVar13 = lVar13 + 0x20;
      puVar14 = puVar14 + 8;
    } while (lVar13 != lVar11);
  }
  *(undefined4 *)(plVar9 + 5) = 0;
  if (((int)plVar9[7] == 0) || ((int)plVar9[9] == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(ulonglong *)(param_1 + 0xa8) & 0xfffffffffffffffc) != 0) {
    lVar13 = plVar9[6];
    lVar11 = (longlong)(int)plVar9[7] * 0x20 + lVar13;
    for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
      if ((!bVar6) ||
         (cVar10 = FUN_144fafcf0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(lVar13 + 0x10)),
         cVar10 != '\0')) {
        FUN_145312260(param_1 + 0xa8,param_1,*(undefined8 *)(lVar13 + 0x10));
      }
    }
  }
  lVar13 = plVar9[6];
  lVar11 = (longlong)(int)plVar9[7] * 0x20 + lVar13;
  for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
    FUN_144fadc60(lVar13);
  }
  if ((*(ulonglong *)(param_1 + 0xb0) & 0xfffffffffffffffc) != 0) {
    lVar13 = plVar9[8];
    lVar11 = (longlong)(int)plVar9[9] * 0x20 + lVar13;
    for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
      if ((!bVar6) ||
         (cVar10 = FUN_144fafcf0(*(undefined8 *)(param_1 + 0x180),*(undefined8 *)(lVar13 + 0x10)),
         cVar10 == '\0')) {
        FUN_145312260(param_1 + 0xb0,param_1,*(undefined8 *)(lVar13 + 0x10));
      }
    }
  }
  lVar13 = plVar9[8];
  lVar11 = (longlong)(int)plVar9[9] * 0x20 + lVar13;
  for (; lVar13 != lVar11; lVar13 = lVar13 + 0x20) {
    FUN_144fadc70(lVar13);
  }
  if (*local_res10 != 0) {
    FUN_144b3f230();
  }
  if (*local_res18 != 0) {
    FUN_144b3f230();
  }
  if (*local_res20 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 145311e90 FUN_145311e90 body=186 status=ok
// SIG undefined FUN_145311e90(void)

void FUN_145311e90(ulonglong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined4 local_res8 [2];
  
  uVar1 = *param_3;
  plVar3 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar3 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar4 = param_1;
    do {
      uVar2 = plVar3[1];
      puVar5 = (ulonglong *)(plVar3 + 1);
      if ((uVar2 & 3) == 0) {
        local_res8[0] = uVar1;
        (*(code *)((undefined8 *)*plVar3)[3])(plVar3,param_2,local_res8);
      }
      else {
        (**(code **)*plVar3)(plVar3,1);
        *puVar4 = *puVar4 ^ (*puVar4 ^ uVar2) & 0xfffffffffffffffc;
        puVar5 = puVar4;
      }
      plVar3 = (longlong *)(uVar2 & 0xfffffffffffffffc);
      puVar4 = puVar5;
    } while ((longlong *)(uVar2 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145311f50 FUN_145311f50 body=186 status=ok
// SIG undefined FUN_145311f50(void)

void FUN_145311f50(ulonglong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined4 local_res8 [2];
  
  uVar1 = *param_3;
  plVar3 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar3 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar4 = param_1;
    do {
      uVar2 = plVar3[1];
      puVar5 = (ulonglong *)(plVar3 + 1);
      if ((uVar2 & 3) == 0) {
        local_res8[0] = uVar1;
        (*(code *)((undefined8 *)*plVar3)[3])(plVar3,param_2,local_res8);
      }
      else {
        (**(code **)*plVar3)(plVar3,1);
        *puVar4 = *puVar4 ^ (*puVar4 ^ uVar2) & 0xfffffffffffffffc;
        puVar5 = puVar4;
      }
      plVar3 = (longlong *)(uVar2 & 0xfffffffffffffffc);
      puVar4 = puVar5;
    } while ((longlong *)(uVar2 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145312010 FUN_145312010 body=197 status=ok
// SIG undefined FUN_145312010(void)

void FUN_145312010(ulonglong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  
  uVar1 = *param_4;
  uVar2 = *param_3;
  plVar4 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar4 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar5 = param_1;
    do {
      uVar3 = plVar4[1];
      puVar6 = (ulonglong *)(plVar4 + 1);
      if ((uVar3 & 3) == 0) {
        local_res8[0] = uVar1;
        local_res18[0] = uVar2;
        (*(code *)((undefined8 *)*plVar4)[3])(plVar4,param_2,local_res18,local_res8);
      }
      else {
        (**(code **)*plVar4)(plVar4,1);
        *puVar5 = *puVar5 ^ (*puVar5 ^ uVar3) & 0xfffffffffffffffc;
        puVar6 = puVar5;
      }
      plVar4 = (longlong *)(uVar3 & 0xfffffffffffffffc);
      puVar5 = puVar6;
    } while ((longlong *)(uVar3 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 1453120e0 FUN_1453120e0 body=197 status=ok
// SIG undefined FUN_1453120e0(void)

void FUN_1453120e0(ulonglong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  
  uVar1 = *param_4;
  uVar2 = *param_3;
  plVar4 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar4 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar5 = param_1;
    do {
      uVar3 = plVar4[1];
      puVar6 = (ulonglong *)(plVar4 + 1);
      if ((uVar3 & 3) == 0) {
        local_res8[0] = uVar1;
        local_res18[0] = uVar2;
        (*(code *)((undefined8 *)*plVar4)[3])(plVar4,param_2,local_res18,local_res8);
      }
      else {
        (**(code **)*plVar4)(plVar4,1);
        *puVar5 = *puVar5 ^ (*puVar5 ^ uVar3) & 0xfffffffffffffffc;
        puVar6 = puVar5;
      }
      plVar4 = (longlong *)(uVar3 & 0xfffffffffffffffc);
      puVar5 = puVar6;
    } while ((longlong *)(uVar3 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 1453121b0 FUN_1453121b0 body=165 status=ok
// SIG undefined FUN_1453121b0(void)

void FUN_1453121b0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145312260 FUN_145312260 body=165 status=ok
// SIG undefined FUN_145312260(void)

void FUN_145312260(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145312310 FUN_145312310 body=165 status=ok
// SIG undefined FUN_145312310(void)

void FUN_145312310(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 1453123c0 FUN_1453123c0 body=165 status=ok
// SIG undefined FUN_1453123c0(void)

void FUN_1453123c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar2)[3])(plVar2,param_2,param_3);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145312470 FUN_145312470 body=311 status=ok
// SIG undefined FUN_145312470(void)

uint * FUN_145312470(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  iVar9 = param_3[1];
  iVar1 = *param_3;
  lVar3 = param_1[2];
  uVar10 = iVar1 * -0x61c8864f;
  uVar11 = iVar9 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar10 = uVar10 * 0x40 + uVar11 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar2 < 0) {
      uVar11 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14531257a:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      uVar11 = puVar7[1];
      if ((*(int *)(*param_1 + (longlong)(int)uVar11 * 0xc) == iVar1) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0xc) == iVar9)) {
        *param_2 = uVar11;
        goto LAB_14531257a;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 1453125b0 FUN_1453125b0 body=266 status=ok
// SIG undefined FUN_1453125b0(void)

void FUN_1453125b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 1453126c0 FUN_1453126c0 body=266 status=ok
// SIG undefined FUN_1453126c0(void)

void FUN_1453126c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 1453127d0 FUN_1453127d0 body=266 status=ok
// SIG undefined FUN_1453127d0(void)

void FUN_1453127d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 1453128e0 FUN_1453128e0 body=266 status=ok
// SIG undefined FUN_1453128e0(void)

void FUN_1453128e0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 1453129f0 FUN_1453129f0 body=266 status=ok
// SIG undefined FUN_1453129f0(void)

void FUN_1453129f0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x20;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar4 = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        *(undefined8 *)(puVar6 + 6) = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x20 + 0x20;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 145312b00 FUN_145312b00 body=265 status=ok
// SIG undefined FUN_145312b00(void)

void FUN_145312b00(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 145312c10 FUN_145312c10 body=235 status=ok
// SIG undefined FUN_145312c10(void)

void FUN_145312c10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 145312d00 FUN_145312d00 body=297 status=ok
// SIG undefined FUN_145312d00(void)

ulonglong FUN_145312d00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar4 = param_3;
  if (param_3 < uVar7) {
    uVar4 = uVar7;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  puVar6 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = puVar2;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar6 + 2);
      }
      puVar3 = puVar3 + 3;
      puVar6 = puVar6 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar7 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar7;
}



// FUNCTION 145312e30 FUN_145312e30 body=52 status=ok
// SIG undefined FUN_145312e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145312e30(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_3[4] - *param_3) * (_DAT_14c6daca0 - *param_4) + *param_4;
  fVar2 = (param_3[5] - param_3[1]) * (fRam000000014c6daca4 - param_4[1]) + param_4[1];
  fVar3 = (param_3[6] - param_3[2]) * (fRam000000014c6daca8 - param_4[2]) + param_4[2];
  return CONCAT44(fVar2 * fVar1 * fVar3,fVar2 * fVar1 * fVar3);
}



// FUNCTION 145312e70 FUN_145312e70 body=52 status=ok
// SIG undefined FUN_145312e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145312e70(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_3[4] - *param_3) * (_DAT_14c6daca0 - *param_4) + *param_4;
  fVar2 = (param_3[5] - param_3[1]) * (fRam000000014c6daca4 - param_4[1]) + param_4[1];
  fVar3 = (param_3[6] - param_3[2]) * (fRam000000014c6daca8 - param_4[2]) + param_4[2];
  return CONCAT44(fVar2 * fVar1 * fVar3,fVar2 * fVar1 * fVar3);
}



// FUNCTION 145312eb0 FUN_145312eb0 body=102 status=ok
// SIG undefined FUN_145312eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_145312eb0(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5
             ,undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float fStack_14;
  
  FUN_144ca9b90(param_2,&local_18,param_5,param_6);
  fVar1 = (param_3[4] - *param_3) * (_DAT_14c6daca0 - *param_4) + *param_4;
  fVar2 = (param_3[5] - param_3[1]) * (fRam000000014c6daca4 - param_4[1]) + param_4[1];
  fVar3 = (param_3[6] - param_3[2]) * (fRam000000014c6daca8 - param_4[2]) + param_4[2];
  return CONCAT44(fVar2 * fVar1 * fVar3 * fStack_14,fVar2 * fVar1 * fVar3 * local_18);
}



// FUNCTION 145312f20 FUN_145312f20 body=653 status=ok
// SIG undefined FUN_145312f20(void)

void FUN_145312f20(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *local_98;
  char *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar6 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar5;
  }
  puVar8 = *(undefined **)(lVar5 + 0x3e0);
  local_88 = puVar8;
  if (puVar8 != (undefined *)0x0) {
    local_98 = (longlong *)0x149d3caa8;
    local_90 = "";
    FUN_144b3f370(puVar8,&local_98);
  }
  local_98 = (longlong *)param_1[1];
  param_1 = (longlong *)*param_1;
  if (param_1 != local_98) {
    do {
      puVar2 = (undefined4 *)*param_1;
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = puVar2[4];
      uStack_54 = puVar2[5];
      uStack_50 = puVar2[6];
      uStack_4c = puVar2[7];
      lVar6 = (**(code **)(**(longlong **)(puVar2 + 8) + 0x20))
                        (*(longlong **)(puVar2 + 8),&local_68,param_2,param_3);
      iVar9 = 0;
      iVar10 = *(int *)(lVar6 + 0x30);
      if (0 < iVar10) {
        lVar5 = 0;
        do {
          iVar1 = *(int *)(lVar5 + *(longlong *)(lVar6 + 0x28));
          lVar3 = *(longlong *)(lVar6 + 0x18);
          if (iVar9 == iVar10 + -1) {
            iVar10 = *(int *)(lVar6 + 0x20);
          }
          else {
            iVar10 = *(int *)(*(longlong *)(lVar6 + 0x28) + 4 + lVar5);
          }
          iVar10 = iVar10 - iVar1;
          iVar11 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar11) {
            FUN_1453131b0(param_4,&PTR_vftable_14c6e47c0,(longlong)iVar11);
          }
          lVar4 = param_4[1];
          *(int *)(param_4 + 1) = iVar11;
          puVar7 = (undefined8 *)((longlong)(int)lVar4 * 0x10 + *param_4);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
          }
          if (local_78 != puVar7) {
            if ((int)(*(uint *)((longlong)puVar7 + 0xc) & 0x7fffffff) < iVar10) {
              FUN_140c3e7da(puVar7,&PTR_vftable_14c6e47c0,(longlong)iVar10);
            }
            FUN_144b3d470(*puVar7,(longlong)iVar1 * 0x10 + lVar3,(longlong)iVar10 << 4);
            *(int *)(puVar7 + 1) = iVar10;
          }
          iVar10 = *(int *)(lVar6 + 0x30);
          iVar9 = iVar9 + 1;
          lVar5 = lVar5 + 4;
        } while (iVar9 < iVar10);
      }
      param_1 = param_1 + 1;
      puVar8 = local_88;
    } while (param_1 != local_98);
  }
  if (puVar8 != (undefined *)0x0) {
    local_88 = &DAT_149981764;
    local_80 = &DAT_149981766;
    FUN_144b3f260(puVar8,&local_88);
  }
  return;
}



// FUNCTION 1453131b0 FUN_1453131b0 body=459 status=ok
// SIG undefined FUN_1453131b0(void)

void FUN_1453131b0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar10 && uVar10 - param_3 != 0) {
    uVar7 = uVar10;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar8 = uVar7 << 4;
  local_res20 = lVar8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar8,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(lVar3 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar9 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_147e4a87c(puVar4,&PTR_vftable_14c6e47c0);
        *puVar1 = *puVar4;
        puVar9[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 4);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar10 = uVar10 - 1;
      lVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  if (lVar8 + 0x10U <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar7 + 1;
    if (lVar8 + 0x10U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar8 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 4);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145313380 FUN_145313380 body=129 status=ok
// SIG undefined FUN_145313380(void)

undefined8 * FUN_145313380(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_2 + 4) == -2) {
    uVar1 = FUN_144b3d480();
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  uVar1 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                    (&PTR_vftable_14c6e47a0,(longlong)((int)param_2[1] + 1) << 3);
  *param_1 = uVar1;
  FUN_144b3d470(uVar1,*param_2,(longlong)((int)param_2[1] + 1) << 3);
  return param_1;
}



// FUNCTION 145313410 FUN_145313410 body=198 status=ok
// SIG undefined FUN_145313410(void)

void FUN_145313410(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1[1];
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar5 = (int)param_2[1] + 1;
    uVar3 = *(undefined8 *)(*param_1 + (longlong)iVar4 * 0xc);
    uVar2 = *(undefined4 *)(*param_1 + 8 + (longlong)iVar4 * 0xc);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_1453157e0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar5);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = uVar3;
      *(undefined4 *)(puVar1 + 1) = uVar2;
    }
    *(int *)(param_2 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1453134e0 FUN_1453134e0 body=518 status=ok
// SIG undefined FUN_1453134e0(void)

void FUN_1453134e0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  uint local_res24;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_res18[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  local_res10[0] = (uint)(param_3 >> 0x16) & 0x3ff;
  if (local_res18[0] == local_res10[0]) {
    local_6c = 0;
    local_88 = 0;
    local_80 = 0;
    local_4c = 0;
    local_2c = 0;
    local_7c = 0x80000000;
    local_res10[0] = local_res18[0];
    local_78 = FUN_144b3d480();
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    local_58 = FUN_144b3d480();
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    local_38 = FUN_144b3d480();
    local_30 = 0;
    FUN_145314c60(param_1 + 8,&local_res20,local_res10,&local_88);
    FUN_144c914e0(&local_48);
    if ((local_58 != 0) && (*(int *)(local_58 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_58,0);
      FUN_144b3ec00(&local_58);
    }
    local_60 = 0;
    if ((-1 < (int)local_5c) && (local_68 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) * 0xc);
    }
    local_68 = 0;
    local_5c = 0x80000000;
    if ((local_78 != 0) && (*(int *)(local_78 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_78,0);
      FUN_144b3ec00(&local_78);
    }
    local_80 = 0;
    if ((-1 < (int)local_7c) && (local_88 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_88,(ulonglong)(local_7c & 0x7fffffff) << 2);
    }
    local_res10[0] = (uint)param_2 & 0x3fffff;
    lVar1 = *(longlong *)(param_1 + 8) + (longlong)(int)local_res20 * 0x68;
    FUN_144fbaf90(lVar1 + 8,local_98,local_res10);
    local_res10[0] = (uint)param_3 & 0x3fffff;
    FUN_144fbaf90(lVar1 + 8,local_98,local_res10);
    return;
  }
  lVar1 = FUN_145314210(param_1,local_res18,local_res10);
  local_res20 = (uint)param_2;
  local_res24 = (uint)param_3;
  FUN_145315080(lVar1 + 0x20,local_98,&local_res20);
  return;
}



// FUNCTION 1453136f0 FUN_1453136f0 body=498 status=ok
// SIG undefined FUN_1453136f0(void)

void FUN_1453136f0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  int local_88 [2];
  longlong local_80;
  undefined4 local_78;
  uint local_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res20 = (undefined4)param_2;
  local_res18[0] = (uint)(param_2 >> 0x16) & 0x3ff;
  local_res24 = (undefined4)param_3;
  local_res10[0] = (uint)(param_3 >> 0x16) & 0x3ff;
  if (local_res18[0] == local_res10[0]) {
    local_74 = 0x80000000;
    local_64 = 0;
    local_44 = 0;
    local_24 = 0;
    local_80 = 0;
    local_78 = 0;
    local_res10[0] = local_res18[0];
    local_70 = FUN_144b3d480();
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0x80000000;
    local_50 = FUN_144b3d480();
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0x80000000;
    local_30 = FUN_144b3d480();
    local_28 = 0;
    FUN_145314c60(param_1 + 8,local_88,local_res10,&local_80);
    FUN_144c914e0(&local_40);
    if ((local_50 != 0) && (*(int *)(local_50 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_50,0);
      FUN_144b3ec00(&local_50);
    }
    local_58 = 0;
    if ((-1 < (int)local_54) && (local_60 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_60,(ulonglong)(local_54 & 0x7fffffff) * 0xc);
    }
    local_60 = 0;
    local_54 = 0x80000000;
    if ((local_70 != 0) && (*(int *)(local_70 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_70,0);
      FUN_144b3ec00(&local_70);
    }
    local_78 = 0;
    if ((-1 < (int)local_74) && (local_80 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_80,(ulonglong)(local_74 & 0x7fffffff) << 2);
    }
    local_res10[0] = 0;
    lVar2 = (longlong)local_88[0] * 0x68 + *(longlong *)(param_1 + 8);
    FUN_145314cf0(lVar2 + 0x28,local_88,&local_res20,local_res10);
    piVar1 = (int *)(*(longlong *)(lVar2 + 0x28) + 8 + (longlong)local_88[0] * 0xc);
    *piVar1 = *piVar1 + 1;
    return;
  }
  lVar2 = FUN_145314210(param_1,local_res18,local_res10);
  local_res10[0] = 0;
  FUN_145314cf0((longlong *)(lVar2 + 0x40),local_88,&local_res20,local_res10);
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)local_88[0] * 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1453138f0 FUN_1453138f0 body=273 status=ok
// SIG undefined FUN_1453138f0(void)

void FUN_1453138f0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar4 = FUN_145315120(plVar1);
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 4))) {
    lVar4 = (longlong)*(int *)(lVar4 + 4) * 0x68 + *plVar1;
    iVar6 = *(int *)(lVar4 + 0x50) + -1;
    while (-1 < iVar6) {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 8 + (longlong)iVar6 * 0x10);
      iVar3 = *(int *)(lVar5 + 0x18);
      if (iVar3 == *param_2) {
        iVar3 = *(int *)(lVar5 + 0x1c);
      }
      uVar2 = (ulonglong)local_res8 >> 0x20;
      local_res8 = CONCAT44((int)uVar2,iVar3);
      lVar5 = FUN_145315120(plVar1,&local_res8);
      if (lVar5 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(lVar5 + 4);
      }
      lVar7 = (longlong)iVar3 * 0x68 + *plVar1;
      lVar5 = FUN_145315560(lVar7 + 0x48,param_2);
      if (lVar5 != 0) {
        FUN_145313ea0(lVar7 + 0x48,lVar5);
      }
      iVar6 = iVar6 + -1;
      local_res8 = CONCAT44(0xffffffff,iVar6);
    }
    lVar4 = FUN_145315120(plVar1,param_2);
    if (lVar4 != 0) {
      FUN_1453140b0(plVar1,lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145313a10 FUN_145313a10 body=777 status=ok
// SIG undefined FUN_145313a10(void)

void FUN_145313a10(ulonglong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  iVar4 = *(int *)(param_1 + 0x10);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar5 = *(int *)((longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 8));
    lVar16 = (longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 8);
    iVar14 = *(int *)(lVar16 + 0x10) + -1;
    if (-1 < iVar14) {
      do {
        iVar15 = (int)param_2[1] + 1;
        uVar6 = *(uint *)(*(longlong *)(lVar16 + 8) + (longlong)iVar14 * 4);
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar15) {
          FUN_144c30fb0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar15);
        }
        puVar1 = (uint *)(*param_2 + (longlong)(int)param_2[1] * 4);
        if (puVar1 != (uint *)0x0) {
          *puVar1 = iVar5 << 0x16 | uVar6;
        }
        iVar14 = iVar14 + -1;
        *(int *)(param_2 + 1) = iVar15;
      } while (-1 < iVar14);
    }
    iVar14 = *(int *)(lVar16 + 0x50);
    while (iVar14 = iVar14 + -1, -1 < iVar14) {
      lVar7 = *(longlong *)(*(longlong *)(lVar16 + 0x48) + 8 + (longlong)iVar14 * 0x10);
      if (*(int *)(lVar7 + 0x18) == iVar5) {
        iVar15 = *(int *)(lVar7 + 0x28);
        while (iVar15 = iVar15 + -1, -1 < iVar15) {
          lVar9 = param_2[1];
          iVar12 = (int)lVar9 + 1;
          puVar2 = (undefined4 *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar15 * 8);
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_144c30fb0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar12);
          }
          puVar3 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar2;
          }
          *(int *)(param_2 + 1) = iVar12;
          iVar12 = (int)lVar9 + 2;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_144c30fb0(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar12);
          }
          puVar3 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = puVar2[1];
          }
          *(int *)(param_2 + 1) = iVar12;
        }
      }
    }
  }
  if (1 < (int)param_2[1]) {
    FUN_145315710(*param_2,0,(int)param_2[1] + -1,param_1 & 0xff);
  }
  iVar4 = (int)param_2[1];
  uVar11 = 0;
  iVar14 = 0;
  piVar8 = (int *)*param_2;
  if (iVar4 != 0) {
    if (1 < (longlong)iVar4) {
      lVar16 = 1;
      piVar10 = piVar8;
      uVar13 = uVar11;
      do {
        if (*piVar10 != piVar8[lVar16]) {
          uVar13 = (ulonglong)((int)uVar13 + 1);
          uVar11 = uVar11 + 1;
          piVar10 = piVar8 + uVar11;
          *piVar10 = piVar8[lVar16];
        }
        iVar14 = (int)uVar13;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar4);
    }
    iVar14 = iVar14 + 1;
  }
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_144c5c170(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar14);
  }
  iVar4 = (int)param_2[1];
  if ((iVar4 < iVar14) || (iVar14 < iVar4)) {
    *(int *)(param_2 + 1) = iVar14;
  }
  return;
}



// FUNCTION 145313d20 FUN_145313d20 body=233 status=ok
// SIG undefined FUN_145313d20(void)

void FUN_145313d20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar2 = *(int *)((longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 8));
    lVar5 = (longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 8);
    FUN_145313410(lVar5 + 0x28,param_2);
    iVar3 = *(int *)(lVar5 + 0x50);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x48) + 8 + (longlong)iVar3 * 0x10);
      if (*(int *)(lVar4 + 0x18) == iVar2) {
        FUN_145313410(lVar4 + 0x40,param_2);
      }
    }
  }
  return;
}



// FUNCTION 145313e10 FUN_145313e10 body=132 status=ok
// SIG undefined FUN_145313e10(void)

void FUN_145313e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_145315120((longlong *)(param_1 + 8));
  if ((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) {
    lVar2 = (longlong)*(int *)(lVar2 + 4) * 0x68 + *(longlong *)(param_1 + 8);
    FUN_145313410(lVar2 + 0x28,param_3);
    iVar1 = *(int *)(lVar2 + 0x50);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_145313410(*(longlong *)(*(longlong *)(lVar2 + 0x48) + 8 + (longlong)iVar1 * 0x10) + 0x40,
                    param_3);
    }
  }
  return;
}



// FUNCTION 145313ea0 FUN_145313ea0 body=326 status=ok
// SIG undefined FUN_145313ea0(void)

void FUN_145313ea0(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_145315560(param_1,*param_1 + -0x10 + (longlong)(int)param_1[1] * 0x10);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  if (*(longlong *)(*param_1 + 8 + (longlong)(int)uVar4 * 0x10) != 0) {
    FUN_144b3f230();
  }
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar8 = (undefined4 *)((longlong)(int)lVar7 * 0x10 + -0x10 + *param_1);
    puVar2 = (undefined4 *)(*param_1 + (longlong)(int)uVar4 * 0x10);
    if (puVar2 != puVar8) {
      plVar1 = (longlong *)(puVar8 + 2);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar8;
        *(longlong *)(puVar2 + 2) = *plVar1;
        *plVar1 = 0;
      }
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar7 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar9 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar10;
  puVar3 = (uint *)(lVar7 + uVar9 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar9 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar9 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar10;
    puVar3 = (uint *)(lVar7 + uVar9 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar9 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 145313ff0 FUN_145313ff0 body=185 status=ok
// SIG undefined FUN_145313ff0(void)

undefined8 * FUN_145313ff0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    *param_1 = puVar3;
    uVar5 = (ulonglong)uVar1;
    *(uint *)(param_1 + 1) = uVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 != 0);
  }
  FUN_145313380(param_1 + 2,param_2 + 2);
  FUN_144c912e0(param_1 + 4,param_2 + 4);
  FUN_144c915a0(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 1453140b0 FUN_1453140b0 body=347 status=ok
// SIG undefined FUN_1453140b0(void)

void FUN_1453140b0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  if (uVar2 != (int)param_1[1] - 1U) {
    lVar5 = FUN_145315120(param_1,*param_1 + (longlong)(int)param_1[1] * 0x68 + -0x68);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  lVar5 = *param_1;
  lVar8 = (longlong)(int)uVar2 * 0x68;
  FUN_144c914e0(lVar5 + 0x48 + lVar8);
  FUN_144c91260(lVar5 + 0x28 + lVar8);
  FUN_144c90d90(lVar5 + 8 + lVar8);
  uVar4 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar4;
  if (uVar4 != uVar2) {
    lVar5 = (longlong)(int)uVar4 * 0x68 + *param_1;
    lVar8 = *param_1 + lVar8;
    if (lVar8 != lVar5) {
      if (lVar8 != 0) {
        FUN_145314ed0(lVar8,lVar5);
      }
      FUN_144c914e0(lVar5 + 0x48);
      FUN_144c91260(lVar5 + 0x28);
      FUN_144c90d90(lVar5 + 8);
    }
  }
  lVar5 = param_1[2];
  uVar7 = (ulonglong)(int)param_1[3];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & uVar7;
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = lVar5 + ((ulonglong)*puVar1 & uVar7 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar7 = (ulonglong)(int)param_1[3];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & uVar7;
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 145314210 FUN_145314210 body=1110 status=ok
// SIG undefined FUN_145314210(void)

longlong FUN_145314210(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar9 = *param_2;
  iVar1 = *param_3;
  local_8c = 0x80000000;
  iVar3 = iVar1;
  if (iVar1 <= iVar9) {
    iVar3 = iVar9;
    iVar9 = iVar1;
  }
  local_7c = 0;
  local_5c = 0;
  local_3c = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = FUN_144b3d480();
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_68 = FUN_144b3d480();
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_48 = FUN_144b3d480();
  local_40 = 0;
  FUN_145314c60(param_1 + 8,&local_res8,param_2,&local_98);
  FUN_144c914e0(&local_58);
  if ((local_68 != 0) && (*(int *)(local_68 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_68,0);
    FUN_144b3ec00(&local_68);
  }
  local_70 = 0;
  if ((-1 < (int)local_6c) && (local_78 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) * 0xc);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  if ((local_88 != 0) && (*(int *)(local_88 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_88,0);
    FUN_144b3ec00(&local_88);
  }
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
  }
  local_res10 = 0;
  lVar10 = (longlong)(int)local_res8 * 0x68 + *(longlong *)(param_1 + 8);
  FUN_145314d90(lVar10 + 0x48,&local_res8,param_3,&local_res10);
  lVar10 = (longlong)(int)local_res8 * 0x10 + *(longlong *)(lVar10 + 0x48);
  if (*(longlong *)(lVar10 + 8) == 0) {
    local_res8 = 0x60;
    puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar4,"ExternalEdges");
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[2] = 1;
      puVar4[1] = 0xffffffff;
      *puVar4 = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80000000;
      uVar5 = FUN_144b3d480();
      puVar4[6] = uVar5;
      *(undefined4 *)(puVar4 + 7) = 0;
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80000000;
      uVar5 = FUN_144b3d480();
      puVar4[10] = uVar5;
      *(undefined4 *)(puVar4 + 0xb) = 0;
    }
    puVar2 = *(undefined8 **)(lVar10 + 8);
    if ((puVar4 != puVar2) && (*(undefined8 **)(lVar10 + 8) = puVar4, puVar2 != (undefined8 *)0x0))
    {
      FUN_144b3f230();
    }
    lVar7 = *(longlong *)(lVar10 + 8);
    local_8c = 0x80000000;
    *(int *)(lVar7 + 0x1c) = iVar3;
    *(int *)(lVar7 + 0x18) = iVar9;
    local_7c = 0;
    local_5c = 0;
    local_3c = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = FUN_144b3d480();
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 0x80000000;
    local_68 = FUN_144b3d480();
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0x80000000;
    local_48 = FUN_144b3d480();
    local_40 = 0;
    FUN_145314c60(param_1 + 8,&local_res8,param_3,&local_98);
    FUN_144c914e0(&local_58);
    if ((local_68 != 0) && (*(int *)(local_68 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_68,0);
      FUN_144b3ec00(&local_68);
    }
    local_70 = 0;
    if ((-1 < (int)local_6c) && (local_78 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) * 0xc);
    }
    local_78 = 0;
    local_6c = 0x80000000;
    if ((local_88 != 0) && (*(int *)(local_88 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_88,0);
      FUN_144b3ec00(&local_88);
    }
    local_90 = 0;
    if ((-1 < (int)local_8c) && (local_98 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_98,(ulonglong)(local_8c & 0x7fffffff) << 2);
    }
    lVar7 = (longlong)(int)local_res8 * 0x68 + *(longlong *)(param_1 + 8);
    FUN_145314f70(lVar7 + 0x48,&local_res8,param_2);
    if ((int)local_res8 == *(int *)(lVar7 + 0x50)) {
      iVar9 = *(int *)(lVar7 + 0x50) + 1;
      if ((int)(*(uint *)(lVar7 + 0x54) & 0x7fffffff) < iVar9) {
        FUN_1453158e0(lVar7 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      piVar6 = (int *)((longlong)*(int *)(lVar7 + 0x50) * 0x10 + *(longlong *)(lVar7 + 0x48));
      if (piVar6 != (int *)0x0) {
        *piVar6 = *param_2;
        lVar8 = *(longlong *)(lVar10 + 8);
        *(longlong *)(piVar6 + 2) = lVar8;
        if (lVar8 != 0) {
          FUN_144b3d910();
        }
      }
      *(int *)(lVar7 + 0x50) = iVar9;
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x48) + (longlong)(int)local_res8 * 0x10;
      lVar7 = *(longlong *)(lVar10 + 8);
      if (*(longlong *)(lVar8 + 8) == lVar7) {
        return lVar7;
      }
      if (lVar7 != 0) {
        FUN_144b3d910();
      }
      lVar7 = *(longlong *)(lVar8 + 8);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar10 + 8);
      if (lVar7 != 0) {
        FUN_144b3f230();
      }
    }
  }
  return *(longlong *)(lVar10 + 8);
}



// FUNCTION 145314670 FUN_145314670 body=119 status=ok
// SIG undefined FUN_145314670(void)

void FUN_145314670(undefined8 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  uint local_res24;
  int local_18 [4];
  
  local_res10[0] = param_3 >> 0x16;
  local_res18[0] = param_2 >> 0x16;
  lVar2 = FUN_1453149f0(param_1,local_res18,local_res10);
  local_res10[0] = 0;
  local_res20 = param_2;
  local_res24 = param_3;
  FUN_145314cf0((longlong *)(lVar2 + 0x40),local_18,&local_res20,local_res10);
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x40) + 8 + (longlong)local_18[0] * 0xc);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1453146f0 FUN_1453146f0 body=277 status=ok
// SIG undefined FUN_1453146f0(void)

void FUN_1453146f0(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res8;
  
  lVar4 = FUN_145315190();
  if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 4), -1 < iVar1)) {
    lVar4 = *param_1;
    iVar7 = *(int *)(lVar4 + 0x10 + (longlong)iVar1 * 0x28) + -1;
    while (-1 < iVar7) {
      lVar5 = *(longlong *)
               (*(longlong *)(lVar4 + (longlong)iVar1 * 0x28 + 8) + 8 + (longlong)iVar7 * 0x10);
      iVar3 = *(int *)(lVar5 + 0x18);
      if (iVar3 == *param_2) {
        iVar3 = *(int *)(lVar5 + 0x1c);
      }
      uVar2 = (ulonglong)local_res8 >> 0x20;
      local_res8 = CONCAT44((int)uVar2,iVar3);
      lVar5 = FUN_145315190(param_1,&local_res8);
      if (lVar5 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(lVar5 + 4);
      }
      lVar5 = *param_1 + (longlong)iVar3 * 0x28;
      lVar6 = FUN_145315560(lVar5 + 8,param_2);
      if (lVar6 != 0) {
        FUN_145313ea0(lVar5 + 8,lVar6);
      }
      iVar7 = iVar7 + -1;
      local_res8 = CONCAT44(0xffffffff,iVar7);
    }
    lVar4 = FUN_145315190(param_1,param_2);
    if (lVar4 != 0) {
      FUN_1453148a0(param_1,lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 145314810 FUN_145314810 body=132 status=ok
// SIG undefined FUN_145314810(void)

void FUN_145314810(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_145315190();
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 4), -1 < iVar1)) {
    lVar3 = *param_1;
    iVar2 = *(int *)(lVar3 + 0x10 + (longlong)iVar1 * 0x28);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_145313410(*(longlong *)
                     (*(longlong *)(lVar3 + (longlong)iVar1 * 0x28 + 8) + 8 + (longlong)iVar2 * 0x10
                     ) + 0x40,param_3);
    }
  }
  return;
}



// FUNCTION 1453148a0 FUN_1453148a0 body=325 status=ok
// SIG undefined FUN_1453148a0(void)

void FUN_1453148a0(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_145315190(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x28);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  FUN_144c914e0(*param_1 + 8 + (longlong)(int)uVar4 * 0x28);
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar1 = (undefined4 *)(*param_1 + ((longlong)(int)lVar7 + -1) * 0x28);
    puVar2 = (undefined4 *)(*param_1 + (longlong)(int)uVar4 * 0x28);
    if (puVar2 != puVar1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar1;
        FUN_144c91660(puVar2 + 2,puVar1 + 2);
      }
      FUN_144c914e0(puVar1 + 2);
    }
  }
  lVar7 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar9;
  puVar3 = (uint *)(lVar7 + uVar8 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar9;
    puVar3 = (uint *)(lVar7 + uVar8 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1453149f0 FUN_1453149f0 body=616 status=ok
// SIG undefined FUN_1453149f0(void)

longlong FUN_1453149f0(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar10 = *param_3;
  iVar1 = *param_2;
  local_4c = 0x80000000;
  iVar4 = iVar10;
  if (iVar10 <= iVar1) {
    iVar4 = iVar1;
    iVar1 = iVar10;
  }
  local_3c = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = FUN_144b3d480();
  local_40 = 0;
  FUN_145314e30(param_1,&local_res8,param_2,&local_58);
  FUN_144c914e0(&local_58);
  lVar5 = (longlong)(int)local_res8;
  local_res8 = 0;
  lVar5 = *param_1 + lVar5 * 0x28;
  FUN_145314d90(lVar5 + 8,local_res10,param_3,&local_res8);
  lVar5 = (longlong)local_res10[0] * 0x10 + *(longlong *)(lVar5 + 8);
  if (*(longlong *)(lVar5 + 8) == 0) {
    local_res8 = 0x60;
    puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar6,"ExternalEdges");
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = 1;
      puVar6[1] = 0xffffffff;
      *puVar6 = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 5) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x80000000;
      uVar7 = FUN_144b3d480();
      puVar6[6] = uVar7;
      *(undefined4 *)(puVar6 + 7) = 0;
      puVar6[8] = 0;
      *(undefined4 *)(puVar6 + 9) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x80000000;
      uVar7 = FUN_144b3d480();
      puVar6[10] = uVar7;
      *(undefined4 *)(puVar6 + 0xb) = 0;
    }
    puVar2 = *(undefined8 **)(lVar5 + 8);
    if ((puVar6 != puVar2) && (*(undefined8 **)(lVar5 + 8) = puVar6, puVar2 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    lVar3 = *(longlong *)(lVar5 + 8);
    local_4c = 0x80000000;
    *(int *)(lVar3 + 0x1c) = iVar4;
    local_3c = 0;
    local_58 = 0;
    local_50 = 0;
    *(int *)(lVar3 + 0x18) = iVar1;
    local_48 = FUN_144b3d480();
    local_40 = 0;
    FUN_145314e30(param_1,&local_res8,param_3,&local_58);
    FUN_144c914e0(&local_58);
    lVar3 = *param_1 + (longlong)(int)local_res8 * 0x28;
    FUN_145314f70(lVar3 + 8,&local_res8,param_2);
    if ((int)local_res8 == *(int *)(lVar3 + 0x10)) {
      iVar10 = *(int *)(lVar3 + 0x10) + 1;
      if ((int)(*(uint *)(lVar3 + 0x14) & 0x7fffffff) < iVar10) {
        FUN_1453158e0(lVar3 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      piVar8 = (int *)((longlong)*(int *)(lVar3 + 0x10) * 0x10 + *(longlong *)(lVar3 + 8));
      if (piVar8 != (int *)0x0) {
        *piVar8 = *param_2;
        lVar9 = *(longlong *)(lVar5 + 8);
        *(longlong *)(piVar8 + 2) = lVar9;
        if (lVar9 != 0) {
          FUN_144b3d910();
        }
      }
      *(int *)(lVar3 + 0x10) = iVar10;
    }
    else {
      lVar9 = *(longlong *)(lVar3 + 8) + (longlong)(int)local_res8 * 0x10;
      lVar3 = *(longlong *)(lVar5 + 8);
      if (*(longlong *)(lVar9 + 8) == lVar3) {
        return lVar3;
      }
      if (lVar3 != 0) {
        FUN_144b3d910();
      }
      lVar3 = *(longlong *)(lVar9 + 8);
      *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar5 + 8);
      if (lVar3 != 0) {
        FUN_144b3f230();
      }
    }
  }
  return *(longlong *)(lVar5 + 8);
}



// FUNCTION 145314c60 FUN_145314c60 body=144 status=ok
// SIG undefined FUN_145314c60(void)

int * FUN_145314c60(longlong *param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_145315200();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_145315a30(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x68 + *param_1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      FUN_145313ff0(puVar1 + 2,param_4);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 145314cf0 FUN_145314cf0 body=146 status=ok
// SIG undefined FUN_145314cf0(void)

int * FUN_145314cf0(longlong *param_1,int *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_145315310();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_145315c30(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
      *(undefined4 *)(puVar1 + 1) = *param_4;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 145314d90 FUN_145314d90 body=149 status=ok
// SIG undefined FUN_145314d90(void)

int * FUN_145314d90(longlong *param_1,int *param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_145314f70();
  if (*param_2 == (int)param_1[1]) {
    iVar3 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_1453158e0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_3;
      lVar1 = *param_4;
      *(longlong *)(puVar2 + 2) = lVar1;
      if (lVar1 != 0) {
        FUN_144b3d910();
      }
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  return param_2;
}



// FUNCTION 145314e30 FUN_145314e30 body=151 status=ok
// SIG undefined FUN_145314e30(void)

int * FUN_145314e30(longlong *param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_145315450();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_145315d40(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      FUN_144c915a0(puVar1 + 2,param_4);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 145314ed0 FUN_145314ed0 body=154 status=ok
// SIG undefined FUN_145314ed0(void)

undefined4 * FUN_145314ed0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_144c52690(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  uVar2 = FUN_144b3d480();
  *(undefined8 *)(param_2 + 6) = uVar2;
  param_2[8] = 0;
  FUN_144c91390(param_1 + 10,param_2 + 10);
  FUN_144c91660(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 145314f70 FUN_145314f70 body=260 status=ok
// SIG undefined FUN_145314f70(void)

uint * FUN_145314f70(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14531504c:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_14531504c;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145315080 FUN_145315080 body=149 status=ok
// SIG undefined FUN_145315080(void)

longlong * FUN_145315080(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_1453155d0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_145315ea0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 8;
  return param_2;
}



// FUNCTION 145315120 FUN_145315120 body=104 status=ok
// SIG undefined FUN_145315120(void)

uint * FUN_145315120(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)((ulonglong)uVar5 * 0x68 + *param_1) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145315190 FUN_145315190 body=104 status=ok
// SIG undefined FUN_145315190(void)

uint * FUN_145315190(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0x28) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145315200 FUN_145315200 body=258 status=ok
// SIG undefined FUN_145315200(void)

uint * FUN_145315200(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_1453152da:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)((longlong)(int)puVar6[1] * 0x68 + *param_1) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_1453152da;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145315310 FUN_145315310 body=311 status=ok
// SIG undefined FUN_145315310(void)

uint * FUN_145315310(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  iVar9 = param_3[1];
  iVar1 = *param_3;
  lVar3 = param_1[2];
  uVar10 = iVar1 * -0x61c8864f;
  uVar11 = iVar9 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar10 = (uVar11 >> 2) + uVar11 + uVar10 * 0x40 + -0x61c88647 ^ uVar10;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar2 < 0) {
      uVar11 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14531541a:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      uVar11 = puVar7[1];
      if ((*(int *)(*param_1 + (longlong)(int)uVar11 * 0xc) == iVar1) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0xc) == iVar9)) {
        *param_2 = uVar11;
        goto LAB_14531541a;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 145315450 FUN_145315450 body=258 status=ok
// SIG undefined FUN_145315450(void)

uint * FUN_145315450(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14531552a:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x28) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_14531552a;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145315560 FUN_145315560 body=105 status=ok
// SIG undefined FUN_145315560(void)

uint * FUN_145315560(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0x10) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 1453155d0 FUN_1453155d0 body=308 status=ok
// SIG undefined FUN_1453155d0(void)

uint * FUN_1453155d0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  iVar9 = param_3[1];
  iVar1 = *param_3;
  lVar3 = param_1[2];
  uVar10 = iVar1 * -0x61c8864f;
  uVar11 = iVar9 * -0x61c8864f;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar10 = uVar10 * 0x40 + uVar11 + (uVar11 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar2 < 0) {
      uVar11 = *(uint *)(param_1 + 1);
      *puVar7 = uVar10;
      puVar7[1] = uVar11;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_1453156d7:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar10) {
      uVar11 = puVar7[1];
      if ((*(int *)(*param_1 + (longlong)(int)uVar11 * 8) == iVar1) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 8) == iVar9)) {
        *param_2 = uVar11;
        goto LAB_1453156d7;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 145315710 FUN_145315710 body=206 status=ok
// SIG undefined FUN_145315710(void)

void FUN_145315710(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  do {
    uVar9 = uVar7 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 4);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      uVar2 = *(uint *)(param_1 + uVar6 * 4);
      while (uVar2 < uVar1) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar2 = *(uint *)(param_1 + uVar6 * 4);
      }
      uVar2 = *(uint *)(param_1 + uVar5 * 4);
      while (uVar1 < uVar2) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
      }
      if ((longlong)uVar5 < (longlong)uVar6) break;
      if (uVar5 != uVar6) {
        uVar3 = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar5);
    if ((int)uVar7 < iVar4) {
      FUN_145315710(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 1453157e0 FUN_1453157e0 body=254 status=ok
// SIG undefined FUN_1453157e0(void)

ulonglong FUN_1453157e0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0xc;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 1453158e0 FUN_1453158e0 body=327 status=ok
// SIG undefined FUN_1453158e0(void)

void FUN_1453158e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar4 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined4 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
        *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 4;
      puVar9 = puVar9 + 4;
    } while (uVar4 != 0);
    plVar6 = (longlong *)(puVar2 + 2);
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = puVar3;
  return;
}



// FUNCTION 145315a30 FUN_145315a30 body=510 status=ok
// SIG undefined FUN_145315a30(void)

ulonglong FUN_145315a30(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  ulonglong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = param_3;
  if (param_3 < uVar11 * 2) {
    uVar6 = uVar11 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar11;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x68,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar5 = (undefined4 *)*param_1;
  uVar10 = (ulonglong)uVar1;
  local_res18 = puVar5;
  if (0 < (int)uVar1) {
    puVar8 = (undefined8 *)(puVar5 + 4);
    uVar11 = (ulonglong)uVar1;
    puVar9 = (undefined4 *)(lVar3 + 0x10);
    do {
      if (puVar9 + -4 != (undefined4 *)0x0) {
        puVar9[-4] = *puVar5;
        *(undefined8 *)(puVar9 + -2) = 0;
        *puVar9 = 0;
        puVar9[1] = 0x80000000;
        FUN_144c52690(puVar8 + -1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar9 + -2) = puVar8[-1];
        *puVar9 = *(undefined4 *)puVar8;
        puVar9[1] = *(undefined4 *)((longlong)puVar8 + 4);
        puVar8[-1] = 0;
        *puVar8 = 0;
        *(undefined8 *)(puVar9 + 2) = puVar8[1];
        puVar9[4] = *(undefined4 *)(puVar8 + 2);
        uVar4 = FUN_144b3d480();
        puVar8[1] = uVar4;
        *(undefined4 *)(puVar8 + 2) = 0;
        FUN_144c91390(puVar9 + 6,puVar8 + 3);
        FUN_144c91660(puVar9 + 0xe,puVar8 + 7);
      }
      puVar9 = puVar9 + 0x1a;
      puVar5 = puVar5 + 0x1a;
      puVar8 = puVar8 + 0xd;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    puVar5 = local_res18 + 10;
    do {
      FUN_144c914e0(puVar5 + 8);
      FUN_144c91260(puVar5);
      FUN_144c90d90(puVar5 + -8);
      puVar5 = puVar5 + 0x1a;
      uVar10 = uVar10 - 1;
      param_2 = local_res10;
      uVar11 = local_res20;
    } while (uVar10 != 0);
  }
  uVar10 = uVar6 * 0x68 + 0x68;
  uVar7 = uVar6;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x68;
    uVar7 = uVar6 + 1;
    if (uVar10 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x68;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar10 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar2,0);
      uVar7 = uVar7 + uVar6 / 0x68;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x68);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar10;
}



// FUNCTION 145315c30 FUN_145315c30 body=262 status=ok
// SIG undefined FUN_145315c30(void)

ulonglong FUN_145315c30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xc);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 145315d40 FUN_145315d40 body=343 status=ok
// SIG undefined FUN_145315d40(void)

ulonglong FUN_145315d40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  undefined4 *local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = uVar7 * 2;
  uVar6 = param_3;
  if (param_3 < uVar5) {
    uVar6 = uVar5;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x28,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  local_res18 = puVar4;
  local_res20 = puVar3;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        FUN_144c91660(puVar3 + 2,puVar4 + 2);
      }
      puVar3 = puVar3 + 10;
      puVar4 = puVar4 + 10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = local_res18 + 2;
    do {
      FUN_144c914e0(puVar4);
      puVar4 = puVar4 + 10;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar4 = local_res20;
  uVar5 = uVar6 * 0x28 + 0x28;
  uVar8 = uVar6;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar8 = uVar6 + 1;
    if (uVar5 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x28;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar5 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar2,0);
      uVar8 = uVar8 + uVar6 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*local_res10 + 0x18))(local_res10,*param_1,uVar7 * 0x28);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return uVar5;
}



// FUNCTION 145315ea0 FUN_145315ea0 body=247 status=ok
// SIG undefined FUN_145315ea0(void)

void FUN_145315ea0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145315fa0 FUN_145315fa0 body=343 status=ok
// SIG undefined FUN_145315fa0(void)

void FUN_145315fa0(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint local_res8 [2];
  uint *local_28;
  int local_20;
  uint local_1c;
  undefined1 local_18 [16];
  
  local_28 = (uint *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  if (*(float *)(param_1 + 0x114) == 0.0) {
    FUN_144ff30b0(*(undefined8 *)(param_1 + 0x18),&local_28);
  }
  else {
    FUN_144ff4650(local_res8,*(undefined8 *)(param_1 + 0x18),param_1 + 0x30,
                  *(float *)(param_1 + 0x114),&local_28);
  }
  puVar1 = local_28 + local_20;
  for (puVar7 = local_28; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    local_res8[0] = *puVar7 & 0x3fffff;
    FUN_144fbaf90(*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*puVar7 >> 0x16) * 8) +
                  0xb8,local_18,local_res8);
  }
  uVar6 = 0;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x40);
  if (0 < iVar2) {
    do {
      lVar3 = *(longlong *)(uVar6 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
      if ((lVar3 != 0) && (pcVar4 = (char *)FUN_144c3f050(lVar3,local_res8), *pcVar4 != '\0')) {
        FUN_144c3f0e0(lVar3);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  local_20 = 0;
  if ((-1 < (int)local_1c) && (local_28 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_28,(ulonglong)(local_1c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145316100 FUN_145316100 body=453 status=ok
// SIG undefined FUN_145316100(void)

void FUN_145316100(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int local_res20 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  piVar10 = (int *)*param_2;
  local_50 = param_1 + 0xc0;
  local_58 = *(undefined4 *)(param_1 + 0x104);
  local_54 = *(undefined4 *)(param_1 + 0x100);
  local_40 = *(undefined4 *)(param_1 + 0x10c);
  local_48 = *(undefined8 *)(param_1 + 0xf8);
  piVar1 = piVar10 + *(int *)(param_2 + 1);
  for (; piVar10 != piVar1; piVar10 = piVar10 + 1) {
    iVar2 = *piVar10;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
    lVar8 = (longlong)iVar2 * 0x120;
    lVar5 = *(longlong *)(lVar8 + 0xc0 + lVar4);
    lVar4 = lVar5 + (longlong)*(int *)(lVar8 + 200 + lVar4) * 8;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
    for (; lVar5 != lVar4; lVar5 = lVar5 + 8) {
      lVar6 = *(longlong *)(lVar8 + (longlong)*(int *)(lVar5 + 4) * 0x18);
      iVar3 = *(int *)(lVar6 + 0x1c);
      local_res20[0] = *(int *)(lVar6 + 0x18);
      lVar9 = (longlong)local_res20[0];
      if (((iVar2 != iVar3) || (lVar7 = FUN_1453162d0(param_2,local_res20), lVar7 == 0)) ||
         (*(int *)(lVar7 + 4) < 0)) {
        FUN_14500c520(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar9 * 8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8),lVar6,
                      &local_58);
      }
    }
  }
  return;
}



// FUNCTION 1453162d0 FUN_1453162d0 body=102 status=ok
// SIG undefined FUN_1453162d0(void)

uint * FUN_1453162d0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 4) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145316340 FUN_145316340 body=514 status=ok
// SIG undefined FUN_145316340(void)

undefined8 * FUN_145316340(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_145521040(param_1 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1453169a0(param_1 + 0x24,&PTR_vftable_14c6e47a0,0x100);
  if ((*(uint *)((longlong)param_1 + 0x13c) & 0x7fffffff) < 0x100) {
    FUN_1453168b0(param_1 + 0x26,&PTR_vftable_14c6e47a0,0x100);
  }
  if ((*(uint *)((longlong)param_1 + 0x14c) & 0x7fffffff) < 0x100) {
    FUN_1453167c0(param_1 + 0x28,&PTR_vftable_14c6e47a0,0x100);
  }
  if ((*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) < 0x100) {
    FUN_1453166d0(param_1 + 0x2a,&PTR_vftable_14c6e47a0,0x100);
  }
  if ((*(uint *)((longlong)param_1 + 0xd4) & 0x7fffffff) < 0x100) {
    FUN_144c44830(param_1 + 0x19,&PTR_vftable_14c6e47a0,0x100);
  }
  if ((*(uint *)((longlong)param_1 + 0xe4) & 0x7fffffff) < 0x100) {
    FUN_144c44830(param_1 + 0x1b,&PTR_vftable_14c6e47a0,0x100);
  }
  return param_1;
}



// FUNCTION 145316550 FUN_145316550 body=13 status=ok
// SIG undefined FUN_145316550(void)

void FUN_145316550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x118) = param_2;
  return;
}



// FUNCTION 145316560 FUN_145316560 body=62 status=ok
// SIG undefined FUN_145316560(void)

void FUN_145316560(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  FUN_1455210c0(param_1 + 0xb0);
  return;
}



// FUNCTION 1453165a0 FUN_1453165a0 body=304 status=ok
// SIG undefined FUN_1453165a0(void)

uint FUN_1453165a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  
  uVar2 = *(uint *)(param_1 + 0x158);
  uVar6 = uVar2 - 1;
  uVar5 = uVar2;
  if (-1 < (int)uVar6) {
    puVar9 = (uint *)(*(longlong *)(param_1 + 0x150) + (longlong)(int)uVar6 * 4);
    do {
      if (*puVar9 < param_2) break;
      puVar9 = puVar9 + -1;
      uVar7 = uVar6 - 1;
      uVar5 = uVar6;
      uVar6 = uVar7;
    } while (-1 < (int)uVar7);
  }
  plVar1 = (longlong *)(param_1 + 0x150);
  if (uVar5 == uVar2) {
    iVar4 = *(int *)(param_1 + 0x158) + 1;
    if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar4) {
      FUN_1453166d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar9 = (uint *)(*plVar1 + (longlong)*(int *)(param_1 + 0x158) * 4);
    if (puVar9 != (uint *)0x0) {
      *puVar9 = param_2;
    }
    *(int *)(param_1 + 0x158) = iVar4;
    return uVar5 & 0xffff;
  }
  if (*(uint *)((longlong)(int)uVar5 * 4 + *plVar1) != param_2) {
    FUN_145521740(param_1,uVar5 & 0xffff);
    iVar4 = *(int *)(param_1 + 0x158) + 1;
    if ((int)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) < iVar4) {
      FUN_145316a90(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    *(int *)(param_1 + 0x158) = iVar4;
    if ((int)uVar5 < (int)uVar2) {
      lVar3 = (longlong)(int)uVar2 * 4;
      uVar8 = (ulonglong)(uVar2 - uVar5);
      do {
        lVar3 = lVar3 + -4;
        *(undefined4 *)(*plVar1 + 4 + lVar3) = *(undefined4 *)(*plVar1 + lVar3);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *(uint *)((longlong)(int)uVar5 * 4 + *plVar1) = param_2;
  }
  return uVar5 & 0xffff;
}



// FUNCTION 1453166d0 FUN_1453166d0 body=235 status=ok
// SIG undefined FUN_1453166d0(void)

void FUN_1453166d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}


