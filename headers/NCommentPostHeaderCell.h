/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NBaseStyledTextCell.h"

@class FaviconOverlay, JMViewOverlay, PostImagePreviewOverlay, ThumbOverlay;

@interface NCommentPostHeaderCell : NBaseStyledTextCell
{
    ThumbOverlay *_thumbOverlay;
    JMViewOverlay *_titleTextOverlay;
    JMViewOverlay *_titleBackgroundOverlay;
    JMViewOverlay *_subdetailsBar;
    FaviconOverlay *_faviconOverlay;
    PostImagePreviewOverlay *_imagePreviewOverlay;
    JMViewOverlay *_selfTextDivider;
}

+ (float)heightForCellHeaderForNode:(id)fp8 bounds:(struct CGRect)fp12;
+ (float)heightForNode:(id)fp8 tableView:(id)fp12;
+ (float)indentForCellTextForNode:(id)fp8 bounds:(struct CGRect)fp12;
+ (float)minimumHeightWithThumbnail;
+ (float)titleMarginWithThumbnail;
+ (float)subdetailsBarBottomMargin;
+ (float)subdetailsBarHeight;
- (void)setSelfTextDivider:(id)fp8;
- (id)selfTextDivider;
- (void)setImagePreviewOverlay:(id)fp8;
- (id)imagePreviewOverlay;
- (void)setFaviconOverlay:(id)fp8;
- (id)faviconOverlay;
- (void)setSubdetailsBar:(id)fp8;
- (id)subdetailsBar;
- (void)setTitleBackgroundOverlay:(id)fp8;
- (id)titleBackgroundOverlay;
- (void)setTitleTextOverlay:(id)fp8;
- (id)titleTextOverlay;
- (void)setThumbOverlay:(id)fp8;
- (id)thumbOverlay;
- (void).cxx_destruct;
- (void)layoutCellOverlays;
- (void)updateSubviews;
- (void)createSubviews;
- (void)createSubdetailBar;
- (id)post;

@end

