/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class JMGalleryItem, UIImageView, UILabel;

@interface JMGalleryGridItemView : _AVAudioSessionCategoryPlayback
{
    id _onItemSelect;
    UIImageView *_imageView;
    JMGalleryItem *_galleryItem;
    UILabel *_tapToRevealLabel;
}

- (void)setTapToRevealLabel:(id)fp8;
- (id)tapToRevealLabel;
- (void)setGalleryItem:(id)fp8;
- (id)galleryItem;
- (void)setImageView:(id)fp8;
- (id)imageView;
- (void)setOnItemSelect:(id)fp(null);
- (id)onItemSelect;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)fp8;
- (void)tapped;
- (void)updateWithGalleryItem:(id)fp8;
- (void)decorateTileImage;
- (id)initWithFrame:(struct CGRect)fp8;

@end

