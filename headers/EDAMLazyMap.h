/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSMutableSet;

@interface EDAMLazyMap : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSMutableSet *__keysOnly;
    NSMutableDictionary *__fullMap;
    BOOL __keysOnly_isset;
    BOOL __fullMap_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetFullMap;
- (BOOL)fullMapIsSet;
- (void)setFullMap:(id)fp8;
- (id)fullMap;
- (void)unsetKeysOnly;
- (BOOL)keysOnlyIsSet;
- (void)setKeysOnly:(id)fp8;
- (id)keysOnly;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithKeysOnly:(id)fp8 fullMap:(id)fp12;
- (id)init;

@end

