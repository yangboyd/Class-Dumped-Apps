//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GSCGPPGooglePlusPostEmbed, GSCGPPSegments, NSString;

@interface GSCGPPGooglePlusPost : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GSCGPPGooglePlusPostEmbed *attachment; // @dynamic attachment;
@property(nonatomic) int commentCount; // @dynamic commentCount;
@property(nonatomic) long long creationTimestampMsec; // @dynamic creationTimestampMsec;
@property(nonatomic) _Bool hasAttachment; // @dynamic hasAttachment;
@property(nonatomic) _Bool hasCommentCount; // @dynamic hasCommentCount;
@property(nonatomic) _Bool hasCreationTimestampMsec; // @dynamic hasCreationTimestampMsec;
@property(nonatomic) _Bool hasPermalinkURL; // @dynamic hasPermalinkURL;
@property(nonatomic) _Bool hasPlusOneCount; // @dynamic hasPlusOneCount;
@property(nonatomic) _Bool hasPostTextSegments; // @dynamic hasPostTextSegments;
@property(copy, nonatomic) NSString *permalinkURL; // @dynamic permalinkURL;
@property(nonatomic) long long plusOneCount; // @dynamic plusOneCount;
@property(retain, nonatomic) GSCGPPSegments *postTextSegments; // @dynamic postTextSegments;

@end

