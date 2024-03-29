/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMGalleryViewCoordinator.h"

#import "JMGalleryGridViewDelegate-Protocol.h"

@class JMGalleryGridToolbar, NSMutableArray;

@interface JMGalleryGridCoordinator : JMGalleryViewCoordinator <JMGalleryGridViewDelegate>
{
    JMGalleryGridToolbar *_gridToolbar;
    NSMutableArray *_pagedViewCache;
}

- (void)setPagedViewCache:(id)fp8;
- (id)pagedViewCache;
- (void)setGridToolbar:(id)fp8;
- (id)gridToolbar;
- (void).cxx_destruct;
- (void)galleryGridView:(id)fp8 didSelectGalleryItem:(id)fp12;
- (void)pagingView:(id)fp8 didScrollToPage:(unsigned int)fp12;
- (id)pagingView:(id)fp8 contentViewForPage:(unsigned int)fp12;
- (unsigned int)numberOfPagesForPagingView:(id)fp8;
- (unsigned int)itemsPerPage;
- (void)willBecomeActiveForGalleryItem:(id)fp8;
- (void)willDisappear;
- (id)dequeuePagedViewFromCache;
- (void)buildPagedViewCache;
- (void)loadView;
- (id)initWithDatasource:(id)fp8 parentViewController:(id)fp12;

@end

