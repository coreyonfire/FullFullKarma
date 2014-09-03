/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@class NSString, UIImage;

@interface ABButton : _AVAudioSessionCategoryPlayback
{
    NSString *imageName_;
    UIImage *_imageHighlighted;
    UIImage *_imageNormal;
    UIImage *_imageSelected;
    float _imageInset;
}

+ (id)buttonWithImageName:(id)fp8 onTap:(id)fp(null);
+ (id)buttonWithImageName:(id)fp8 target:(id)fp12 action:(SEL)fp16;
- (void)setImageInset:(float)fp8;
- (float)imageInset;
- (void)setImageSelected:(id)fp8;
- (id)imageSelected;
- (void)setImageNormal:(id)fp8;
- (id)imageNormal;
- (void)setImageHighlighted:(id)fp8;
- (id)imageHighlighted;
- (void)setImageName:(id)fp8;
- (id)imageName;
- (void).cxx_destruct;
- (void)expandTouchAreaWithPadding:(float)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)setSelected:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8;
- (id)initWithImageName:(id)fp8;
- (id)initWithIcon:(id)fp8;
- (void)dealloc;

@end
