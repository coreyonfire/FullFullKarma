/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "ENApplicationRequest-Protocol.h"

@class NSArray, NSString, NSURL;

@interface ENNewNoteRequest : _AVAudioSessionCategoryPlayback <ENApplicationRequest>
{
    NSString *mTitle;
    NSString *mContent;
    NSString *mContentMimeType;
    NSURL *mSourceURL;
    NSString *mSourceApplication;
    NSArray *mTagNames;
    NSArray *mResourceAttachments;
    double mLatitude;
    double mLongitude;
    double mAltitude;
    NSString *_notebookGUID;
    NSString *_consumerKey;
}

- (void)setConsumerKey:(id)fp8;
- (id)consumerKey;
- (void)setNotebookGUID:(id)fp8;
- (id)notebookGUID;
- (void)setAltitude:(double)fp8;
- (double)altitude;
- (void)setLongitude:(double)fp8;
- (double)longitude;
- (void)setLatitude:(double)fp8;
- (double)latitude;
- (void)setResourceAttachments:(id)fp8;
- (id)resourceAttachments;
- (void)setTagNames:(id)fp8;
- (id)tagNames;
- (void)setSourceApplication:(id)fp8;
- (id)sourceApplication;
- (void)setSourceURL:(id)fp8;
- (id)sourceURL;
- (void)setContentMimeType:(id)fp8;
- (id)contentMimeType;
- (void)setContent:(id)fp8;
- (id)content;
- (void)setTitle:(id)fp8;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)totalRequestSize;
- (void)removeResourceAttachment:(id)fp8;
- (void)addResourceAttachment:(id)fp8;
- (id)requestIdentifier;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)init;

@end
