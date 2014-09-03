/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AVAudioSessionCategoryPlayback.h"

#import "NSXMLParserDelegate-Protocol.h"

@class KSHTMLWriter, NSArray, NSMutableString, NSXMLParser;

@interface ENMLUtility : _AVAudioSessionCategoryPlayback <NSXMLParserDelegate>
{
    BOOL _shouldIgnoreNextEndElement;
    NSMutableString *_outputHTML;
    KSHTMLWriter *_htmlWriter;
    NSArray *_resources;
    id _completionBlock;
    NSXMLParser *_xmlParser;
}

+ (id)mediaTagWithDataHash:(id)fp8 mime:(id)fp12;
- (void)setShouldIgnoreNextEndElement:(BOOL)fp8;
- (BOOL)shouldIgnoreNextEndElement;
- (void)setXmlParser:(id)fp8;
- (id)xmlParser;
- (void)setCompletionBlock:(id)fp(null);
- (id)completionBlock;
- (void)setResources:(id)fp8;
- (id)resources;
- (void)setHtmlWriter:(id)fp8;
- (id)htmlWriter;
- (void)setOutputHTML:(id)fp8;
- (id)outputHTML;
- (void).cxx_destruct;
- (void)writeTodoWithAttributes:(id)fp8;
- (void)writeImageTagForResource:(id)fp8 withAttributes:(id)fp12;
- (void)writeResource:(id)fp8 withAttributes:(id)fp12;
- (void)parser:(id)fp8 foundComment:(id)fp12;
- (void)parser:(id)fp8 foundCDATA:(id)fp12;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (void)parser:(id)fp8 parseErrorOccurred:(id)fp12;
- (void)parserDidEndDocument:(id)fp8;
- (void)convertENMLToHTML:(id)fp8 withResources:(id)fp12 completionBlock:(id)fp(null);
- (void)convertENMLToHTML:(id)fp8 completionBlock:(id)fp(null);

@end

