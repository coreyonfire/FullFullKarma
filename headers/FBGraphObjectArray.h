/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSMutableArray;

@interface FBGraphObjectArray : _AVAudioSessionCategoryPlayback
{
    NSMutableArray *_jsonArray;
}

- (void)replaceObjectAtIndex:(unsigned int)fp8 withObject:(id)fp12;
- (void)removeLastObject;
- (void)addObject:(id)fp8;
- (void)removeObjectAtIndex:(unsigned int)fp8;
- (void)insertObject:(id)fp8 atIndex:(unsigned int)fp12;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)objectAtIndex:(unsigned int)fp8;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtIndex:(unsigned int)fp8;
- (unsigned int)count;
- (void)dealloc;
- (id)initWrappingArray:(id)fp8;

@end
