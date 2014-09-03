/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSDate, NSMutableArray;

@interface TemplatePrefs : _AVAudioSessionCategoryPlayback
{
    NSMutableArray *_groups;
    NSDate *_lastSyncedDate;
    NSDate *_lastModifiedDate;
}

+ (id)rawDefaultsDataForTemplatePreferences:(id)fp8;
+ (id)templatePreferencesFromRawDefaultsData:(id)fp8;
+ (id)templatePreferences;
- (void)setLastModifiedDate:(id)fp8;
- (id)lastModifiedDate;
- (void)setLastSyncedDate:(id)fp8;
- (id)lastSyncedDate;
- (void)setGroups:(id)fp8;
- (id)groups;
- (void).cxx_destruct;
- (void)didSyncToCloud;
- (BOOL)shouldSyncToCloud;
- (void)recommendSyncToCloud;
- (void)removeTemplate:(id)fp8 fromGroup:(id)fp12;
- (void)addTemplate:(id)fp8 toGroup:(id)fp12;
- (void)addTemplate:(id)fp8 toGroup:(id)fp12 atIndex:(unsigned int)fp16;
- (id)removalGroup;
- (id)approvalGroup;
- (id)templateGroupMatchingIdent:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (void)save;
- (unsigned int)totalUserCreatedTemplatesCount;
- (unsigned int)totalTemplatesCount;

@end
