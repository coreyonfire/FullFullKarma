/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface JKSerializer : _AVAudioSessionCategoryPlayback
{
    struct JKEncodeState *encodeState;
}

+ (id)serializeObject:(id)fp8 options:(unsigned int)fp12 encodeOption:(unsigned int)fp16 block:(id)fp(null) delegate:(void)fp20 selector:(id)fp24 error:(SEL)fp28;
- (void)dealloc;
- (void)releaseState;
- (id)serializeObject:(id)fp8 options:(unsigned int)fp12 encodeOption:(unsigned int)fp16 block:(id)fp(null) delegate:(void)fp20 selector:(id)fp24 error:(SEL)fp28;

@end

