/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMgetResource_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__authenticationToken;
    NSString *__guid;
    BOOL __withData;
    BOOL __withRecognition;
    BOOL __withAttributes;
    BOOL __withAlternateData;
    BOOL __authenticationToken_isset;
    BOOL __guid_isset;
    BOOL __withData_isset;
    BOOL __withRecognition_isset;
    BOOL __withAttributes_isset;
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
- (void)unsetWithAttributes;
- (BOOL)withAttributesIsSet;
- (void)setWithAttributes:(BOOL)fp8;
- (BOOL)withAttributes;
- (void)unsetWithRecognition;
- (BOOL)withRecognitionIsSet;
- (void)setWithRecognition:(BOOL)fp8;
- (BOOL)withRecognition;
- (void)unsetWithData;
- (BOOL)withDataIsSet;
- (void)setWithData:(BOOL)fp8;
- (BOOL)withData;
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
- (id)initWithAuthenticationToken:(id)fp8 guid:(id)fp12 withData:(BOOL)fp16 withRecognition:(BOOL)fp20 withAttributes:(BOOL)fp24 withAlternateData:(BOOL)fp28;
- (id)init;

@end

