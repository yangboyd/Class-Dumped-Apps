//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class SocialSegments;

@interface PhotosMCCommentContent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long creationTimeMs; // @dynamic creationTimeMs;
@property(nonatomic) _Bool hasCreationTimeMs; // @dynamic hasCreationTimeMs;
@property(nonatomic) _Bool hasSegments; // @dynamic hasSegments;
@property(retain, nonatomic) SocialSegments *segments; // @dynamic segments;

@end

