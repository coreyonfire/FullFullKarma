/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMGalleryFocusToolbar.h"

@class JMGalleryPreviewButton, JMGalleryToolbarItem;

@interface JMGalleryNavigationToolbar : JMGalleryFocusToolbar
{
    JMGalleryPreviewButton *_previousThumbnailView;
    JMGalleryPreviewButton *_nextThumbnailView;
    JMGalleryToolbarItem *_interactionSwitchItem;
}

- (void)setInteractionSwitchItem:(id)fp8;
- (id)interactionSwitchItem;
- (void)setNextThumbnailView:(id)fp8;
- (id)nextThumbnailView;
- (void)setPreviousThumbnailView:(id)fp8;
- (id)previousThumbnailView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithDownloadProgressForGalleryItem:(id)fp8 progress:(float)fp12;
- (void)setCurrentGalleryItem:(id)fp8 previousGalleryItem:(id)fp12 nextGalleryItem:(id)fp16;
- (id)initWithFrame:(struct CGRect)fp8;

@end

