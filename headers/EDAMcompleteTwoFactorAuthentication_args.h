/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMcompleteTwoFactorAuthentication_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__oneTimeCode;
    NSString *__deviceIdentifier;
    NSString *__deviceDescription;
    BOOL __authenticationToken_isset;
    BOOL __oneTimeCode_isset;
    BOOL __deviceIdentifier_isset;
    BOOL __deviceDescription_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetDeviceDescription;
- (BOOL)deviceDescriptionIsSet;
- (void)setDeviceDescription:(id)fp8;
- (id)deviceDescription;
- (void)unsetDeviceIdentifier;
- (BOOL)deviceIdentifierIsSet;
- (void)setDeviceIdentifier:(id)fp8;
- (id)deviceIdentifier;
- (void)unsetOneTimeCode;
- (BOOL)oneTimeCodeIsSet;
- (void)setOneTimeCode:(id)fp8;
- (id)oneTimeCode;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 oneTimeCode:(id)fp12 deviceIdentifier:(id)fp16 deviceDescription:(id)fp20;
- (id)init;

@end
