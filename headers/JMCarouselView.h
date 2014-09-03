/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "JMCarouselTrackViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class JMCarouselScrollView, JMCarouselTrackView, NSArray, NSObject<JMCarouselViewDataSource>, NSObject<JMCarouselViewDelegate>, UIView;

@interface JMCarouselView : _AVAudioSessionCategoryPlayback <UIScrollViewDelegate, JMCarouselTrackViewDelegate>
{
    NSObject<JMCarouselViewDelegate> *_delegate;
    UIView *_wrapperView;
    JMCarouselScrollView *_scrollView;
    JMCarouselTrackView *_trackView;
    UIView *_middleOverlayView;
    NSObject<JMCarouselViewDataSource> *_dataSource;
    int _trackIndexOffset;
    NSArray *_previouslyVisibleItemIndices;
    unsigned int _previouslySelectedItemIndex;
    float _previousIntermediateScrollDistance;
}

- (void)setPreviousIntermediateScrollDistance:(float)fp8;
- (float)previousIntermediateScrollDistance;
- (void)setPreviouslySelectedItemIndex:(unsigned int)fp8;
- (unsigned int)previouslySelectedItemIndex;
- (void)setPreviouslyVisibleItemIndices:(id)fp8;
- (id)previouslyVisibleItemIndices;
- (void)setTrackIndexOffset:(int)fp8;
- (int)trackIndexOffset;
- (void)setDataSource:(id)fp8;
- (id)dataSource;
- (void)setMiddleOverlayView:(id)fp8;
- (id)middleOverlayView;
- (void)setTrackView:(id)fp8;
- (id)trackView;
- (void)setScrollView:(id)fp8;
- (id)scrollView;
- (void)setWrapperView:(id)fp8;
- (id)wrapperView;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isDragging;
- (void)cancelIntermediateScroll;
- (void)intermediateScrollFromCurrentlySelectedItemByRatio:(float)fp8;
- (void)notifyDelegateOfNewlyHiddenItems:(id)fp8;
- (void)notifyDelegateOfNewlyVisibleItems:(id)fp8;
- (void)notifyDelegateOfSelectedItem;
- (struct CGSize)carouselTrackGridSize:(id)fp8;
- (unsigned int)carouselTrackViewNumberOfItems:(id)fp8;
- (BOOL)carouselTrackViewShouldWrap:(id)fp8;
- (id)carouselTrackView:(id)fp8 placeholderContentViewForItemAtIndex:(unsigned int)fp12 replacingExistingContentView:(id)fp16;
- (id)carouselTrackView:(id)fp8 contentViewForItemAtIndex:(unsigned int)fp12 replacingExistingContentView:(id)fp16;
- (void)visibleItemsDidChange;
- (void)snapToTheMiddleOfTheTrackView;
- (void)didScrollByDistance:(float)fp8;
- (void)applyScrollBoundaryRestrictions;
- (void)reloadTrackView;
- (unsigned int)numberOfItems;
- (BOOL)shouldWrap;
- (struct CGSize)itemSize;
- (unsigned int)selectedItemIndex;
- (void)selectOnscreenItemAtIndex:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)selectOffscreenItemAtIndex:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)selectItemAtIndex:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)createScrollViewWithEmbeddedTrackView:(id)fp8;
- (id)createTrackView;
- (float)recommendedTrackWidth;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)fp8 dataSource:(id)fp24 delegate:(id)fp28;

@end

