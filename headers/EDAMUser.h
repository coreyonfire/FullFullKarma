/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMAccounting, EDAMBusinessUserInfo, EDAMPremiumInfo, EDAMUserAttributes, NSString;

@interface EDAMUser : _AVAudioSessionCategoryPlayback <NSCoding>
{
    int __id;
    NSString *__username;
    NSString *__email;
    NSString *__name;
    NSString *__timezone;
    int __privilege;
    long long __created;
    long long __updated;
    long long __deleted;
    BOOL __active;
    NSString *__shardId;
    EDAMUserAttributes *__attributes;
    EDAMAccounting *__accounting;
    EDAMPremiumInfo *__premiumInfo;
    EDAMBusinessUserInfo *__businessUserInfo;
    BOOL __id_isset;
    BOOL __username_isset;
    BOOL __email_isset;
    BOOL __name_isset;
    BOOL __timezone_isset;
    BOOL __privilege_isset;
    BOOL __created_isset;
    BOOL __updated_isset;
    BOOL __deleted_isset;
    BOOL __active_isset;
    BOOL __shardId_isset;
    BOOL __attributes_isset;
    BOOL __accounting_isset;
    BOOL __premiumInfo_isset;
    BOOL __businessUserInfo_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetBusinessUserInfo;
- (BOOL)businessUserInfoIsSet;
- (void)setBusinessUserInfo:(id)fp8;
- (id)businessUserInfo;
- (void)unsetPremiumInfo;
- (BOOL)premiumInfoIsSet;
- (void)setPremiumInfo:(id)fp8;
- (id)premiumInfo;
- (void)unsetAccounting;
- (BOOL)accountingIsSet;
- (void)setAccounting:(id)fp8;
- (id)accounting;
- (void)unsetAttributes;
- (BOOL)attributesIsSet;
- (void)setAttributes:(id)fp8;
- (id)attributes;
- (void)unsetShardId;
- (BOOL)shardIdIsSet;
- (void)setShardId:(id)fp8;
- (id)shardId;
- (void)unsetActive;
- (BOOL)activeIsSet;
- (void)setActive:(BOOL)fp8;
- (BOOL)active;
- (void)unsetDeleted;
- (BOOL)deletedIsSet;
- (void)setDeleted:(long long)fp8;
- (long long)deleted;
- (void)unsetUpdated;
- (BOOL)updatedIsSet;
- (void)setUpdated:(long long)fp8;
- (long long)updated;
- (void)unsetCreated;
- (BOOL)createdIsSet;
- (void)setCreated:(long long)fp8;
- (long long)created;
- (void)unsetPrivilege;
- (BOOL)privilegeIsSet;
- (void)setPrivilege:(int)fp8;
- (int)privilege;
- (void)unsetTimezone;
- (BOOL)timezoneIsSet;
- (void)setTimezone:(id)fp8;
- (id)timezone;
- (void)unsetName;
- (BOOL)nameIsSet;
- (void)setName:(id)fp8;
- (id)name;
- (void)unsetEmail;
- (BOOL)emailIsSet;
- (void)setEmail:(id)fp8;
- (id)email;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
- (void)setUsername:(id)fp8;
- (id)username;
- (void)unsetId;
- (BOOL)idIsSet;
- (void)setId:(int)fp8;
- (int)id;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithId:(int)fp8 username:(id)fp12 email:(id)fp16 name:(id)fp20 timezone:(id)fp24 privilege:(int)fp28 created:(long long)fp32 updated:(long long)fp40 deleted:(long long)fp48 active:(BOOL)fp56 shardId:(id)fp60 attributes:(id)fp64 accounting:(id)fp68 premiumInfo:(id)fp72 businessUserInfo:(id)fp76;
- (id)init;

@end

