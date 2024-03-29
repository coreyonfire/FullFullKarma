/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMLinkedNotebook : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__shareName;
    NSString *__username;
    NSString *__shardId;
    NSString *__shareKey;
    NSString *__uri;
    NSString *__guid;
    int __updateSequenceNum;
    NSString *__noteStoreUrl;
    NSString *__webApiUrlPrefix;
    NSString *__stack;
    int __businessId;
    BOOL __shareName_isset;
    BOOL __username_isset;
    BOOL __shardId_isset;
    BOOL __shareKey_isset;
    BOOL __uri_isset;
    BOOL __guid_isset;
    BOOL __updateSequenceNum_isset;
    BOOL __noteStoreUrl_isset;
    BOOL __webApiUrlPrefix_isset;
    BOOL __stack_isset;
    BOOL __businessId_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetBusinessId;
- (BOOL)businessIdIsSet;
- (void)setBusinessId:(int)fp8;
- (int)businessId;
- (void)unsetStack;
- (BOOL)stackIsSet;
- (void)setStack:(id)fp8;
- (id)stack;
- (void)unsetWebApiUrlPrefix;
- (BOOL)webApiUrlPrefixIsSet;
- (void)setWebApiUrlPrefix:(id)fp8;
- (id)webApiUrlPrefix;
- (void)unsetNoteStoreUrl;
- (BOOL)noteStoreUrlIsSet;
- (void)setNoteStoreUrl:(id)fp8;
- (id)noteStoreUrl;
- (void)unsetUpdateSequenceNum;
- (BOOL)updateSequenceNumIsSet;
- (void)setUpdateSequenceNum:(int)fp8;
- (int)updateSequenceNum;
- (void)unsetGuid;
- (BOOL)guidIsSet;
- (void)setGuid:(id)fp8;
- (id)guid;
- (void)unsetUri;
- (BOOL)uriIsSet;
- (void)setUri:(id)fp8;
- (id)uri;
- (void)unsetShareKey;
- (BOOL)shareKeyIsSet;
- (void)setShareKey:(id)fp8;
- (id)shareKey;
- (void)unsetShardId;
- (BOOL)shardIdIsSet;
- (void)setShardId:(id)fp8;
- (id)shardId;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
- (void)setUsername:(id)fp8;
- (id)username;
- (void)unsetShareName;
- (BOOL)shareNameIsSet;
- (void)setShareName:(id)fp8;
- (id)shareName;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithShareName:(id)fp8 username:(id)fp12 shardId:(id)fp16 shareKey:(id)fp20 uri:(id)fp24 guid:(id)fp28 updateSequenceNum:(int)fp32 noteStoreUrl:(id)fp36 webApiUrlPrefix:(id)fp40 stack:(id)fp44 businessId:(int)fp48;
- (id)init;

@end

