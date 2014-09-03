/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSData, NSString;

@interface EDAMgetResourceByHash_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__noteGuid;
    NSData *__contentHash;
    BOOL __withData;
    BOOL __withRecognition;
    BOOL __withAlternateData;
    BOOL __authenticationToken_isset;
    BOOL __noteGuid_isset;
    BOOL __contentHash_isset;
    BOOL __withData_isset;
    BOOL __withRecognition_isset;
    BOOL __withAlternateData_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetWithAlternateData;
- (BOOL)withAlternateDataIsSet;
- (void)setWithAlternateData:(BOOL)fp8;
- (BOOL)withAlternateData;
- (void)unsetWithRecognition;
- (BOOL)withRecognitionIsSet;
- (void)setWithRecognition:(BOOL)fp8;
- (BOOL)withRecognition;
- (void)unsetWithData;
- (BOOL)withDataIsSet;
- (void)setWithData:(BOOL)fp8;
- (BOOL)withData;
- (void)unsetContentHash;
- (BOOL)contentHashIsSet;
- (void)setContentHash:(id)fp8;
- (id)contentHash;
- (void)unsetNoteGuid;
- (BOOL)noteGuidIsSet;
- (void)setNoteGuid:(id)fp8;
- (id)noteGuid;
- (void)unsetAuthenticationToken;
- (BOOL)authenticationTokenIsSet;
- (void)setAuthenticationToken:(id)fp8;
- (id)authenticationToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithAuthenticationToken:(id)fp8 noteGuid:(id)fp12 contentHash:(id)fp16 withData:(BOOL)fp20 withRecognition:(BOOL)fp24 withAlternateData:(BOOL)fp28;
- (id)init;

@end
