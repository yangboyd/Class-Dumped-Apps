//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRAccesspoints_AccessPointProperties, GTLRAccesspoints_Ettings, NSString;

@interface GTLRAccesspoints_AccessPoint : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRAccesspoints_AccessPointProperties *accessPointProperties; // @dynamic accessPointProperties;
@property(retain, nonatomic) GTLRAccesspoints_Ettings *accessPointSettings; // @dynamic accessPointSettings;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

