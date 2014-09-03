/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class EDAMNotFoundException, EDAMSystemException, EDAMUserException;

@interface EDAMUpdateNotebook_result : _AVAudioSessionCategoryPlayback <NSCoding>
{
    int __success;
    EDAMUserException *__userException;
    EDAMSystemException *__systemException;
    EDAMNotFoundException *__notFoundException;
    BOOL __success_isset;
    BOOL __userException_isset;
    BOOL __systemException_isset;
    BOOL __notFoundException_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetNotFoundException;
- (BOOL)notFoundExceptionIsSet;
- (void)setNotFoundException:(id)fp8;
- (id)notFoundException;
- (void)unsetSystemException;
- (BOOL)systemExceptionIsSet;
- (void)setSystemException:(id)fp8;
- (id)systemException;
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
- (id)initWithSuccess:(int)fp8 userException:(id)fp12 systemException:(id)fp16 notFoundException:(id)fp20;
- (id)init;

@end

