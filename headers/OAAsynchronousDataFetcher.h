/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSHTTPURLResponse, NSMutableData, NSURLConnection, OAMutableURLRequest;

@interface OAAsynchronousDataFetcher : _AVAudioSessionCategoryPlayback
{
    OAMutableURLRequest *request;
    NSHTTPURLResponse *response;
    NSURLConnection *connection;
    NSMutableData *responseData;
    id delegate;
    SEL didFinishSelector;
    SEL didFailSelector;
}

+ (id)asynchronousFetcherWithRequest:(id)fp8 delegate:(id)fp12 didFinishSelector:(SEL)fp16 didFailSelector:(SEL)fp20;
- (void)connectionDidFinishLoading:(id)fp8;
- (void)connection:(id)fp8 didFailWithError:(id)fp12;
- (void)connection:(id)fp8 didReceiveData:(id)fp12;
- (void)connection:(id)fp8 didReceiveResponse:(id)fp12;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)fp8 delegate:(id)fp12 didFinishSelector:(SEL)fp16 didFailSelector:(SEL)fp20;

@end

