/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class DefaultSHKConfigurator;

@interface SHKConfiguration : _AVAudioSessionCategoryPlayback
{
    DefaultSHKConfigurator *configurator;
}

+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)sharedInstanceWithConfigurator:(id)fp8;
+ (id)sharedInstance;
- (id)configurator;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithConfigurator:(id)fp8;
- (id)configurationValue:(id)fp8 withObject:(id)fp12;

@end

