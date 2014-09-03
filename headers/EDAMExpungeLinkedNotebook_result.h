/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMNotFoundException, EDAMSystemException, EDAMUserException;

@interface EDAMExpungeLinkedNotebook_result : _AVAudioSessionCategoryPlayback <NSCoding>
{
    int __success;
    EDAMUserException *__userException;
    EDAMNotFoundException *__notFoundException;
    EDAMSystemException *__systemException;
    BOOL __success_isset;
    BOOL __userException_isset;
    BOOL __notFoundException_isset;
    BOOL __systemException_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetSystemException;
- (BOOL)systemExceptionIsSet;
- (void)setSystemException:(id)fp8;
- (id)systemException;
- (void)unsetNotFoundException;
- (BOOL)notFoundExceptionIsSet;
- (void)setNotFoundException:(id)fp8;
- (id)notFoundException;
- (void)unsetUserException;
- (BOOL)userExceptionIsSet;
- (void)setUserException:(id)fp8;
- (id)userException;
- (void)unsetSuccess;
- (BOOL)successIsSet;
- (void)setSuccess:(int)fp8;
- (int)success;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithSuccess:(int)fp8 userException:(id)fp12 notFoundException:(id)fp16 systemException:(id)fp20;
- (id)init;

@end

