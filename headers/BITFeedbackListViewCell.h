/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class BITAttributedLabel, BITFeedbackMessage, NSDateFormatter, UILabel;

@interface BITFeedbackListViewCell : _AVAudioSessionCategoryPlayback
{
    BITFeedbackMessage *_message;
    int _backgroundStyle;
    BITAttributedLabel *_labelText;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    UILabel *_labelTitle;
}

+ (float)heightForRowWithMessage:(id)fp8 tableViewWidth:(float)fp12;
- (void)setLabelTitle:(id)fp8;
- (id)labelTitle;
- (void)setTimeFormatter:(id)fp8;
- (id)timeFormatter;
- (void)setDateFormatter:(id)fp8;
- (id)dateFormatter;
- (void)setLabelText:(id)fp8;
- (id)labelText;
- (void)setBackgroundStyle:(int)fp8;
- (int)backgroundStyle;
- (void)setMessage:(id)fp8;
- (id)message;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isSameDayWithDate1:(id)fp8 date2:(id)fp12;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
