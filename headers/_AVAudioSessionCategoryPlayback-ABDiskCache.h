/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface _AVAudioSessionCategoryPlayback (ABDiskCache)
+ (void)ab_removeDiskCachedImageForKey:(id)fp8;
+ (void)ab_setDiskCachedImage:(id)fp8 forKey:(id)fp12;
+ (id)ab_diskCachedImageForKey:(id)fp8;
+ (void)ab_removeDiskCachedImageForKey:(id)fp8 permanentStorage:(BOOL)fp12;
+ (void)ab_setDiskCachedImage:(id)fp8 forKey:(id)fp12 permanentStorage:(BOOL)fp16;
+ (id)ab_diskCachedImageForKey:(id)fp8 permanentStorage:(BOOL)fp12;
+ (id)cacheKeyForUrl:(id)fp8;
- (void)log;
@end

