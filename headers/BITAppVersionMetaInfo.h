/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface BITAppVersionMetaInfo : _AVAudioSessionCategoryPlayback
{
    NSString *_name;
    NSString *_version;
    NSString *_shortVersion;
    NSString *_notes;
    NSDate *_date;
    NSNumber *_size;
    NSNumber *_mandatory;
    NSNumber *_versionID;
    NSDictionary *_uuids;
}

+ (id)appVersionMetaInfoFromDict:(id)fp8;
- (void)setUuids:(id)fp8;
- (id)uuids;
- (void)setVersionID:(id)fp8;
- (id)versionID;
- (void)setMandatory:(id)fp8;
- (id)mandatory;
- (void)setSize:(id)fp8;
- (id)size;
- (void)setDate:(id)fp8;
- (id)date;
- (void)setNotes:(id)fp8;
- (id)notes;
- (void)setShortVersion:(id)fp8;
- (id)shortVersion;
- (void)setVersion:(id)fp8;
- (id)version;
- (void)setName:(id)fp8;
- (id)name;
- (void).cxx_destruct;
- (BOOL)hasUUID:(id)fp8;
- (BOOL)isValid;
- (id)notesOrEmptyString;
- (void)setDateWithTimestamp:(double)fp8;
- (id)sizeInMB;
- (id)dateString;
- (id)versionString;
- (id)nameAndVersionString;
- (id)initWithCoder:(id)fp8;
- (void)encodeWithCoder:(id)fp8;
- (BOOL)isEqualToAppVersionMetaInfo:(id)fp8;
- (BOOL)isEqual:(id)fp8;

@end

