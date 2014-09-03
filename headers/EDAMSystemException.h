/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMSystemException : _AVAudioSessionCategoryPlayback <NSCoding>
{
    int __errorCode;
    NSString *__message;
    int __rateLimitDuration;
    BOOL __errorCode_isset;
    BOOL __message_isset;
    BOOL __rateLimitDuration_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetRateLimitDuration;
- (BOOL)rateLimitDurationIsSet;
- (void)setRateLimitDuration:(int)fp8;
- (int)rateLimitDuration;
- (void)unsetMessage;
- (BOOL)messageIsSet;
- (void)setMessage:(id)fp8;
- (id)message;
- (void)unsetErrorCode;
- (BOOL)errorCodeIsSet;
- (void)setErrorCode:(int)fp8;
- (int)errorCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithErrorCode:(int)fp8 message:(id)fp12 rateLimitDuration:(int)fp16;
- (id)init;

@end
