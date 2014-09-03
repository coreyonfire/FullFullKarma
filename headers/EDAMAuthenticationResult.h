/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMPublicUserInfo, EDAMUser, NSString;

@interface EDAMAuthenticationResult : _AVAudioSessionCategoryPlayback <NSCoding>
{
    long long __currentTime;
    NSString *__authenticationToken;
    long long __expiration;
    EDAMUser *__user;
    EDAMPublicUserInfo *__publicUserInfo;
    NSString *__noteStoreUrl;
    NSString *__webApiUrlPrefix;
    BOOL __secondFactorRequired;
    NSString *__secondFactorDeliveryHint;
    BOOL __currentTime_isset;
    BOOL __authenticationToken_isset;
    BOOL __expiration_isset;
    BOOL __user_isset;
    BOOL __publicUserInfo_isset;
    BOOL __noteStoreUrl_isset;
    BOOL __webApiUrlPrefix_isset;
    BOOL __secondFactorRequired_isset;
    BOOL __secondFactorDeliveryHint_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetSecondFactorDeliveryHint;
- (BOOL)secondFactorDeliveryHintIsSet;
- (void)setSecondFactorDeliveryHint:(id)fp8;
- (id)secondFactorDeliveryHint;
- (void)unsetSecondFactorRequired;
- (BOOL)secondFactorRequiredIsSet;
- (void)setSecondFactorRequired:(BOOL)fp8;
- (BOOL)secondFactorRequired;
- (void)unsetWebApiUrlPrefix;
- (BOOL)webApiUrlPrefixIsSet;
- (void)setWebApiUrlPrefix:(id)fp8;
- (id)webApiUrlPrefix;
- (void)unsetNoteStoreUrl;
- (BOOL)noteStoreUrlIsSet;
- (void)setNoteStoreUrl:(id)fp8;
- (id)noteStoreUrl;
- (void)unsetPublicUserInfo;
- (BOOL)publicUserInfoIsSet;
- (void)setPublicUserInfo:(id)fp8;
- (id)publicUserInfo;
- (void)unsetUser;
- (BOOL)userIsSet;
- (void)setUser:(id)fp8;
- (id)user;
- (void)unsetExpiration;
- (BOOL)expirationIsSet;
- (void)setExpiration:(long long)fp8;
- (long long)expiration;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)unsetCurrentTime;
- (BOOL)currentTimeIsSet;
- (void)setCurrentTime:(long long)fp8;
- (long long)currentTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithCurrentTime:(long long)fp8 authenticationToken:(id)fp16 expiration:(long long)fp20 user:(id)fp28 publicUserInfo:(id)fp32 noteStoreUrl:(id)fp36 webApiUrlPrefix:(id)fp40 secondFactorRequired:(BOOL)fp44 secondFactorDeliveryHint:(id)fp48;
- (id)init;

@end

