/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface MarkupEngine : _AVAudioSessionCategoryPlayback
{
}

+ (id)markDownHTML:(id)fp8 forSubreddit:(id)fp12;
+ (float)heightOfAttributedString:(struct __CFAttributedString *)fp8 constrainedToWidth:(float)fp12;
+ (id)convertHTMLToCFAttributedString:(id)fp8 forSubreddit:(id)fp12;
+ (void)insertImage:(id)fp8 inAttributedString:(id)fp12 atIndex:(int)fp16;
+ (void)refreshCoreTextStyles;
+ (id)removeUnnecessaryTags:(id)fp8;
+ (id)flattenHTML:(id)fp8;
+ (BOOL)doesSupportMarkdown;
+ (void)initialize;

@end

