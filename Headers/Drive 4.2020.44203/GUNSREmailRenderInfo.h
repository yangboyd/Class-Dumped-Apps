//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GUNSRGmrRoutingInfo, NSMutableArray, NSString;

@interface GUNSREmailRenderInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool addMailToSentFolder; // @dynamic addMailToSentFolder;
@property(retain, nonatomic) NSMutableArray *attachmentArray; // @dynamic attachmentArray;
@property(readonly, nonatomic) unsigned long long attachmentArray_Count; // @dynamic attachmentArray_Count;
@property(retain, nonatomic) NSMutableArray *bccRecipientsArray; // @dynamic bccRecipientsArray;
@property(readonly, nonatomic) unsigned long long bccRecipientsArray_Count; // @dynamic bccRecipientsArray_Count;
@property(copy, nonatomic) NSString *fromAddress; // @dynamic fromAddress;
@property(retain, nonatomic) GUNSRGmrRoutingInfo *gmrRoutingInfoOverride; // @dynamic gmrRoutingInfoOverride;
@property(nonatomic) _Bool hasAddMailToSentFolder; // @dynamic hasAddMailToSentFolder;
@property(nonatomic) _Bool hasFromAddress; // @dynamic hasFromAddress;
@property(nonatomic) _Bool hasGmrRoutingInfoOverride; // @dynamic hasGmrRoutingInfoOverride;
@property(nonatomic) _Bool hasHtmlContent; // @dynamic hasHtmlContent;
@property(nonatomic) _Bool hasLocaleOverride; // @dynamic hasLocaleOverride;
@property(nonatomic) _Bool hasMessageIdOverride; // @dynamic hasMessageIdOverride;
@property(nonatomic) _Bool hasReplytoAddress; // @dynamic hasReplytoAddress;
@property(nonatomic) _Bool hasSubject; // @dynamic hasSubject;
@property(nonatomic) _Bool hasTextContent; // @dynamic hasTextContent;
@property(retain, nonatomic) NSMutableArray *headerArray; // @dynamic headerArray;
@property(readonly, nonatomic) unsigned long long headerArray_Count; // @dynamic headerArray_Count;
@property(copy, nonatomic) NSString *htmlContent; // @dynamic htmlContent;
@property(copy, nonatomic) NSString *localeOverride; // @dynamic localeOverride;
@property(copy, nonatomic) NSString *messageIdOverride; // @dynamic messageIdOverride;
@property(copy, nonatomic) NSString *replytoAddress; // @dynamic replytoAddress;
@property(copy, nonatomic) NSString *subject; // @dynamic subject;
@property(copy, nonatomic) NSString *textContent; // @dynamic textContent;

@end

