/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class UIBarButtonItem, UINavigationBar, UIView;

@interface FBViewController : _AVAudioSessionCategoryPlayback
{
    BOOL _autoDismiss;
    BOOL _dismissAnimated;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    id <FBViewControllerDelegate> _delegate;
    UINavigationBar *_navigationBar;
    UIView *_canvasView;
    id _handler;
}

- (void)setDismissAnimated:(BOOL)fp8;
- (BOOL)dismissAnimated;
- (void)setAutoDismiss:(BOOL)fp8;
- (BOOL)autoDismiss;
- (void)setHandler:(id)fp(null);
- (id)handler;
- (void)setCanvasView:(id)fp8;
- (id)canvasView;
- (void)setNavigationBar:(id)fp8;
- (id)navigationBar;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)doneButton;
- (id)cancelButton;
- (void)logAppEvents:(BOOL)fp8;
- (void)doneButtonPressed:(id)fp8;
- (void)cancelButtonPressed:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)setDoneButton:(id)fp8;
- (void)setCancelButton:(id)fp8;
- (void)updateBarForNavigationMode;
- (void)updateBarForPresentedMode;
- (void)updateBar;
- (struct CGRect)contentBounds;
- (void)presentModallyFromViewController:(id)fp8 animated:(BOOL)fp12 handler:(id)fp(null);
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (id)initWithCoder:(id)fp8;
- (id)init;
- (void)commonInit;

@end

