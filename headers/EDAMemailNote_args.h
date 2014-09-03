/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMNoteEmailParameters, NSString;

@interface EDAMemailNote_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    EDAMNoteEmailParameters *__parameters;
    BOOL __authenticationToken_isset;
    BOOL __parameters_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetParameters;
- (BOOL)parametersIsSet;
- (void)setParameters:(id)fp8;
- (id)parameters;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 parameters:(id)fp12;
- (id)init;

@end
