/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class FBURLConnection, NSString, UIImageView;

@interface FBProfilePictureView : _AVAudioSessionCategoryPlayback
{
    NSString *_profileID;
    int _pictureCropping;
    FBURLConnection *_connection;
    UIImageView *_imageView;
    NSString *_previousImageQueryParamString;
}

- (void)setPreviousImageQueryParamString:(id)fp8;
- (id)previousImageQueryParamString;
- (void)setImageView:(id)fp8;
- (id)imageView;
- (void)setConnection:(id)fp8;
- (id)connection;
- (int)pictureCropping;
- (id)profileID;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setPictureCropping:(int)fp8;
- (void)setProfileID:(id)fp8;
- (void)ensureImageViewContentMode;
- (void)refreshImage:(BOOL)fp8;
- (void)initialize;
- (id)imageQueryParamString;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithProfileID:(id)fp8 pictureCropping:(int)fp12;
- (id)init;
- (void)dealloc;

@end

