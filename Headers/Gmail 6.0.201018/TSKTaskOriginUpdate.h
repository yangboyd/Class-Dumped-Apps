//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString;

@interface TSKTaskOriginUpdate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int destinationOriginOneOfCase; // @dynamic destinationOriginOneOfCase;
@property(copy, nonatomic) NSString *destinationTaskListId; // @dynamic destinationTaskListId;
@property(readonly, nonatomic) int sourceOriginOneOfCase; // @dynamic sourceOriginOneOfCase;
@property(copy, nonatomic) NSString *sourceTaskListId; // @dynamic sourceTaskListId;

@end

