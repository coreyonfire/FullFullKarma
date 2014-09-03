/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSString, UIImage, UILabel;

@interface BITAppStoreHeader : _AVAudioSessionCategoryPlayback
{
    UILabel *_headerLabelView;
    UILabel *_middleLabelView;
    NSString *_headerText;
    NSString *_subHeaderText;
    UIImage *_iconImage;
}

- (id)iconImage;
- (id)subHeaderText;
- (id)headerText;
- (void).cxx_destruct;
- (void)setIconImage:(id)fp8;
- (void)setSubHeaderText:(id)fp8;
- (void)setHeaderText:(id)fp8;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

