/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSData, NSError, NSHTTPURLResponse, OAMutableURLRequest;

@interface OADataFetcher : _AVAudioSessionCategoryPlayback
{
    OAMutableURLRequest *request;
    NSHTTPURLResponse *response;
    NSError *error;
    NSData *responseData;
    id delegate;
    SEL didFinishSelector;
    SEL didFailSelector;
}

- (void)fetchDataWithRequest:(id)fp8 delegate:(id)fp12 didFinishSelector:(SEL)fp16 didFailSelector:(SEL)fp20;

@end
