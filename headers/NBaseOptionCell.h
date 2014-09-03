/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMOutlineCell.h"

@class JMViewOverlay;

@interface NBaseOptionCell : JMOutlineCell
{
    JMViewOverlay *_titleOverlay;
    JMViewOverlay *_iconOverlay;
    JMViewOverlay *_secondaryButtonOverlay;
}

+ (float)heightForNode:(id)fp8 tableView:(id)fp12;
- (void)setSecondaryButtonOverlay:(id)fp8;
- (id)secondaryButtonOverlay;
- (void)setIconOverlay:(id)fp8;
- (id)iconOverlay;
- (void)setTitleOverlay:(id)fp8;
- (id)titleOverlay;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)decorateCellBackground;
- (void)drawDivider;
- (void)layoutCellOverlays;
- (void)updateWithNode:(id)fp8;
- (void)createSubviews;
- (BOOL)isEditingTable;

@end
