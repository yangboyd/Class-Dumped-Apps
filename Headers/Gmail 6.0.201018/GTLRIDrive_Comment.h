//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRDateTime, GTLRIDrive_Comment_Context, GTLRIDrive_User, NSArray, NSNumber, NSString;

@interface GTLRIDrive_Comment : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *anchor; // @dynamic anchor;
@property(retain, nonatomic) GTLRIDrive_User *author; // @dynamic author;
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) GTLRIDrive_Comment_Context *context; // @dynamic context;
@property(retain, nonatomic) GTLRDateTime *createdDate; // @dynamic createdDate;
@property(retain, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(copy, nonatomic) NSString *fileTitle; // @dynamic fileTitle;
@property(copy, nonatomic) NSString *htmlContent; // @dynamic htmlContent;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRDateTime *modifiedDate; // @dynamic modifiedDate;
@property(retain, nonatomic) NSArray *replies; // @dynamic replies;
@property(copy, nonatomic) NSString *selfLink; // @dynamic selfLink;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSString *suggestionId; // @dynamic suggestionId;

@end

