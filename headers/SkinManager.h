/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSBundle, NSDictionary, NSMutableDictionary, NSString;

@interface SkinManager : _AVAudioSessionCategoryPlayback
{
    NSBundle *bundle_;
    NSString *resourcePath_;
    NSDictionary *fontDictionary_;
    NSMutableDictionary *fontCache_;
    NSMutableDictionary *fontRefCache_;
    struct __CTFont *bodyFont_;
}

+ (id)sharedSkinManager;
- (void).cxx_destruct;
- (struct __CTFont *)bodyFont;
- (void)resetFontCaches;
- (struct __CTFont *)fontRefForKey:(id)fp8;
- (id)fontForKey:(id)fp8;
- (id)createFontForKey:(id)fp8;
- (struct __CTFont *)createFontRefForKey:(id)fp8;
- (float)useFontSizeForFontDictionary:(id)fp8;
- (id)fontDictionary;
- (id)imageNamed:(id)fp8;
- (id)pathForResource:(id)fp8;
- (id)fontRefCache;
- (id)fontCache;
- (void)dealloc;
- (id)init;

@end
