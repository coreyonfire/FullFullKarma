/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSCondition, NSError, NSException, NSMutableArray, NSObject;

@interface FBTask : _AVAudioSessionCategoryPlayback
{
    id _result;
    NSError *_error;
    NSException *_exception;
    BOOL _cancelled;
    BOOL _completed;
    NSObject *_lock;
    NSCondition *_condition;
    NSMutableArray *_callbacks;
}

+ (id)taskWithDelay:(unsigned long long)fp8;
+ (id)taskDependentOnTasks:(id)fp8;
+ (id)cancelledTask;
+ (id)taskWithException:(id)fp8;
+ (id)taskWithError:(id)fp8;
+ (id)taskWithResult:(id)fp8;
- (void)setCallbacks:(id)fp8;
- (id)callbacks;
- (void)setCompleted:(BOOL)fp8;
- (BOOL)completed;
- (void)setCondition:(id)fp8;
- (id)condition;
- (void)setLock:(id)fp8;
- (id)lock;
- (id)waitForResult:(id *)fp8;
- (void)waitUntilFinished;
- (void)warnOperationOnMainThreadNoOp;
- (void)warnOperationOnMainThread;
- (id)completionTaskWithQueue:(id)fp8 block:(id)fp(null);
- (id)completionTaskWithBlock:(id)fp(null);
- (id)dependentTaskWithBlock:(id)fp(null) queue:(void)fp8;
- (id)dependentTaskWithBlock:(id)fp(null);
- (void)runContinuations;
- (void)setCompleted;
- (BOOL)isCompleted;
- (BOOL)trySetCancelled;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)trySetException:(id)fp8;
- (void)setException:(id)fp8;
- (id)exception;
- (BOOL)trySetError:(id)fp8;
- (void)setError:(id)fp8;
- (id)error;
- (BOOL)trySetResult:(id)fp8;
- (void)setResult:(id)fp8;
- (id)result;
- (void)dealloc;
- (id)init;

@end
