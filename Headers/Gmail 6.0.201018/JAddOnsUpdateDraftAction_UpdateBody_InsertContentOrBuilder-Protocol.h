//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCommonHtmlTypesSafeHtmlProto, JAddOnsUpdateDraftAction_UpdateBody_ContentType, JAddOnsUpdateDraftAction_UpdateBody_EmailMimeType, JAddOnsUpdateDraftAction_UpdateBody_InsertContent_ContentCase, NSString;

@protocol JAddOnsUpdateDraftAction_UpdateBody_InsertContentOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JAddOnsUpdateDraftAction_UpdateBody_InsertContent_ContentCase *)getContentCase;
- (NSString *)getPlainTextContent;
- (_Bool)hasPlainTextContent;
- (ComGoogleCommonHtmlTypesSafeHtmlProto *)getSafeHtmlContent;
- (_Bool)hasSafeHtmlContent;
- (JAddOnsUpdateDraftAction_UpdateBody_ContentType *)getContentType;
- (_Bool)hasContentType;
- (JAddOnsUpdateDraftAction_UpdateBody_EmailMimeType *)getMimeType;
- (_Bool)hasMimeType;
@end

