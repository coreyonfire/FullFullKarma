/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMsetResourceApplicationDataEntry_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__guid;
    NSString *__key;
    NSString *__value;
    BOOL __authenticationToken_isset;
    BOOL __guid_isset;
    BOOL __key_isset;
    BOOL __value_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetValue;
- (BOOL)valueIsSet;
- (void)setValue:(id)fp8;
- (id)value;
- (void)unsetKey;
- (BOOL)keyIsSet;
- (void)setKey:(id)fp8;
- (id)key;
- (void)unsetGuid;
- (BOOL)guidIsSet;
- (void)setGuid:(id)fp8;
- (id)guid;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 guid:(id)fp12 key:(id)fp16 value:(id)fp20;
- (id)init;

@end
