/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "JMAnimatedControl.h"

@interface JMGalleryFocusTitleIntroProgressView : JMAnimatedControl
{
    float _i_progress;
}

- (void)setI_progress:(float)fp8;
- (float)i_progress;
- (void)setProgress:(float)fp8;
- (void)drawRect:(struct CGRect)fp8;
- (void)drawInnerCircle;
- (void)drawOuterRing;
- (float)ringLineWidth;
- (struct CGRect)ringBounds;

@end
