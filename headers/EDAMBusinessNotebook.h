/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface EDAMBusinessNotebook : _AVAudioSessionCategoryPlayback <NSCoding>
{
    NSString *__notebookDescription;
    int __privilege;
    BOOL __recommended;
    BOOL __notebookDescription_isset;
    BOOL __privilege_isset;
    BOOL __recommended_isset;
}

- (void).cxx_destruct;
- (id)description;
- (void)write:(id)fp8;
- (void)read:(id)fp8;
- (void)unsetRecommended;
- (BOOL)recommendedIsSet;
- (void)setRecommended:(BOOL)fp8;
- (BOOL)recommended;
- (void)unsetPrivilege;
- (BOOL)privilegeIsSet;
- (void)setPrivilege:(int)fp8;
- (int)privilege;
- (void)unsetNotebookDescription;
- (BOOL)notebookDescriptionIsSet;
- (void)setNotebookDescription:(id)fp8;
- (id)notebookDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)fp8;
- (id)initWithCoder:(id)fp8;
- (id)initWithNotebookDescription:(id)fp8 privilege:(int)fp12 recommended:(BOOL)fp16;
- (id)init;

@end

