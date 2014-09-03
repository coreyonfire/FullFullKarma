/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@interface EDAMSyncState : _AVAudioSessionCategoryPlayback <NSCoding>
{
    long long __currentTime;
    long long __fullSyncBefore;
    int __updateCount;
    long long __uploaded;
    BOOL __currentTime_isset;
    BOOL __fullSyncBefore_isset;
    BOOL __updateCount_isset;
    BOOL __uploaded_isset;
}

- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetUploaded;
- (BOOL)uploadedIsSet;
- (void)setUploaded:(long long)fp8;
- (long long)uploaded;
- (void)unsetUpdateCount;
- (BOOL)updateCountIsSet;
- (void)setUpdateCount:(int)fp8;
- (int)updateCount;
- (void)unsetFullSyncBefore;
- (BOOL)fullSyncBeforeIsSet;
- (void)setFullSyncBefore:(long long)fp8;
- (long long)fullSyncBefore;
- (void)unsetCurrentTime;
- (BOOL)currentTimeIsSet;
- (void)setCurrentTime:(long long)fp8;
- (long long)currentTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithCurrentTime:(long long)fp8 fullSyncBefore:(long long)fp16 updateCount:(int)fp24 uploaded:(long long)fp28;
- (id)init;

@end
