/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMBusinessUserInfo : _AVAudioSessionCategoryPlayback <NSCoding>
{
    int __businessId;
    NSString *__businessName;
    int __role;
    NSString *__email;
    BOOL __businessId_isset;
    BOOL __businessName_isset;
    BOOL __role_isset;
    BOOL __email_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetEmail;
- (BOOL)emailIsSet;
- (void)setEmail:(id)fp8;
- (id)email;
- (void)unsetRole;
- (BOOL)roleIsSet;
- (void)setRole:(int)fp8;
- (int)role;
- (void)unsetBusinessName;
- (BOOL)businessNameIsSet;
- (void)setBusinessName:(id)fp8;
- (id)businessName;
- (void)unsetBusinessId;
- (BOOL)businessIdIsSet;
- (void)setBusinessId:(int)fp8;
- (int)businessId;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithBusinessId:(int)fp8 businessName:(id)fp12 role:(int)fp16 email:(id)fp20;
- (id)init;

@end

