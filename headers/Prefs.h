/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface Prefs : _AVAudioSessionCategoryPlayback
{
}

+ (float)appearanceTextSizeMultiplier;
+ (void)textSizeDidChange;
+ (BOOL)isNight;
+ (void)initializeDefaultsIfNeeded;
+ (void)setEnumInPrefKey:(id)fp8 enumMap:(id)fp12;
+ (void)setEnumInPrefKey:(id)fp8 enumValue:(int)fp12;
+ (id)enumInPrefKey:(id)fp8 family:(id)fp12;
+ (void)listInPrefKey:(id)fp8 appendUniqueString:(id)fp12 limitToMaximum:(unsigned int)fp16;
+ (BOOL)listInPrefKey:(id)fp8 containsString:(id)fp12;
+ (void)listInPrefKey:(id)fp8 removeString:(id)fp12;
+ (id)listInPrefKey:(id)fp8 stringMatching:(id)fp12;
+ (unsigned int)sizeOfListInPrefKey:(id)fp8;
+ (void)listInPrefKey:(id)fp8 appendObject:(id)fp12 limitToMaximum:(unsigned int)fp16;
+ (void)listInPrefKey:(id)fp8 removeObjectMatching:(id)fp(null);
+ (id)listInPrefKey:(id)fp8 objectMatching:(id)fp(null);
+ (id)mutableArrayFromPrefKey:(id)fp8;
+ (id)listInArchiveFile:(id)fp8 objectMatching:(id)fp(null);
+ (void)listInArchiveFile:(id)fp8 removeObjectMatching:(id)fp(null);
+ (void)listInArchiveFileRemoveAllObjects:(id)fp8;
+ (void)listInArchiveFile:(id)fp8 appendObject:(id)fp12 limitToMaximum:(unsigned int)fp16;
+ (id)listInArchiveFile:(id)fp8;
+ (void)storeArray:(id)fp8 inArchiveFile:(id)fp12;
+ (id)mutableArrayFromArchiveFile:(id)fp8;
+ (id)contentsOfArchiveFile:(id)fp8;
+ (id)pathForArchiveFile:(id)fp8;
+ (id)archivesPath;

@end

