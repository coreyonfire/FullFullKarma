/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMgetBootstrapInfo_args : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__locale;
    BOOL __locale_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetLocale;
- (BOOL)localeIsSet;
- (void)setLocale:(id)fp8;
- (id)locale;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithLocale:(id)fp8;
- (id)init;

@end

