//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonHtmlParserHtmlDocument_Comment, ComGoogleCommonHtmlParserHtmlDocument_EndTag, ComGoogleCommonHtmlParserHtmlDocument_Tag, ComGoogleCommonHtmlParserHtmlDocument_Text;

@protocol ComGoogleCommonHtmlParserHtmlDocument_Filter <JavaObject>
- (void)finish;
- (ComGoogleCommonHtmlParserHtmlDocument_Comment *)visitCommentWithComGoogleCommonHtmlParserHtmlDocument_Comment:(ComGoogleCommonHtmlParserHtmlDocument_Comment *)arg1;
- (ComGoogleCommonHtmlParserHtmlDocument_EndTag *)visitEndTagWithComGoogleCommonHtmlParserHtmlDocument_EndTag:(ComGoogleCommonHtmlParserHtmlDocument_EndTag *)arg1;
- (ComGoogleCommonHtmlParserHtmlDocument_Tag *)visitTagWithComGoogleCommonHtmlParserHtmlDocument_Tag:(ComGoogleCommonHtmlParserHtmlDocument_Tag *)arg1;
- (ComGoogleCommonHtmlParserHtmlDocument_Text *)visitTextWithComGoogleCommonHtmlParserHtmlDocument_Text:(ComGoogleCommonHtmlParserHtmlDocument_Text *)arg1;
- (void)start;
@end

