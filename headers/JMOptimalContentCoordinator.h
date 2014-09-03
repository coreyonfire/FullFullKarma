/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSObject<JMOptimalContentCoordinatorDelegate>, UIView, UIWebView;

@interface JMOptimalContentCoordinator : _AVAudioSessionCategoryPlayback <UIWebViewDelegate>
{
    UIWebView *_standardView;
    UIView *_optimalView;
    UIView *_i_contentView;
    NSObject<JMOptimalContentCoordinatorDelegate> *_delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setI_contentView:(id)fp8;
- (id)i_contentView;
- (void)setOptimalView:(id)fp8;
- (id)optimalView;
- (void)setStandardView:(id)fp8;
- (id)standardView;
- (void).cxx_destruct;
- (void)applyThemeSettings;
- (BOOL)browserCanGoForward;
- (BOOL)browserCanGoBack;
- (void)browserRefresh;
- (void)browserForward;
- (void)browserBack;
- (void)browserStopLoading;
- (BOOL)tryToNotifyOptimizerWithSelector:(SEL)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (void)webViewDidFinishLoad:(id)fp8;
- (void)webViewDidStartLoad:(id)fp8;
- (id)URL;
- (id)optimizer;
- (void)setShowsOptimalContent:(BOOL)fp8 animated:(BOOL)fp12;
- (void)unloadContentView;
- (void)layoutContentView;
- (void)loadOptimalView;
- (void)loadStandardView;
- (void)createOptimalView;
- (void)destroyOptimalView;
- (void)createStandardView;
- (void)destroyStandardView;
- (id)view;
- (id)initWithDelegate:(id)fp8;

@end

