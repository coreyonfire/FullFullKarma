/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCopying-Protocol.h"

@interface BKControlWrapper : _AVAudioSessionCategoryPlayback <NSCopying>
{
    id _handler;
    unsigned int _controlEvents;
}

- (void)setControlEvents:(unsigned int)fp8;
- (unsigned int)controlEvents;
- (void)setHandler:(id)fp(null);
- (id)handler;
- (void).cxx_destruct;
- (void)invoke:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithHandler:(id)fp(null) forControlEvents:(void)fp8;

@end
