/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMauthenticateLongSession_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__username;
    NSString *__password;
    NSString *__consumerKey;
    NSString *__consumerSecret;
    NSString *__deviceIdentifier;
    NSString *__deviceDescription;
    BOOL __supportsTwoFactor;
    BOOL __username_isset;
    BOOL __password_isset;
    BOOL __consumerKey_isset;
    BOOL __consumerSecret_isset;
    BOOL __deviceIdentifier_isset;
    BOOL __deviceDescription_isset;
    BOOL __supportsTwoFactor_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetSupportsTwoFactor;
- (BOOL)supportsTwoFactorIsSet;
- (void)setSupportsTwoFactor:(BOOL)fp8;
- (BOOL)supportsTwoFactor;
- (void)unsetDeviceDescription;
- (BOOL)deviceDescriptionIsSet;
- (void)setDeviceDescription:(id)fp8;
- (id)deviceDescription;
- (void)unsetDeviceIdentifier;
- (BOOL)deviceIdentifierIsSet;
- (void)setDeviceIdentifier:(id)fp8;
- (id)deviceIdentifier;
- (void)unsetConsumerSecret;
- (BOOL)consumerSecretIsSet;
- (void)setConsumerSecret:(id)fp8;
- (id)consumerSecret;
- (void)unsetConsumerKey;
- (BOOL)consumerKeyIsSet;
- (void)setConsumerKey:(id)fp8;
- (id)consumerKey;
- (void)unsetPassword;
- (BOOL)passwordIsSet;
- (void)setPassword:(id)fp8;
- (id)password;
- (void)unsetUsername;
- (BOOL)usernameIsSet;
- (void)setUsername:(id)fp8;
- (id)username;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithUsername:(id)fp8 password:(id)fp12 consumerKey:(id)fp16 consumerSecret:(id)fp20 deviceIdentifier:(id)fp24 deviceDescription:(id)fp28 supportsTwoFactor:(BOOL)fp32;
- (id)init;

@end

