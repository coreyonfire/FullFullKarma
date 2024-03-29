/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "BITFeedbackComposeViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImage;

@interface BITFeedbackActivity : _AVAudioSessionCategoryPlayback <BITFeedbackComposeViewControllerDelegate>
{
    UIImage *_customActivityImage;
    NSString *_customActivityTitle;
    NSMutableArray *_items;
}

- (void)setItems:(id)fp8;
- (id)items;
- (void)setCustomActivityTitle:(id)fp8;
- (id)customActivityTitle;
- (void)setCustomActivityImage:(id)fp8;
- (id)customActivityImage;
- (void).cxx_destruct;
- (void)feedbackComposeViewControllerDidFinish:(id)fp8;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)fp8;
- (BOOL)canPerformWithActivityItems:(id)fp8;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)init;

@end

