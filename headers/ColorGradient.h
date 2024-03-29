/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class UIColor;

@interface ColorGradient : _AVAudioSessionCategoryPlayback
{
    BOOL _horizontal;
    UIColor *_startColor;
    UIColor *_endColor;
    float _minHeight;
}

+ (id)gradientWithStartColor:(id)fp8 endColor:(id)fp12;
+ (id)gradientWithStartColor:(id)fp8 endColor:(id)fp12 minHeight:(float)fp16;
- (void)setHorizontal:(BOOL)fp8;
- (BOOL)horizontal;
- (void)setMinHeight:(float)fp8;
- (float)minHeight;
- (void)setEndColor:(id)fp8;
- (id)endColor;
- (void)setStartColor:(id)fp8;
- (id)startColor;
- (void).cxx_destruct;

@end

