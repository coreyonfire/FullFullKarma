/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSString;

@interface UBBlockObserver_ : _AVAudioSessionCategoryPlayback
{
    NSString *keyPath_;
    id action_;
}

+ (id)instanceWithAction:(id)fp(null) keyPath:(void)fp8;
- (void)setAction:(id)fp(null);
- (id)action;
- (void)setKeyPath:(id)fp8;
- (id)keyPath;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;

@end

