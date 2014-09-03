/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "BITAttributedLabel-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSTextCheckingResult;

@interface BITAttributedLabel : _AVAudioSessionCategoryPlayback <BITAttributedLabel, UIGestureRecognizerDelegate>
{
    BOOL _needsFramesetter;
    NSAttributedString *_attributedText;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    id <BITAttributedLabelDelegate> _delegate;
    unsigned int _dataDetectorTypes;
    NSDataDetector *_dataDetector;
    NSArray *_links;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    float _shadowRadius;
    float _leading;
    float _lineHeightMultiple;
    float _firstLineIndent;
    int _verticalAlignment;
    NSTextCheckingResult *_activeLink;
    struct UIEdgeInsets _textInsets;
}

- (void)setActiveLink:(id)fp8;
- (id)activeLink;
- (void)setVerticalAlignment:(int)fp8;
- (int)verticalAlignment;
- (void)setTextInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)textInsets;
- (void)setFirstLineIndent:(float)fp8;
- (float)firstLineIndent;
- (void)setLineHeightMultiple:(float)fp8;
- (float)lineHeightMultiple;
- (void)setLeading:(float)fp8;
- (float)leading;
- (void)setShadowRadius:(float)fp8;
- (float)shadowRadius;
- (void)setActiveLinkAttributes:(id)fp8;
- (id)activeLinkAttributes;
- (void)setLinkAttributes:(id)fp8;
- (id)linkAttributes;
- (void)setLinks:(id)fp8;
- (id)links;
- (void)setDataDetector:(id)fp8;
- (id)dataDetector;
- (unsigned int)dataDetectorTypes;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)fp8;
- (struct __CTFramesetter *)highlightFramesetter;
- (void)setFramesetter:(struct __CTFramesetter *)fp8;
- (void)setRenderedAttributedText:(id)fp8;
- (void)setInactiveAttributedText:(id)fp8;
- (id)inactiveAttributedText;
- (id)attributedText;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)drawTextInRect:(struct CGRect)fp8;
- (struct CGRect)textRectForBounds:(struct CGRect)fp8 limitedToNumberOfLines:(int)fp24;
- (void)setTextColor:(id)fp8;
- (id)textColor;
- (void)setHighlighted:(BOOL)fp8;
- (void)setText:(id)fp8 afterInheritingLabelAttributesAndConfiguringWithBlock:(id)fp(null);
- (void)setText:(id)fp8;
- (void)drawStrike:(struct __CTFrame *)fp8 inRect:(struct CGRect)fp12 context:(struct CGContext *)fp28;
- (void)drawBackground:(struct __CTFrame *)fp8 inRect:(struct CGRect)fp12 context:(struct CGContext *)fp28;
- (void)drawFramesetter:(struct __CTFramesetter *)fp8 attributedString:(id)fp12 textRange:(CDAnonymousStruct5)fp16 inRect:(struct CGRect)fp24 context:(struct CGContext *)fp40;
- (long)characterIndexAtPoint:(struct CGPoint)fp8;
- (id)linkAtPoint:(struct CGPoint)fp8;
- (id)linkAtCharacterIndex:(long)fp8;
- (void)addLinkToDate:(id)fp8 timeZone:(id)fp12 duration:(double)fp16 withRange:(struct _NSRange)fp24;
- (void)addLinkToDate:(id)fp8 withRange:(struct _NSRange)fp12;
- (void)addLinkToPhoneNumber:(id)fp8 withRange:(struct _NSRange)fp12;
- (void)addLinkToAddress:(id)fp8 withRange:(struct _NSRange)fp12;
- (void)addLinkToURL:(id)fp8 withRange:(struct _NSRange)fp12;
- (void)addLinkWithTextCheckingResult:(id)fp8;
- (void)addLinkWithTextCheckingResult:(id)fp8 attributes:(id)fp12;
- (id)detectedLinksInString:(id)fp8 range:(struct _NSRange)fp12 error:(id *)fp20;
- (void)setDataDetectorTypes:(unsigned int)fp8;
- (void)setLinkActive:(BOOL)fp8 withTextCheckingResult:(id)fp12;
- (id)renderedAttributedText;
- (struct __CTFramesetter *)framesetter;
- (void)setNeedsFramesetter;
- (void)setAttributedText:(id)fp8;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;

@end

