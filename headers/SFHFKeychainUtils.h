/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface SFHFKeychainUtils : _AVAudioSessionCategoryPlayback
{
}

+ (BOOL)deleteItemForUsername:(id)fp8 andServiceName:(id)fp12 error:(id *)fp16;
+ (BOOL)storeUsername:(id)fp8 andPassword:(id)fp12 forServiceName:(id)fp16 updateExisting:(BOOL)fp20 error:(id *)fp24;
+ (id)getPasswordForUsername:(id)fp8 andServiceName:(id)fp12 error:(id *)fp16;

@end

