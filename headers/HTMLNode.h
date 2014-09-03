/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

@interface HTMLNode : _AVAudioSessionCategoryPlayback
{
    struct _xmlNode *_node;
}

+ (void)recursiveStripDocPointersFromNode:(struct _xmlNode *)fp8;
+ (void)stripDocPointersFromAttr:(struct _xmlAttr *)fp8;
- (id)rawContents;
- (id)allContents;
- (int)nodetype;
- (id)contents;
- (void)appendChildContentsToString:(id)fp8 inNode:(struct _xmlNode *)fp12;
- (id)initWithXMLNode:(struct _xmlNode *)fp8;
- (id)findChildrenOfClass:(id)fp8;
- (id)findChildrenWithAttribute:(id)fp8 matchingName:(id)fp12 allowPartial:(BOOL)fp16;
- (id)findChildOfClass:(id)fp8;
- (id)findChildWithAttribute:(id)fp8 matchingName:(id)fp12 allowPartial:(BOOL)fp16;
- (id)findChildWithAttribute:(const char *)fp8 matchingName:(const char *)fp12 inXMLNode:(struct _xmlNode *)fp16 allowPartial:(BOOL)fp20;
- (id)children;
- (id)findChildTag:(id)fp8;
- (id)findChildTag:(id)fp8 inXMLNode:(struct _xmlNode *)fp12;
- (id)findChildTags:(id)fp8;
- (void)findChildTags:(id)fp8 inXMLNode:(struct _xmlNode *)fp12 inArray:(id)fp16;
- (void)findChildrenWithAttribute:(const char *)fp8 matchingName:(const char *)fp12 inXMLNode:(struct _xmlNode *)fp16 inArray:(id)fp20 allowPartial:(BOOL)fp24;
- (id)firstChild;
- (id)tagName;
- (id)className;
- (id)getAttributeNamed:(id)fp8;
- (id)previousSibling;
- (id)nextSibling;
- (id)parent;
- (int)integerFromXMLAttributeNamed:(id)fp8;
- (void)setInteger:(int)fp8 asXMLAttributeNamed:(id)fp12;
- (void)i_prettyLogWithIndent:(unsigned int)fp8;
- (void)prettyLog;
- (void)flushDetachedNode;
- (void)detach;
- (void)detachChild:(id)fp8;
- (id)ident;
- (id)allChildrenRecursive;
- (struct _xmlNode *)xmlNode;
- (void)setStoredSiblingBonusScore:(int)fp8;
- (int)storedSiblingBonusScore;
- (void)setStoredAggregateScore:(int)fp8;
- (int)storedAggregateScore;
- (int)classWeightScore;
- (int)tagScore;
- (int)contentScore;
- (int)siblingBonusWithOtherNode:(id)fp8;
- (BOOL)eligibleForAppendingToNode:(id)fp8;
- (float)linkDensity;
- (void)calculateAggregateScoreForParents;
- (int)score;

@end

