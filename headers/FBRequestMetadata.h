/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class FBRequest, NSDictionary, NSError;

@interface FBRequestMetadata : _AVAudioSessionCategoryPlayback
{
    FBRequest *_request;
    id _completionHandler;
    NSDictionary *_batchParameters;
    int _behavior;
    id _originalCompletionHandler;
    int _retryCount;
    id _originalResult;
    NSError *_originalError;
}

- (void)setOriginalError:(id)fp8;
- (id)originalError;
- (void)setOriginalResult:(id)fp8;
- (id)originalResult;
- (void)setRetryCount:(int)fp8;
- (int)retryCount;
- (void)setOriginalCompletionHandler:(id)fp(null);
- (id)originalCompletionHandler;
- (void)setBehavior:(int)fp8;
- (int)behavior;
- (void)setBatchParameters:(id)fp8;
- (id)batchParameters;
- (void)setCompletionHandler:(id)fp(null);
- (id)completionHandler;
- (void)setRequest:(id)fp8;
- (id)request;
- (id)description;
- (void)invokeCompletionHandlerForConnection:(id)fp8 withResults:(id)fp12 error:(id)fp16;
- (void)dealloc;
- (id)initWithRequest:(id)fp8 completionHandler:(id)fp(null) batchParameters:(void)fp12 behavior:(id)fp16;

@end
